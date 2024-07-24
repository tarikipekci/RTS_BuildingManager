// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FRequirements.h"
#include "Engine/DataAsset.h"
#include "BuildingRequirements.generated.h"

struct FRequirements;
/**
 * 
 */
UCLASS(BlueprintType)
class RTSBUILDINGMANAGER_API UBuildingRequirements : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRequirements Requirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BuildDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* BuildingIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WorkDuration;
};
