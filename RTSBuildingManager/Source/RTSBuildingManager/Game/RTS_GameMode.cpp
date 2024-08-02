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

void ARTS_GameMode::CallAllyWorkersToWarehouse()
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
			AAllyWorkerController* AIController = Cast<AAllyWorkerController>(Worker->GetController());
			Cast<ABuildingGameState>(GS)->BringingWorkers.Add(Worker);
			FNavLocation RandomLocation;
			if(BuildingGameState)
			{
				if(Worker->GetIsAlly())
				{
					if(BuildingGameState->AllyWarehouse)
					{
						FVector WarehouseLocation = Cast<ABuildingGameState>(GS)->AllyWarehouse->GetActorLocation();
						auto const Origin = WarehouseLocation;
						auto* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
						NavSystem->GetRandomPointInNavigableRadius(Origin, RandomNavigableRadius, RandomLocation);
						UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, RandomLocation);
					}
				}
			}
		}
	}
}

void ARTS_GameMode::CallEnemyWorkersToWarehouse()
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
			if(!Worker->GetIsAlly())
			{
				if(!Worker->HasResource())
					continue;
				ABuildingGameState* BuildingGameState = Cast<ABuildingGameState>(GS);
				AAllyWorkerController* AIController = Cast<AAllyWorkerController>(Worker->GetController());
				Cast<ABuildingGameState>(GS)->BringingWorkers.Add(Worker);
				FNavLocation RandomLocation;
				if(BuildingGameState->EnemyWarehouse)
				{
					FVector WarehouseLocation = Cast<ABuildingGameState>(GS)->EnemyWarehouse->GetActorLocation();
					auto const Origin = WarehouseLocation;
					auto* const NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
					NavSystem->GetRandomPointInNavigableRadius(Origin, RandomNavigableRadius, RandomLocation);
					UAIBlueprintHelperLibrary::SimpleMoveToLocation(AIController, RandomLocation);
				}
			}
		}
	}
}
