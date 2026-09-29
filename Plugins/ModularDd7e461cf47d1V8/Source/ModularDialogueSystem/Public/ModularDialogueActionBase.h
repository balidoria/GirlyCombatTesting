// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Node/ModularNodeStructs.h"
#include "ModularDialogueActionBase.generated.h"

class UModularDialogueComponent;

UCLASS(Blueprintable, BlueprintType, EditInlineNew, CollapseCategories, Abstract)
class MODULARDIALOGUESYSTEM_API UModularDialogueActionBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "Modular Dialogue")
	AActor* NPC;
	UPROPERTY(BlueprintReadOnly, Category = "Modular Dialogue")
	AActor* Player;

	// Virtual wrapper for PrepareContext to make overridable in cpp
	virtual void PrepareContext(AActor* InPlayer, AActor* InNPC);
	// Virtual wrapper for ExecuteAction to make overridable in cpp.
	//  Make sure to handle bIsActive boolean if overridden
	virtual void ExecuteAction()
	{
		if(!bIsActive)
		{
			K2_ExecuteAction();
			bIsActive = true;
		}
	}
	// Virtual wrapper for Tick to make overridable in cpp.
	virtual void Tick(float DeltaTime)
	{
		K2_Tick(DeltaTime);
	}
	
	// Virtual wrapper for EndAction to make overridable in cpp.
	//  Make sure to handle bIsActive boolean if overridden
	virtual void EndAction(EModularDialogueStatus DialogueStatus)
	{
		if(bIsActive)
		{
			K2_EndAction(DialogueStatus);
			bIsActive = false;
		}
	}
	
	// Virtual wrapper for OnExecutingNPCNode to make overridable in cpp.
	virtual void OnExecutingNPCNode(FName NodeName)
	{
		if(bIsActive)
		{
			K2_OnExecutingNPCNode(NodeName);
		}
	}
	// Virtual wrapper for OnPlayerResponded to make overridable in cpp.
	virtual void OnPlayerResponded(FName ResponseNode)
	{
		if(bIsActive)
		{
			K2_OnPlayerResponded(ResponseNode);
		}
	}
	// Virtual wrapper for CanAbortDialogue to make overridable in cpp.
	virtual bool CanAbortDialogue()
	{
		return K2_CanAbortDialogue();
	};

	virtual UWorld* GetWorld() const override;

	// Called when just before Dialogue is started
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Prepare Context")
	void K2_PrepareContext(AActor* InPlayer, AActor* InNPC);
	// Called when Dialogue is started
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Execute Action")
	void K2_ExecuteAction();
	// Tick event only works while Dialogue is active
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Tick")
	void K2_Tick(float DeltaTime);

	// Called when Dialogue is ended.
	UFUNCTION(BlueprintNativeEvent, DisplayName = "End Action")
	void K2_EndAction(EModularDialogueStatus DialogueStatus);

	// Called when new NPC Node started to executed with NPC NodeName.
	UFUNCTION(BlueprintNativeEvent, DisplayName = "On Executing NPC Node")
	void K2_OnExecutingNPCNode(FName NodeName);
	// Called when Player selected response with ResponseNode name.
	UFUNCTION(BlueprintNativeEvent, DisplayName = "On Player Responded")
	void K2_OnPlayerResponded(FName ResponseNode);

	/**
	 *	Can abort Dialogue completely?
	 *	 Player can't abort (Close event) the Dialogue until this function returns true
	 */
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Can Abort Dialogue")
	bool K2_CanAbortDialogue();

	// Getter for Dialogue's NPC Dialogue Component
	UFUNCTION(BlueprintPure, DisplayName = "Get Dialogue Component (NPC)", Category = "Modular Dialogue")
	UModularDialogueComponent* GetDialogueComponent_NPC();
	// Getter for Dialogue's Player Dialogue Component
	UFUNCTION(BlueprintPure, DisplayName = "Get Dialogue Component (Player)", Category = "Modular Dialogue")
	UModularDialogueComponent* GetDialogueComponent_Player();

	// Get the desired parameter from NPC's DialogueComponent
	UFUNCTION(BlueprintPure, DisplayName = "Get Parameter (By NPC)", Category = "Modular Dialogue")
	AActor* GetParameter_NPC(FName Key);
	// Get the desired parameter from Player's DialogueComponent
	UFUNCTION(BlueprintPure, DisplayName = "Get Parameter (By Player)", Category = "Modular Dialogue")
	AActor* GetParameter_Player(FName Key);

	// Is Dialogue Action currently active? Which means Dialogue is active also.
	UPROPERTY(BlueprintReadOnly, Category = "Modular Dialogue")
	bool bIsActive = false;
};