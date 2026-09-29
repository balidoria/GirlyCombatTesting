// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Node/ModularNodeStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularNodeStructs() {}

// ********** Begin Cross Module References ********************************************************
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodeNPC(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodePlayer(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueNodeActionBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum EModularDialogueStatus ****************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus_Statics
template<> MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueStatus>()
{
	return Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Dialogue object status\n */" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "Status_Aborted.Name", "EModularDialogueStatus::Status_Aborted" },
		{ "Status_Executing.Name", "EModularDialogueStatus::Status_Executing" },
		{ "Status_Failed.Name", "EModularDialogueStatus::Status_Failed" },
		{ "Status_Finished.Name", "EModularDialogueStatus::Status_Finished" },
		{ "Status_Waiting.Name", "EModularDialogueStatus::Status_Waiting" },
		{ "ToolTip", "Dialogue object status" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularDialogueStatus::Status_Waiting", (int64)EModularDialogueStatus::Status_Waiting },
		{ "EModularDialogueStatus::Status_Executing", (int64)EModularDialogueStatus::Status_Executing },
		{ "EModularDialogueStatus::Status_Finished", (int64)EModularDialogueStatus::Status_Finished },
		{ "EModularDialogueStatus::Status_Failed", (int64)EModularDialogueStatus::Status_Failed },
		{ "EModularDialogueStatus::Status_Aborted", (int64)EModularDialogueStatus::Status_Aborted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	"EModularDialogueStatus",
	"EModularDialogueStatus",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EModularDialogueStatus;
UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EModularDialogueStatus.OuterSingleton)
		{
			ZRIE_EModularDialogueStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("EModularDialogueStatus"));
		}
		return ZRIE_EModularDialogueStatus.OuterSingleton;
	}
	if (!ZRIE_EModularDialogueStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EModularDialogueStatus.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EModularDialogueStatus.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EModularDialogueStatus ******************************************************

// ********** Begin Enum EModularDialogueObjectTask ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask_Statics
template<> MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueObjectTask>()
{
	return Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Dialogue object task type to control dialogue nodes\n */" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "Task_None.Name", "EModularDialogueObjectTask::Task_None" },
		{ "Task_NPCDialogue.Name", "EModularDialogueObjectTask::Task_NPCDialogue" },
		{ "Task_PlayerResponses.Name", "EModularDialogueObjectTask::Task_PlayerResponses" },
		{ "ToolTip", "Dialogue object task type to control dialogue nodes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularDialogueObjectTask::Task_None", (int64)EModularDialogueObjectTask::Task_None },
		{ "EModularDialogueObjectTask::Task_NPCDialogue", (int64)EModularDialogueObjectTask::Task_NPCDialogue },
		{ "EModularDialogueObjectTask::Task_PlayerResponses", (int64)EModularDialogueObjectTask::Task_PlayerResponses },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	"EModularDialogueObjectTask",
	"EModularDialogueObjectTask",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EModularDialogueObjectTask;
UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EModularDialogueObjectTask.OuterSingleton)
		{
			ZRIE_EModularDialogueObjectTask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("EModularDialogueObjectTask"));
		}
		return ZRIE_EModularDialogueObjectTask.OuterSingleton;
	}
	if (!ZRIE_EModularDialogueObjectTask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EModularDialogueObjectTask.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EModularDialogueObjectTask.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EModularDialogueObjectTask **************************************************

// ********** Begin Enum EModularDialogueNodeExecutionFlow *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow_Statics
template<> MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueNodeExecutionFlow>()
{
	return Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Dialogue set nodes flow type\n */" },
		{ "Flow_End.Comment", "// Select next execution nodes from NPC Nodes\n" },
		{ "Flow_End.DisplayName", "Ending Node" },
		{ "Flow_End.Name", "EModularDialogueNodeExecutionFlow::Flow_End" },
		{ "Flow_End.ToolTip", "Select next execution nodes from NPC Nodes" },
		{ "Flow_NPC.Comment", "// Select next execution nodes from Player Nodes\n" },
		{ "Flow_NPC.DisplayName", "NPC Continues" },
		{ "Flow_NPC.Name", "EModularDialogueNodeExecutionFlow::Flow_NPC" },
		{ "Flow_NPC.ToolTip", "Select next execution nodes from Player Nodes" },
		{ "Flow_Player.DisplayName", "Player Continues" },
		{ "Flow_Player.Name", "EModularDialogueNodeExecutionFlow::Flow_Player" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Dialogue set nodes flow type" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularDialogueNodeExecutionFlow::Flow_Player", (int64)EModularDialogueNodeExecutionFlow::Flow_Player },
		{ "EModularDialogueNodeExecutionFlow::Flow_NPC", (int64)EModularDialogueNodeExecutionFlow::Flow_NPC },
		{ "EModularDialogueNodeExecutionFlow::Flow_End", (int64)EModularDialogueNodeExecutionFlow::Flow_End },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	"EModularDialogueNodeExecutionFlow",
	"EModularDialogueNodeExecutionFlow",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EModularDialogueNodeExecutionFlow;
UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EModularDialogueNodeExecutionFlow.OuterSingleton)
		{
			ZRIE_EModularDialogueNodeExecutionFlow.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("EModularDialogueNodeExecutionFlow"));
		}
		return ZRIE_EModularDialogueNodeExecutionFlow.OuterSingleton;
	}
	if (!ZRIE_EModularDialogueNodeExecutionFlow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EModularDialogueNodeExecutionFlow.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EModularDialogueNodeExecutionFlow.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EModularDialogueNodeExecutionFlow *******************************************

// ********** Begin ScriptStruct FModularDialogueNodeNPC *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FModularDialogueNodeNPC_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FModularDialogueNodeNPC>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FModularDialogueNodeNPC); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Dialogue set struct for NPC Node\n */" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Dialogue set struct for NPC Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Dialogue line for this node.\n" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Dialogue line for this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextSpeed_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ClampMin", "0" },
		{ "Comment", "// In how much time should text be written?\n" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "In how much time should text be written?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Dialogue flow to choose next node.\n" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Dialogue flow to choose next node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerResponses_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Which Player responses are available for this NPC Node?\n" },
		{ "DisplayName", "Player Response" },
		{ "EditCondition", "Flow == EModularDialogueNodeExecutionFlow::Flow_Player" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetNodeOptions_Player" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Which Player responses are available for this NPC Node?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerResponseSpeed_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ClampMin", "0" },
		{ "Comment", "// How fast should every Player response appear with animation?\n" },
		{ "EditCondition", "Flow == EModularDialogueNodeExecutionFlow::Flow_Player" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetNodeOptions_Player" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "How fast should every Player response appear with animation?" },
		{ "Units", "Seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCNextNode_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Which NPC Node should be next?\n" },
		{ "DisplayName", "NPC Next Node" },
		{ "EditCondition", "Flow == EModularDialogueNodeExecutionFlow::Flow_NPC" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetNodeOptions_NPC" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Which NPC Node should be next?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCActions_Inner_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Actions for NPC but Player Actions can be given here too, doesn't matter.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Actions for NPC but Player Actions can be given here too, doesn't matter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCActions_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Actions for NPC but Player Actions can be given here too, doesn't matter.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Actions for NPC but Player Actions can be given here too, doesn't matter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActions_Inner_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Actions for Player but NPC Actions can be given here too, doesn't matter.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Actions for Player but NPC Actions can be given here too, doesn't matter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActions_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Actions for Player but NPC Actions can be given here too, doesn't matter.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Actions for Player but NPC Actions can be given here too, doesn't matter." },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FModularDialogueNodeNPC constinit property declarations ***********
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueTextSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flow_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerResponses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerResponses;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerResponseSpeed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCNextNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NPCActions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FModularDialogueNodeNPC constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularDialogueNodeNPC>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FModularDialogueNodeNPC Property Definitions **********************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, DialogueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DialogueTextSpeed = { "DialogueTextSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, DialogueTextSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueTextSpeed_MetaData), NewProp_DialogueTextSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Flow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, Flow), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) }; // 917194c0b89e9365898b4b8d06075ccbbbe78d11
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlayerResponses_Inner = { "PlayerResponses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlayerResponses = { "PlayerResponses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, PlayerResponses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerResponses_MetaData), NewProp_PlayerResponses_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_PlayerResponseSpeed = { "PlayerResponseSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, PlayerResponseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerResponseSpeed_MetaData), NewProp_PlayerResponseSpeed_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NPCNextNode = { "NPCNextNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, NPCNextNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCNextNode_MetaData), NewProp_NPCNextNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NPCActions_Inner = { "NPCActions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularDialogueNodeActionBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCActions_Inner_MetaData), NewProp_NPCActions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_NPCActions = { "NPCActions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, NPCActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCActions_MetaData), NewProp_NPCActions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerActions_Inner = { "PlayerActions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularDialogueNodeActionBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerActions_Inner_MetaData), NewProp_PlayerActions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlayerActions = { "PlayerActions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodeNPC, PlayerActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerActions_MetaData), NewProp_PlayerActions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueTextSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Flow_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Flow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerResponses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerResponses,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerResponseSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNextNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerActions,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FModularDialogueNodeNPC Property Definitions ************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	&NewStructOps,
	"ModularDialogueNodeNPC",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FModularDialogueNodeNPC>(),
	alignof(FModularDialogueNodeNPC),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC;
UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodeNPC(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularDialogueNodeNPC, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("ModularDialogueNodeNPC"));
		}
		return Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FModularDialogueNodeNPC *********************************************

// ********** Begin ScriptStruct FModularDialogueNodePlayer ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FModularDialogueNodePlayer_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FModularDialogueNodePlayer>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FModularDialogueNodePlayer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Dialogue set struct for Player Node\n */" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Dialogue set struct for Player Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Dialogue line for this node.\n" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Dialogue line for this node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Dialogue flow to choose next node.\n" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Dialogue flow to choose next node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCResponse_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Which NPC Node should be next when Player selects this response?\n" },
		{ "DisplayName", "NPC Response" },
		{ "EditCondition", "Flow == EModularDialogueNodeExecutionFlow::Flow_NPC" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetNodeOptions_NPC" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Which NPC Node should be next when Player selects this response?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNextNodes_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Which Player responses are available when Player selects this response?\n" },
		{ "DisplayName", "Player Next Nodes" },
		{ "EditCondition", "Flow == EModularDialogueNodeExecutionFlow::Flow_Player" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetNodeOptions_Player" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Which Player responses are available when Player selects this response?" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FModularDialogueNodePlayer constinit property declarations ********
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flow_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCResponse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerNextNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerNextNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FModularDialogueNodePlayer constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularDialogueNodePlayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FModularDialogueNodePlayer Property Definitions *******************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodePlayer, DialogueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Flow_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodePlayer, Flow), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) }; // 917194c0b89e9365898b4b8d06075ccbbbe78d11
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NPCResponse = { "NPCResponse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodePlayer, NPCResponse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCResponse_MetaData), NewProp_NPCResponse_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlayerNextNodes_Inner = { "PlayerNextNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_PlayerNextNodes = { "PlayerNextNodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(FModularDialogueNodePlayer, PlayerNextNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNextNodes_MetaData), NewProp_PlayerNextNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Flow_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Flow,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNextNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNextNodes,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FModularDialogueNodePlayer Property Definitions *********************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	&NewStructOps,
	"ModularDialogueNodePlayer",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FModularDialogueNodePlayer>(),
	alignof(FModularDialogueNodePlayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer;
UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodePlayer(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularDialogueNodePlayer, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("ModularDialogueNodePlayer"));
		}
		return Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FModularDialogueNodePlayer ******************************************

// ********** Begin Enum EModularDialogueSystemInputEvents *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents_Statics
template<> MODULARDIALOGUESYSTEM_NON_ATTRIBUTED_API UEnum* StaticEnum<EModularDialogueSystemInputEvents>()
{
	return Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n *\x09Input events to control Dialogue\n *\x09 If you want to add a new event in the code, please handle it from DialogueObject class.\n */" },
		{ "Event_Close.Display_Name", "Close Event" },
		{ "Event_Close.Name", "EModularDialogueSystemInputEvents::Event_Close" },
		{ "Event_Down.Display_Name", "Down Event" },
		{ "Event_Down.Name", "EModularDialogueSystemInputEvents::Event_Down" },
		{ "Event_Select.Display_Name", "Select Event" },
		{ "Event_Select.Name", "EModularDialogueSystemInputEvents::Event_Select" },
		{ "Event_Select_1.Display_Name", "Select First Event" },
		{ "Event_Select_1.Name", "EModularDialogueSystemInputEvents::Event_Select_1" },
		{ "Event_Select_2.Display_Name", "Select Second Event" },
		{ "Event_Select_2.Name", "EModularDialogueSystemInputEvents::Event_Select_2" },
		{ "Event_Select_3.Display_Name", "Select Third Event" },
		{ "Event_Select_3.Name", "EModularDialogueSystemInputEvents::Event_Select_3" },
		{ "Event_Select_4.Display_Name", "Select Forth Event" },
		{ "Event_Select_4.Name", "EModularDialogueSystemInputEvents::Event_Select_4" },
		{ "Event_Select_5.Display_Name", "Select Fifth Event" },
		{ "Event_Select_5.Name", "EModularDialogueSystemInputEvents::Event_Select_5" },
		{ "Event_Select_6.Display_Name", "Select Sixth Event" },
		{ "Event_Select_6.Name", "EModularDialogueSystemInputEvents::Event_Select_6" },
		{ "Event_Select_7.Display_Name", "Select Seventh Event" },
		{ "Event_Select_7.Name", "EModularDialogueSystemInputEvents::Event_Select_7" },
		{ "Event_Select_8.Display_Name", "Select Eighth Event" },
		{ "Event_Select_8.Name", "EModularDialogueSystemInputEvents::Event_Select_8" },
		{ "Event_Select_9.Display_Name", "Select Nineth Event" },
		{ "Event_Select_9.Name", "EModularDialogueSystemInputEvents::Event_Select_9" },
		{ "Event_Skip.Display_Name", "Skip Event" },
		{ "Event_Skip.Name", "EModularDialogueSystemInputEvents::Event_Skip" },
		{ "Event_Up.Display_Name", "Up Event" },
		{ "Event_Up.Name", "EModularDialogueSystemInputEvents::Event_Up" },
		{ "ModuleRelativePath", "Public/Node/ModularNodeStructs.h" },
		{ "ToolTip", "Input events to control Dialogue\n If you want to add a new event in the code, please handle it from DialogueObject class." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModularDialogueSystemInputEvents::Event_Up", (int64)EModularDialogueSystemInputEvents::Event_Up },
		{ "EModularDialogueSystemInputEvents::Event_Down", (int64)EModularDialogueSystemInputEvents::Event_Down },
		{ "EModularDialogueSystemInputEvents::Event_Skip", (int64)EModularDialogueSystemInputEvents::Event_Skip },
		{ "EModularDialogueSystemInputEvents::Event_Close", (int64)EModularDialogueSystemInputEvents::Event_Close },
		{ "EModularDialogueSystemInputEvents::Event_Select", (int64)EModularDialogueSystemInputEvents::Event_Select },
		{ "EModularDialogueSystemInputEvents::Event_Select_1", (int64)EModularDialogueSystemInputEvents::Event_Select_1 },
		{ "EModularDialogueSystemInputEvents::Event_Select_2", (int64)EModularDialogueSystemInputEvents::Event_Select_2 },
		{ "EModularDialogueSystemInputEvents::Event_Select_3", (int64)EModularDialogueSystemInputEvents::Event_Select_3 },
		{ "EModularDialogueSystemInputEvents::Event_Select_4", (int64)EModularDialogueSystemInputEvents::Event_Select_4 },
		{ "EModularDialogueSystemInputEvents::Event_Select_5", (int64)EModularDialogueSystemInputEvents::Event_Select_5 },
		{ "EModularDialogueSystemInputEvents::Event_Select_6", (int64)EModularDialogueSystemInputEvents::Event_Select_6 },
		{ "EModularDialogueSystemInputEvents::Event_Select_7", (int64)EModularDialogueSystemInputEvents::Event_Select_7 },
		{ "EModularDialogueSystemInputEvents::Event_Select_8", (int64)EModularDialogueSystemInputEvents::Event_Select_8 },
		{ "EModularDialogueSystemInputEvents::Event_Select_9", (int64)EModularDialogueSystemInputEvents::Event_Select_9 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	"EModularDialogueSystemInputEvents",
	"EModularDialogueSystemInputEvents",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_EModularDialogueSystemInputEvents;
UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_EModularDialogueSystemInputEvents.OuterSingleton)
		{
			ZRIE_EModularDialogueSystemInputEvents.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("EModularDialogueSystemInputEvents"));
		}
		return ZRIE_EModularDialogueSystemInputEvents.OuterSingleton;
	}
	if (!ZRIE_EModularDialogueSystemInputEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_EModularDialogueSystemInputEvents.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_EModularDialogueSystemInputEvents.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum EModularDialogueSystemInputEvents *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularNodeStructs_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus, TEXT("EModularDialogueStatus"), &ZRIE_EModularDialogueStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3828567109U) },
		{ Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueObjectTask, TEXT("EModularDialogueObjectTask"), &ZRIE_EModularDialogueObjectTask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2393510996U) },
		{ Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueNodeExecutionFlow, TEXT("EModularDialogueNodeExecutionFlow"), &ZRIE_EModularDialogueNodeExecutionFlow, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2440139968U) },
		{ Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents, TEXT("EModularDialogueSystemInputEvents"), &ZRIE_EModularDialogueSystemInputEvents, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3242324860U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FModularDialogueNodeNPC, Z_Construct_UScriptStruct_FModularDialogueNodeNPC_Statics::NewStructOps, TEXT("ModularDialogueNodeNPC"),&Z_Registration_Info_UScriptStruct_FModularDialogueNodeNPC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularDialogueNodeNPC), 3264243892U) },
		{ Z_Construct_UScriptStruct_FModularDialogueNodePlayer, Z_Construct_UScriptStruct_FModularDialogueNodePlayer_Statics::NewStructOps, TEXT("ModularDialogueNodePlayer"),&Z_Registration_Info_UScriptStruct_FModularDialogueNodePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularDialogueNodePlayer), 3411687131U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularNodeStructs_h__Script_ModularDialogueSystem_8ac81cd9212792d8f657044575a2d68dd481dbd1{
	TEXT("/Script/ModularDialogueSystem"),
	nullptr, 0,
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
