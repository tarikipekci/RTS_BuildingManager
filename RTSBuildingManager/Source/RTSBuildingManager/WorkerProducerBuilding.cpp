// Fill out your copyright notice in the Description page of Project Settings.


#include "WorkerProducerBuilding.h"

AWorkerProducerBuilding::AWorkerProducerBuilding()
{
	InteractCollision = CreateDefaultSubobject<UBoxComponent>("InteractCollision");
	InteractCollision->SetupAttachment(RootComponent);
	bBuilt = false;
}
