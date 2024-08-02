#include "BuildingManager.h"

#include "BaseBuilding.h"
#include "BuildingRequirements.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

ABuildingManager::ABuildingManager()
{
	PrimaryActorTick.bCanEverTick = true;
	PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	SpawnDistance = 1000.0f;;
}

void ABuildingManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	SetBuildingLocationAtMouse();
}

void ABuildingManager::ConsumeResource()
{
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	UBuildingRequirements* BuildingData = Cast<ABaseBuilding>(SpawnedBuilding)->Requirements;
	if(GS && GM && BuildingData)
	{
		for(EResourceType Enum : GM->ResourceTypes)
		{
			int32* CurrentAmount = Cast<ABuildingGameState>(GS)->CurrentBalance.Find(Enum);
			int32* RequiredAmount = BuildingData->Requirements.RequiredResourceInfo.Find(Enum);
			if(!RequiredAmount)
				continue;				

			if(!CurrentAmount)
				return;
			if(*CurrentAmount < *RequiredAmount)
				return;

			*CurrentAmount -= *RequiredAmount;

			Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
		}
	}
}

void ABuildingManager::SetBuildingLocationAtMouse()
{
	PlayerController = GetWorld()->GetFirstPlayerController();
	if(PlayerController && SpawnedBuilding)
	{
		FVector2D MouseLocation = GetMouseWorldLocation();
		if(MouseLocation != FVector2D::ZeroVector)
		{
			FVector Location = FVector(MouseLocation.X, MouseLocation.Y, 0);
			SpawnedBuilding->SetActorLocation(Location);
		}

		if(PlayerController->IsInputKeyDown(EKeys::LeftMouseButton))
		{
			if(Cast<ABaseBuilding>(SpawnedBuilding))
			{
				ConsumeResource();
				Cast<ABaseBuilding>(SpawnedBuilding)->StartBuilding();
				Cast<ABaseBuilding>(SpawnedBuilding)->IsOwnerPlayer = true;
				SpawnedBuilding = nullptr;
			}
		}
	}
}

void ABuildingManager::SpawnBuilding(TSubclassOf<ABaseBuilding> Building)
{
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(Cast<ABuildingGameState>(GS)->AllyWarehouse)
	{
		if(Building->IsChildOf(AWarehouseBuilding::StaticClass()))
		{
			return;
		}
	}
	if(!GM) return;
	if(!GS) return;

	if(SpawnedBuilding)
	{
		SpawnedBuilding->Destroy();
	}

	int RequiredResourcesCount = 0;
	int RequireCount = Building.GetDefaultObject()->Requirements->Requirements.RequiredResourceInfo.Num();

	for(EResourceType Enum : GM->ResourceTypes)
	{
		int32* CurrentAmount = Cast<ABuildingGameState>(GS)->CurrentBalance.Find(Enum);

		if(!CurrentAmount)
			return;

		int32* RequiredAmount = Building.GetDefaultObject()->Requirements->Requirements.RequiredResourceInfo.Find(Enum);

		if(!RequiredAmount)
			return;

		if(*CurrentAmount >= *RequiredAmount)
		{
			RequiredResourcesCount++;
			PlayerController = GetWorld()->GetFirstPlayerController();
			if(PlayerController)
			{
				FHitResult HitResult;
				PlayerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);

				FVector SpawnLocation;
				if(HitResult.bBlockingHit)
				{
					SpawnLocation = HitResult.Location;
				}
				else
				{
					FVector WorldLocation, WorldDirection;
					PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

					SpawnLocation = WorldLocation + (WorldDirection * SpawnDistance);
				}

				FRotator SpawnRotation = FRotator::ZeroRotator;

				if(Building && RequiredResourcesCount == RequireCount)
				{
					AActor* SpawnedActor = GetWorld()->SpawnActor<AActor>(Building, SpawnLocation, SpawnRotation);
					SpawnedBuilding = SpawnedActor;
					if(AWarehouseBuilding* Warehouse = Cast<AWarehouseBuilding>(SpawnedActor))
					{
						Cast<ABuildingGameState>(GS)->AllyWarehouse = Warehouse;
					}
				}
			}
		}
	}
}

FVector2D ABuildingManager::GetMouseWorldLocation() const
{
	float LocationX, LocationY;
	FHitResult HitResult;
	PlayerController->GetHitResultUnderCursor(ECC_Visibility, false, HitResult);;
	if(!PlayerController->GetMousePosition(LocationX, LocationY))
	{
		return FVector2D::ZeroVector;
	}
	return FVector2D(HitResult.Location.X, HitResult.Location.Y);
}

void ABuildingManager::BeginPlay()
{
	Super::BeginPlay();
}
