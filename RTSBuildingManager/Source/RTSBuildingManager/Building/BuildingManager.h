// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuildingManager.generated.h"

class ABaseBuilding;
class ABuilding;

UCLASS()
class RTSBUILDINGMANAGER_API ABuildingManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABuildingManager();

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	void SpawnBuilding(TSubclassOf<ABaseBuilding> Building);

	FVector2D GetMouseWorldLocation() const;

	UFUNCTION(BlueprintCallable)
	void ConsumeResource();

	UFUNCTION()
	void SetBuildingLocationAtMouse();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AActor* SpawnedBuilding;

	APlayerController* PlayerController;

private:
	float SpawnDistance;
};
