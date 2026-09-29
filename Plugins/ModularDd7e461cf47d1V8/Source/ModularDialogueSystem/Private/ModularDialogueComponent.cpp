// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueComponent.h"
#include "ModularDialogueSubsystem.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UModularDialogueComponent::UModularDialogueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UModularDialogueComponent::BeginPlay()
{
	Super::BeginPlay();
	UModularDialogueSubsystem::RegisterComponent(this);
}

AActor* UModularDialogueComponent::GetParameter(const FName Key)
{
	if(const TSoftObjectPtr<AActor>* Value = Parameters.Find(Key))
	{
		return (*Value).Get();
	}
	return nullptr;
}
