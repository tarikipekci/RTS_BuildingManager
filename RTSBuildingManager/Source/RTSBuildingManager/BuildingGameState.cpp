#include "BuildingGameState.h"


void ABuildingGameState::UpdateCurrentBalance(UPARAM(ref) TMap<EResourceType, int>& StackedBalance)
{
	for(auto StackedResource : StackedBalance)
	{
		bool IsExisted = CurrentBalance.Contains(StackedResource.Key);
		if(IsExisted)
		{
			int32* CurrentAmount = CurrentBalance.Find(StackedResource.Key);
			if(*CurrentAmount)
			{
				*CurrentAmount += StackedResource.Value;
			}
		}
		else
		{
			int32& NewResource = CurrentBalance.Add(StackedResource.Key);
			NewResource += StackedResource.Value;
		}
	}
	StackedBalance.Empty();
}
