#pragma once
#include "FRequirements.generated.h"

UENUM(BlueprintType)
enum class EResourceType : uint8
{
	None UMETA(DisplayName = "None"),
	Gold UMETA(DisplayerName = "Gold"),
	Log UMETA(DisplayName = "Log"),
	Stone UMETA(DisplayName = "Stone"),
	Max UMETA(DisplayName = "Max")
};

ENUM_RANGE_BY_COUNT(EResourceType, EResourceType::Max);

USTRUCT(BlueprintType)
struct FRequirements
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EResourceType, int> RequiredResourceInfo;
};
