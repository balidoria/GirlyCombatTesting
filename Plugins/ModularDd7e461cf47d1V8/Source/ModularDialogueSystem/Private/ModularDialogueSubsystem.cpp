// Copyright Game Elements Lab 2026 All Rights Reserved.


#include "ModularDialogueSubsystem.h"

#include "ModularDialogueComponent.h"
#include "ModularDialogueObject.h"
#include "ModularDialogueSystemDataAsset.h"
#include "ModularDialogueSystemDeveloperSettings.h"
#include "ModularDialogueSystemInputAction.h"
#include "ModularDialogueSystemUserWidget.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/Pawn.h"

#include "Engine/Engine.h"
#include "Engine/World.h"

UModularDialogueSubsystem::UModularDialogueSubsystem()
{
}

void UModularDialogueSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	const UModularDialogueSystemDeveloperSettings* SystemSettings = GetDefault<UModularDialogueSystemDeveloperSettings>();
	if(!IsValid(SystemSettings))
		return;
	
	// Initialize InputAction from Settings
	if(TSubclassOf<UModularDialogueSystemInputAction> InputActionSubclass = SystemSettings->InputAction)
	{
		InputAction = NewObject<UModularDialogueSystemInputAction>(this, InputActionSubclass);
		InputAction->World = &InWorld;
	}
	// Initialize InteractionWidget from Settings
	if(TSubclassOf<UModularDialogueSystemUserWidget> InteractionWidgetSubclass = SystemSettings->InteractionWidget)
	{
		InteractionWidget = CreateWidget<UModularDialogueSystemUserWidget>(GetWorld()->GetFirstPlayerController(), InteractionWidgetSubclass);
		InteractionWidget->SetVisibility(ESlateVisibility::Hidden);
	}
	// Initialize DialogueWidget from Settings
	if(TSubclassOf<UModularDialogueSystemUserWidget> DialogueWidgetSubclass = SystemSettings->DialogueWidget)
	{
		DialogueWidget = CreateWidget<UModularDialogueSystemUserWidget>(GetWorld()->GetFirstPlayerController(), DialogueWidgetSubclass);
		DialogueWidget->SetVisibility(ESlateVisibility::Hidden);
	}

	ensureMsgf(IsValid(DialogueWidget), TEXT("ModularDialogueSystem:: Missing Dialogue Widget!"));
	ensureMsgf(IsValid(InteractionWidget), TEXT("ModularDialogueSystem:: Missing Interaction Widget!"));
}

void UModularDialogueSubsystem::Deinitialize()
{
	if(IsValid(ExecutingDialogue))
	{
		ExecutingDialogue->OnDialogueFinished.RemoveDynamic(this, &ThisClass::InternalOnDialogueFinished);
		ExecutingDialogue->FinishDialogue(EModularDialogueStatus::Status_Aborted);
		ExecutingDialogue->RemoveFromRoot();
		ExecutingDialogue = nullptr;
	}
	Super::Deinitialize();
}

UModularDialogueSubsystem* UModularDialogueSubsystem::Get(UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		return World->GetSubsystem<UModularDialogueSubsystem>();
	}

	return nullptr;
}

UModularDialogueObject* UModularDialogueSubsystem::GetExecutingDialogue(UObject* WorldContextObject)
{
	if (const UModularDialogueSubsystem* Self = Get(WorldContextObject))
	{
		return Self->ExecutingDialogue;
	}
	return nullptr;
}

bool UModularDialogueSubsystem::AbortExecutingDialogue(UObject* WorldContextObject)
{
	if (const UModularDialogueSubsystem* Self = Get(WorldContextObject))
	{
		if(IsValid(Self->ExecutingDialogue))
		{
			Self->ExecutingDialogue->FinishDialogue(EModularDialogueStatus::Status_Aborted);
			return true;
		}
	}
	return false;
}

void UModularDialogueSubsystem::RegisterComponent(UModularDialogueComponent* InComponent)
{
	if(IsValid(InComponent))
	{
		if(UModularDialogueSubsystem* Self = Get(InComponent))
		{
			if(const APawn* Owner = Cast<APawn>(InComponent->GetOwner()))
			{
				if(Owner->IsPlayerControlled())
				{
					Self->PlayerComponent = InComponent;
					return;
				}
			}
			
			Self->RegisteredComponents.AddUnique(InComponent);
		}
	}
}

bool UModularDialogueSubsystem::TryStartDialogue(AActor* Player)
{
	if(UModularDialogueSubsystem* Self = Get(Player))
	{
		ensureMsgf(IsValid(Self->PlayerComponent), TEXT("ModularDialogueSystem:: Missing ModularDialogueComponent for PlayerCharacter!"));
		
		if(IsValid(Self->SelectedComponent))
		{
			// Try to start dialogue with given Player and selected NPC
			return Self->ExecuteDialogue(Player, Self->SelectedComponent->GetOwner(), Self->SelectedComponent->DialogueSet);
		}
	}
	return false;
}

bool UModularDialogueSubsystem::TryStartDialogueManually(AActor* Player, AActor* NPC)
{
	if(UModularDialogueSubsystem* Self = Get(Player))
	{
		// Does given NPC has DialogueComponent
		UActorComponent* NPCComponent = NPC->GetComponentByClass(UModularDialogueComponent::StaticClass());
		if(UModularDialogueComponent* NPCDialogueComponent = Cast<UModularDialogueComponent>(NPCComponent))
		{
			// Try to start dialogue with given Player and NPC
			Self->SelectedComponent = NPCDialogueComponent;
			return Self->ExecuteDialogue(Player, NPC, NPCDialogueComponent->DialogueSet);
		}
	}
	return false;
}

bool UModularDialogueSubsystem::ChangeDialogueWidget(UObject* WorldContextObject, UModularDialogueSystemUserWidget* NewWidget)
{
	if(!IsValid(NewWidget)) return false;
	
	if(UModularDialogueSubsystem* Self = Get(WorldContextObject))
	{
		if(!IsValid(Self->ExecutingDialogue) || Self->ExecutingDialogue->Status != EModularDialogueStatus::Status_Executing)
		{
			Self->DialogueWidget = NewWidget;
			return true;
		}
	}
	return false;
}

UModularDialogueSystemUserWidget* UModularDialogueSubsystem::GetDialogueWidget(UObject* WorldContextObject)
{
	if(UModularDialogueSubsystem* Self = Get(WorldContextObject))
	{
		return Self->DialogueWidget;
	}
	return nullptr;
}

void UModularDialogueSubsystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if(!ExecutingDialogue)
	{
		HandleInteraction();
	}
	// If Dialogue started, we should reset interaction widget and the SelectedComponent.
	else if(SelectedComponent)
	{
		if (UWidgetComponent* WidgetComp = Cast<UWidgetComponent>(SelectedComponent->GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass())))
		{
			WidgetComp->SetWidget(nullptr);
			InteractionWidget->SetVisibility(ESlateVisibility::Hidden);
		}
		
		SelectedComponent = nullptr;
	}
}

TStatId UModularDialogueSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UModularDialogueSubsystem, STATGROUP_Tickables);
}

bool UModularDialogueSubsystem::ExecuteDialogue(AActor* Player, AActor* NPC, UModularDialogueSystemDataAsset* DialogueSet)
{
	if(!IsValid(Player) || !IsValid(NPC) || !IsValid(DialogueSet) || !IsValid(DialogueWidget))
		return false;

	// We need to make sure that parameter Player is an actual Player with the DialogueComponent.
	const APawn* PlayerPawn = Cast<APawn>(Player);
	if(!IsValid(PlayerPawn) || !PlayerPawn->IsPlayerControlled() || !IsValid(Player->GetComponentByClass(UModularDialogueComponent::StaticClass())))
		return false;

	// Try to start dialogue
	if(InternalExecuteDialogue(Player, NPC, DialogueSet))
	{
		// Dialogue is started, widget can be initialized.
		DialogueWidget->AddToViewport(10);
		DialogueWidget->SetVisibility(ESlateVisibility::Visible);
		DialogueWidget->UpdateExitButton(false);
		DialogueWidget->UpdateNPCName(SelectedComponent->NPC_Name);
		// Trigger InputAction to handle input
		if(IsValid(InputAction)) InputAction->OnDialogueStarted(DialogueWidget);
		return true;
	}
	return false;
}

bool UModularDialogueSubsystem::InternalExecuteDialogue(AActor* Player, AActor* NPC, UModularDialogueSystemDataAsset* DialogueSet)
{
	// If there is any executing dialogue, abort it first.
	if(IsValid(ExecutingDialogue))
	{
		ExecutingDialogue->OnDialogueFinished.RemoveDynamic(this, &ThisClass::InternalOnDialogueFinished);
		ExecutingDialogue->FinishDialogue(EModularDialogueStatus::Status_Aborted);
		ExecutingDialogue->RemoveFromRoot();
	}

	// Create new Dialogue
	ExecutingDialogue = NewObject<UModularDialogueObject>(this);
	ExecutingDialogue->AddToRoot();
	
	// Dialogue can fail from PrepareContext, bind event first
	ExecutingDialogue->OnDialogueFinished.AddDynamic(this, &ThisClass::InternalOnDialogueFinished);
	// Start Dialogue's process
	ExecutingDialogue->PrepareContext(Player, NPC, DialogueSet);

	// If Dialogue fails with PrepareContext, ExecutingDialogue set to nullptr. Simply check if ExecutingDialogue is valid.
	return IsValid(ExecutingDialogue);
}

void UModularDialogueSubsystem::InternalOnDialogueFinished()
{
	if(IsValid(ExecutingDialogue))
	{
		// Trigger InputAction to handle input
		if(IsValid(InputAction)) InputAction->OnDialogueFinished();

		// Clear out ExecutingDialogue
		ExecutingDialogue->OnDialogueFinished.RemoveDynamic(this, &ThisClass::InternalOnDialogueFinished);
		ExecutingDialogue->RemoveFromRoot();
		ExecutingDialogue = nullptr;

		// Hide DialogueWidget
		if(IsValid(DialogueWidget))
		{
			DialogueWidget->SetVisibility(ESlateVisibility::Hidden);
			DialogueWidget->RemoveFromParent();
		}
	}
}

void UModularDialogueSubsystem::HandleInteraction()
{
	if(!PlayerComponent || RegisteredComponents.IsEmpty() || !InteractionWidget)
		return;
	
	const FVector PlayerLoc = PlayerComponent->GetOwner()->GetActorLocation();

	// Find closest available NPC first. 
	double MinDist = BIG_NUMBER; UModularDialogueComponent* InSelectedComponent = nullptr;
	for(int32 i = 0; i < RegisteredComponents.Num(); ++i)
	{
		UModularDialogueComponent* Comp = RegisteredComponents[i];
		if(IsValid(Comp) && IsValid(Comp->DialogueSet))
		{
			const FVector CompLoc = Comp->GetOwner()->GetActorLocation();
			const double Dist = FVector::DistSquared(PlayerLoc, CompLoc);
			const double OverlapRadiusSq = Comp->OverlapRadius * Comp->OverlapRadius;
			
			if(MinDist > Dist &&  Dist <= OverlapRadiusSq)
			{
				// Should we check LineTrace?
				if(Comp->bCheckLineTrace && GetWorld())
				{
					FHitResult HitResult = {};
					GetWorld()->LineTraceSingleByChannel(HitResult, PlayerLoc, CompLoc, Comp->LineTraceChannel);
					// Line trace failed, can't select this NPC
					if(HitResult.bBlockingHit) continue;
				}

				// Select iterating NPC.
				MinDist = Dist;
				InSelectedComponent = Comp;
			}
		}
	}

	// If both are same component, do nothing.
	if(InSelectedComponent == SelectedComponent)
		return;

	// Clear Interaction widget from old Selected NPC
	if(SelectedComponent)
	{
		// We should reset the previous component first.
		if (UWidgetComponent* WidgetComp = Cast<UWidgetComponent>(SelectedComponent->GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass())))
		{
			WidgetComp->SetWidget(nullptr);
		}
	}

	// Select new NPC and assign Interaction Widget
	SelectedComponent = InSelectedComponent;
	if(SelectedComponent)
	{
		// Now activate interaction widget for the new component.
		if (UWidgetComponent* WidgetComp = Cast<UWidgetComponent>(InSelectedComponent->GetOwner()->GetComponentByClass(UWidgetComponent::StaticClass())))
		{
			WidgetComp->SetWidget(InteractionWidget);
			InteractionWidget->SetVisibility(ESlateVisibility::HitTestInvisible);
			return;
		}
	}
	
	// Couldn't set widget, we should hide it. 
	InteractionWidget->SetVisibility(ESlateVisibility::Hidden);
}
