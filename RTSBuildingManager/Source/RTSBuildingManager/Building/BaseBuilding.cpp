// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBuilding.h"

#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

// Sets default values
ABaseBuilding::ABaseBuilding()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BuildingRoot = CreateDefaultSubobject<UStaticMeshComponent>("BuildingRoot");
	RootComponent = BuildingRoot;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	MeshComp->SetupAttachment(BuildingRoot);
	WidgetComp = CreateDefaultSubobject<UWidgetComponent>("WidgetComponent");
}

// Called when the game starts or when spawned
void ABaseBuilding::BeginPlay()
{
	Super::BeginPlay();
	WidgetComp->AttachToComponent(BuildingRoot, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
}

// Called every frame
void ABaseBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool ABaseBuilding::IsThereEnoughResource()
{
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!GM) return false;
	if(!GS) return false;

	for(EResourceType EnumType : GM->ResourceTypes)
	{
		int32* CurrentAmount = Cast<ABuildingGameState>(GS)->CurrentBalance.Find(EnumType);
		int32* RequiredAmount = RewardRequirements.Find(EnumType);
		if(!CurrentAmount || !RequiredAmount)
			continue;
		if(*CurrentAmount < *RequiredAmount)
		{
			WidgetComp->SetVisibility(false);
			return false;
		}
	}
	return true;
}

void ABaseBuilding::BroadcastDelegates()
{
	ResourceClaimed.Broadcast();
	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	if(ABuildingGameState* GameState = Cast<ABuildingGameState>(GS))
	{
		GameState->ResourcesUpdated.Broadcast();
	}
}
