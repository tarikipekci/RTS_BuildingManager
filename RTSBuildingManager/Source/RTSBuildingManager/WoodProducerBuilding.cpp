#include "WoodProducerBuilding.h"
#include "BuildingGameState.h"
#include "RTS_GameMode.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

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
		int32* CurrentAmount = Cast<ABuildingGameState>(GS)->CurrentBalance.Find(Enum);
		int32* RequiredAmount = RewardRequirements.Find(Enum);
		int32* RewardAmount = Rewards.Find(Enum);
		bool IsReward = Rewards.Contains(Enum);

		if(!CurrentAmount || !RequiredAmount || !RewardAmount)
			return;

		if(*CurrentAmount < *RequiredAmount)
			return;

		*CurrentAmount -= *RequiredAmount;

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
	}
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}

void AWoodProducerBuilding::BroadcastDelegates()
{
	ResourceClaimed.Broadcast();
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	if(ABuildingGameState* GameState = Cast<ABuildingGameState>(GS))
	{
		GameState->ResourcesUpdated.Broadcast();
	}
}
