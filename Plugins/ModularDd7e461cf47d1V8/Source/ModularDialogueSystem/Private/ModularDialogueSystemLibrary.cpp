// Copyright Game Elements Lab 2026 All Rights Reserved.

#include "ModularDialogueSystemLibrary.h"

#include "ModularDialogueSystemDeveloperSettings.h"

FModularOnPlayerResponded FModularDialogueSystemEvents::OnPlayerResponded;
FModularOnInputReceived FModularDialogueSystemEvents::OnInputReceived;
FModularOnPlayerResponseHovered FModularDialogueSystemEvents::OnPlayerResponseHovered;

void UModularDialogueSystemLibrary::OnPlayerResponded(FName Response)
{
	FModularDialogueSystemEvents::OnPlayerResponded.Broadcast(Response);
}

void UModularDialogueSystemLibrary::OnInputReceived(FKey Key)
{
	FModularDialogueSystemEvents::OnInputReceived.Broadcast(Key);
}

void UModularDialogueSystemLibrary::OnPlayerResponseHovered(int32 IndexResponse)
{
	FModularDialogueSystemEvents::OnPlayerResponseHovered.Broadcast(IndexResponse);
}

bool UModularDialogueSystemLibrary::GetInputEventKey(EModularDialogueSystemInputEvents InEvent, FKey& OutKey)
{
	if(const FKey* OutKeyPtr = GetDefault<UModularDialogueSystemDeveloperSettings>()->InputEvents.FindKey(InEvent))
	{
		OutKey = *OutKeyPtr;
		return true;
	}
	return false;
}

bool UModularDialogueSystemLibrary::GetInputEventType(FKey InKey, EModularDialogueSystemInputEvents& OutEvent)
{
	if(const EModularDialogueSystemInputEvents* OutEventPtr = GetDefault<UModularDialogueSystemDeveloperSettings>()->InputEvents.Find(InKey))
	{
		OutEvent = *OutEventPtr;
		return true;
	}
	return false;
}
