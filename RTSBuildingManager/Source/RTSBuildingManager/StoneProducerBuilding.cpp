// Fill out your copyright notice in the Description page of Project Settings.


#include "StoneProducerBuilding.h"

#include "BuildingGameState.h"
#include "RTS_GameMode.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"

AStoneProducerBuilding::AStoneProducerBuilding()
{
	ClaimWidget = CreateDefaultSubobject<UWidgetComponent>("ClaimWidget");
}

void AStoneProducerBuilding::BeginPlay()
{
	Super::BeginPlay();
	ClaimWidget->AttachToComponent(BuildingRoot, FAttachmentTransformRules(EAttachmentRule::KeepRelative, true));
}

void AStoneProducerBuilding::StartWork(float LoopDuration)
{
	Super::StartWork(LoopDuration);
	StartWorking();
	GetWorld()->GetTimerManager().SetTimer(WorkingTimerHandle, this, &AStoneProducerBuilding::Work, LoopDuration, true);
}

void AStoneProducerBuilding::Work()
{
	Super::Work();

	AGameStateBase* GS = GetWorld()->GetGameState<AGameStateBase>();
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!GM) return;
	if(!GS) return;

	if(!IsThereEnoughResource())
		return;

	for(EResourceType Enum : GM->ResourceTypes)
	{
		int32* CurrentAmount = Cast<ABuildingGameState>(GS)->CurrentBalance.Find(Enum);
		int32* RequiredAmount = RewardRequirements.Find(Enum);
		int32* RewardAmount = Rewards.Find(Enum);
		bool IsReward = Rewards.Contains(Enum);

		if(!CurrentAmount || !RequiredAmount || !RewardAmount)
			return;

		if(*CurrentAmount < *RequiredAmount)
			return;

		*CurrentAmount -= *RequiredAmount;

		if(IsReward)
		{
			ClaimWidget->SetVisibility(true);
		}
	}
	Cast<ABuildingGameState>(GS)->ResourcesUpdated.Broadcast();
}
