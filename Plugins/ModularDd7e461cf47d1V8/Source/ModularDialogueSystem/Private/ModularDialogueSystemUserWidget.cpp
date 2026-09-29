// Copyright Game Elements Lab 2026 All Rights Reserved.

#include "ModularDialogueSystemUserWidget.h"

#include "ModularDialogueSystemLibrary.h"

FReply UModularDialogueSystemUserWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	FModularDialogueSystemEvents::OnInputReceived.Broadcast((InKeyEvent.GetKey()));
	return FReply::Handled();
}

void UModularDialogueSystemUserWidget::UpdateNPCName_Implementation(const FName& Name)
{
	ensureMsgf(false, TEXT("This function should be overridden in blueprint!"));
}

void UModularDialogueSystemUserWidget::UpdateNPCText_Implementation(const FString& Response)
{
	ensureMsgf(false, TEXT("This function should be overridden in blueprint!"));
}

void UModularDialogueSystemUserWidget::K2_ResetPlayerResponses_Implementation()
{
	ensureMsgf(false, TEXT("This function should be overridden in blueprint!"));
}

void UModularDialogueSystemUserWidget::K2_PopulatePlayerResponse_Implementation(const int32& Index, const FName& NodeName, const FString& Response)
{
	ensureMsgf(false, TEXT("This function should be overridden in blueprint!"));
}

void UModularDialogueSystemUserWidget::UpdateNextButton_Implementation(const bool bIsVisible)
{
	
}

void UModularDialogueSystemUserWidget::UpdateExitButton_Implementation(const bool bIsVisible)
{

}

void UModularDialogueSystemUserWidget::HighlightPlayerResponse_Implementation(const int32& Index)
{
	ensureMsgf(false, TEXT("This function should be overridden in blueprint!"));
}

void UModularDialogueSystemUserWidget::ResetPlayerResponses()
{
	PlayerResponseNodeNames.Empty();
	K2_ResetPlayerResponses();
}

void UModularDialogueSystemUserWidget::PopulatePlayerResponse(const FName& NodeName, const FString& Response)
{
	K2_PopulatePlayerResponse(PlayerResponseNodeNames.Num(), NodeName, Response);
	PlayerResponseNodeNames.Add(NodeName);
}