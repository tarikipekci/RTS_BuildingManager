// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBuilding.h"
#include "Components/BoxComponent.h"
#include "WorkerProducerBuilding.generated.h"

/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API AWorkerProducerBuilding : public ABaseBuilding
{
	GENERATED_BODY()

public:
	AWorkerProducerBuilding();
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UBoxComponent* InteractCollision;

	UFUNCTION(BlueprintCallable)
	bool GetIsBuilt() const {return bBuilt;}

	UFUNCTION(BlueprintCallable)
	void SetIsBuilt(bool IsBuilt) {bBuilt = IsBuilt;}

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bBuilt;
};
