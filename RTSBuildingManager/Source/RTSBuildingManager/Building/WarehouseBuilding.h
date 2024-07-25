// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBuilding.h"
#include "WarehouseBuilding.generated.h"

class UBoxComponent;
/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API AWarehouseBuilding : public ABaseBuilding
{
	GENERATED_BODY()

public:
	AWarehouseBuilding();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UBoxComponent* InteractCollision;

	UFUNCTION(BlueprintCallable)
	bool GetIsBuilt() const {return bBuilt;}

	UFUNCTION(BlueprintCallable)
	void SetIsBuilt(bool IsBuilt) {bBuilt = IsBuilt;}

	UFUNCTION(BlueprintCallable)
	void TakeCollectedResources(UPARAM(ref)TMap<EResourceType, int>& CollectedResources);

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bBuilt;
};
