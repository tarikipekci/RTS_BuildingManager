// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseBuilding.h"
#include "StoneProducerBuilding.generated.h"

/**
 * 
 */
UCLASS()
class RTSBUILDINGMANAGER_API AStoneProducerBuilding : public ABaseBuilding
{
	GENERATED_BODY()
	AStoneProducerBuilding();

	UFUNCTION(BlueprintCallable)
	virtual void StartWork(float LoopDuration) override;

	virtual void Work() override;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void ManageClaims();

	UFUNCTION(BlueprintCallable)
	void SetRewardClaimed(bool IsClaimed)
	{
		bRewardClaimed = IsClaimed;
	}

	UFUNCTION(BlueprintCallable)
	void CheckRequiredState();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetComponent* ClaimWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> HeldResources;

	bool bRewardClaimed;

	FTimerHandle TimerHandle;
};
