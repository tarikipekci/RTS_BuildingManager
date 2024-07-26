// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_FindLeastResource.generated.h"

/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API UBTTask_FindLeastResource : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	explicit UBTTask_FindLeastResource(FObjectInitializer const& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
