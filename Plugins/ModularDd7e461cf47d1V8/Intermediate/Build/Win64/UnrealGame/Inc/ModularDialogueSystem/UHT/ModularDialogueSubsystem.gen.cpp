// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSubsystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueFinished__DelegateSignature(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueStarted__DelegateSignature(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueComponent(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueObject(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSubsystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemInputAction(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Delegate FModularGlobalOnDialogueStarted ***************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueStarted__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_ModularDialogueSystem_eventModularGlobalOnDialogueStarted_Parms
	{
		UModularDialogueObject* DialogueObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FModularGlobalOnDialogueStarted constinit property declarations *******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FModularGlobalOnDialogueStarted constinit property declarations *********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FModularGlobalOnDialogueStarted Property Definitions ******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DialogueObject = { "DialogueObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularDialogueSystem_eventModularGlobalOnDialogueStarted_Parms, DialogueObject), Z_Construct_UClass_UModularDialogueObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueObject,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FModularGlobalOnDialogueStarted Property Definitions ********************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem, nullptr, "ModularGlobalOnDialogueStarted__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_ModularDialogueSystem_eventModularGlobalOnDialogueStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_ModularDialogueSystem_eventModularGlobalOnDialogueStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueStarted__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FModularGlobalOnDialogueStarted *****************************************

// ********** Begin Delegate FModularGlobalOnDialogueFinished **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueFinished__DelegateSignature_Statics
struct UHT_STATICS
{
	struct _Script_ModularDialogueSystem_eventModularGlobalOnDialogueFinished_Parms
	{
		UModularDialogueObject* DialogueObject;
		EModularDialogueStatus Status;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FModularGlobalOnDialogueFinished constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FModularGlobalOnDialogueFinished constinit property declarations ********
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FModularGlobalOnDialogueFinished Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DialogueObject = { "DialogueObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularDialogueSystem_eventModularGlobalOnDialogueFinished_Parms, DialogueObject), Z_Construct_UClass_UModularDialogueObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularDialogueSystem_eventModularGlobalOnDialogueFinished_Parms, Status), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueStatus, METADATA_PARAMS(0, nullptr) }; // e4334c45368bf0b831f04a4d6d1c47203b8b125c
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Delegate FModularGlobalOnDialogueFinished Property Definitions *******************
const UECodeGen_Private::FDelegateFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem, nullptr, "ModularGlobalOnDialogueFinished__DelegateSignature", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::_Script_ModularDialogueSystem_eventModularGlobalOnDialogueFinished_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::_Script_ModularDialogueSystem_eventModularGlobalOnDialogueFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueFinished__DelegateSignature(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
// ********** End Delegate FModularGlobalOnDialogueFinished ****************************************

// ********** Begin Class UModularDialogueSubsystem Function AbortExecutingDialogue ****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_AbortExecutingDialogue_Statics
struct UHT_STATICS
{
	struct ModularDialogueSubsystem_eventAbortExecutingDialogue_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Aborts currently executing Dialogue\n" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Aborts currently executing Dialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function AbortExecutingDialogue constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueSubsystem_eventAbortExecutingDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AbortExecutingDialogue constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AbortExecutingDialogue Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventAbortExecutingDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSubsystem_eventAbortExecutingDialogue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function AbortExecutingDialogue Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "AbortExecutingDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSubsystem_eventAbortExecutingDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSubsystem_eventAbortExecutingDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_AbortExecutingDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execAbortExecutingDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UModularDialogueSubsystem::AbortExecutingDialogue(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function AbortExecutingDialogue ******************

// ********** Begin Class UModularDialogueSubsystem Function ChangeDialogueWidget ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_ChangeDialogueWidget_Statics
struct UHT_STATICS
{
	struct ModularDialogueSubsystem_eventChangeDialogueWidget_Parms
	{
		UObject* WorldContextObject;
		UModularDialogueSystemUserWidget* NewWidget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Updates DialogueWidget with the given Widget.\n//  Doesn't work if there is an Dialogue with \"Executing\" status.\n//  Works at the start of Dialogue or end of Dialogue. Can be called from DialogueAction's PrepareContext or EndAction.\n" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Updates DialogueWidget with the given Widget.\n Doesn't work if there is an Dialogue with \"Executing\" status.\n Works at the start of Dialogue or end of Dialogue. Can be called from DialogueAction's PrepareContext or EndAction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChangeDialogueWidget constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueSubsystem_eventChangeDialogueWidget_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ChangeDialogueWidget constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ChangeDialogueWidget Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventChangeDialogueWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventChangeDialogueWidget_Parms, NewWidget), Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewWidget_MetaData), NewProp_NewWidget_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSubsystem_eventChangeDialogueWidget_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NewWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ChangeDialogueWidget Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "ChangeDialogueWidget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSubsystem_eventChangeDialogueWidget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSubsystem_eventChangeDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_ChangeDialogueWidget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execChangeDialogueWidget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UModularDialogueSystemUserWidget,Z_Param_NewWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UModularDialogueSubsystem::ChangeDialogueWidget(Z_Param_WorldContextObject,Z_Param_NewWidget);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function ChangeDialogueWidget ********************

// ********** Begin Class UModularDialogueSubsystem Function GetDialogueWidget *********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_GetDialogueWidget_Statics
struct UHT_STATICS
{
	struct ModularDialogueSubsystem_eventGetDialogueWidget_Parms
	{
		UObject* WorldContextObject;
		UModularDialogueSystemUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Getter for DialogueWidget system uses.\n" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Getter for DialogueWidget system uses." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDialogueWidget constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDialogueWidget constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDialogueWidget Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventGetDialogueWidget_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventGetDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDialogueWidget Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "GetDialogueWidget", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSubsystem_eventGetDialogueWidget_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSubsystem_eventGetDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_GetDialogueWidget(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execGetDialogueWidget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularDialogueSystemUserWidget**)Z_Param__Result=UModularDialogueSubsystem::GetDialogueWidget(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function GetDialogueWidget ***********************

// ********** Begin Class UModularDialogueSubsystem Function GetExecutingDialogue ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_GetExecutingDialogue_Statics
struct UHT_STATICS
{
	struct ModularDialogueSubsystem_eventGetExecutingDialogue_Parms
	{
		UObject* WorldContextObject;
		UModularDialogueObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Getter for currently executing Dialogue\n" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Getter for currently executing Dialogue" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExecutingDialogue constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExecutingDialogue constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExecutingDialogue Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventGetExecutingDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventGetExecutingDialogue_Parms, ReturnValue), Z_Construct_UClass_UModularDialogueObject, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetExecutingDialogue Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "GetExecutingDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSubsystem_eventGetExecutingDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSubsystem_eventGetExecutingDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_GetExecutingDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execGetExecutingDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UModularDialogueObject**)Z_Param__Result=UModularDialogueSubsystem::GetExecutingDialogue(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function GetExecutingDialogue ********************

// ********** Begin Class UModularDialogueSubsystem Function InternalOnDialogueFinished ************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_InternalOnDialogueFinished_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Bound to Dialogue's Finished event.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Bound to Dialogue's Finished event." },
	};
#endif // WITH_METADATA

// ********** Begin Function InternalOnDialogueFinished constinit property declarations ************
// ********** End Function InternalOnDialogueFinished constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "InternalOnDialogueFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_InternalOnDialogueFinished(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execInternalOnDialogueFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InternalOnDialogueFinished();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function InternalOnDialogueFinished **************

// ********** Begin Class UModularDialogueSubsystem Function TryStartDialogue **********************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_TryStartDialogue_Statics
struct UHT_STATICS
{
	struct ModularDialogueSubsystem_eventTryStartDialogue_Parms
	{
		AActor* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Stars to Dialogue with the NPC selected by System itself (InteractionWidget assigned one)\n//  Should be called from Input Event by Player itself.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Stars to Dialogue with the NPC selected by System itself (InteractionWidget assigned one)\n Should be called from Input Event by Player itself." },
	};
#endif // WITH_METADATA

// ********** Begin Function TryStartDialogue constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueSubsystem_eventTryStartDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryStartDialogue constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryStartDialogue Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventTryStartDialogue_Parms, Player), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSubsystem_eventTryStartDialogue_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryStartDialogue Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "TryStartDialogue", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSubsystem_eventTryStartDialogue_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSubsystem_eventTryStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_TryStartDialogue(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execTryStartDialogue)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UModularDialogueSubsystem::TryStartDialogue(Z_Param_Player);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function TryStartDialogue ************************

// ********** Begin Class UModularDialogueSubsystem Function TryStartDialogueManually **************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSubsystem_TryStartDialogueManually_Statics
struct UHT_STATICS
{
	struct ModularDialogueSubsystem_eventTryStartDialogueManually_Parms
	{
		AActor* Player;
		AActor* NPC;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Should be used for Scripted scenarios.\n//  System tries to start Dialogue with the given Player and NPC\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Should be used for Scripted scenarios.\n System tries to start Dialogue with the given Player and NPC" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryStartDialogueManually constinit property declarations **************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPC;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueSubsystem_eventTryStartDialogueManually_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryStartDialogueManually constinit property declarations ****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryStartDialogueManually Property Definitions *************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventTryStartDialogueManually_Parms, Player), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NPC = { "NPC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSubsystem_eventTryStartDialogueManually_Parms, NPC), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSubsystem_eventTryStartDialogueManually_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPC,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function TryStartDialogueManually Property Definitions ***************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSubsystem, nullptr, "TryStartDialogueManually", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSubsystem_eventTryStartDialogueManually_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSubsystem_eventTryStartDialogueManually_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSubsystem_TryStartDialogueManually(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSubsystem::execTryStartDialogueManually)
{
	P_GET_OBJECT(AActor,Z_Param_Player);
	P_GET_OBJECT(AActor,Z_Param_NPC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UModularDialogueSubsystem::TryStartDialogueManually(Z_Param_Player,Z_Param_NPC);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSubsystem Function TryStartDialogueManually ****************

// ********** Begin Class UModularDialogueSubsystem ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueSubsystem_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ModularDialogueSubsystem.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerComponent_MetaData[] = {
		{ "Comment", "// Player's DialogueComponent\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Player's DialogueComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredComponents_MetaData[] = {
		{ "Comment", "// Registered NPC Dialogue Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Registered NPC Dialogue Components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedComponent_MetaData[] = {
		{ "Comment", "// Selected NPC Dialogue Component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Selected NPC Dialogue Component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Comment", "// Input action to be triggered when Dialogue is started and ended.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Input action to be triggered when Dialogue is started and ended." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidget_MetaData[] = {
		{ "Comment", "// Interaction widget to assign selected NPC's widget component.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Interaction widget to assign selected NPC's widget component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[] = {
		{ "Comment", "// Dialogue's UI itself\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "Dialogue's UI itself" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStarted_MetaData[] = {
		{ "Comment", "// **********************************************************\n// ** Global events for gameplay system, feel free to bind **\n// **********************************************************\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
		{ "ToolTip", "** Global events for gameplay system, feel free to bind **" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueSubsystem constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RegisteredComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueSubsystem constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AbortExecutingDialogue"), .Pointer = &UModularDialogueSubsystem::execAbortExecutingDialogue },
		{ .NameUTF8 = UTF8TEXT("ChangeDialogueWidget"), .Pointer = &UModularDialogueSubsystem::execChangeDialogueWidget },
		{ .NameUTF8 = UTF8TEXT("GetDialogueWidget"), .Pointer = &UModularDialogueSubsystem::execGetDialogueWidget },
		{ .NameUTF8 = UTF8TEXT("GetExecutingDialogue"), .Pointer = &UModularDialogueSubsystem::execGetExecutingDialogue },
		{ .NameUTF8 = UTF8TEXT("InternalOnDialogueFinished"), .Pointer = &UModularDialogueSubsystem::execInternalOnDialogueFinished },
		{ .NameUTF8 = UTF8TEXT("TryStartDialogue"), .Pointer = &UModularDialogueSubsystem::execTryStartDialogue },
		{ .NameUTF8 = UTF8TEXT("TryStartDialogueManually"), .Pointer = &UModularDialogueSubsystem::execTryStartDialogueManually },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_AbortExecutingDialogue, "AbortExecutingDialogue" }, // aeab814d82231a286770fdcbb49b93ddefa2ff2e
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_ChangeDialogueWidget, "ChangeDialogueWidget" }, // 20d3ee2916218b4b67e19d12a578a9eb261b97eb
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_GetDialogueWidget, "GetDialogueWidget" }, // 7a33c81b0bd844cd765a5268ada3ac538231b43d
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_GetExecutingDialogue, "GetExecutingDialogue" }, // 3ea51600a64b5b8c91a75626cbdb0b52b0182f6b
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_InternalOnDialogueFinished, "InternalOnDialogueFinished" }, // 5953daf1ac7e98a316c19fd320b1bac3aa7a898c
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_TryStartDialogue, "TryStartDialogue" }, // d13e352031b623319c7a6baec32749873cfdf8b1
		{ &Z_Construct_UFunction_UModularDialogueSubsystem_TryStartDialogueManually, "TryStartDialogueManually" }, // b459e2919421510bd40a4e350a192b3518d442d7
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueSubsystem Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerComponent = { "PlayerComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, PlayerComponent), Z_Construct_UClass_UModularDialogueComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerComponent_MetaData), NewProp_PlayerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RegisteredComponents_Inner = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, 0, Z_Construct_UClass_UModularDialogueComponent, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_RegisteredComponents = { "RegisteredComponents", nullptr, (EPropertyFlags)0x0124088000000008, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, RegisteredComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredComponents_MetaData), NewProp_RegisteredComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_SelectedComponent = { "SelectedComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, SelectedComponent), Z_Construct_UClass_UModularDialogueComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedComponent_MetaData), NewProp_SelectedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, InputAction), Z_Construct_UClass_UModularDialogueSystemInputAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InteractionWidget = { "InteractionWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, InteractionWidget), Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidget_MetaData), NewProp_InteractionWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, DialogueWidget), Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidget_MetaData), NewProp_DialogueWidget_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDialogueStarted = { "OnDialogueStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, OnDialogueStarted), Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueStarted_MetaData), NewProp_OnDialogueStarted_MetaData) }; // 0d56b2ca47a79ff084717b6c1be2754bb8a68f69
const UECodeGen_Private::FMulticastDelegatePropertyParams UHT_STATICS::NewProp_OnDialogueFinished = { "OnDialogueFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSubsystem, OnDialogueFinished), Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueFinished__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueFinished_MetaData), NewProp_OnDialogueFinished_MetaData) }; // f289a08fc7cb112e568b629aaf06500be5ec36d8
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RegisteredComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SelectedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InteractionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDialogueStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OnDialogueFinished,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueSubsystem Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UTickableWorldSubsystem,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueSubsystem,
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
static void UModularDialogueSubsystem_StaticRegisterNativesUModularDialogueSubsystem()
{
	UClass* Class = UModularDialogueSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueSubsystem;
UClass* Z_Construct_UClass_UModularDialogueSubsystem(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueSubsystem;
		if (!Z_Registration_Info_UClass_UModularDialogueSubsystem.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueSubsystem"),
				Z_Registration_Info_UClass_UModularDialogueSubsystem.InnerSingleton,
				UModularDialogueSubsystem_StaticRegisterNativesUModularDialogueSubsystem,
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
		return Z_Registration_Info_UClass_UModularDialogueSubsystem.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueSubsystem.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueSubsystem.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueSubsystem);
UModularDialogueSubsystem::~UModularDialogueSubsystem() {}
// ********** End Class UModularDialogueSubsystem **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueSubsystem, TEXT("UModularDialogueSubsystem"), &Z_Registration_Info_UClass_UModularDialogueSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueSubsystem), 2322516263U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSubsystem_h__Script_ModularDialogueSystem_10373c335aa3675d6dacfd4f717be1e941b56392{
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
