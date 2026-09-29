// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModularNodeStructs.generated.h"

class UModularDialogueNodeActionBase;

/**
 *	Dialogue object status
 */
UENUM(BlueprintType)
enum class EModularDialogueStatus : uint8
{
	Status_Waiting,
	Status_Executing,
	Status_Finished,
	Status_Failed,
	Status_Aborted
};

/**
 *	Dialogue object task type to control dialogue nodes
 */
UENUM(BlueprintType)
enum class EModularDialogueObjectTask : uint8
{
	Task_None,
	Task_NPCDialogue,
	Task_PlayerResponses
};

/**
 *	Dialogue set nodes flow type
 */
UENUM(BlueprintType)
enum class EModularDialogueNodeExecutionFlow : uint8
{
	Flow_Player		UMETA(DisplayName="Player Continues"),	// Select next execution nodes from Player Nodes
	Flow_NPC		UMETA(DisplayName="NPC Continues"),		// Select next execution nodes from NPC Nodes
	Flow_End		UMETA(DisplayName="Ending Node")		// This is end of Dialogue, nothing to execute next.
};

/**
 *	Dialogue set struct for NPC Node
 */
USTRUCT(BlueprintType)
struct FModularDialogueNodeNPC
{
	GENERATED_BODY()

	// Dialogue line for this node.
	UPROPERTY(EditAnywhere, meta=(MultiLine = true), Category = "Modular Dialogue")
	FString DialogueText;
	// In how much time should text be written?
	UPROPERTY(EditAnywhere, meta=(ClampMin = 0), Category = "Modular Dialogue")
	float DialogueTextSpeed = 1.f;

	// Dialogue flow to choose next node.
	UPROPERTY(EditAnywhere, Category = "Modular Dialogue")
	EModularDialogueNodeExecutionFlow Flow = EModularDialogueNodeExecutionFlow::Flow_Player;

	// Which Player responses are available for this NPC Node?
	UPROPERTY(EditAnywhere, DisplayName = "Player Response", Category = "Modular Dialogue", meta=(GetOptions = "GetNodeOptions_Player", EditCondition = "Flow == EModularDialogueNodeExecutionFlow::Flow_Player", EditConditionHides))
	TArray<FName> PlayerResponses;
	// How fast should every Player response appear with animation?
	UPROPERTY(EditAnywhere, Category = "Modular Dialogue", meta=(GetOptions = "GetNodeOptions_Player", EditCondition = "Flow == EModularDialogueNodeExecutionFlow::Flow_Player", EditConditionHides, Units = Seconds, ClampMin = 0))
	float PlayerResponseSpeed = 0.2f;
	// Which NPC Node should be next?
	UPROPERTY(EditAnywhere, Category = "Modular Dialogue", DisplayName = "NPC Next Node", meta=(GetOptions = "GetNodeOptions_NPC", EditCondition = "Flow == EModularDialogueNodeExecutionFlow::Flow_NPC", EditConditionHides))
	FName NPCNextNode;

	// Actions for NPC but Player Actions can be given here too, doesn't matter.
	UPROPERTY(EditAnywhere, Instanced, Category = "Modular Dialogue")
	TArray<TObjectPtr<UModularDialogueNodeActionBase>> NPCActions = {};
	// Actions for Player but NPC Actions can be given here too, doesn't matter.
	UPROPERTY(EditAnywhere, Instanced, Category = "Modular Dialogue")
	TArray<TObjectPtr<UModularDialogueNodeActionBase>> PlayerActions = {};
};

/**
 *	Dialogue set struct for Player Node
 */
USTRUCT(BlueprintType)
struct FModularDialogueNodePlayer
{
	GENERATED_BODY()

	// Dialogue line for this node.
	UPROPERTY(EditAnywhere, meta=(MultiLine = true), Category = "Modular Dialogue")
	FString DialogueText;

	// Dialogue flow to choose next node.
	UPROPERTY(EditAnywhere, Category = "Modular Dialogue")
	EModularDialogueNodeExecutionFlow Flow = EModularDialogueNodeExecutionFlow::Flow_NPC;

	// Which NPC Node should be next when Player selects this response?
	UPROPERTY(EditAnywhere, DisplayName = "NPC Response", Category = "Modular Dialogue", meta=(GetOptions = "GetNodeOptions_NPC", EditCondition = "Flow == EModularDialogueNodeExecutionFlow::Flow_NPC", EditConditionHides))
	FName NPCResponse;
	// Which Player responses are available when Player selects this response?
	UPROPERTY(EditAnywhere, DisplayName = "Player Next Nodes", Category = "Modular Dialogue", meta=(GetOptions = "GetNodeOptions_Player", EditCondition = "Flow == EModularDialogueNodeExecutionFlow::Flow_Player", EditConditionHides))
	TArray<FName> PlayerNextNodes;
};

/**
 *	Input events to control Dialogue
 *	 If you want to add a new event in the code, please handle it from DialogueObject class.
 */
UENUM()
enum class EModularDialogueSystemInputEvents : uint8
{
	Event_Up			UMETA(Display_Name = "Up Event"),		
	Event_Down			UMETA(Display_Name = "Down Event"),		
	Event_Skip			UMETA(Display_Name = "Skip Event"),		
	Event_Close			UMETA(Display_Name = "Close Event"),		
	Event_Select		UMETA(Display_Name = "Select Event"),		
	Event_Select_1		UMETA(Display_Name = "Select First Event"),		
	Event_Select_2		UMETA(Display_Name = "Select Second Event"),		
	Event_Select_3		UMETA(Display_Name = "Select Third Event"),		
	Event_Select_4		UMETA(Display_Name = "Select Forth Event"),		
	Event_Select_5		UMETA(Display_Name = "Select Fifth Event"),		
	Event_Select_6		UMETA(Display_Name = "Select Sixth Event"),		
	Event_Select_7		UMETA(Display_Name = "Select Seventh Event"),		
	Event_Select_8		UMETA(Display_Name = "Select Eighth Event"),		
	Event_Select_9		UMETA(Display_Name = "Select Nineth Event")
};
