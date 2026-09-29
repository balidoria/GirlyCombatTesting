// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ModularDialogueSystemInputAction.generated.h"

class UModularDialogueSystemUserWidget;

/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class MODULARDIALOGUESYSTEM_API UModularDialogueSystemInputAction : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UWorld* World;
	virtual UWorld* GetWorld() const override { return World; }

	virtual void OnDialogueStarted(UModularDialogueSystemUserWidget* Widget) { K2_OnDialogueStarted(Widget); }
	virtual void OnDialogueFinished() { K2_OnDialogueFinished(); }

	// Called by DialogueSystem itself when a Dialogue is started.
	//  Should handle Player's input only
	UFUNCTION(BlueprintNativeEvent, DisplayName = "On Dialogue Started", Category = "Modular Dialogue")
	void K2_OnDialogueStarted(UModularDialogueSystemUserWidget* Widget);
	// Called by DialogueSystem itself when a Dialogue is ended.
	//  Should handle Player's input only
	UFUNCTION(BlueprintNativeEvent, DisplayName = "On Dialogue Finished", Category = "Modular Dialogue")
	void K2_OnDialogueFinished();

};
