// Fill out your copyright notice in the Description page of Project Settings.


#include "AllyWorkerController.h"

void AAllyWorkerController::MoveToTarget(FVector TargetLocation)
{
	MoveToLocation(TargetLocation);
}

void AAllyWorkerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
}
