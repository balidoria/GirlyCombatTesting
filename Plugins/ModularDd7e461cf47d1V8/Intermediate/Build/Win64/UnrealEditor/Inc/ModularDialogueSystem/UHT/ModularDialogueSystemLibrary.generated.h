// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularDialogueSystemLibrary.h"

#ifdef MODULARDIALOGUESYSTEM_ModularDialogueSystemLibrary_generated_h
#error "ModularDialogueSystemLibrary.generated.h already included, missing '#pragma once' in ModularDialogueSystemLibrary.h"
#endif
#define MODULARDIALOGUESYSTEM_ModularDialogueSystemLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EModularDialogueSystemInputEvents : uint8;
struct FKey;

// ********** Begin ScriptStruct FModularDialogueSystemEvents **************************************
struct Z_Construct_UScriptStruct_FModularDialogueSystemEvents_Statics;
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueSystemEvents(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularDialogueSystemEvents_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FModularDialogueSystemEvents(ETypeConstructPhase::Inner); }


struct FModularDialogueSystemEvents;
// ********** End ScriptStruct FModularDialogueSystemEvents ****************************************

// ********** Begin Class UModularDialogueSystemLibrary ********************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputEventType); \
	DECLARE_FUNCTION(execGetInputEventKey); \
	DECLARE_FUNCTION(execOnPlayerResponseHovered); \
	DECLARE_FUNCTION(execOnInputReceived); \
	DECLARE_FUNCTION(execOnPlayerResponded);


struct Z_Construct_UClass_UModularDialogueSystemLibrary_Statics;
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemLibrary(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UModularDialogueSystemLibrary_Statics; \
	friend MODULARDIALOGUESYSTEM_API UClass* ::Z_Construct_UClass_UModularDialogueSystemLibrary(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UModularDialogueSystemLibrary, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularDialogueSystem"), Z_Construct_UClass_UModularDialogueSystemLibrary) \
	DECLARE_SERIALIZER(UModularDialogueSystemLibrary)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularDialogueSystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularDialogueSystemLibrary(UModularDialogueSystemLibrary&&) = delete; \
	UModularDialogueSystemLibrary(const UModularDialogueSystemLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularDialogueSystemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularDialogueSystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularDialogueSystemLibrary) \
	NO_API virtual ~UModularDialogueSystemLibrary();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_25_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularDialogueSystemLibrary;

// ********** End Class UModularDialogueSystemLibrary **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
