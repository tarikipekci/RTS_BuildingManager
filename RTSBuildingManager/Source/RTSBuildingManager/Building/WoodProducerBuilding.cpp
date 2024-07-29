#include "WoodProducerBuilding.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

AWoodProducerBuilding::AWoodProducerBuilding()
{
	PrimaryActorTick.bCanEverTick = false;
	ClaimWidget = CreateDefaultSubobject<UWidgetComponent>("ClaimWidget");
}

void AWoodProducerBuilding::BeginPlay()
{
	Super::BeginPlay();
	ClaimWidget->AttachToComponent(BuildingRoot, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
}

void AWoodProducerBuilding::StartWork(float LoopDuration)
{
	Super::StartWork(LoopDuration);

	StartWorking();
	GetWorld()->GetTimerManager().SetTimer(WorkingTimerHandle, this, &AWoodProducerBuilding::Work, LoopDuration, true);
}

void AWoodProducerBuilding::Work()
{
	IBuildingInterface::Work();

	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!GM) return;
	if(!GS) return;

	if(!IsThereEnoughResource())
		return;

	for(EResourceType Enum : GM->ResourceTypes)
	{
		TMap<EResourceType, int>* Current;
		if(IsOwnerPlayer)
		{
			Current = &Cast<ABuildingGameState>(GS)->CurrentBalance;
		}
		else
		{
			Current = &Cast<ABuildingGameState>(GS)->AICurrentBalance;
		}
		int32* CurrentAmount = Current->Find(Enum);
		int32* RequiredAmount = RewardRequirements.Find(Enum);
		int32* RewardAmount = Rewards.Find(Enum);
		bool IsReward = Rewards.Contains(Enum);
		
		if(IsReward)
		{
			if(!StackedResources.Contains(Enum))
			{
				StackedResources.Add(Enum, *RewardAmount);
			}
			else
			{
				int32* StackedAmount = StackedResources.Find(Enum);
				*StackedAmount += *RewardAmount;
			}
			ClaimWidget->SetVisibility(true);
		}
		else
		{
			if(!RequiredAmount || !CurrentAmount)
				continue;
			if(*CurrentAmount < *RequiredAmount)
				return;
			*CurrentAmount -= *RequiredAmount;
		}
	}
	if(!IsOwnerPlayer)
	{
		ResourceClaimed.Broadcast();
	}
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}
