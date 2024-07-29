// Fill out your copyright notice in the Description page of Project Settings.


#include "Worker.h"


// Sets default values
AWorker::AWorker()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("StaticMeshComponent");
	MeshComp->SetupAttachment(GetMesh());
	IsAlly = true;
}

// Called when the game starts or when spawned
void AWorker::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AWorker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AWorker::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AWorker::CollectResource(TMap<EResourceType, int> Resource)
{
	for(auto CurrentResource : Resource)
	{
		int32* CurrentAmount = Resource.Find(CurrentResource.Key);
		if(*CurrentAmount <= 0)
			return;
		int32& CollectedAmount = CollectedResources.FindOrAdd(CurrentResource.Key);
		CollectedAmount += 1;
	}
}

bool AWorker::HasResource()
{
	for(auto Resource : CollectedResources)
	{
		int32* CurrentResourceAmount = CollectedResources.Find(Resource.Key);
		if(!CurrentResourceAmount)
			return false;
		if(*CurrentResourceAmount > 0)
			return true;
	}
	return false;
}
