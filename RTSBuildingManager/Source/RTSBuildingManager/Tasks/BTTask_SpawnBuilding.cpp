// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SpawnBuilding.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Building/BaseBuilding.h"
#include "RTSBuildingManager/Building/BuildingRequirements.h"
#include "RTSBuildingManager/Building/WorkerProducerBuilding.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

UBTTask_SpawnBuilding::UBTTask_SpawnBuilding(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = "SpawnBuilding";
}

EBTNodeResult::Type UBTTask_SpawnBuilding::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UClass* BuildingClass = OwnerComp.GetBlackboardComponent()->GetValueAsClass(GetSelectedBlackboardKey());
	FVector TargetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(LocationKey.SelectedKeyName);
	FRotator SpawnRotation = FRotator::ZeroRotator;

	if(!IsThereEnoughResource(OwnerComp))
		return EBTNodeResult::Failed;

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	UWorld* World = GetWorld();
	if(World == nullptr || BuildingClass == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	ABaseBuilding* SpawnedActor = World->SpawnActor<ABaseBuilding>(BuildingClass, TargetLocation, SpawnRotation,
	                                                               SpawnParams);

	if(SpawnedActor)
	{
		if(Cast<ABaseBuilding>(SpawnedActor))
		{
			if(Cast<AWorkerProducerBuilding>(SpawnedActor))
			{
				AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
				Cast<ABuildingGameState>(GS)->EnemyWorkerProducer = Cast<AWorkerProducerBuilding>(SpawnedActor);
			}
			if(Cast<AWarehouseBuilding>(SpawnedActor))
			{
				AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
				Cast<ABuildingGameState>(GS)->EnemyWarehouse = Cast<AWarehouseBuilding>(SpawnedActor);
			}
			Cast<ABaseBuilding>(SpawnedActor)->StartBuilding();
			Cast<ABaseBuilding>(SpawnedActor)->IsOwnerPlayer = false;
			ConsumeResources(Cast<ABaseBuilding>(SpawnedActor)->Requirements);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}

void UBTTask_SpawnBuilding::ConsumeResources(UBuildingRequirements* Requirements)
{
	if(!Requirements)
		return;

	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	UBuildingRequirements* BuildingData = Requirements;
	if(GS && GM && BuildingData)
	{
		for(EResourceType Enum : GM->ResourceTypes)
		{
			int32* CurrentAmount = Cast<ABuildingGameState>(GS)->AICurrentBalance.Find(Enum);
			int32* RequiredAmount = BuildingData->Requirements.RequiredResourceInfo.Find(Enum);
			if(!RequiredAmount)
				continue;
			if(!CurrentAmount)
				return;

			if(*CurrentAmount >= *RequiredAmount)
			{
				*CurrentAmount -= *RequiredAmount;
			}
		}
	}
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}

bool UBTTask_SpawnBuilding::IsThereEnoughResource(UBehaviorTreeComponent& OwnerComp)
{
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!GM) return false;
	if(!GS) return false;
	if(!OwnerComp.GetBlackboardComponent()) return false;
	
	UClass* BuildingClass = OwnerComp.GetBlackboardComponent()->GetValueAsClass(GetSelectedBlackboardKey());
	UObject* BuildingObject = BuildingClass->GetDefaultObject();
	ABaseBuilding* Building = Cast<ABaseBuilding>(BuildingObject);

	for(EResourceType EnumType : GM->ResourceTypes)
	{
		int32* CurrentAmount = Cast<ABuildingGameState>(GS)->AICurrentBalance.Find(EnumType);
		int32* RequiredAmount = Building->Requirements->Requirements.RequiredResourceInfo.Find(EnumType);
		if(!CurrentAmount || !RequiredAmount)
			continue;
		if(*CurrentAmount < *RequiredAmount)
		{
			Building->GetWidgetComp()->SetVisibility(false);
			return false;
		}
	}
	return true;
}
