// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "RTSBuildingManager/Building/WarehouseBuilding.h"
#include "RTSBuildingManager/Worker/Worker.h"
#include "BuildingGameState.generated.h"

enum class EResourceType : uint8;
class AWorkerProducerBuilding;
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> AICurrentBalance;

	UPROPERTY(BlueprintAssignable)
	FResourcesUpdated ResourcesUpdated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWorkerProducerBuilding* SelectedWorkerProducer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWarehouseBuilding* AllyWarehouse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWarehouseBuilding* EnemyWarehouse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWorkerProducerBuilding* AllyWorkerProducer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWorkerProducerBuilding* EnemyWorkerProducer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AWorker*> BringingWorkers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int AllyWorkerCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int EnemyWorkerCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AWorker*> AvailableWorkers;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateCurrentBalance(UPARAM(ref) TMap<EResourceType, int>& StackedBalance);

	UFUNCTION(BlueprintCallable)
	void UpdateAICurrentBalance(UPARAM(ref) TMap<EResourceType, int>& StackedBalance);

	UFUNCTION(BlueprintCallable)
	bool ConsumeResource(UPARAM(ref) TMap<EResourceType, int>& Requirements);

	UFUNCTION(BlueprintCallable)
	bool ConsumeAIResource(UPARAM(ref) TMap<EResourceType, int>& Requirements);
};
