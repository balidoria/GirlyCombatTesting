// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueObject.h"

#include "ModularDialogueActionBase.h"
#include "ModularDialogueSubsystem.h"
#include "ModularDialogueSystemDataAsset.h"
#include "ModularDialogueSystemDeveloperSettings.h"
#include "ModularDialogueSystemLibrary.h"
#include "ModularDialogueSystemUserWidget.h"
#include "Node/ModularDialogueNodeActionBase.h"
#include "..\Public\Node\ModularNodeStructs.h"

void UModularDialogueObject::PrepareContext(AActor* InPlayer, AActor* InNPC, UModularDialogueSystemDataAsset* DialogueSet)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UModularDialogueObject::PrepareContext)
	
	if (InPlayer && InNPC && DialogueSet)
	{
		FModularDialogueSystemEvents::OnPlayerResponded.AddUObject(this, &ThisClass::OnPlayerResponded);
		FModularDialogueSystemEvents::OnInputReceived.AddUObject(this, &ThisClass::OnInputReceived);
		FModularDialogueSystemEvents::OnPlayerResponseHovered.AddUObject(this, &ThisClass::OnPlayerResponseHovered);
		
		Player = InPlayer;
		NPC = InNPC;

		NPCNodes = DialogueSet->NPCNodes;
		PlayerNodes = DialogueSet->PlayerNodes;

		for (const UModularDialogueActionBase* Action : DialogueSet->Actions)
		{
			UModularDialogueActionBase* CopiedAction = DuplicateObject(Action, this);
			Actions.Add(CopiedAction);

			CopiedAction->PrepareContext(Player, NPC);
			CopiedAction->ExecuteAction();
		}
		
		for (auto It = NPCNodes.CreateIterator(); It; ++It)
		{
			for (int32 i = 0; i < It.Value().NPCActions.Num(); ++i)
			{
				It.Value().NPCActions[i] = DuplicateObject(It.Value().NPCActions[i], this);
				It.Value().NPCActions[i]->PrepareContext(Player, NPC);
			}
			for (int32 i = 0; i < It.Value().PlayerActions.Num(); ++i)
			{
				It.Value().PlayerActions[i] = DuplicateObject(It.Value().PlayerActions[i], this);
				It.Value().PlayerActions[i]->PrepareContext(Player, NPC);
			}
		}
		
		Status = EModularDialogueStatus::Status_Executing;		
		ExecutingNodeName = DialogueSet->StartingNode;
		ExecuteNextNode();
	}
	else
	{
		UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! Invalid actor or DialogueSet. Player: %s, NPC: %s and DialogueSet: %s "),
			*GetNameSafe(Player),*GetNameSafe(NPC),*GetNameSafe(DialogueSet));
		FinishDialogue(EModularDialogueStatus::Status_Failed);
	}
}

void UModularDialogueObject::FinishDialogue(EModularDialogueStatus InStatus)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UModularDialogueObject::FinishDialogue)
	
	ensure(InStatus != EModularDialogueStatus::Status_Failed);
	Status = InStatus;
	
	// Try to end actions if valid
	for (UModularDialogueActionBase* Action : Actions)
	{
		if(IsValid(Action))
		{
			Action->EndAction(Status);
		}
	}
	
	// Try to end node actions if valid
	if(FModularDialogueNodeNPC* NPCNode = NPCNodes.Find(ExecutingNodeName))
	{
		for(int32 i = 0; i < NPCNode->PlayerActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->PlayerActions[i])
			{
				Action->EndAction(Status);
			}
		}
		for(int32 i = 0; i < NPCNode->NPCActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->NPCActions[i])
			{
				Action->EndAction(Status);
			}
		}
	}
	
	OnDialogueFinished.Broadcast();

	FModularDialogueSystemEvents::OnPlayerResponded.RemoveAll(this);
	FModularDialogueSystemEvents::OnInputReceived.RemoveAll(this);
	// Cleanup widget.
	UModularDialogueSubsystem::GetDialogueWidget(this)->ResetPlayerResponses();
}

void UModularDialogueObject::Tick(float DeltaTime)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UModularDialogueObject::Tick)
	
	if(Status != EModularDialogueStatus::Status_Executing)
		return;

	// Execute NPC Dialogue animation
	if(TaskType == EModularDialogueObjectTask::Task_NPCDialogue)
	{
		ExecuteNPCDialogueTask(DeltaTime);
	}
	// Execute Player Response animation
	else if(TaskType == EModularDialogueObjectTask::Task_PlayerResponses)
	{
		ExecutePlayerResponsesTask(DeltaTime);
	}

	// Tick for Actions
	for(int32 i = 0; i < Actions.Num(); ++i)
	{
		if(UModularDialogueActionBase* Action = Actions[i])
		{
			Action->Tick(DeltaTime);
		}
	}

	// Tick for Executing Node Actions
	if(FModularDialogueNodeNPC* NPCNode = NPCNodes.Find(ExecutingNodeName))
	{
		for(int32 i = 0; i < NPCNode->PlayerActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->PlayerActions[i])
			{
				Action->Tick(DeltaTime);
			}
		}
		for(int32 i = 0; i < NPCNode->NPCActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->NPCActions[i])
			{
				Action->Tick(DeltaTime);
			}
		}
	}
}

void UModularDialogueObject::ExecuteNextNode()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UModularDialogueObject::ExecuteNextNode)
	
	// Find NPC Node with the name
	if(FModularDialogueNodeNPC* NPCNode = NPCNodes.Find(ExecutingNodeName))
	{
		// Start executing NodeActions
		for(int32 i = 0; i < NPCNode->PlayerActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->PlayerActions[i])
			{
				Action->ExecuteAction();
			}
		}
		for(int32 i = 0; i < NPCNode->NPCActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->NPCActions[i])
			{
				Action->ExecuteAction();
			}
		}

		// Inform all actions with new NPC Node
		for(int32 i = 0; i < Actions.Num(); ++i)
		{
			if(UModularDialogueActionBase* Action = Actions[i])
			{
				Action->OnExecutingNPCNode(ExecutingNodeName);
			}
		}

		// Setup for Task_NPCDialogue
		ResultText_NPCDialogue = NPCNode->DialogueText;
		CurrentText_NPCDialogue = "";
		Timer_NPCDialogue = ResultText_NPCDialogue.IsEmpty() ? 0.f : NPCNode->DialogueTextSpeed / float(ResultText_NPCDialogue.Len());
		Interval_NPCDialogue = Timer_NPCDialogue;
		
		// Setup for Task_PlayerResponse
		List_PlayerResponse = NPCNode->Flow == EModularDialogueNodeExecutionFlow::Flow_Player ? NPCNode->PlayerResponses : TArray<FName>();
		Index_SelectedResponse = Index_PlayerResponse = 0;
		Timer_PlayerResponse = NPCNode->PlayerResponseSpeed;
		Interval_PlayerResponse = Timer_PlayerResponse;

		// Update animation task type
		TaskType = EModularDialogueObjectTask::Task_NPCDialogue;
		// Inform DialogueWidget to hide NextButton
		UModularDialogueSubsystem::GetDialogueWidget(this)->UpdateNextButton(false);
	}
	else
	{
		UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! Couldn't find any NPC Node with the name %s"), *ExecutingNodeName.ToString());
		FinishDialogue(EModularDialogueStatus::Status_Failed);
	}
}

void UModularDialogueObject::ExecuteNPCDialogueTask(float DeltaTime)
{
	Timer_NPCDialogue += DeltaTime;
	// Wait until interval finishes
	if(Interval_NPCDialogue > Timer_NPCDialogue)
		return;

	// First reset timer
	Timer_NPCDialogue = 0.f;

	const int32 TotalStringLength = ResultText_NPCDialogue.Len();
	const int32 CurrentStringLength = CurrentText_NPCDialogue.Len();
	
	// Is NPC Text animation finished?
	if(TotalStringLength > CurrentStringLength)
	{
		// Continue text animation.
		CurrentText_NPCDialogue = ResultText_NPCDialogue.LeftChop(TotalStringLength - (CurrentStringLength + 1));
		UModularDialogueSubsystem::GetDialogueWidget(this)->UpdateNPCText(CurrentText_NPCDialogue);
		return;
	}

	// NPC Text has written but should we wait for Actions too?
	if(HasAnyBlockingAction_Next())
		return;

	// If Flow is NPC TaskType -> None.
	// If Flow is Player and has list of response TaskType -> PlayerResponses.
	// Else TaskType -> None and create ExitButton for Widget.
	switch (NPCNodes[ExecutingNodeName].Flow)
	{
	case EModularDialogueNodeExecutionFlow::Flow_NPC:
		TaskType = EModularDialogueObjectTask::Task_None;
		UModularDialogueSubsystem::GetDialogueWidget(this)->UpdateNextButton(true);
		break;
	case EModularDialogueNodeExecutionFlow::Flow_Player:
		if(List_PlayerResponse.Num() > 0)
		{
			TaskType = EModularDialogueObjectTask::Task_PlayerResponses;
		}
		else
		{
			UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! NPC Node: %s -> 'Player Continues' selected for Flow but list of Responses are empty."), *ExecutingNodeName.ToString());
			FinishDialogue(EModularDialogueStatus::Status_Failed);
		}
		break;
	default:
		TaskType = EModularDialogueObjectTask::Task_None;
		UModularDialogueSubsystem::GetDialogueWidget(this)->UpdateNextButton(false);
		UModularDialogueSubsystem::GetDialogueWidget(this)->UpdateExitButton(true);
		break;
	}
}

void UModularDialogueObject::ExecutePlayerResponsesTask(float DeltaTime)
{
	Timer_PlayerResponse += DeltaTime;
	if(Interval_PlayerResponse > Timer_PlayerResponse)
		return;

	// First reset timer
	Timer_PlayerResponse = 0.f;

	// Are all PlayerResponses populated?
	if(List_PlayerResponse.IsValidIndex(Index_PlayerResponse))
	{
		// Populate next PlayerResponse
		if(const FModularDialogueNodePlayer* Node_Player = PlayerNodes.Find(List_PlayerResponse[Index_PlayerResponse]))
		{
			UModularDialogueSubsystem::GetDialogueWidget(this)->
			PopulatePlayerResponse(List_PlayerResponse[Index_PlayerResponse], Node_Player->DialogueText);
		}

		// Is next index valid?
		if(List_PlayerResponse.IsValidIndex(++Index_PlayerResponse))
			return;
	}
	
	// Populated all PlayerResponses
	TaskType = EModularDialogueObjectTask::Task_None;
	
	// If we couldn't populate any PlayerResponse, fail dialogue
	if (UModularDialogueSubsystem::GetDialogueWidget(this)->PlayerResponseNodeNames.IsEmpty())
	{
		UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! NPC Node: %s -> 'Player Continues' selected for Flow but couldn't find any valid Player Response."),*ExecutingNodeName.ToString());
		FinishDialogue(EModularDialogueStatus::Status_Failed);
	}
}

bool UModularDialogueObject::HasAnyBlockingAction_Next()
{
	// Check if can end current NodeActions
	if(FModularDialogueNodeNPC* NPCNode = NPCNodes.Find(ExecutingNodeName))
	{
		for(int32 i = 0; i < NPCNode->PlayerActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->PlayerActions[i])
			{
				if(!Action->CanEndAction()) return true;
			}
		}
		for(int32 i = 0; i < NPCNode->NPCActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->NPCActions[i])
			{
				if(!Action->CanEndAction()) return true;
			}
		}
	}
	return false;
}

bool UModularDialogueObject::HasAnyBlockingAction_Abort()
{
	// Check for any action can possibly blocking the dialogue abort.
	for (TObjectPtr<UModularDialogueActionBase> Action : Actions)
	{
		if(IsValid(Action) && !Action->CanAbortDialogue())
			return true;
	}
	// Check for NodeActions too.
	if(FModularDialogueNodeNPC* NPCNode = NPCNodes.Find(ExecutingNodeName))
	{
		for(int32 i = 0; i < NPCNode->PlayerActions.Num(); ++i)
		{
			UModularDialogueNodeActionBase* Action = NPCNode->PlayerActions[i];
			if(IsValid(Action) && !Action->CanAbortDialogue())
				return true;
		}
		for(int32 i = 0; i < NPCNode->NPCActions.Num(); ++i)
		{
			UModularDialogueNodeActionBase* Action = NPCNode->NPCActions[i];
			if(IsValid(Action) && !Action->CanAbortDialogue())
				return true;
		}
	}
	return false;
}

void UModularDialogueObject::OnPlayerResponded(FName Response)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(UModularDialogueObject::OnPlayerResponded)

	// Try to find PlayerNode with the name
	if(const FModularDialogueNodePlayer* Node = PlayerNodes.Find(Response))
	{
		// Inform all actions with the Player Response
		for(int32 i = 0; i < Actions.Num(); ++i)
		{
			if(UModularDialogueActionBase* Action = Actions[i])
			{
				Action->OnPlayerResponded(Response);
			}
		}
		
		// First reset all Responses from widget.
		UModularDialogueSubsystem::GetDialogueWidget(this)->ResetPlayerResponses();

		// Continue with NPC node.
		if(Node->Flow == EModularDialogueNodeExecutionFlow::Flow_NPC)
		{
			if(NPCNodes.Contains(Node->NPCResponse))
			{
				EndCurrentNodeActions();
				ExecutingNodeName = Node->NPCResponse;
				ExecuteNextNode();
			}
			else
			{
				UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! Player Node: %s -> 'NPC Continues' selected for Flow but NPC Response (%s) is invalid."),
					*Response.ToString(), *Node->NPCResponse.ToString());
				FinishDialogue(EModularDialogueStatus::Status_Failed);
			}
		}
		// Continue with Player node.
		else if (Node->Flow == EModularDialogueNodeExecutionFlow::Flow_Player)
		{
			// Restart PlayerResponse task with new responses since Player continues instead of NPC.
			if(!Node->PlayerNextNodes.IsEmpty())
			{
				List_PlayerResponse = Node->PlayerNextNodes;
				Index_PlayerResponse = 0;
				Timer_PlayerResponse = 0.f;
				TaskType = EModularDialogueObjectTask::Task_PlayerResponses;
			}
			else
			{
				UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! Player Node: %s -> 'Player Continues' selected for Flow but list of Responses are empty."), *Response.ToString());
				FinishDialogue(EModularDialogueStatus::Status_Failed);
			}
		}
		// Finish dialogue.
		else
		{
			FinishDialogue(EModularDialogueStatus::Status_Finished);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! Couldn't find any Player Node with the name %s"), *Response.ToString());
		FinishDialogue(EModularDialogueStatus::Status_Failed);
	}
}

void UModularDialogueObject::OnInputReceived(FKey Key)
{
	if(const UModularDialogueSystemDeveloperSettings* Settings = GetDefault<UModularDialogueSystemDeveloperSettings>())
	{
		// Find matching DialogueEvent by Input Key
		const EModularDialogueSystemInputEvents* EventPtr = Settings->InputEvents.Find(Key);
		if(EventPtr == nullptr) return;
		
		switch (*EventPtr)
		{
		case EModularDialogueSystemInputEvents::Event_Down:
		case EModularDialogueSystemInputEvents::Event_Up:
			HandleUpDownEvent(*EventPtr); break;
		case EModularDialogueSystemInputEvents::Event_Close:
			HandleCloseEvent(); break;
		case EModularDialogueSystemInputEvents::Event_Skip:
			HandleSkipEvent(); break;
		default:
			HandleSelectEvent(*EventPtr); break;			
		}
	}
}

void UModularDialogueObject::OnPlayerResponseHovered(int32 IndexResponse)
{
	// Highlight the PlayerResponse with the index if valid
	if(List_PlayerResponse.IsValidIndex(IndexResponse))
	{
		Index_SelectedResponse = IndexResponse;
		UModularDialogueSubsystem::GetDialogueWidget(this)->HighlightPlayerResponse(Index_SelectedResponse);
	}
}

void UModularDialogueObject::HandleUpDownEvent(EModularDialogueSystemInputEvents Event)
{
	// If all animations tasks are finished and we have PlayerResponses, up down event can be handled.
	if(TaskType == EModularDialogueObjectTask::Task_None && List_PlayerResponse.Num() > 0)
	{
		// Keep the index within the number of PlayerResponses
		Index_SelectedResponse += Event == EModularDialogueSystemInputEvents::Event_Down ? +1 : -1;
		
		if(Index_SelectedResponse < 0)
			Index_SelectedResponse += List_PlayerResponse.Num();
		
		Index_SelectedResponse %= List_PlayerResponse.Num();
		UModularDialogueSubsystem::GetDialogueWidget(this)->HighlightPlayerResponse(Index_SelectedResponse);
	}
}

void UModularDialogueObject::HandleCloseEvent()
{
	// Can abort dialogue?
	if(HasAnyBlockingAction_Abort())
		return;
	
	FinishDialogue(EModularDialogueStatus::Status_Aborted);
}

void UModularDialogueObject::HandleSkipEvent()
{
	// Skip NPC Dialogue text write animation
	if(TaskType == EModularDialogueObjectTask::Task_NPCDialogue)
	{
		CurrentText_NPCDialogue = ResultText_NPCDialogue;
		UModularDialogueSubsystem::GetDialogueWidget(this)->UpdateNPCText(CurrentText_NPCDialogue);
	}
	// Skip Player Response appear animation
	else if(TaskType == EModularDialogueObjectTask::Task_PlayerResponses)
	{
		for(int32 i = Index_PlayerResponse; i < List_PlayerResponse.Num(); ++i)
		{
			if(const FModularDialogueNodePlayer* Node_Player = PlayerNodes.Find(List_PlayerResponse[i]))
			{
				UModularDialogueSubsystem::GetDialogueWidget(this)->
				PopulatePlayerResponse(List_PlayerResponse[i], Node_Player->DialogueText);
			}
		}
		TaskType = EModularDialogueObjectTask::Task_None;
	}
	// All task are finished, handle what we should do next.
	else if(const FModularDialogueNodeNPC* NodeNPC = NPCNodes.Find(ExecutingNodeName))
	{
		if(NodeNPC->Flow == EModularDialogueNodeExecutionFlow::Flow_Player)
		{
			// We are waiting for PlayerResponse now, do nothing.
			if(!NodeNPC->PlayerResponses.IsEmpty())
				return;

			// If Response array is empty, we failed.
			UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! Player Node: %s -> 'Player Continues' selected for Flow but list of Response are empty."), *ExecutingNodeName.ToString());
			FinishDialogue(EModularDialogueStatus::Status_Failed);
		}
		else if(NodeNPC->Flow == EModularDialogueNodeExecutionFlow::Flow_NPC) // NPC continues
		{
			if(NPCNodes.Contains(NodeNPC->NPCNextNode))
			{
				EndCurrentNodeActions();
				ExecutingNodeName = NodeNPC->NPCNextNode;
				ExecuteNextNode();
			}
			else
			{
				// If next NPC node is invalid, we finish the dialogue.
				UE_LOG(LogTemp, Error,  TEXT("Dialogue Failed! NPC Node: %s -> 'NPC Continues' selected for Flow but NPC Response (%s) is invalid."),
					*ExecutingNodeName.ToString(), *NodeNPC->NPCNextNode.ToString());
				FinishDialogue(EModularDialogueStatus::Status_Failed);
			}
		}
		else
		{
			FinishDialogue(EModularDialogueStatus::Status_Finished);
		}
	}
	// We can't know what should we do, failing dialogue now..
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Dialogue Failed! Invalid NPC Node %s."), *ExecutingNodeName.ToString());
		FinishDialogue(EModularDialogueStatus::Status_Failed);
	}
}

void UModularDialogueObject::HandleSelectEvent(EModularDialogueSystemInputEvents Event)
{
	// If all animations tasks are finished and we have PlayerResponses, select event can be handled.
	if(TaskType == EModularDialogueObjectTask::Task_None && List_PlayerResponse.Num() > 0)
	{
		// Should select the highlighted PlayerResponse
		if(Event == EModularDialogueSystemInputEvents::Event_Select)
		{
			OnPlayerResponded(List_PlayerResponse[Index_SelectedResponse]);
			return;
		}

		// Should select the PlayerResponse that matches index with the Event
		const int32 EnumValue = static_cast<int32>(Event);
		// Base enum value for Select event.
		const int32 SelectEnumValue  = static_cast<int32>(EModularDialogueSystemInputEvents::Event_Select);
		
		// Given event's offset from Select event.
		const int32 IdxSelect = EnumValue - SelectEnumValue - 1;
		if(List_PlayerResponse.IsValidIndex(IdxSelect))
		{
			Index_SelectedResponse = IdxSelect;
			OnPlayerResponded(List_PlayerResponse[Index_SelectedResponse]);
		}
	}
}

void UModularDialogueObject::EndCurrentNodeActions()
{
	// Find current NPC Node and end all actions.
	if(FModularDialogueNodeNPC* NPCNode = NPCNodes.Find(ExecutingNodeName))
	{
		for(int32 i = 0; i < NPCNode->PlayerActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->PlayerActions[i])
			{
				Action->EndAction(Status);
			}
		}
		for(int32 i = 0; i < NPCNode->NPCActions.Num(); ++i)
		{
			if(UModularDialogueNodeActionBase* Action = NPCNode->NPCActions[i])
			{
				Action->EndAction(Status);
			}
		}
	}
}

TStatId UModularDialogueObject::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UModularDialogueObject, STATGROUP_Tickables);
}
