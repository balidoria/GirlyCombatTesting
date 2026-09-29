// Copyright Game Elements Lab 2026 All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ModularDialogueComponent.generated.h"


class UModularDialogueNodeActionBase;
class UModularDialogueSystemDataAsset;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MODULARDIALOGUESYSTEM_API UModularDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UModularDialogueComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	
	// In the Dialogue Widget, it can be shown.
	// Not used for Player.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Modular Dialogue|NPC")
	FName NPC_Name = "";

	// Maximum range of dialogue interaction.
	// ** Not used for Player. **
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Modular Dialogue|NPC")
	float OverlapRadius = 500.f;
	// In addition to OverlapRadius, should we check for LineTrace for dialogue interaction?
	// ** Not used for Player. **
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Modular Dialogue|NPC")
	bool bCheckLineTrace;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Modular Dialogue|NPC", meta=(EditCondition = "bCheckLineTrace", EditConditionHides))
	TEnumAsByte<ECollisionChannel> LineTraceChannel = ECC_Visibility;
	
	// Dialogue set to execute when the Dialogue starts.
	// ** Not used for Player. **
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Modular Dialogue|NPC")
	TObjectPtr<UModularDialogueSystemDataAsset> DialogueSet = nullptr;

	// To get an Actor determined in Parameters variable.
	//	Returns nullptr if not found.
	UFUNCTION(BlueprintPure, Category = "Modular Dialogue")
	AActor* GetParameter(FName Key);

protected:
	// Modularity to reference any actor in the world to get access easily in Component or Dialogue Actions.
	// Can be used for both NPC and Player.
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Modular Dialogue")
	TMap<FName, TSoftObjectPtr<AActor>> Parameters = {};
};