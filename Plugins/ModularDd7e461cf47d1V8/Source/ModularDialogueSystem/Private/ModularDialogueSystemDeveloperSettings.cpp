// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueSystemDeveloperSettings.h"

#include "ModularDialogueSystemInputAction.h"
#include "ModularDialogueSystemUserWidget.h"

// Default value assignment for the plugin.
UModularDialogueSystemDeveloperSettings::UModularDialogueSystemDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(DialogueWidget.Get() == nullptr)
	{
		const FSoftClassPath WidgetPath(TEXT("/ModularDialogueSystem/Widgets/WBP_DialogueWidget.WBP_DialogueWidget_C"));
		DialogueWidget = WidgetPath.TryLoadClass<UModularDialogueSystemUserWidget>();
	}
	if(InteractionWidget.Get() == nullptr)
	{
		const FSoftClassPath InteractionPath(TEXT("/ModularDialogueSystem/Widgets/WBP_InteractionWidget.WBP_InteractionWidget_C"));
		InteractionWidget = InteractionPath.TryLoadClass<UModularDialogueSystemUserWidget>();
	}
	if(InputAction.Get() == nullptr)
	{
		const FSoftClassPath ActionPath(TEXT("/ModularDialogueSystem/Assets/BP_DialogueSystem_InputAction.BP_DialogueSystem_InputAction_C"));
		InputAction = ActionPath.TryLoadClass<UModularDialogueSystemInputAction>();
	}

	if(InputEvents.IsEmpty())
	{
		InputEvents.Add(EKeys::Up, EModularDialogueSystemInputEvents::Event_Up);
		InputEvents.Add(EKeys::Down, EModularDialogueSystemInputEvents::Event_Down);
		InputEvents.Add(EKeys::SpaceBar, EModularDialogueSystemInputEvents::Event_Skip);
		InputEvents.Add(EKeys::Escape, EModularDialogueSystemInputEvents::Event_Close);
		InputEvents.Add(EKeys::Enter, EModularDialogueSystemInputEvents::Event_Select);
		InputEvents.Add(EKeys::One, EModularDialogueSystemInputEvents::Event_Select_1);
		InputEvents.Add(EKeys::NumPadOne, EModularDialogueSystemInputEvents::Event_Select_1);
		InputEvents.Add(EKeys::Two, EModularDialogueSystemInputEvents::Event_Select_2);
		InputEvents.Add(EKeys::NumPadTwo, EModularDialogueSystemInputEvents::Event_Select_2);
		InputEvents.Add(EKeys::Three, EModularDialogueSystemInputEvents::Event_Select_3);
		InputEvents.Add(EKeys::NumPadThree, EModularDialogueSystemInputEvents::Event_Select_3);
		InputEvents.Add(EKeys::Four, EModularDialogueSystemInputEvents::Event_Select_4);
		InputEvents.Add(EKeys::NumPadFour, EModularDialogueSystemInputEvents::Event_Select_4);
		InputEvents.Add(EKeys::Five, EModularDialogueSystemInputEvents::Event_Select_5);
		InputEvents.Add(EKeys::NumPadFive, EModularDialogueSystemInputEvents::Event_Select_5);
		InputEvents.Add(EKeys::Six, EModularDialogueSystemInputEvents::Event_Select_6);
		InputEvents.Add(EKeys::NumPadSix, EModularDialogueSystemInputEvents::Event_Select_6);
		InputEvents.Add(EKeys::Seven, EModularDialogueSystemInputEvents::Event_Select_7);
		InputEvents.Add(EKeys::NumPadSeven, EModularDialogueSystemInputEvents::Event_Select_7);
		InputEvents.Add(EKeys::Eight, EModularDialogueSystemInputEvents::Event_Select_8);
		InputEvents.Add(EKeys::NumPadEight, EModularDialogueSystemInputEvents::Event_Select_8);
		InputEvents.Add(EKeys::Nine, EModularDialogueSystemInputEvents::Event_Select_9);
		InputEvents.Add(EKeys::NumPadNine, EModularDialogueSystemInputEvents::Event_Select_9);
		
		InputEvents.Add(EKeys::Gamepad_DPad_Up, EModularDialogueSystemInputEvents::Event_Up);
		InputEvents.Add(EKeys::Gamepad_DPad_Down, EModularDialogueSystemInputEvents::Event_Down);
		InputEvents.Add(EKeys::Gamepad_LeftStick_Up, EModularDialogueSystemInputEvents::Event_Up);
		InputEvents.Add(EKeys::Gamepad_LeftStick_Down, EModularDialogueSystemInputEvents::Event_Down);
		InputEvents.Add(EKeys::Gamepad_RightStick_Up, EModularDialogueSystemInputEvents::Event_Up);
		InputEvents.Add(EKeys::Gamepad_RightStick_Down, EModularDialogueSystemInputEvents::Event_Down);
		InputEvents.Add(EKeys::Gamepad_FaceButton_Left, EModularDialogueSystemInputEvents::Event_Skip);
		InputEvents.Add(EKeys::Gamepad_FaceButton_Bottom, EModularDialogueSystemInputEvents::Event_Select);
		InputEvents.Add(EKeys::Gamepad_FaceButton_Right, EModularDialogueSystemInputEvents::Event_Close);
	}
}
