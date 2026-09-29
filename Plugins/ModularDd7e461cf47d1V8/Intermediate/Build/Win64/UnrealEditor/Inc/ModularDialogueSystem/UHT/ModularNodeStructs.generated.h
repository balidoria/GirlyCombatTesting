// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Node/ModularNodeStructs.h"

#ifdef MODULARDIALOGUESYSTEM_ModularNodeStructs_generated_h
#error "ModularNodeStructs.generated.h already included, missing '#pragma once' in ModularNodeStructs.h"
#endif
#define MODULARDIALOGUESYSTEM_ModularNodeStructs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModularDialogueNodeNPC *******************************************
struct Z_Construct_UScriptStruct_FModularDialogueNodeNPC_Statics;
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodeNPC(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularNodeStructs_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularDialogueNodeNPC_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FModularDialogueNodeNPC(ETypeConstructPhase::Inner); }


struct FModularDialogueNodeNPC;
// ********** End ScriptStruct FModularDialogueNodeNPC *********************************************

// ********** Begin ScriptStruct FModularDialogueNodePlayer ****************************************
struct Z_Construct_UScriptStruct_FModularDialogueNodePlayer_Statics;
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodePlayer(ETypeConstructPhase);

#define FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularNodeStructs_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModularDialogueNodePlayer_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FModularDialogueNodePlayer(ETypeConstructPhase::Inner); }


struct FModularDialogueNodePlayer;
// ********** End ScriptStruct FModularDialogueNodePlayer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularNodeStructs_h

// ********** Begin Enum EModularDialogueStatus ****************************************************
#define FOREACH_ENUM_EMODULARDIALOGUESTATUS(op) \
	op(EModularDialogueStatus::Status_Waiting) \
	op(EModularDialogueStatus::Status_Executing) \
	op(EModularDialogueStatus::Status_Finished) \
	op(EModularDialogueStatus::Status_Failed) \
	op(EModularDialogueStatus::Status_Aborted) 

enum class EModularDialogueStatus : uint8;
template<> struct TIsUEnumClass<EModularDialogueStatus> { enum { Value = true }; };
template<> UE_NODEBUG MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueStatus>();
// ********** End Enum EModularDialogueStatus ******************************************************

// ********** Begin Enum EModularDialogueObjectTask ************************************************
#define FOREACH_ENUM_EMODULARDIALOGUEOBJECTTASK(op) \
	op(EModularDialogueObjectTask::Task_None) \
	op(EModularDialogueObjectTask::Task_NPCDialogue) \
	op(EModularDialogueObjectTask::Task_PlayerResponses) 

enum class EModularDialogueObjectTask : uint8;
template<> struct TIsUEnumClass<EModularDialogueObjectTask> { enum { Value = true }; };
template<> UE_NODEBUG MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueObjectTask>();
// ********** End Enum EModularDialogueObjectTask **************************************************

// ********** Begin Enum EModularDialogueNodeExecutionFlow *****************************************
#define FOREACH_ENUM_EMODULARDIALOGUENODEEXECUTIONFLOW(op) \
	op(EModularDialogueNodeExecutionFlow::Flow_Player) \
	op(EModularDialogueNodeExecutionFlow::Flow_NPC) \
	op(EModularDialogueNodeExecutionFlow::Flow_End) 

enum class EModularDialogueNodeExecutionFlow : uint8;
template<> struct TIsUEnumClass<EModularDialogueNodeExecutionFlow> { enum { Value = true }; };
template<> UE_NODEBUG MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueNodeExecutionFlow>();
// ********** End Enum EModularDialogueNodeExecutionFlow *******************************************

// ********** Begin Enum EModularDialogueSystemInputEvents *****************************************
#define FOREACH_ENUM_EMODULARDIALOGUESYSTEMINPUTEVENTS(op) \
	op(EModularDialogueSystemInputEvents::Event_Up) \
	op(EModularDialogueSystemInputEvents::Event_Down) \
	op(EModularDialogueSystemInputEvents::Event_Skip) \
	op(EModularDialogueSystemInputEvents::Event_Close) \
	op(EModularDialogueSystemInputEvents::Event_Select) \
	op(EModularDialogueSystemInputEvents::Event_Select_1) \
	op(EModularDialogueSystemInputEvents::Event_Select_2) \
	op(EModularDialogueSystemInputEvents::Event_Select_3) \
	op(EModularDialogueSystemInputEvents::Event_Select_4) \
	op(EModularDialogueSystemInputEvents::Event_Select_5) \
	op(EModularDialogueSystemInputEvents::Event_Select_6) \
	op(EModularDialogueSystemInputEvents::Event_Select_7) \
	op(EModularDialogueSystemInputEvents::Event_Select_8) \
	op(EModularDialogueSystemInputEvents::Event_Select_9) 

enum class EModularDialogueSystemInputEvents : uint8;
template<> struct TIsUEnumClass<EModularDialogueSystemInputEvents> { enum { Value = true }; };
template<> UE_NODEBUG MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueSystemInputEvents>();
// ********** End Enum EModularDialogueSystemInputEvents *******************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
