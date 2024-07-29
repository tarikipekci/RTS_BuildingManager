#include "BuildingGameState.h"


void ABuildingGameState::UpdateCurrentBalance(UPARAM(ref) TMap<EResourceType, int>& StackedBalance)
{
	for(auto StackedResource : StackedBalance)
	{
		bool IsExisted = CurrentBalance.Contains(StackedResource.Key);
		if(IsExisted)
		{
			int32* CurrentAmount = CurrentBalance.Find(StackedResource.Key);
			if(CurrentAmount)
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

void ABuildingGameState::UpdateAICurrentBalance(TMap<EResourceType, int>& StackedBalance)
{
	for(auto StackedResource : StackedBalance)
	{
		bool IsExisted = AICurrentBalance.Contains(StackedResource.Key);
		if(IsExisted)
		{
			int32* CurrentAmount = AICurrentBalance.Find(StackedResource.Key);
			if(CurrentAmount)
			{
				*CurrentAmount += StackedResource.Value;
			}
		}
		else
		{
			int32& NewResource = AICurrentBalance.Add(StackedResource.Key);
			NewResource += StackedResource.Value;
		}
	}
	StackedBalance.Empty();
}

bool ABuildingGameState::ConsumeResource(TMap<EResourceType, int>& Requirements)
{
	for(auto Requirement : Requirements)
	{
		int32* CurrentAmount = CurrentBalance.Find(Requirement.Key);
		int32* RequiredAmount = Requirements.Find(Requirement.Key);

		if(!RequiredAmount)
			continue;
		if(!CurrentAmount)
			return false;

		if(*CurrentAmount >= *RequiredAmount)
		{
			*CurrentAmount -= *RequiredAmount;
		}
		else
		{
			return false;
		}
	}
	ResourcesUpdated.Broadcast();
	return true;
}

bool ABuildingGameState::ConsumeAIResource(TMap<EResourceType, int>& Requirements)
{
	for(auto Requirement : Requirements)
	{
		int32* CurrentAmount = AICurrentBalance.Find(Requirement.Key);
		int32* RequiredAmount = Requirements.Find(Requirement.Key);

		if(!RequiredAmount)
			continue;
		if(!CurrentAmount)
			return false;

		if(*CurrentAmount >= *RequiredAmount)
		{
			*CurrentAmount -= *RequiredAmount;
		}
		else
		{
			return false;
		}
	}
	ResourcesUpdated.Broadcast();
	return true;
}
