// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "Node/ModularDialogueNodeActionBase.h"


#include "ModularDialogueComponent.h"
#include "GameFramework/Character.h"

void UModularDialogueNodeActionBase::PrepareContext(AActor* InPlayer, AActor* InNPC)
{
	Player = InPlayer;
	NPC = InNPC;
	K2_PrepareContext(InPlayer, InNPC);
}

UWorld* UModularDialogueNodeActionBase::GetWorld() const
{
	if(Player) return Player->GetWorld();
	if(NPC) return NPC->GetWorld();
	
	if(const AActor* Outer = Cast<AActor>(GetOuter()))
		return Outer->GetWorld();
	
	return nullptr;
}

void UModularDialogueNodeActionBase::K2_PrepareContext_Implementation(AActor* InPlayer, AActor* InNPC)
{
}

void UModularDialogueNodeActionBase::K2_ExecuteAction_Implementation()
{
}

void UModularDialogueNodeActionBase::K2_Tick_Implementation(float DeltaTime)
{
}

void UModularDialogueNodeActionBase::K2_EndAction_Implementation(EModularDialogueStatus DialogueStatus)
{
}

bool UModularDialogueNodeActionBase::K2_CanEndAction_Implementation()
{
	return true;
}

bool UModularDialogueNodeActionBase::K2_CanAbortDialogue_Implementation()
{
	return true;
}

AActor* UModularDialogueNodeActionBase::GetParameter_NPC(const FName Key) const
{
	if(!IsValid(NPC)) return nullptr;

	UActorComponent* Comp = NPC ? NPC->GetComponentByClass(UModularDialogueComponent::StaticClass()) : nullptr;
	if(!IsValid(Comp)) return nullptr;

	UModularDialogueComponent* DialogueComp = Cast<UModularDialogueComponent>(Comp);
	return DialogueComp->GetParameter(Key);
}

AActor* UModularDialogueNodeActionBase::GetParameter_Player(const FName Key) const
{
	if(!IsValid(Player)) return nullptr;

	UActorComponent* Comp = Player ? Player->GetComponentByClass(UModularDialogueComponent::StaticClass()) : nullptr;
	if(!IsValid(Comp)) return nullptr;

	UModularDialogueComponent* DialogueComp = Cast<UModularDialogueComponent>(Comp);
	return DialogueComp->GetParameter(Key);
}
