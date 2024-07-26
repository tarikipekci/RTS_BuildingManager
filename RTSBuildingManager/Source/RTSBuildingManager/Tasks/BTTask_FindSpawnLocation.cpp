// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindSpawnLocation.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "RTSBuildingManager/AI/AICharacter.h"
#include "RTSBuildingManager/AI/EnemyAIController.h"

class AAICharacter;

UBTTask_FindSpawnLocation::UBTTask_FindSpawnLocation(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "Find Spawn Location";
}

EBTNodeResult::Type UBTTask_FindSpawnLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto* const EnemyController = Cast<AEnemyAIController>(OwnerComp.GetAIOwner());
	AAICharacter* OwnerAICharacter = Cast<AAICharacter>(EnemyController->GetPawn());

	FVector TargetLocation = OwnerAICharacter->SelectRandomPointInBounds();
	TargetLocation.Z = 0;

	OwnerComp.GetBlackboardComponent()->SetValueAsVector(GetSelectedBlackboardKey(), TargetLocation);

	return EBTNodeResult::Succeeded;
}
