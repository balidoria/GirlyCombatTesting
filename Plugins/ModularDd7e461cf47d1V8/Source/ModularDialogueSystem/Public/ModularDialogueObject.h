// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Node/ModularNodeStructs.h"
#include "Tickable.h"
#include "InputCoreTypes.h"
#include "ModularDialogueObject.generated.h"

class UModularDialogueActionBase;
class UModularDialogueSystemDataAsset;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FModularOnDialogueFinished);

UCLASS(BlueprintType)
class MODULARDIALOGUESYSTEM_API UModularDialogueObject final : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	// Context preparation and starting the Dialogue
	void PrepareContext(AActor* InPlayer, AActor* InNPC, UModularDialogueSystemDataAsset* DialogueSet);
	// Finish Dialogue with Status: Finish, Failed and Aborted
	void FinishDialogue(EModularDialogueStatus InStatus);

	// Current Dialogue status
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Modular Dialogue")
	EModularDialogueStatus Status = EModularDialogueStatus::Status_Waiting;
	// Currently executing Dialogue Task type for Node animations
	//  NPC Node: Dialogue line animation
	//  Player Node: Dialogue responses appear animation 
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Modular Dialogue")
	EModularDialogueObjectTask TaskType = EModularDialogueObjectTask::Task_NPCDialogue;

	// Dialogue's Player reference
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Modular Dialogue")
	AActor* Player;
	// Dialogue's NPC reference
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Modular Dialogue")
	AActor* NPC;
	// Currently executing NPC Node.
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Modular Dialogue")
	FName ExecutingNodeName = "None";

	// Dialogue actions list
	UPROPERTY()
	TArray<TObjectPtr<UModularDialogueActionBase>> Actions = {};
	// Dialogue's NPC Nodes list
	UPROPERTY()
	TMap<FName, FModularDialogueNodeNPC> NPCNodes = {};
	// Dialogue's Player Nodes list
	UPROPERTY()
	TMap<FName, FModularDialogueNodePlayer> PlayerNodes = {};

	// Event to be triggered when Dialogue is finished
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Modular Dialogue")
    FModularOnDialogueFinished OnDialogueFinished;

private:
	// Tick function to control whole process
	virtual void Tick(float DeltaTime) override;

	// Execute NPC Node matching with "ExecutingNodeName"
	void ExecuteNextNode();
	// Execute current NPC Node animation process 
	void ExecuteNPCDialogueTask(float DeltaTime);
	// Execute current Player Responses animation process
	void ExecutePlayerResponsesTask(float DeltaTime);

	// Currently active NPC Node has any blocking DialogueNodeAction to execute NextNode?
	bool HasAnyBlockingAction_Next();
	// Is there any blocking DialogueAction to abort Dialogue completely?
	bool HasAnyBlockingAction_Abort();

	// NPC Dialogue Task variables
	FString ResultText_NPCDialogue = "";
	FString CurrentText_NPCDialogue = "";
	float Timer_NPCDialogue = 0.f;
	float Interval_NPCDialogue = 0.f;
	
	// Player Response Task variables
	TArray<FName> List_PlayerResponse = {};
	int32 Index_SelectedResponse = 0;
	int32 Index_PlayerResponse = 0;
	float Timer_PlayerResponse = 0.f;
	float Interval_PlayerResponse = 0.f;

	// Triggered when Player selects a response
	void OnPlayerResponded(FName Response);
	// Triggered when Player gives any valid input
	void OnInputReceived(FKey Key);
	// Triggered when Player hovers a response
	//  Used to highlight the hovered response
	void OnPlayerResponseHovered(int32 IndexResponse);

	// On Up/Down Input event received
	//  Used to highlight selected Player Response
	void HandleUpDownEvent(EModularDialogueSystemInputEvents Event);
	// On Close Input event received
	//  Used to abort Dialogue completely
	void HandleCloseEvent();
	// On Skip Input event received
	//  Used to skip current NPC Node to execute next one or skip active animation task.
	void HandleSkipEvent();
	// On Select Input event received
	//  Triggers OnPlayerResponded if there is a valid PlayerResponse
	void HandleSelectEvent(EModularDialogueSystemInputEvents Event);

	// Ends current NPC Node actions
	void EndCurrentNodeActions();
	
	
	// FTickableGameObject begin
	virtual UWorld* GetTickableGameObjectWorld() const override { return GetWorld(); }
	virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Always; }
	virtual TStatId GetStatId() const override;
	// FTickableGameObject end
	
};