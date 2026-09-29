// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularDialogueActionBase.h"

#ifdef MODULARDIALOGUESYSTEM_ModularDialogueActionBase_generated_h
#error "ModularDialogueActionBase.generated.h already included, missing '#pragma once' in ModularDialogueActionBase.h"
#endif
#define MODULARDIALOGUESYSTEM_ModularDialogueActionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UModularDialogueComponent;
enum class EModularDialogueStatus : uint8;

// ********** Begin Class UModularDialogueActionBase ***********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool K2_CanAbortDialogue_Implementation(); \
	virtual void K2_OnPlayerResponded_Implementation(FName ResponseNode); \
	virtual void K2_OnExecutingNPCNode_Implementation(FName NodeName); \
	virtual void K2_EndAction_Implementation(EModularDialogueStatus DialogueStatus); \
	virtual void K2_Tick_Implementation(float DeltaTime); \
	virtual void K2_ExecuteAction_Implementation(); \
	virtual void K2_PrepareContext_Implementation(AActor* InPlayer, AActor* InNPC); \
	DECLARE_FUNCTION(execGetParameter_Player); \
	DECLARE_FUNCTION(execGetParameter_NPC); \
	DECLARE_FUNCTION(execGetDialogueComponent_Player); \
	DECLARE_FUNCTION(execGetDialogueComponent_NPC); \
	DECLARE_FUNCTION(execK2_CanAbortDialogue); \
	DECLARE_FUNCTION(execK2_OnPlayerResponded); \
	DECLARE_FUNCTION(execK2_OnExecutingNPCNode); \
	DECLARE_FUNCTION(execK2_EndAction); \
	DECLARE_FUNCTION(execK2_Tick); \
	DECLARE_FUNCTION(execK2_ExecuteAction); \
	DECLARE_FUNCTION(execK2_PrepareContext);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UModularDialogueActionBase_Statics;
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UModularDialogueActionBase_Statics; \
	friend MODULARDIALOGUESYSTEM_API UClass* ::Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UModularDialogueActionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModularDialogueSystem"), Z_Construct_UClass_UModularDialogueActionBase) \
	DECLARE_SERIALIZER(UModularDialogueActionBase)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularDialogueActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularDialogueActionBase(UModularDialogueActionBase&&) = delete; \
	UModularDialogueActionBase(const UModularDialogueActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularDialogueActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularDialogueActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularDialogueActionBase) \
	NO_API virtual ~UModularDialogueActionBase();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_12_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularDialogueActionBase;

// ********** End Class UModularDialogueActionBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
