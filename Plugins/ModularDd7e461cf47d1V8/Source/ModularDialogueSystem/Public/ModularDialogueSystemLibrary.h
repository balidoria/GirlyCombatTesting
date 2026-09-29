// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputCoreTypes.h"
#include "Node/ModularNodeStructs.h"
#include "ModularDialogueSystemLibrary.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FModularOnPlayerResponded, FName);
DECLARE_MULTICAST_DELEGATE_OneParam(FModularOnInputReceived, FKey);
DECLARE_MULTICAST_DELEGATE_OneParam(FModularOnPlayerResponseHovered, int32);

USTRUCT()
struct MODULARDIALOGUESYSTEM_API FModularDialogueSystemEvents
{
	GENERATED_BODY()

	static FModularOnPlayerResponded OnPlayerResponded;
	static FModularOnInputReceived OnInputReceived;
	static FModularOnPlayerResponseHovered OnPlayerResponseHovered;
};

UCLASS()
class MODULARDIALOGUESYSTEM_API UModularDialogueSystemLibrary : public UObject
{
	GENERATED_BODY()

public:
	// WidgetUseOnly!! Use when Player Response is clicked on widget.
	UFUNCTION(BlueprintCallable, Category = "Modular Dialogue")
	static void OnPlayerResponded(FName Response);
	
	// WidgetUseOnly!! Use when exit or next button is pressed
	UFUNCTION(BlueprintCallable, Category = "Modular Dialogue")
	static void OnInputReceived(FKey Key);
	
	// WidgetUseOnly!! Use when PlayerResponse is hovered. 
	UFUNCTION(BlueprintCallable, Category = "Modular Dialogue")
	static void OnPlayerResponseHovered(int32 IndexResponse);

	// Helper to find actual Key by DialogueEvents
	UFUNCTION(BlueprintPure, Category = "Modular Dialogue")
	static bool GetInputEventKey(EModularDialogueSystemInputEvents InEvent, FKey& OutKey);
	// Helper to find DialogueEvent type by Key
	UFUNCTION(BlueprintPure, Category = "Modular Dialogue")
	static bool GetInputEventType(FKey InKey, EModularDialogueSystemInputEvents& OutEvent);
};
