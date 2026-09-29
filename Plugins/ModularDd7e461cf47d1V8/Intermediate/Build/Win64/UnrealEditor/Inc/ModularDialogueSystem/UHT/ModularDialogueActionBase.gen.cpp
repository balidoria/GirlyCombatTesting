// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueActionBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueActionBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueActionBase Function GetDialogueComponent_NPC *************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_GetDialogueComponent_NPC_Statics
struct UHT_STATICS
{
	struct ModularDialogueActionBase_eventGetDialogueComponent_NPC_Parms
	{
		UModularDialogueComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Getter for Dialogue's NPC Dialogue Component\n" },
		{ "DisplayName", "Get Dialogue Component (NPC)" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Getter for Dialogue's NPC Dialogue Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueComponent_NPC constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueComponent_NPC constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueComponent_NPC Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventGetDialogueComponent_NPC_Parms, ReturnValue), Z_Construct_UClass_UModularDialogueComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueComponent_NPC Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "GetDialogueComponent_NPC", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueActionBase_eventGetDialogueComponent_NPC_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueActionBase_eventGetDialogueComponent_NPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_GetDialogueComponent_NPC(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execGetDialogueComponent_NPC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularDialogueComponent**)Z_Param__Result=P_THIS->GetDialogueComponent_NPC();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function GetDialogueComponent_NPC ***************

// ********** Begin Class UModularDialogueActionBase Function GetDialogueComponent_Player **********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_GetDialogueComponent_Player_Statics
struct UHT_STATICS
{
	struct ModularDialogueActionBase_eventGetDialogueComponent_Player_Parms
	{
		UModularDialogueComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Getter for Dialogue's Player Dialogue Component\n" },
		{ "DisplayName", "Get Dialogue Component (Player)" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Getter for Dialogue's Player Dialogue Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueComponent_Player constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueComponent_Player constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueComponent_Player Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventGetDialogueComponent_Player_Parms, ReturnValue), Z_Construct_UClass_UModularDialogueComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueComponent_Player Property Definitions ************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "GetDialogueComponent_Player", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueActionBase_eventGetDialogueComponent_Player_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueActionBase_eventGetDialogueComponent_Player_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_GetDialogueComponent_Player(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execGetDialogueComponent_Player)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularDialogueComponent**)Z_Param__Result=P_THIS->GetDialogueComponent_Player();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function GetDialogueComponent_Player ************

// ********** Begin Class UModularDialogueActionBase Function GetParameter_NPC *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_GetParameter_NPC_Statics
struct UHT_STATICS
{
	struct ModularDialogueActionBase_eventGetParameter_NPC_Parms
	{
		FName Key;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Get the desired parameter from NPC's DialogueComponent\n" },
		{ "DisplayName", "Get Parameter (By NPC)" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Get the desired parameter from NPC's DialogueComponent" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParameter_NPC constinit property declarations **********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParameter_NPC constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParameter_NPC Property Definitions *********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventGetParameter_NPC_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventGetParameter_NPC_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameter_NPC Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "GetParameter_NPC", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueActionBase_eventGetParameter_NPC_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueActionBase_eventGetParameter_NPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_GetParameter_NPC(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execGetParameter_NPC)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParameter_NPC(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function GetParameter_NPC ***********************

// ********** Begin Class UModularDialogueActionBase Function GetParameter_Player ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_GetParameter_Player_Statics
struct UHT_STATICS
{
	struct ModularDialogueActionBase_eventGetParameter_Player_Parms
	{
		FName Key;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Get the desired parameter from Player's DialogueComponent\n" },
		{ "DisplayName", "Get Parameter (By Player)" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Get the desired parameter from Player's DialogueComponent" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParameter_Player constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParameter_Player constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParameter_Player Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventGetParameter_Player_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventGetParameter_Player_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameter_Player Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "GetParameter_Player", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueActionBase_eventGetParameter_Player_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueActionBase_eventGetParameter_Player_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_GetParameter_Player(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execGetParameter_Player)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParameter_Player(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function GetParameter_Player ********************

// ********** Begin Class UModularDialogueActionBase Function K2_CanAbortDialogue ******************
struct ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UModularDialogueActionBase_K2_CanAbortDialogue = FName(TEXT("K2_CanAbortDialogue"));
bool UModularDialogueActionBase::K2_CanAbortDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_CanAbortDialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return K2_CanAbortDialogue_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_CanAbortDialogue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Can abort Dialogue completely?\n\x09 *\x09 Player can't abort (Close event) the Dialogue until this function returns true\n\x09 */" },
		{ "DisplayName", "Can Abort Dialogue" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Can abort Dialogue completely?\n Player can't abort (Close event) the Dialogue until this function returns true" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_CanAbortDialogue constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_CanAbortDialogue constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_CanAbortDialogue Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_CanAbortDialogue Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_CanAbortDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueActionBase_eventK2_CanAbortDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_CanAbortDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_CanAbortDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_CanAbortDialogue_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_CanAbortDialogue ********************

// ********** Begin Class UModularDialogueActionBase Function K2_EndAction *************************
struct ModularDialogueActionBase_eventK2_EndAction_Parms
{
	EModularDialogueStatus DialogueStatus;
};
static FName NAME_UModularDialogueActionBase_K2_EndAction = FName(TEXT("K2_EndAction"));
void UModularDialogueActionBase::K2_EndAction(EModularDialogueStatus DialogueStatus)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_EndAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueActionBase_eventK2_EndAction_Parms Parms;
		Parms.DialogueStatus=DialogueStatus;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_EndAction_Implementation(DialogueStatus);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_EndAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when Dialogue is ended.\n" },
		{ "DisplayName", "End Action" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Called when Dialogue is ended." },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_EndAction constinit property declarations **************************
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_EndAction constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_EndAction Property Definitions *************************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_DialogueStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueStatus = { "DialogueStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventK2_EndAction_Parms, DialogueStatus), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus, METADATA_PARAMS(0, nullptr) }; // e4334c45368bf0b831f04a4d6d1c47203b8b125c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_EndAction Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_EndAction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueActionBase_eventK2_EndAction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueActionBase_eventK2_EndAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_EndAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_EndAction)
{
	P_GET_ENUM(EModularDialogueStatus,Z_Param_DialogueStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_EndAction_Implementation(EModularDialogueStatus(Z_Param_DialogueStatus));
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_EndAction ***************************

// ********** Begin Class UModularDialogueActionBase Function K2_ExecuteAction *********************
static FName NAME_UModularDialogueActionBase_K2_ExecuteAction = FName(TEXT("K2_ExecuteAction"));
void UModularDialogueActionBase::K2_ExecuteAction()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_ExecuteAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		K2_ExecuteAction_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_ExecuteAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when Dialogue is started\n" },
		{ "DisplayName", "Execute Action" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Called when Dialogue is started" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_ExecuteAction constinit property declarations **********************
// ********** End Function K2_ExecuteAction constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_ExecuteAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_ExecuteAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_ExecuteAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_ExecuteAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_ExecuteAction ***********************

// ********** Begin Class UModularDialogueActionBase Function K2_OnExecutingNPCNode ****************
struct ModularDialogueActionBase_eventK2_OnExecutingNPCNode_Parms
{
	FName NodeName;
};
static FName NAME_UModularDialogueActionBase_K2_OnExecutingNPCNode = FName(TEXT("K2_OnExecutingNPCNode"));
void UModularDialogueActionBase::K2_OnExecutingNPCNode(FName NodeName)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_OnExecutingNPCNode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueActionBase_eventK2_OnExecutingNPCNode_Parms Parms;
		Parms.NodeName=NodeName;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_OnExecutingNPCNode_Implementation(NodeName);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_OnExecutingNPCNode_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when new NPC Node started to executed with NPC NodeName.\n" },
		{ "DisplayName", "On Executing NPC Node" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Called when new NPC Node started to executed with NPC NodeName." },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_OnExecutingNPCNode constinit property declarations *****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_OnExecutingNPCNode constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_OnExecutingNPCNode Property Definitions ****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventK2_OnExecutingNPCNode_Parms, NodeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_OnExecutingNPCNode Property Definitions ******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_OnExecutingNPCNode", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueActionBase_eventK2_OnExecutingNPCNode_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueActionBase_eventK2_OnExecutingNPCNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_OnExecutingNPCNode(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_OnExecutingNPCNode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NodeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_OnExecutingNPCNode_Implementation(Z_Param_NodeName);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_OnExecutingNPCNode ******************

// ********** Begin Class UModularDialogueActionBase Function K2_OnPlayerResponded *****************
struct ModularDialogueActionBase_eventK2_OnPlayerResponded_Parms
{
	FName ResponseNode;
};
static FName NAME_UModularDialogueActionBase_K2_OnPlayerResponded = FName(TEXT("K2_OnPlayerResponded"));
void UModularDialogueActionBase::K2_OnPlayerResponded(FName ResponseNode)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_OnPlayerResponded);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueActionBase_eventK2_OnPlayerResponded_Parms Parms;
		Parms.ResponseNode=ResponseNode;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_OnPlayerResponded_Implementation(ResponseNode);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_OnPlayerResponded_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when Player selected response with ResponseNode name.\n" },
		{ "DisplayName", "On Player Responded" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Called when Player selected response with ResponseNode name." },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_OnPlayerResponded constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ResponseNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_OnPlayerResponded constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_OnPlayerResponded Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_ResponseNode = { "ResponseNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventK2_OnPlayerResponded_Parms, ResponseNode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResponseNode,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_OnPlayerResponded Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_OnPlayerResponded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueActionBase_eventK2_OnPlayerResponded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueActionBase_eventK2_OnPlayerResponded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_OnPlayerResponded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_OnPlayerResponded)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ResponseNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_OnPlayerResponded_Implementation(Z_Param_ResponseNode);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_OnPlayerResponded *******************

// ********** Begin Class UModularDialogueActionBase Function K2_PrepareContext ********************
struct ModularDialogueActionBase_eventK2_PrepareContext_Parms
{
	AActor* InPlayer;
	AActor* InNPC;
};
static FName NAME_UModularDialogueActionBase_K2_PrepareContext = FName(TEXT("K2_PrepareContext"));
void UModularDialogueActionBase::K2_PrepareContext(AActor* InPlayer, AActor* InNPC)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_PrepareContext);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueActionBase_eventK2_PrepareContext_Parms Parms;
		Parms.InPlayer=InPlayer;
		Parms.InNPC=InNPC;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_PrepareContext_Implementation(InPlayer, InNPC);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_PrepareContext_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when just before Dialogue is started\n" },
		{ "DisplayName", "Prepare Context" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Called when just before Dialogue is started" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_PrepareContext constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InNPC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_PrepareContext constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_PrepareContext Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InPlayer = { "InPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventK2_PrepareContext_Parms, InPlayer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InNPC = { "InNPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventK2_PrepareContext_Parms, InNPC), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNPC,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_PrepareContext Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_PrepareContext", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueActionBase_eventK2_PrepareContext_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueActionBase_eventK2_PrepareContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_PrepareContext(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_PrepareContext)
{
	P_GET_OBJECT(AActor,Z_Param_InPlayer);
	P_GET_OBJECT(AActor,Z_Param_InNPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_PrepareContext_Implementation(Z_Param_InPlayer,Z_Param_InNPC);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_PrepareContext **********************

// ********** Begin Class UModularDialogueActionBase Function K2_Tick ******************************
struct ModularDialogueActionBase_eventK2_Tick_Parms
{
	float DeltaTime;
};
static FName NAME_UModularDialogueActionBase_K2_Tick = FName(TEXT("K2_Tick"));
void UModularDialogueActionBase::K2_Tick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueActionBase_K2_Tick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueActionBase_eventK2_Tick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_Tick_Implementation(DeltaTime);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueActionBase_K2_Tick_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Tick event only works while Dialogue is active\n" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Tick event only works while Dialogue is active" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_Tick constinit property declarations *******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_Tick constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_Tick Property Definitions ******************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueActionBase_eventK2_Tick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_Tick Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueActionBase, nullptr, "K2_Tick", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueActionBase_eventK2_Tick_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueActionBase_eventK2_Tick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueActionBase_K2_Tick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueActionBase::execK2_Tick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_Tick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueActionBase Function K2_Tick ********************************

// ********** Begin Class UModularDialogueActionBase ***********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueActionBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ModularDialogueActionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Is Dialogue Action currently active? Which means Dialogue is active also.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueActionBase.h" },
		{ "ToolTip", "Is Dialogue Action currently active? Which means Dialogue is active also." },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueActionBase constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_bIsActive_SetBit(void* Obj)
	{
		((UModularDialogueActionBase*)Obj)->bIsActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueActionBase constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetDialogueComponent_NPC"), .Pointer = &UModularDialogueActionBase::execGetDialogueComponent_NPC },
		{ .NameUTF8 = UTF8TEXT("GetDialogueComponent_Player"), .Pointer = &UModularDialogueActionBase::execGetDialogueComponent_Player },
		{ .NameUTF8 = UTF8TEXT("GetParameter_NPC"), .Pointer = &UModularDialogueActionBase::execGetParameter_NPC },
		{ .NameUTF8 = UTF8TEXT("GetParameter_Player"), .Pointer = &UModularDialogueActionBase::execGetParameter_Player },
		{ .NameUTF8 = UTF8TEXT("K2_CanAbortDialogue"), .Pointer = &UModularDialogueActionBase::execK2_CanAbortDialogue },
		{ .NameUTF8 = UTF8TEXT("K2_EndAction"), .Pointer = &UModularDialogueActionBase::execK2_EndAction },
		{ .NameUTF8 = UTF8TEXT("K2_ExecuteAction"), .Pointer = &UModularDialogueActionBase::execK2_ExecuteAction },
		{ .NameUTF8 = UTF8TEXT("K2_OnExecutingNPCNode"), .Pointer = &UModularDialogueActionBase::execK2_OnExecutingNPCNode },
		{ .NameUTF8 = UTF8TEXT("K2_OnPlayerResponded"), .Pointer = &UModularDialogueActionBase::execK2_OnPlayerResponded },
		{ .NameUTF8 = UTF8TEXT("K2_PrepareContext"), .Pointer = &UModularDialogueActionBase::execK2_PrepareContext },
		{ .NameUTF8 = UTF8TEXT("K2_Tick"), .Pointer = &UModularDialogueActionBase::execK2_Tick },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueActionBase_GetDialogueComponent_NPC, "GetDialogueComponent_NPC" }, // c9d208fe6801f172b602fed5fe6f49aee4242860
		{ &Z_Construct_UFunction_UModularDialogueActionBase_GetDialogueComponent_Player, "GetDialogueComponent_Player" }, // 4d362df8b71ed4610a8dd782ed1867bab76ae78d
		{ &Z_Construct_UFunction_UModularDialogueActionBase_GetParameter_NPC, "GetParameter_NPC" }, // 6ad9f21b78d755aa6c5607cc3ed4ddfe18fe91da
		{ &Z_Construct_UFunction_UModularDialogueActionBase_GetParameter_Player, "GetParameter_Player" }, // ec06e1481f26f150c131a4ea62a49f4ee4793dba
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_CanAbortDialogue, "K2_CanAbortDialogue" }, // da9afae22ac8bd2f7e53bfd8d0b8fe55bf626604
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_EndAction, "K2_EndAction" }, // 5da2686d47500d2d64817f1f4b1539ffa77dfc20
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_ExecuteAction, "K2_ExecuteAction" }, // 0fe059d80041768a1caa91900873b50d44c44b0f
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_OnExecutingNPCNode, "K2_OnExecutingNPCNode" }, // 980d11298a15cceda94e103c6cf511ca4dc6e3cd
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_OnPlayerResponded, "K2_OnPlayerResponded" }, // d1b06f8afc40b12196fbe8d5fcbcc8162659e6d7
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_PrepareContext, "K2_PrepareContext" }, // 0ef8fcfacb68f49f631b271b33af533a8312ce34
		{ &Z_Construct_UFunction_UModularDialogueActionBase_K2_Tick, "K2_Tick" }, // dca0539cbe07ef911f5253967d17fecce6ee341e
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueActionBase Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueActionBase, NPC), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_MetaData), NewProp_NPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueActionBase, Player), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularDialogueActionBase), &UHT_STATICS::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueActionBase Property Definitions ****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueActionBase,
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
	0x001030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UModularDialogueActionBase_StaticRegisterNativesUModularDialogueActionBase()
{
	UClass* Class = UModularDialogueActionBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueActionBase;
UClass* Z_Construct_UClass_UModularDialogueActionBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueActionBase;
		if (!Z_Registration_Info_UClass_UModularDialogueActionBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueActionBase"),
				Z_Registration_Info_UClass_UModularDialogueActionBase.InnerSingleton,
				UModularDialogueActionBase_StaticRegisterNativesUModularDialogueActionBase,
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
		return Z_Registration_Info_UClass_UModularDialogueActionBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueActionBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueActionBase.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueActionBase::UModularDialogueActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueActionBase);
UModularDialogueActionBase::~UModularDialogueActionBase() {}
// ********** End Class UModularDialogueActionBase *************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueActionBase, TEXT("UModularDialogueActionBase"), &Z_Registration_Info_UClass_UModularDialogueActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueActionBase), 2107497371U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueActionBase_h__Script_ModularDialogueSystem_cdb0d717802cd39b54631d427f378b7d3b34d3b2{
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
