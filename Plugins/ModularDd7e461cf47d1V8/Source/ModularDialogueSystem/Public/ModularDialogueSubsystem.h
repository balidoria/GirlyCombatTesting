// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ModularDialogueSubsystem.generated.h"


class UModularDialogueSystemInputAction;
class UModularDialogueObject;
class UModularDialogueSystemUserWidget;
class UModularDialogueComponent;
class UModularDialogueSystemDataAsset;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModularGlobalOnDialogueStarted, UModularDialogueObject*, DialogueObject);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModularGlobalOnDialogueFinished, UModularDialogueObject*, DialogueObject, EModularDialogueStatus, Status);

/**
 * 
 */
UCLASS()
class MODULARDIALOGUESYSTEM_API UModularDialogueSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

	UModularDialogueSubsystem();

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void Deinitialize() override;

public:
	static UModularDialogueSubsystem* Get(UObject* WorldContextObject);

	// Getter for currently executing Dialogue
	UFUNCTION(BlueprintCallable, meta=(DefaultToSelf = WorldContextObject), Category = "Modular Dialogue")
	static UModularDialogueObject* GetExecutingDialogue(UObject* WorldContextObject);
	// Aborts currently executing Dialogue
	UFUNCTION(BlueprintCallable, meta=(DefaultToSelf = WorldContextObject), Category = "Modular Dialogue")
	static bool AbortExecutingDialogue(UObject* WorldContextObject);

	// Registers DialogueComponent to system, normally no need to call this manually.
	//  DialogueComponent itself automatically registers itself in BeginPlay.
	static void RegisterComponent(UModularDialogueComponent* InComponent);

	// Stars to Dialogue with the NPC selected by System itself (InteractionWidget assigned one)
	//  Should be called from Input Event by Player itself.
	UFUNCTION(BlueprintCallable, Category = "Modular Dialogue")
	static bool TryStartDialogue(AActor* Player);

	// Should be used for Scripted scenarios.
	//  System tries to start Dialogue with the given Player and NPC
	UFUNCTION(BlueprintCallable, Category = "Modular Dialogue")
	static bool TryStartDialogueManually(AActor* Player, AActor* NPC);

	// Updates DialogueWidget with the given Widget.
	//  Doesn't work if there is an Dialogue with "Executing" status.
	//  Works at the start of Dialogue or end of Dialogue. Can be called from DialogueAction's PrepareContext or EndAction.
	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = WorldContextObject), Category = "Modular Dialogue")
	static bool ChangeDialogueWidget(UObject* WorldContextObject, UModularDialogueSystemUserWidget* NewWidget);
	// Getter for DialogueWidget system uses.
	UFUNCTION(BlueprintPure, meta = (DefaultToSelf = WorldContextObject), Category = "Modular Dialogue")
	static UModularDialogueSystemUserWidget* GetDialogueWidget(UObject* WorldContextObject);

protected:
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

	// Tries to start dialogue and if started handles widgets.
	virtual bool ExecuteDialogue(AActor* Player, AActor* NPC, UModularDialogueSystemDataAsset* DialogueSet);
	// Tries to start dialogue only.
	virtual bool InternalExecuteDialogue(AActor* Player, AActor* NPC, UModularDialogueSystemDataAsset* DialogueSet);

	// Bound to Dialogue's Finished event.
	UFUNCTION()
	void InternalOnDialogueFinished();
	// Handles interaction widget and updates SelectedComponent.
	virtual void HandleInteraction();

	// Currently executing Dialogue
	TObjectPtr<UModularDialogueObject> ExecutingDialogue = nullptr;

	// Player's DialogueComponent
	UPROPERTY()
	TObjectPtr<UModularDialogueComponent> PlayerComponent = nullptr;
	// Registered NPC Dialogue Components
	UPROPERTY()
	TArray<TObjectPtr<UModularDialogueComponent>> RegisteredComponents = {};
	// Selected NPC Dialogue Component
	UPROPERTY()
	TObjectPtr<UModularDialogueComponent> SelectedComponent = nullptr;

	// Input action to be triggered when Dialogue is started and ended.
	UPROPERTY()
	TObjectPtr<UModularDialogueSystemInputAction> InputAction = nullptr;
	// Interaction widget to assign selected NPC's widget component.
	UPROPERTY()
	TObjectPtr<UModularDialogueSystemUserWidget> InteractionWidget = nullptr;
	// Dialogue's UI itself
	UPROPERTY()
	TObjectPtr<UModularDialogueSystemUserWidget> DialogueWidget = nullptr;

	// **********************************************************
	// ** Global events for gameplay system, feel free to bind **
	// **********************************************************
	UPROPERTY(BlueprintAssignable)
	FModularGlobalOnDialogueStarted OnDialogueStarted;
	UPROPERTY(BlueprintAssignable)
	FModularGlobalOnDialogueFinished OnDialogueFinished;
};
