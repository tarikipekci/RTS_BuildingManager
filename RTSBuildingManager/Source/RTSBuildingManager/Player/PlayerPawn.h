// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class RTSBUILDINGMANAGER_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void Forward(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void Right(float AxisValue);

	UFUNCTION()
	void Zoom(float AxisValue);

	UFUNCTION()
	void RotateRight();

	UFUNCTION()
	void RotateLeft();
	
	UFUNCTION()
	void RotateHorizontal(float AxisValue);

	UFUNCTION()
	void RotateVertical(float AxisValue);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float RotateSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float RotatePitchMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float RotatePitchMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float ZoomSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float MinZoom;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Settings|Camera")
	float MaxZoom;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void CameraBounds();

private:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess = "true"))
	USceneComponent* SceneComponent;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess = "true"))
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess = "true"))
	UCameraComponent* CameraComponent;

	UPROPERTY()
	FVector TargetLocation;

	UPROPERTY()
	FRotator TargetRotation;

	UPROPERTY()
	float TargetZoom;

	UPROPERTY()
	bool bCanRotate;
};
