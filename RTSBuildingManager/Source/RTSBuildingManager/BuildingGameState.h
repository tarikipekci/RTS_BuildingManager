// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FRequirements.h"
#include "GameFramework/GameStateBase.h"
#include "BuildingGameState.generated.h"

/**
 * 
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FResourcesUpdated);

UCLASS()
class RTSBUILDINGMANAGER_API ABuildingGameState : public AGameStateBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere ,BlueprintReadWrite)
	TMap<EResourceType, int> CurrentBalance;

	UPROPERTY(BlueprintAssignable)
	FResourcesUpdated ResourcesUpdated;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateCurrentBalance(UPARAM(ref) TMap<EResourceType, int>& StackedBalance);
};
