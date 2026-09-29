// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueSystemDataAsset.h"
#include "Node/ModularNodeStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueSystemDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodeNPC(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueNodePlayer(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemDataAsset(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemDataAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueSystemDataAsset Function GetNodeOptions_NPC **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_NPC_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemDataAsset_eventGetNodeOptions_NPC_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeOptions_NPC constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeOptions_NPC constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeOptions_NPC Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemDataAsset_eventGetNodeOptions_NPC_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeOptions_NPC Property Definitions *********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemDataAsset, nullptr, "GetNodeOptions_NPC", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemDataAsset_eventGetNodeOptions_NPC_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemDataAsset_eventGetNodeOptions_NPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_NPC(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemDataAsset::execGetNodeOptions_NPC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetNodeOptions_NPC();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemDataAsset Function GetNodeOptions_NPC ****************

// ********** Begin Class UModularDialogueSystemDataAsset Function GetNodeOptions_Player ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_Player_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemDataAsset_eventGetNodeOptions_Player_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeOptions_Player constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeOptions_Player constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeOptions_Player Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemDataAsset_eventGetNodeOptions_Player_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeOptions_Player Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemDataAsset, nullptr, "GetNodeOptions_Player", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemDataAsset_eventGetNodeOptions_Player_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemDataAsset_eventGetNodeOptions_Player_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_Player(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemDataAsset::execGetNodeOptions_Player)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetNodeOptions_Player();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemDataAsset Function GetNodeOptions_Player *************

// ********** Begin Class UModularDialogueSystemDataAsset Function GetNodeOptions_Start ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_Start_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemDataAsset_eventGetNodeOptions_Start_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNodeOptions_Start constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNodeOptions_Start constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNodeOptions_Start Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemDataAsset_eventGetNodeOptions_Start_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetNodeOptions_Start Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemDataAsset, nullptr, "GetNodeOptions_Start", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemDataAsset_eventGetNodeOptions_Start_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemDataAsset_eventGetNodeOptions_Start_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_Start(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemDataAsset::execGetNodeOptions_Start)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetNodeOptions_Start();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemDataAsset Function GetNodeOptions_Start **************

// ********** Begin Class UModularDialogueSystemDataAsset ******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueSystemDataAsset_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Modular Dialogue System Data Asset" },
		{ "IncludePath", "ModularDialogueSystemDataAsset.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingNode_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Which NPC Node should Dialogue start with \n" },
		{ "GetOptions", "GetNodeOptions_Start" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
		{ "ToolTip", "Which NPC Node should Dialogue start with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Actions starts with dialogue and ends when the dialogue is finished/aborted.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
		{ "ToolTip", "Actions starts with dialogue and ends when the dialogue is finished/aborted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Actions starts with dialogue and ends when the dialogue is finished/aborted.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
		{ "ToolTip", "Actions starts with dialogue and ends when the dialogue is finished/aborted." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCNodes_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Dialogue nodes for NPC\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
		{ "ToolTip", "Dialogue nodes for NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNodes_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Dialogue nodes for Player (Responses)\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
		{ "ToolTip", "Dialogue nodes for Player (Responses)" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overview_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemDataAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueSystemDataAsset constinit property declarations **********
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartingNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NPCNodes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPCNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NPCNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerNodes_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerNodes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerNodes;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Overview;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueSystemDataAsset constinit property declarations ************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetNodeOptions_NPC"), .Pointer = &UModularDialogueSystemDataAsset::execGetNodeOptions_NPC },
		{ .NameUTF8 = UTF8TEXT("GetNodeOptions_Player"), .Pointer = &UModularDialogueSystemDataAsset::execGetNodeOptions_Player },
		{ .NameUTF8 = UTF8TEXT("GetNodeOptions_Start"), .Pointer = &UModularDialogueSystemDataAsset::execGetNodeOptions_Start },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_NPC, "GetNodeOptions_NPC" }, // cd62f1f8c1d5bf214ebcda5ca20c0e3505a4cc40
		{ &Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_Player, "GetNodeOptions_Player" }, // add08be22096d15f62eaa5645beb3825de183da5
		{ &Z_Construct_UFunction_UModularDialogueSystemDataAsset_GetNodeOptions_Start, "GetNodeOptions_Start" }, // 8db4ff9d7d653e6130e56a00b0f84105a102ff0d
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueSystemDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueSystemDataAsset Property Definitions *********************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_StartingNode = { "StartingNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDataAsset, StartingNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingNode_MetaData), NewProp_StartingNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularDialogueActionBase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDataAsset, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_NPCNodes_ValueProp = { "NPCNodes", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModularDialogueNodeNPC, METADATA_PARAMS(0, nullptr) }; // c29068b4e56d89d3f20163167c06d54555f949b2
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NPCNodes_Key_KeyProp = { "NPCNodes_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_NPCNodes = { "NPCNodes", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDataAsset, NPCNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCNodes_MetaData), NewProp_NPCNodes_MetaData) }; // c29068b4e56d89d3f20163167c06d54555f949b2
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_PlayerNodes_ValueProp = { "PlayerNodes", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FModularDialogueNodePlayer, METADATA_PARAMS(0, nullptr) }; // cb5a36db54ac69c2a2c5809c8fee7ea2ac6197ff
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_PlayerNodes_Key_KeyProp = { "PlayerNodes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_PlayerNodes = { "PlayerNodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDataAsset, PlayerNodes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNodes_MetaData), NewProp_PlayerNodes_MetaData) }; // cb5a36db54ac69c2a2c5809c8fee7ea2ac6197ff
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Overview = { "Overview", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemDataAsset, Overview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overview_MetaData), NewProp_Overview_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_StartingNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPCNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNodes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNodes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerNodes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Overview,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueSystemDataAsset Property Definitions ***********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UDataAsset,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueSystemDataAsset,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UModularDialogueSystemDataAsset_StaticRegisterNativesUModularDialogueSystemDataAsset()
{
	UClass* Class = UModularDialogueSystemDataAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueSystemDataAsset;
UClass* Z_Construct_UClass_UModularDialogueSystemDataAsset(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueSystemDataAsset;
		if (!Z_Registration_Info_UClass_UModularDialogueSystemDataAsset.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueSystemDataAsset"),
				Z_Registration_Info_UClass_UModularDialogueSystemDataAsset.InnerSingleton,
				UModularDialogueSystemDataAsset_StaticRegisterNativesUModularDialogueSystemDataAsset,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UModularDialogueSystemDataAsset.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueSystemDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueSystemDataAsset.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueSystemDataAsset.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueSystemDataAsset::UModularDialogueSystemDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueSystemDataAsset);
UModularDialogueSystemDataAsset::~UModularDialogueSystemDataAsset() {}
// ********** End Class UModularDialogueSystemDataAsset ********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemDataAsset_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueSystemDataAsset, TEXT("UModularDialogueSystemDataAsset"), &Z_Registration_Info_UClass_UModularDialogueSystemDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueSystemDataAsset), 4274430255U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemDataAsset_h__Script_ModularDialogueSystem_131a287ece4a797b0557b2872a0c39e1000f44f4{
	TEXT("/Script/ModularDialogueSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
