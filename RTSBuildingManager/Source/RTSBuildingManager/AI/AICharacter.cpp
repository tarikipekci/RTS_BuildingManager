// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
	BoxCollision->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FVector AAICharacter::SelectRandomPointInBounds()
{
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(false, Origin, BoxExtent);

	float RandX = FMath::FRandRange(Origin.X - BoxExtent.X, Origin.X + BoxExtent.X);
	float RandY = FMath::FRandRange(Origin.Y - BoxExtent.Y, Origin.Y + BoxExtent.Y);
	float RandZ = FMath::FRandRange(Origin.Z - BoxExtent.Z, Origin.Z + BoxExtent.Z);

	return FVector(RandX, RandY, RandZ);
}

