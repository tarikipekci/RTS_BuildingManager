#pragma once

#include "CoreMinimal.h"
#include "BaseBuilding.h"
#include "GameFramework/Actor.h"
#include "WoodProducerBuilding.generated.h"

UCLASS()
class RTSBUILDINGMANAGER_API AWoodProducerBuilding : public ABaseBuilding
{
	GENERATED_BODY()
	
public:	
	AWoodProducerBuilding();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	virtual void StartWork(float LoopDuration) override;

	virtual void Work() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UWidgetComponent* ClaimWidget;
};
