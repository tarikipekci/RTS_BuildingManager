// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_FindLeastResource.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "RTSBuildingManager/Building/FRequirements.h"
#include "RTSBuildingManager/Game/BuildingGameState.h"
#include "RTSBuildingManager/Game/RTS_GameMode.h"

UBTTask_FindLeastResource::UBTTask_FindLeastResource(FObjectInitializer const& ObjectInitializer) :
	UBTTask_BlackboardBase(ObjectInitializer)
{
	NodeName = TEXT("Find Least Resource");
}

EBTNodeResult::Type UBTTask_FindLeastResource::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ABuildingGameState* GS = Cast<ABuildingGameState>(GetWorld()->GetGameState<AGameStateBase>());
	ARTS_GameMode* GM = Cast<ARTS_GameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	int32* LeastCount = GS->AICurrentBalance.Find(EResourceType::Gold);
	EResourceType LeastResourceType = EResourceType::None;

	for(auto ResourceType : GM->ResourceTypes)
	{
		int32* CurrentAmount = GS->AICurrentBalance.Find(ResourceType);
		if(!CurrentAmount)
			continue;
		if(*CurrentAmount <= *LeastCount)
		{
			*LeastCount = *CurrentAmount;
			LeastResourceType = ResourceType;
		}
	}

	OwnerComp.GetBlackboardComponent()->SetValueAsEnum(GetSelectedBlackboardKey(),
	                                                   static_cast<uint8>(LeastResourceType));
	return EBTNodeResult::Succeeded;
}
