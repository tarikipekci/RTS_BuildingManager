#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuildingInterface.generated.h"

UINTERFACE(MinimalAPI)
class UBuildingInterface : public UInterface
{
	GENERATED_BODY()
};


class RTSBUILDINGMANAGER_API IBuildingInterface
{
	GENERATED_BODY()

public:
	virtual void StartWork(float LoopDuration) {}

	virtual void Work() {}
};
