// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableResource.generated.h"

enum class EResourceType : uint8;
class AWorker;
class UWidgetComponent;

UCLASS()
class RTSBUILDINGMANAGER_API AInteractableResource : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractableResource();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void ConsumeResources();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateCurrentResourceProgress();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* BuildingRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetComponent* WidgetComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> HeldResources;

	UPROPERTY(BlueprintReadWrite)
	TArray<AWorker*> CurrentWorkers;
};
