// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ModularDialogueSystemUserWidget.h"

#ifdef MODULARDIALOGUESYSTEM_ModularDialogueSystemUserWidget_generated_h
#error "ModularDialogueSystemUserWidget.generated.h already included, missing '#pragma once' in ModularDialogueSystemUserWidget.h"
#endif
#define MODULARDIALOGUESYSTEM_ModularDialogueSystemUserWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UModularDialogueSystemUserWidget *****************************************
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateExitButton_Implementation(bool bIsVisible); \
	virtual void UpdateNextButton_Implementation(bool bIsVisible); \
	virtual void HighlightPlayerResponse_Implementation(int32 const& Index); \
	virtual void K2_PopulatePlayerResponse_Implementation(int32 const& Index, FName const& NodeName, const FString& Response); \
	virtual void K2_ResetPlayerResponses_Implementation(); \
	virtual void UpdateNPCText_Implementation(const FString& Response); \
	virtual void UpdateNPCName_Implementation(FName const& Name); \
	DECLARE_FUNCTION(execUpdateExitButton); \
	DECLARE_FUNCTION(execUpdateNextButton); \
	DECLARE_FUNCTION(execHighlightPlayerResponse); \
	DECLARE_FUNCTION(execK2_PopulatePlayerResponse); \
	DECLARE_FUNCTION(execK2_ResetPlayerResponses); \
	DECLARE_FUNCTION(execUpdateNPCText); \
	DECLARE_FUNCTION(execUpdateNPCName);


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UModularDialogueSystemUserWidget_Statics;
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UModularDialogueSystemUserWidget_Statics; \
	friend MODULARDIALOGUESYSTEM_API UClass* ::Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UModularDialogueSystemUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularDialogueSystem"), Z_Construct_UClass_UModularDialogueSystemUserWidget) \
	DECLARE_SERIALIZER(UModularDialogueSystemUserWidget)


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModularDialogueSystemUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UModularDialogueSystemUserWidget(UModularDialogueSystemUserWidget&&) = delete; \
	UModularDialogueSystemUserWidget(const UModularDialogueSystemUserWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularDialogueSystemUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularDialogueSystemUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularDialogueSystemUserWidget) \
	NO_API virtual ~UModularDialogueSystemUserWidget();


#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_9_PROLOG
#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_CALLBACK_WRAPPERS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UModularDialogueSystemUserWidget;

// ********** End Class UModularDialogueSystemUserWidget *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
