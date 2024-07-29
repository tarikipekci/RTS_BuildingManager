// Fill out your copyright notice in the Description page of Project Settings.


#include "RTS_GameMode.h"

#include "BuildingGameState.h"
#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Worker/AllyWorkerController.h"
#include "RTSBuildingManager/Worker/Worker.h"

ARTS_GameMode::ARTS_GameMode()
{
	RandomNavigableRadius = 250.0f;
}

void ARTS_GameMode::CallWorkersToWarehouse()
{
	TArray<AActor*> AllWorkers;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AWorker::StaticClass(), AllWorkers);
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();

	if(!GS)
		return;

	for(AActor* Actor : AllWorkers)
	{
		if(AWorker* Worker = Cast<AWorker>(Actor))
		{
			if(!Worker->HasResource())
				continue;
			ABuildingGameState* BuildingGameState = Cast<ABuildingGameState>(GS);
			if(BuildingGameState)
			{
				if(BuildingGameState->AllyWarehouse)
				{
					FVector WarehouseLocation = Cast<ABuildingGameState>(GS)->AllyWarehouse->GetActorLocation();
					AAllyWorkerController* AIController = Cast<AAllyWorkerController>(Worker->GetController());
					Cast<ABuildingGameState>(GS)->BringingWorkers.Add(Worker);
					FNavLocation RandomLocation;
					auto const Origin = WarehouseLocation;
					auto* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
					NavSystem->GetRandomPointInNavigableRadius(Origin, RandomNavigableRadius, RandomLocation);
					UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, RandomLocation);
				}
			}
		}
	}
}
