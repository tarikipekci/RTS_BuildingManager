// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FRequirements.h"
#include "Engine/DataAsset.h"
#include "WorkerRequirements.generated.h"

enum class EResourceType : uint8;
/**
 * 
 */
UCLASS(BlueprintType)
class RTSBUILDINGMANAGER_API UWorkerRequirements : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> RequiredResource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* WorkerIcon;
};
