// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AllyWorkerController.generated.h"

/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API AAllyWorkerController : public AAIController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void MoveToTarget(FVector TargetLocation);

	virtual void OnPossess(APawn* InPawn) override;
};
