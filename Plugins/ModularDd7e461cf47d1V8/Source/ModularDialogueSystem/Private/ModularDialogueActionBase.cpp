// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueActionBase.h"

#include "ModularDialogueComponent.h"
#include "GameFramework/Character.h"

void UModularDialogueActionBase::PrepareContext(AActor* InPlayer, AActor* InNPC)
{
	Player = InPlayer;
	NPC = InNPC;
	K2_PrepareContext(InPlayer, InNPC);
}

UWorld* UModularDialogueActionBase::GetWorld() const
{
	if(Player) return Player->GetWorld();
	if(NPC) return NPC->GetWorld();
	
	if(const AActor* Outer = Cast<AActor>(GetOuter()))
		return Outer->GetWorld();
	
	return nullptr;
}

void UModularDialogueActionBase::K2_PrepareContext_Implementation(AActor* InPlayer, AActor* InNPC)
{
}

void UModularDialogueActionBase::K2_ExecuteAction_Implementation()
{
}

void UModularDialogueActionBase::K2_Tick_Implementation(float DeltaTime)
{
}

void UModularDialogueActionBase::K2_EndAction_Implementation(EModularDialogueStatus DialogueStatus)
{
}

void UModularDialogueActionBase::K2_OnExecutingNPCNode_Implementation(FName NodeName)
{
	
}

void UModularDialogueActionBase::K2_OnPlayerResponded_Implementation(FName ResponseNode)
{
	
}

bool UModularDialogueActionBase::K2_CanAbortDialogue_Implementation()
{
	return true;
}

UModularDialogueComponent* UModularDialogueActionBase::GetDialogueComponent_NPC()
{
	if(!IsValid(NPC)) return nullptr;
	
	if(UActorComponent* Comp = NPC->GetComponentByClass(UModularDialogueComponent::StaticClass()))
	{
		return Cast<UModularDialogueComponent>(Comp);
	}
	return nullptr;
}

UModularDialogueComponent* UModularDialogueActionBase::GetDialogueComponent_Player()
{
	if(!IsValid(Player)) return nullptr;
	
	if(UActorComponent* Comp = Player->GetComponentByClass(UModularDialogueComponent::StaticClass()))
	{
		return Cast<UModularDialogueComponent>(Comp);
	}
	return nullptr;
}

AActor* UModularDialogueActionBase::GetParameter_NPC(const FName Key)
{
	UActorComponent* Comp = NPC ? NPC->GetComponentByClass(UModularDialogueComponent::StaticClass()) : nullptr;
	if(!IsValid(Comp)) return nullptr;

	UModularDialogueComponent* DialogueComp = Cast<UModularDialogueComponent>(Comp);
	return DialogueComp->GetParameter(Key);
}

AActor* UModularDialogueActionBase::GetParameter_Player(const FName Key)
{
	UActorComponent* Comp = Player ? Player->GetComponentByClass(UModularDialogueComponent::StaticClass()) : nullptr;
	if(!IsValid(Comp)) return nullptr;

	UModularDialogueComponent* DialogueComp = Cast<UModularDialogueComponent>(Comp);
	return DialogueComp->GetParameter(Key);
}
