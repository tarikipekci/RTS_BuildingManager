#include "GoldProducerBuilding.h"

#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

class ARTS_GameMode;

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
		int32* RewardAmount = Rewards.Find(Enum);
		bool IsReward = Rewards.Contains(Enum);

		if(IsReward)
		{
			if(!RewardAmount)
				continue;
			*CurrentAmount += *RewardAmount;
		}
		else
		{
			if(!RequiredAmount)
				continue;
			if(!CurrentAmount)
				return;
			if(*CurrentAmount < *RequiredAmount)
				return;
			*CurrentAmount -= *RequiredAmount;
		}
	}
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}
