// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Node/ModularDialogueNodeActionBase.h"

#ifdef MODULARDIALOGUESYSTEM_ModularDialogueNodeActionBase_generated_h
#error "ModularDialogueNodeActionBase.generated.h already included, missing '#pragma once' in ModularDialogueNodeActionBase.h"
#endif
#define MODULARDIALOGUESYSTEM_ModularDialogueNodeActionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EModularDialogueStatus : uint8;

// ********** Begin Class UModularDialogueNodeActionBase *******************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool K2_CanAbortDialogue_Implementation(); \
	virtual bool K2_CanEndAction_Implementation(); \
	virtual void K2_EndAction_Implementation(EModularDialogueStatus DialogueStatus); \
	virtual void K2_Tick_Implementation(float DeltaTime); \
	virtual void K2_ExecuteAction_Implementation(); \
	virtual void K2_PrepareContext_Implementation(AActor* InPlayer, AActor* InNPC); \
	DECLARE_FUNCTION(execGetParameter_Player); \
	DECLARE_FUNCTION(execGetParameter_NPC); \
	DECLARE_FUNCTION(execK2_CanAbortDialogue); \
	DECLARE_FUNCTION(execK2_CanEndAction); \
	DECLARE_FUNCTION(execK2_EndAction); \
	DECLARE_FUNCTION(execK2_Tick); \
	DECLARE_FUNCTION(execK2_ExecuteAction); \
	DECLARE_FUNCTION(execK2_PrepareContext);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UModularDialogueNodeActionBase_Statics;
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueNodeActionBase(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UModularDialogueNodeActionBase_Statics; \
	friend MODULARDIALOGUESYSTEM_API UClass* ::Z_Construct_UClass_UModularDialogueNodeActionBase(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UModularDialogueNodeActionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModularDialogueSystem"), Z_Construct_UClass_UModularDialogueNodeActionBase) \
	DECLARE_SERIALIZER(UModularDialogueNodeActionBase)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularDialogueNodeActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularDialogueNodeActionBase(UModularDialogueNodeActionBase&&) = delete; \
	UModularDialogueNodeActionBase(const UModularDialogueNodeActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularDialogueNodeActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularDialogueNodeActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularDialogueNodeActionBase) \
	NO_API virtual ~UModularDialogueNodeActionBase();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_10_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularDialogueNodeActionBase;

// ********** End Class UModularDialogueNodeActionBase *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
