// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BuildingInterface.h"
#include "GameFramework/Actor.h"
#include "BaseBuilding.generated.h"

class UWidgetComponent;
class UBuildingRequirements;
enum class EResourceType : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FResourceClaimed);

UCLASS()
class RTSBUILDINGMANAGER_API ABaseBuilding : public AActor, public IBuildingInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseBuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void StartBuilding();

	UFUNCTION(BlueprintImplementableEvent)
	void StartWorking();

	UFUNCTION(BlueprintCallable)
	bool IsThereEnoughResource();

	UFUNCTION(BlueprintCallable)
	void BroadcastDelegates();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* BuildingRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetComponent* WidgetComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTimerHandle WorkingTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> Rewards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> RewardRequirements;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBuildingRequirements* Requirements;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> StackedResources;

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere)
	FResourceClaimed ResourceClaimed;
};
