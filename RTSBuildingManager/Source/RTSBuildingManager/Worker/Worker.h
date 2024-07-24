// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WorkerRequirements.h"
#include "GameFramework/Character.h"
#include "Worker.generated.h"

class AAllyWorkerController;

UCLASS()
class RTSBUILDINGMANAGER_API AWorker : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWorker();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void PerformMove(FVector TargetLocation);

	UFUNCTION(BlueprintCallable)
	void CollectResource(UPARAM(ref) TMap<EResourceType, int> Resource);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComp;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WorkingLoopDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> CollectedResources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWorkerRequirements* WorkerRequirements;

private:
	UPROPERTY()
	AAllyWorkerController* AIController;
};
