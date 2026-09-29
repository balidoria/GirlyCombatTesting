// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "Node/ModularNodeStructs.h"

#include "ModularDialogueSystemDeveloperSettings.generated.h"

class UModularDialogueSystemInputAction;
class UModularDialogueSystemUserWidget;
/**
 * 
 */
UCLASS(config=Game, defaultconfig, DisplayName = "Modular Dialogue System")
class MODULARDIALOGUESYSTEM_API UModularDialogueSystemDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UModularDialogueSystemDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	// InputAction for handling Player inputs when Dialogue started and ended.
	UPROPERTY(config, EditAnywhere, Category = "Modular Dialogue")
	TSubclassOf<UModularDialogueSystemInputAction> InputAction;

	// Dialogue widget added to viewport when Dialogue is started
	UPROPERTY(config, EditAnywhere, Category = "Modular Dialogue")
	TSubclassOf<UModularDialogueSystemUserWidget> DialogueWidget;
	// Interaction widget given to closest available NPC
	UPROPERTY(config, EditAnywhere, Category = "Modular Dialogue")
	TSubclassOf<UModularDialogueSystemUserWidget> InteractionWidget;
	// Input event mapping for handling executing Dialogue
	UPROPERTY(config, EditAnywhere, Category = "Modular Dialogue")
	TMap<FKey, EModularDialogueSystemInputEvents> InputEvents = {};
};