// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableResource.h"

#include "Components/WidgetComponent.h"

// Sets default values
AInteractableResource::AInteractableResource()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bCanEverTick = true;
	BuildingRoot = CreateDefaultSubobject<UStaticMeshComponent>("BuildingRoot");
	RootComponent = BuildingRoot;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	MeshComp->SetupAttachment(BuildingRoot);
	WidgetComp = CreateDefaultSubobject<UWidgetComponent>("WidgetComponent");
}

// Called when the game starts or when spawned
void AInteractableResource::BeginPlay()
{
	Super::BeginPlay();
	WidgetComp->AttachToComponent(BuildingRoot, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
}

// Called every frame
void AInteractableResource::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AInteractableResource::ConsumeResources()
{
	for(auto CurrentResource : HeldResources)
	{
		int32* CurrentAmount = HeldResources.Find(CurrentResource.Key);
		*CurrentAmount -= 1;
	}
}
