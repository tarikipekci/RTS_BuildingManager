#pragma once

#include "CoreMinimal.h"
#include "BaseBuilding.h"
#include "GameFramework/Actor.h"
#include "GoldProducerBuilding.generated.h"

UCLASS()
class RTSBUILDINGMANAGER_API AGoldProducerBuilding : public ABaseBuilding
{
	GENERATED_BODY()
	
public:	
	AGoldProducerBuilding();

	UFUNCTION(BlueprintCallable)
	virtual void StartWork(float LoopDuration) override;

	virtual void Work() override;
};
