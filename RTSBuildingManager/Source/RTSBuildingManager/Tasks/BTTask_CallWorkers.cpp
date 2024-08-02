// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_CallWorkers.h"

#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

EBTNodeResult::Type UBTTask_CallWorkers::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AGameStateBase* GS = Cast<ABuildingGameState>(GetWorld()->GetGameState<AGameStateBase>());
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(GM)
	{
		GM->CallEnemyWorkersToWarehouse();
		return EBTNodeResult::Succeeded;
	}
	return EBTNodeResult::Failed;
}
