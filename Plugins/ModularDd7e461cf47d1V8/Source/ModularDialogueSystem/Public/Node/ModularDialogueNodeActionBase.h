// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ModularNodeStructs.h"
#include "UObject/Object.h"
#include "ModularDialogueNodeActionBase.generated.h"

UCLASS(Blueprintable, BlueprintType, EditInlineNew, CollapseCategories, Abstract)
class MODULARDIALOGUESYSTEM_API UModularDialogueNodeActionBase : public UObject
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
	// Virtual wrapper for CanAbortDialogue to make overridable in cpp.
	virtual bool CanAbortDialogue()
	{
		return K2_CanAbortDialogue();
	};
	// Virtual wrapper for CanEndAction to make overridable in cpp.
	virtual bool CanEndAction()
	{
		return K2_CanEndAction();
	};

	virtual UWorld* GetWorld() const override;

	// Called when just before Dialogue is started
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Prepare Context")
	void K2_PrepareContext(AActor* InPlayer, AActor* InNPC);
	// Called when action owner Dialogue Node is executed. 
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Execute Action")
	void K2_ExecuteAction();
	// Tick event only works if Action is active.
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Tick")
	void K2_Tick(float DeltaTime);

	// Called when action owner Dialogue Node is ended.
	UFUNCTION(BlueprintNativeEvent, DisplayName = "End Action")
	void K2_EndAction(EModularDialogueStatus DialogueStatus);
	/**
	 *	Can end action owner Dialogue Node?
	 *	 Player responses or Next button won't appear until this function returns true
	 */
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Can End Action")
	bool K2_CanEndAction();
	/**
	 *	Can abort Dialogue completely?
	 *	 Player can't abort (Close event) the Dialogue until this function returns true
	 */
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Can Abort Dialogue")
	bool K2_CanAbortDialogue();

	// Get the desired parameter from NPC's DialogueComponent
	UFUNCTION(BlueprintPure, DisplayName = "Get Parameter (By NPC)", Category = "Modular Dialogue")
	AActor* GetParameter_NPC(FName Key) const;
	// Get the desired parameter from Player's DialogueComponent
	UFUNCTION(BlueprintPure, DisplayName = "Get Parameter (By Player)", Category = "Modular Dialogue")	
	AActor* GetParameter_Player(FName Key) const;

	// Is Dialogue Node Action currently active?
	UPROPERTY(BlueprintReadOnly, Category = "Modular Dialogue")
	bool bIsActive = false;
};
