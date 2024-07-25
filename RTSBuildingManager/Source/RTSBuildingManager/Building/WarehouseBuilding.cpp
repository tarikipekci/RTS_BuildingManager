// Fill out your copyright notice in the Description page of Project Settings.


#include "WarehouseBuilding.h"

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

AWarehouseBuilding::AWarehouseBuilding()
{
	InteractCollision = CreateDefaultSubobject<UBoxComponent>("InteractCollision");
	InteractCollision->SetupAttachment(RootComponent);
	bBuilt = false;
}

void AWarehouseBuilding::TakeCollectedResources(TMap<EResourceType, int>& CollectedResources)
{
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	if(!GS || !GM)
		return;

	Cast<ABuildingGameState>(GS)->UpdateCurrentBalance(CollectedResources);
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}
