// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueSystemDataAsset.h"


// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueSystemDataAsset.h"

#if WITH_EDITOR
void UModularDialogueSystemDataAsset::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	if(NPCNodes.Contains(StartingNode))
	{
		Overview = "Dialogue starts with NPC Node: " + StartingNode.ToString() + "\n\n";
	}
	else
	{
		Overview = "Dialogue's starting NPC Node (" + StartingNode.ToString() + ") is invalid!\n\n";
	}
	Overview += "~~~~~~~~~ NPC Nodes ~~~~~~~~\n";

	for(auto It = NPCNodes.CreateConstIterator(); It; ++It)
	{
		Overview += It.Key().ToString() + " => ";

		if(It.Value().Flow == EModularDialogueNodeExecutionFlow::Flow_NPC)
		{
			if(NPCNodes.Contains(It.Value().NPCNextNode))
			{
				Overview += It.Value().NPCNextNode.ToString() + " (NPC)\n";
			}
			else
			{
				Overview += "Invalid NPC Node (" + It.Value().NPCNextNode.ToString() + ")\n";
			}
		}
		else if(It.Value().Flow == EModularDialogueNodeExecutionFlow::Flow_Player)
		{
			int32 ValidNodes = 0;
			
			FString NextNodes = "{";
			for(int32 i = 0; i < It.Value().PlayerResponses.Num(); ++i)
			{
				if(PlayerNodes.Contains(It.Value().PlayerResponses[i]))
				{
					if(ValidNodes > 0) NextNodes += ", ";
					NextNodes += It.Value().PlayerResponses[i].ToString();
					ValidNodes++;
				}
			}
			if(ValidNodes > 0)
			{
				Overview += NextNodes + "} (Player)\n";
			}
			else
			{
				Overview += "Invalid Player Nodes!\n";
			}
		}
		else
		{
			Overview += "Ending Node\n";
		}
	}

	Overview += "\n~~~~~~~~~ Player Nodes ~~~~~~~~\n";
	
	for(auto It = PlayerNodes.CreateConstIterator(); It; ++It)
	{
		Overview += It.Key().ToString() + " => ";

		if(It.Value().Flow == EModularDialogueNodeExecutionFlow::Flow_NPC)
		{
			if(NPCNodes.Contains(It.Value().NPCResponse))
			{
				Overview += It.Value().NPCResponse.ToString() + " (NPC)\n";
			}
			else
			{
				Overview += "Invalid NPC Node (" + It.Value().NPCResponse.ToString() + ")\n";
			}
		}
		else if(It.Value().Flow == EModularDialogueNodeExecutionFlow::Flow_Player)
		{
			Overview += It.Key().ToString() + " => ";

			int32 ValidNodes = 0;
			
			FString NextNodes = "{";
			for(int32 i = 0; i < It.Value().PlayerNextNodes.Num(); ++i)
			{
				if(PlayerNodes.Contains(It.Value().PlayerNextNodes[i]))
				{
					if(ValidNodes > 0) NextNodes += ", ";
					NextNodes += It.Value().PlayerNextNodes[i].ToString();
					ValidNodes++;
				}
			}
			if(ValidNodes > 0)
			{
				Overview += NextNodes + "} (Player)\n";
			}
			else
			{
				Overview += "Invalid Player Nodes!\n";
			}
		}
		else
		{
			Overview += "Ending Node\n";
		}
	}
}
#endif

TArray<FName> UModularDialogueSystemDataAsset::GetNodeOptions_Start()
{
	return GetNodeOptions_NPC();
}

TArray<FName> UModularDialogueSystemDataAsset::GetNodeOptions_NPC()
{
	TArray<FName> Options = {};
	NPCNodes.GenerateKeyArray(Options);
	if(!Options.Contains("None"))
	{
		Options.EmplaceAt(0, "None");
	}
	
	return Options;
}

TArray<FName> UModularDialogueSystemDataAsset::GetNodeOptions_Player()
{
	TArray<FName> Options = {};
	PlayerNodes.GenerateKeyArray(Options);
	if(!Options.Contains("None"))
	{
		Options.EmplaceAt(0, "None");
	}
	
	return Options;
}
