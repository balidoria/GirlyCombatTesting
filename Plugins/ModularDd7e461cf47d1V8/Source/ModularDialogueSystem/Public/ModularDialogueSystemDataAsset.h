// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Node/ModularNodeStructs.h"
#include "ModularDialogueSystemDataAsset.generated.h"


class UModularDialogueActionBase;

/**
 * 
 */
UCLASS(DisplayName = "Modular Dialogue System Data Asset")
class MODULARDIALOGUESYSTEM_API UModularDialogueSystemDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	
	// Which NPC Node should Dialogue start with 
	UPROPERTY(EditAnywhere, meta=(GetOptions = "GetNodeOptions_Start"), Category = "Modular Dialogue")
	FName StartingNode;

	// Actions starts with dialogue and ends when the dialogue is finished/aborted.
	UPROPERTY(EditAnywhere, Instanced, Category = "Modular Dialogue")
	TArray<TObjectPtr<UModularDialogueActionBase>> Actions = {};
	// Dialogue nodes for NPC
	UPROPERTY(EditAnywhere, Category = "Modular Dialogue")
	TMap<FName, FModularDialogueNodeNPC> NPCNodes = {};
	// Dialogue nodes for Player (Responses)
	UPROPERTY(EditAnywhere, Category = "Modular Dialogue")
	TMap<FName, FModularDialogueNodePlayer> PlayerNodes = {};

	UFUNCTION()
	TArray<FName> GetNodeOptions_Start();
	UFUNCTION()
	TArray<FName> GetNodeOptions_NPC();
	UFUNCTION()
	TArray<FName> GetNodeOptions_Player();

#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere, Category = "Modular Dialogue")
	FString Overview;
#endif
};
