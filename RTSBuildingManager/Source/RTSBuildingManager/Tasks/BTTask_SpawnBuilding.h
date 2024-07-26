// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "RTSBuildingManager/Building/BaseBuilding.h"
#include "BTTask_SpawnBuilding.generated.h"

/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API UBTTask_SpawnBuilding : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	explicit UBTTask_SpawnBuilding(FObjectInitializer const& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	void ConsumeResources(UBuildingRequirements* Requirements);

	bool IsThereEnoughResource(UBehaviorTreeComponent& OwnerComp);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector LocationKey;
};
