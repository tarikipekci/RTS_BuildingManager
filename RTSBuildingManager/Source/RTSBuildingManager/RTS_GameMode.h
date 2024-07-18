// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FRequirements.h"
#include "GameFramework/GameModeBase.h"
#include "RTS_GameMode.generated.h"

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
	UPROPERTY(BlueprintReadWrite)
	TArray<TSubclassOf<ABaseBuilding>> Buildables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EResourceType> ResourceTypes;
};
