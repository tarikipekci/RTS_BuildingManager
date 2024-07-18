#include "GoldProducerBuilding.h"

#include "BuildingGameState.h"
#include "RTS_GameMode.h"
#include "Kismet/GameplayStatics.h"

AGoldProducerBuilding::AGoldProducerBuilding()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AGoldProducerBuilding::StartWork(float LoopDuration)
{
	Super::StartWork(LoopDuration);
	StartWorking();
	GetWorld()->GetTimerManager().SetTimer(WorkingTimerHandle, this, &AGoldProducerBuilding::Work, LoopDuration, true);
}

void AGoldProducerBuilding::Work()
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

		*CurrentAmount -= *RequiredAmount;

		if(IsReward)
		{
			*CurrentAmount += *RewardAmount;
			Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
		}
	}
}
