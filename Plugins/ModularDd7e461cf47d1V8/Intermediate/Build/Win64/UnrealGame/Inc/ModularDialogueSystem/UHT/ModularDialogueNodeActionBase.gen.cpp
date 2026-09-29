// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Node/ModularDialogueNodeActionBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueNodeActionBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueNodeActionBase(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueNodeActionBase(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueNodeActionBase Function GetParameter_NPC *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_GetParameter_NPC_Statics
struct UHT_STATICS
{
	struct ModularDialogueNodeActionBase_eventGetParameter_NPC_Parms
	{
		FName Key;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Get the desired parameter from NPC's DialogueComponent\n" },
		{ "DisplayName", "Get Parameter (By NPC)" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
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
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventGetParameter_NPC_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventGetParameter_NPC_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameter_NPC Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "GetParameter_NPC", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueNodeActionBase_eventGetParameter_NPC_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueNodeActionBase_eventGetParameter_NPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_GetParameter_NPC(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execGetParameter_NPC)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParameter_NPC(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function GetParameter_NPC *******************

// ********** Begin Class UModularDialogueNodeActionBase Function GetParameter_Player **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_GetParameter_Player_Statics
struct UHT_STATICS
{
	struct ModularDialogueNodeActionBase_eventGetParameter_Player_Parms
	{
		FName Key;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Get the desired parameter from Player's DialogueComponent\n" },
		{ "DisplayName", "Get Parameter (By Player)" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
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
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventGetParameter_Player_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventGetParameter_Player_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameter_Player Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "GetParameter_Player", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueNodeActionBase_eventGetParameter_Player_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueNodeActionBase_eventGetParameter_Player_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_GetParameter_Player(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execGetParameter_Player)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParameter_Player(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function GetParameter_Player ****************

// ********** Begin Class UModularDialogueNodeActionBase Function K2_CanAbortDialogue **************
struct ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UModularDialogueNodeActionBase_K2_CanAbortDialogue = FName(TEXT("K2_CanAbortDialogue"));
bool UModularDialogueNodeActionBase::K2_CanAbortDialogue()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueNodeActionBase_K2_CanAbortDialogue);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms Parms;
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
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_CanAbortDialogue_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Can abort Dialogue completely?\n\x09 *\x09 Player can't abort (Close event) the Dialogue until this function returns true\n\x09 */" },
		{ "DisplayName", "Can Abort Dialogue" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
		{ "ToolTip", "Can abort Dialogue completely?\n Player can't abort (Close event) the Dialogue until this function returns true" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_CanAbortDialogue constinit property declarations *******************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_CanAbortDialogue constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_CanAbortDialogue Property Definitions ******************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_CanAbortDialogue Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "K2_CanAbortDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueNodeActionBase_eventK2_CanAbortDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_CanAbortDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execK2_CanAbortDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_CanAbortDialogue_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function K2_CanAbortDialogue ****************

// ********** Begin Class UModularDialogueNodeActionBase Function K2_CanEndAction ******************
struct ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UModularDialogueNodeActionBase_K2_CanEndAction = FName(TEXT("K2_CanEndAction"));
bool UModularDialogueNodeActionBase::K2_CanEndAction()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueNodeActionBase_K2_CanEndAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return K2_CanEndAction_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_CanEndAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Can end action owner Dialogue Node?\n\x09 *\x09 Player responses or Next button won't appear until this function returns true\n\x09 */" },
		{ "DisplayName", "Can End Action" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
		{ "ToolTip", "Can end action owner Dialogue Node?\n Player responses or Next button won't appear until this function returns true" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_CanEndAction constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_CanEndAction constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_CanEndAction Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_CanEndAction Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "K2_CanEndAction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueNodeActionBase_eventK2_CanEndAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_CanEndAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execK2_CanEndAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_CanEndAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function K2_CanEndAction ********************

// ********** Begin Class UModularDialogueNodeActionBase Function K2_EndAction *********************
struct ModularDialogueNodeActionBase_eventK2_EndAction_Parms
{
	EModularDialogueStatus DialogueStatus;
};
static FName NAME_UModularDialogueNodeActionBase_K2_EndAction = FName(TEXT("K2_EndAction"));
void UModularDialogueNodeActionBase::K2_EndAction(EModularDialogueStatus DialogueStatus)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueNodeActionBase_K2_EndAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueNodeActionBase_eventK2_EndAction_Parms Parms;
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
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_EndAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when action owner Dialogue Node is ended.\n" },
		{ "DisplayName", "End Action" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
		{ "ToolTip", "Called when action owner Dialogue Node is ended." },
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
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_DialogueStatus = { "DialogueStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventK2_EndAction_Parms, DialogueStatus), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus, METADATA_PARAMS(0, nullptr) }; // e4334c45368bf0b831f04a4d6d1c47203b8b125c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueStatus,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_EndAction Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "K2_EndAction", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueNodeActionBase_eventK2_EndAction_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueNodeActionBase_eventK2_EndAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_EndAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execK2_EndAction)
{
	P_GET_ENUM(EModularDialogueStatus,Z_Param_DialogueStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_EndAction_Implementation(EModularDialogueStatus(Z_Param_DialogueStatus));
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function K2_EndAction ***********************

// ********** Begin Class UModularDialogueNodeActionBase Function K2_ExecuteAction *****************
static FName NAME_UModularDialogueNodeActionBase_K2_ExecuteAction = FName(TEXT("K2_ExecuteAction"));
void UModularDialogueNodeActionBase::K2_ExecuteAction()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueNodeActionBase_K2_ExecuteAction);
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
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_ExecuteAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when action owner Dialogue Node is executed. \n" },
		{ "DisplayName", "Execute Action" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
		{ "ToolTip", "Called when action owner Dialogue Node is executed." },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_ExecuteAction constinit property declarations **********************
// ********** End Function K2_ExecuteAction constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "K2_ExecuteAction", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_ExecuteAction(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execK2_ExecuteAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_ExecuteAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function K2_ExecuteAction *******************

// ********** Begin Class UModularDialogueNodeActionBase Function K2_PrepareContext ****************
struct ModularDialogueNodeActionBase_eventK2_PrepareContext_Parms
{
	AActor* InPlayer;
	AActor* InNPC;
};
static FName NAME_UModularDialogueNodeActionBase_K2_PrepareContext = FName(TEXT("K2_PrepareContext"));
void UModularDialogueNodeActionBase::K2_PrepareContext(AActor* InPlayer, AActor* InNPC)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueNodeActionBase_K2_PrepareContext);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueNodeActionBase_eventK2_PrepareContext_Parms Parms;
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
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_PrepareContext_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Called when just before Dialogue is started\n" },
		{ "DisplayName", "Prepare Context" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
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
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InPlayer = { "InPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventK2_PrepareContext_Parms, InPlayer), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InNPC = { "InNPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventK2_PrepareContext_Parms, InNPC), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InNPC,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_PrepareContext Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "K2_PrepareContext", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueNodeActionBase_eventK2_PrepareContext_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueNodeActionBase_eventK2_PrepareContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_PrepareContext(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execK2_PrepareContext)
{
	P_GET_OBJECT(AActor,Z_Param_InPlayer);
	P_GET_OBJECT(AActor,Z_Param_InNPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_PrepareContext_Implementation(Z_Param_InPlayer,Z_Param_InNPC);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function K2_PrepareContext ******************

// ********** Begin Class UModularDialogueNodeActionBase Function K2_Tick **************************
struct ModularDialogueNodeActionBase_eventK2_Tick_Parms
{
	float DeltaTime;
};
static FName NAME_UModularDialogueNodeActionBase_K2_Tick = FName(TEXT("K2_Tick"));
void UModularDialogueNodeActionBase::K2_Tick(float DeltaTime)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueNodeActionBase_K2_Tick);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueNodeActionBase_eventK2_Tick_Parms Parms;
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
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_Tick_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Tick event only works if Action is active.\n" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
		{ "ToolTip", "Tick event only works if Action is active." },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_Tick constinit property declarations *******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_Tick constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_Tick Property Definitions ******************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueNodeActionBase_eventK2_Tick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_Tick Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueNodeActionBase, nullptr, "K2_Tick", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueNodeActionBase_eventK2_Tick_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueNodeActionBase_eventK2_Tick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_Tick(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueNodeActionBase::execK2_Tick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_Tick_Implementation(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueNodeActionBase Function K2_Tick ****************************

// ********** Begin Class UModularDialogueNodeActionBase *******************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueNodeActionBase_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Node/ModularDialogueNodeActionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Is Dialogue Node Action currently active?\n" },
		{ "ModuleRelativePath", "Public/Node/ModularDialogueNodeActionBase.h" },
		{ "ToolTip", "Is Dialogue Node Action currently active?" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueNodeActionBase constinit property declarations ***********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_bIsActive_SetBit(void* Obj)
	{
		((UModularDialogueNodeActionBase*)Obj)->bIsActive = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueNodeActionBase constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetParameter_NPC"), .Pointer = &UModularDialogueNodeActionBase::execGetParameter_NPC },
		{ .NameUTF8 = UTF8TEXT("GetParameter_Player"), .Pointer = &UModularDialogueNodeActionBase::execGetParameter_Player },
		{ .NameUTF8 = UTF8TEXT("K2_CanAbortDialogue"), .Pointer = &UModularDialogueNodeActionBase::execK2_CanAbortDialogue },
		{ .NameUTF8 = UTF8TEXT("K2_CanEndAction"), .Pointer = &UModularDialogueNodeActionBase::execK2_CanEndAction },
		{ .NameUTF8 = UTF8TEXT("K2_EndAction"), .Pointer = &UModularDialogueNodeActionBase::execK2_EndAction },
		{ .NameUTF8 = UTF8TEXT("K2_ExecuteAction"), .Pointer = &UModularDialogueNodeActionBase::execK2_ExecuteAction },
		{ .NameUTF8 = UTF8TEXT("K2_PrepareContext"), .Pointer = &UModularDialogueNodeActionBase::execK2_PrepareContext },
		{ .NameUTF8 = UTF8TEXT("K2_Tick"), .Pointer = &UModularDialogueNodeActionBase::execK2_Tick },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_GetParameter_NPC, "GetParameter_NPC" }, // 0e58759017954698b189daea995a728042339e2a
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_GetParameter_Player, "GetParameter_Player" }, // 0d5748375b9408d42d54c9dd2e33b0004cdf2e68
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_CanAbortDialogue, "K2_CanAbortDialogue" }, // 7c754a02df82ac403855fe3f494136d2f2745b7f
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_CanEndAction, "K2_CanEndAction" }, // cb0732bea4a6c40f610f2a2b2fb4bb252113769f
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_EndAction, "K2_EndAction" }, // 81f098e099dfb7d749c7f56770047ee232f128e5
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_ExecuteAction, "K2_ExecuteAction" }, // 70342b5aa40ca119267167d4e512808e58d411a3
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_PrepareContext, "K2_PrepareContext" }, // d4b1c62972fd63dbffe68d39de1a59b22298b6d7
		{ &Z_Construct_UFunction_UModularDialogueNodeActionBase_K2_Tick, "K2_Tick" }, // 88f1443890eb980f7a0666842e11efca96eabca8
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueNodeActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueNodeActionBase Property Definitions **********************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueNodeActionBase, NPC), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_MetaData), NewProp_NPC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueNodeActionBase, Player), Z_Construct_UClass_AActor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularDialogueNodeActionBase), &UHT_STATICS::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueNodeActionBase Property Definitions ************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueNodeActionBase,
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
static void UModularDialogueNodeActionBase_StaticRegisterNativesUModularDialogueNodeActionBase()
{
	UClass* Class = UModularDialogueNodeActionBase::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueNodeActionBase;
UClass* Z_Construct_UClass_UModularDialogueNodeActionBase(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueNodeActionBase;
		if (!Z_Registration_Info_UClass_UModularDialogueNodeActionBase.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueNodeActionBase"),
				Z_Registration_Info_UClass_UModularDialogueNodeActionBase.InnerSingleton,
				UModularDialogueNodeActionBase_StaticRegisterNativesUModularDialogueNodeActionBase,
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
		return Z_Registration_Info_UClass_UModularDialogueNodeActionBase.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueNodeActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueNodeActionBase.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueNodeActionBase.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueNodeActionBase::UModularDialogueNodeActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueNodeActionBase);
UModularDialogueNodeActionBase::~UModularDialogueNodeActionBase() {}
// ********** End Class UModularDialogueNodeActionBase *********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueNodeActionBase, TEXT("UModularDialogueNodeActionBase"), &Z_Registration_Info_UClass_UModularDialogueNodeActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueNodeActionBase), 2012056924U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_Node_ModularDialogueNodeActionBase_h__Script_ModularDialogueSystem_175745ccdc0d7ee1743f0a47eb2097c5d0c2eaae{
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
