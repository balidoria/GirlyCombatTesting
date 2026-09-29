// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularDialogueSubsystem.h"

#ifdef MODULARDIALOGUESYSTEM_ModularDialogueSubsystem_generated_h
#error "ModularDialogueSubsystem.generated.h already included, missing '#pragma once' in ModularDialogueSubsystem.h"
#endif
#define MODULARDIALOGUESYSTEM_ModularDialogueSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UModularDialogueObject;
class UModularDialogueSystemUserWidget;
class UObject;
enum class EModularDialogueStatus : uint8;

// ********** Begin Class UModularDialogueSubsystem ************************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInternalOnDialogueFinished); \
	DECLARE_FUNCTION(execGetDialogueWidget); \
	DECLARE_FUNCTION(execChangeDialogueWidget); \
	DECLARE_FUNCTION(execTryStartDialogueManually); \
	DECLARE_FUNCTION(execTryStartDialogue); \
	DECLARE_FUNCTION(execAbortExecutingDialogue); \
	DECLARE_FUNCTION(execGetExecutingDialogue);


struct Z_Construct_UClass_UModularDialogueSubsystem_Statics;
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSubsystem(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UModularDialogueSubsystem_Statics; \
	friend MODULARDIALOGUESYSTEM_API UClass* ::Z_Construct_UClass_UModularDialogueSubsystem(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UModularDialogueSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularDialogueSystem"), Z_Construct_UClass_UModularDialogueSubsystem) \
	DECLARE_SERIALIZER(UModularDialogueSubsystem)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularDialogueSubsystem(UModularDialogueSubsystem&&) = delete; \
	UModularDialogueSubsystem(const UModularDialogueSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularDialogueSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularDialogueSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModularDialogueSubsystem) \
	NO_API virtual ~UModularDialogueSubsystem();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_23_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularDialogueSubsystem;

// ********** End Class UModularDialogueSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
