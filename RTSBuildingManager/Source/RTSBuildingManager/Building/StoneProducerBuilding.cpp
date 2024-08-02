#include "StoneProducerBuilding.h"

#include "BuildingRequirements.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

class ABuildingGameState;

AStoneProducerBuilding::AStoneProducerBuilding()
{
	ClaimWidget = CreateDefaultSubobject<UWidgetComponent>("ClaimWidget");
	bRewardClaimed = false;
}

void AStoneProducerBuilding::BeginPlay()
{
	Super::BeginPlay();
	ClaimWidget->AttachToComponent(BuildingRoot, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
}

void AStoneProducerBuilding::ManageClaims()
{
	ABuildingGameState* GS = Cast<ABuildingGameState>(GetWorld()->GetGameState<AGameStateBase>());
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!GS || !GM)
		return;

	TMap<EResourceType, int>* Current;
	if(IsOwnerPlayer)
	{
		Current = &Cast<ABuildingGameState>(GS)->CurrentBalance;
	}
	else
	{
		Current = &Cast<ABuildingGameState>(GS)->AICurrentBalance;
	}

	for(auto StackedResource : GM->ResourceTypes)
	{
		int32* RewardAmount = Rewards.Find(StackedResource);
		bool IsExisted = Current->Contains(StackedResource);
		bool IsRequired = RewardRequirements.Contains(StackedResource);
		if(!IsRequired && !RewardAmount)
			continue;

		if(IsExisted)
		{
			int32* CurrentAmount = Current->Find(StackedResource);
			if(CurrentAmount)
			{
				if(RewardAmount)
				{
					*CurrentAmount += *RewardAmount;
				}
				if(IsRequired)
				{
					int32* RequiredAmount = RewardRequirements.Find(StackedResource);
					if(*CurrentAmount >= *RequiredAmount)
					{
						*CurrentAmount -= *RequiredAmount;
					}
				}
			}
		}
		else
		{
			int32& NewResource = Current->Add(StackedResource);
			NewResource += *RewardAmount;
		}
	}
	if(IsThereEnoughResource())
	{
		GetWorld()->GetTimerManager().UnPauseTimer(WorkingTimerHandle);
	}
	GS->ResourcesUpdated.Broadcast();
}

void AStoneProducerBuilding::CheckRequiredState()
{
	if(IsThereEnoughResource())
	{
		if(GetWorld()->GetTimerManager().IsTimerPaused(WorkingTimerHandle) && !ClaimWidget->IsVisible())
		{
			GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
			StartProgress();
		}
	}
}

void AStoneProducerBuilding::StartWork(float LoopDuration)
{
	Super::StartWork(LoopDuration);
	StartWorking();
	GetWorld()->GetTimerManager().SetTimer(WorkingTimerHandle, this, &AStoneProducerBuilding::Work, LoopDuration,
	                                       true);
}

void AStoneProducerBuilding::Work()
{
	Super::Work();

	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	if(bRewardClaimed == false)
	{
		ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
		if(!GM) return;
		if(!GS) return;

		if(!IsThereEnoughResource())
			return;

		TMap<EResourceType, int>* Current;
		if(IsOwnerPlayer)
		{
			Current = &Cast<ABuildingGameState>(GS)->CurrentBalance;
		}
		else
		{
			Current = &Cast<ABuildingGameState>(GS)->AICurrentBalance;
		}

		for(EResourceType Enum : GM->ResourceTypes)
		{
			int32* CurrentAmount = Current->Find(Enum);
			int32* RequiredAmount = RewardRequirements.Find(Enum);
			bool IsReward = Rewards.Contains(Enum);

			if(IsReward)
			{
				ClaimWidget->SetVisibility(true);
			}
			else
			{
				if(!RequiredAmount)
					continue;
				if(!CurrentAmount)
					return;
				if(*CurrentAmount < *RequiredAmount)
					return;
			}
		}
	}
	bRewardClaimed = true;
	WidgetComp->SetVisibility(false);
	if(!IsOwnerPlayer)
	{
		BroadcastDelegates();
	}
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}
