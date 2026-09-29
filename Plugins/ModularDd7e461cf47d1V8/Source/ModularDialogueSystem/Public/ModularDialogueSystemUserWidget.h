// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ModularDialogueSystemUserWidget.generated.h"

UCLASS(DisplayName = "Modular Dialogue System User Widget")
class MODULARDIALOGUESYSTEM_API UModularDialogueSystemUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:	
	virtual FReply NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent) override;

	// Use for updating NPC Name in the widget
	UFUNCTION(BlueprintNativeEvent)
	void UpdateNPCName(const FName& Name);
	// Use to show NPC Text for current NPC Node
	UFUNCTION(BlueprintNativeEvent)
	void UpdateNPCText(const FString& Response);
	// Use to clear out PlayerResponses to execute next NPC Node.
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Reset Player Responses")
	void K2_ResetPlayerResponses();
	// Use to add PlayerResponse for current NPC Node
	UFUNCTION(BlueprintNativeEvent, DisplayName = "Populate Player Response")
	void K2_PopulatePlayerResponse(const int32& Index, const FName& NodeName, const FString& Response);
	// Use to highlight a Player Response
	UFUNCTION(BlueprintNativeEvent)
	void HighlightPlayerResponse(const int32& Index);

	// Use to handle visibility of Next button
	UFUNCTION(BlueprintNativeEvent)
	void UpdateNextButton(const bool bIsVisible);
	// Use to handle visibility of Exit button
	UFUNCTION(BlueprintNativeEvent)
	void UpdateExitButton(const bool bIsVisible);
	
	virtual void ResetPlayerResponses();
	virtual void PopulatePlayerResponse(const FName& NodeName, const FString& Response);
	
	TArray<FName> PlayerResponseNodeNames = {};
};
