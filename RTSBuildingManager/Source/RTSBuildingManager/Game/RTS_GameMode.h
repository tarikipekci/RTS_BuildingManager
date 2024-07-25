// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RTS_GameMode.generated.h"

class AWorker;
enum class EResourceType : uint8;
class ABaseBuilding;
class ABuilding;
/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API ARTS_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ARTS_GameMode();

	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<ABaseBuilding>> Buildables;

	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<AWorker>> Workers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EResourceType> ResourceTypes;

	UFUNCTION(BlueprintCallable)
	void CallWorkersToWarehouse();

private:
	float RandomNavigableRadius;
};
