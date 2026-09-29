// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueSystemLibrary.h"
#include "InputCoreTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueSystemLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueSystemEvents(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemLibrary(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemLibrary(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin ScriptStruct FModularDialogueSystemEvents **************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FModularDialogueSystemEvents_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FModularDialogueSystemEvents>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FModularDialogueSystemEvents); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FModularDialogueSystemEvents constinit property declarations ******
// ********** End ScriptStruct FModularDialogueSystemEvents constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularDialogueSystemEvents>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
	nullptr,
	&NewStructOps,
	"ModularDialogueSystemEvents",
	nullptr,
	0,
	DataSizeOf<FModularDialogueSystemEvents>(),
	alignof(FModularDialogueSystemEvents),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents;
UScriptStruct* Z_Construct_UScriptStruct_FModularDialogueSystemEvents(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularDialogueSystemEvents, (UObject*)Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase::Outer), TEXT("ModularDialogueSystemEvents"));
		}
		return Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FModularDialogueSystemEvents ****************************************

// ********** Begin Class UModularDialogueSystemLibrary Function GetInputEventKey ******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemLibrary_GetInputEventKey_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemLibrary_eventGetInputEventKey_Parms
	{
		EModularDialogueSystemInputEvents InEvent;
		FKey OutKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Helper to find actual Key by DialogueEvents\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
		{ "ToolTip", "Helper to find actual Key by DialogueEvents" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputEventKey constinit property declarations **********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_InEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InEvent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutKey;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueSystemLibrary_eventGetInputEventKey_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputEventKey constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputEventKey Property Definitions *********************************
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_InEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_InEvent = { "InEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventGetInputEventKey_Parms, InEvent), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents, METADATA_PARAMS(0, nullptr) }; // c141f37c93e959c0d7df708ef240825ba0ee9db2
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_OutKey = { "OutKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventGetInputEventKey_Parms, OutKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSystemLibrary_eventGetInputEventKey_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInputEventKey Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemLibrary, nullptr, "GetInputEventKey", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemLibrary_eventGetInputEventKey_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemLibrary_eventGetInputEventKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemLibrary_GetInputEventKey(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemLibrary::execGetInputEventKey)
{
	P_GET_ENUM(EModularDialogueSystemInputEvents,Z_Param_InEvent);
	P_GET_STRUCT_REF(FKey,Z_Param_Out_OutKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UModularDialogueSystemLibrary::GetInputEventKey(EModularDialogueSystemInputEvents(Z_Param_InEvent),Z_Param_Out_OutKey);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemLibrary Function GetInputEventKey ********************

// ********** Begin Class UModularDialogueSystemLibrary Function GetInputEventType *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemLibrary_GetInputEventType_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemLibrary_eventGetInputEventType_Parms
	{
		FKey InKey;
		EModularDialogueSystemInputEvents OutEvent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Helper to find DialogueEvent type by Key\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
		{ "ToolTip", "Helper to find DialogueEvent type by Key" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInputEventType constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutEvent_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutEvent;
	static void NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ModularDialogueSystemLibrary_eventGetInputEventType_Parms*)Obj)->ReturnValue = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInputEventType constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInputEventType Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventGetInputEventType_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_OutEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_OutEvent = { "OutEvent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventGetInputEventType_Parms, OutEvent), Z_Construct_UEnum_ModularDialogueSystem_EModularDialogueSystemInputEvents, METADATA_PARAMS(0, nullptr) }; // c141f37c93e959c0d7df708ef240825ba0ee9db2
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSystemLibrary_eventGetInputEventType_Parms), &UHT_STATICS::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutEvent_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetInputEventType Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemLibrary, nullptr, "GetInputEventType", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemLibrary_eventGetInputEventType_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemLibrary_eventGetInputEventType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemLibrary_GetInputEventType(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemLibrary::execGetInputEventType)
{
	P_GET_STRUCT(FKey,Z_Param_InKey);
	P_GET_ENUM_REF(EModularDialogueSystemInputEvents,Z_Param_Out_OutEvent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UModularDialogueSystemLibrary::GetInputEventType(Z_Param_InKey,(EModularDialogueSystemInputEvents&)(Z_Param_Out_OutEvent));
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemLibrary Function GetInputEventType *******************

// ********** Begin Class UModularDialogueSystemLibrary Function OnInputReceived *******************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemLibrary_OnInputReceived_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemLibrary_eventOnInputReceived_Parms
	{
		FKey Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// WidgetUseOnly!! Use when exit or next button is pressed\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
		{ "ToolTip", "WidgetUseOnly!! Use when exit or next button is pressed" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnInputReceived constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnInputReceived constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnInputReceived Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventOnInputReceived_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 64b3e4afc222613fc56ee34bd705dda53a3378d0
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnInputReceived Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemLibrary, nullptr, "OnInputReceived", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemLibrary_eventOnInputReceived_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemLibrary_eventOnInputReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemLibrary_OnInputReceived(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemLibrary::execOnInputReceived)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModularDialogueSystemLibrary::OnInputReceived(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemLibrary Function OnInputReceived *********************

// ********** Begin Class UModularDialogueSystemLibrary Function OnPlayerResponded *****************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemLibrary_OnPlayerResponded_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemLibrary_eventOnPlayerResponded_Parms
	{
		FName Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// WidgetUseOnly!! Use when Player Response is clicked on widget.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
		{ "ToolTip", "WidgetUseOnly!! Use when Player Response is clicked on widget." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPlayerResponded constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPlayerResponded constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPlayerResponded Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventOnPlayerResponded_Parms, Response), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnPlayerResponded Property Definitions **********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemLibrary, nullptr, "OnPlayerResponded", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemLibrary_eventOnPlayerResponded_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemLibrary_eventOnPlayerResponded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemLibrary_OnPlayerResponded(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemLibrary::execOnPlayerResponded)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModularDialogueSystemLibrary::OnPlayerResponded(Z_Param_Response);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemLibrary Function OnPlayerResponded *******************

// ********** Begin Class UModularDialogueSystemLibrary Function OnPlayerResponseHovered ***********
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemLibrary_OnPlayerResponseHovered_Statics
struct UHT_STATICS
{
	struct ModularDialogueSystemLibrary_eventOnPlayerResponseHovered_Parms
	{
		int32 IndexResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// WidgetUseOnly!! Use when PlayerResponse is hovered. \n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
		{ "ToolTip", "WidgetUseOnly!! Use when PlayerResponse is hovered." },
	};
#endif // WITH_METADATA

// ********** Begin Function OnPlayerResponseHovered constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPlayerResponseHovered constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPlayerResponseHovered Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_IndexResponse = { "IndexResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemLibrary_eventOnPlayerResponseHovered_Parms, IndexResponse), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IndexResponse,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function OnPlayerResponseHovered Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemLibrary, nullptr, "OnPlayerResponseHovered", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueSystemLibrary_eventOnPlayerResponseHovered_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueSystemLibrary_eventOnPlayerResponseHovered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemLibrary_OnPlayerResponseHovered(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemLibrary::execOnPlayerResponseHovered)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexResponse);
	P_FINISH;
	P_NATIVE_BEGIN;
	UModularDialogueSystemLibrary::OnPlayerResponseHovered(Z_Param_IndexResponse);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemLibrary Function OnPlayerResponseHovered *************

// ********** Begin Class UModularDialogueSystemLibrary ********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueSystemLibrary_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "ModularDialogueSystemLibrary.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueSystemLibrary constinit property declarations ************
// ********** End Class UModularDialogueSystemLibrary constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInputEventKey"), .Pointer = &UModularDialogueSystemLibrary::execGetInputEventKey },
		{ .NameUTF8 = UTF8TEXT("GetInputEventType"), .Pointer = &UModularDialogueSystemLibrary::execGetInputEventType },
		{ .NameUTF8 = UTF8TEXT("OnInputReceived"), .Pointer = &UModularDialogueSystemLibrary::execOnInputReceived },
		{ .NameUTF8 = UTF8TEXT("OnPlayerResponded"), .Pointer = &UModularDialogueSystemLibrary::execOnPlayerResponded },
		{ .NameUTF8 = UTF8TEXT("OnPlayerResponseHovered"), .Pointer = &UModularDialogueSystemLibrary::execOnPlayerResponseHovered },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueSystemLibrary_GetInputEventKey, "GetInputEventKey" }, // bc0a18b4e86e35bd85e13ea287a98ca2975b4451
		{ &Z_Construct_UFunction_UModularDialogueSystemLibrary_GetInputEventType, "GetInputEventType" }, // 87b90fa4594972531cbf2148b47d38ffad158417
		{ &Z_Construct_UFunction_UModularDialogueSystemLibrary_OnInputReceived, "OnInputReceived" }, // 36625783a27190ff230385cc078261ff6ac1a9fb
		{ &Z_Construct_UFunction_UModularDialogueSystemLibrary_OnPlayerResponded, "OnPlayerResponded" }, // 1e87c563370ce1ac05db16ad83b98bb882b73bcc
		{ &Z_Construct_UFunction_UModularDialogueSystemLibrary_OnPlayerResponseHovered, "OnPlayerResponseHovered" }, // 96990eddc858191e4391191776e0e61bcb2e55fd
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueSystemLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueSystemLibrary,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UModularDialogueSystemLibrary_StaticRegisterNativesUModularDialogueSystemLibrary()
{
	UClass* Class = UModularDialogueSystemLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueSystemLibrary;
UClass* Z_Construct_UClass_UModularDialogueSystemLibrary(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueSystemLibrary;
		if (!Z_Registration_Info_UClass_UModularDialogueSystemLibrary.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueSystemLibrary"),
				Z_Registration_Info_UClass_UModularDialogueSystemLibrary.InnerSingleton,
				UModularDialogueSystemLibrary_StaticRegisterNativesUModularDialogueSystemLibrary,
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
		return Z_Registration_Info_UClass_UModularDialogueSystemLibrary.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueSystemLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueSystemLibrary.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueSystemLibrary.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueSystemLibrary::UModularDialogueSystemLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueSystemLibrary);
UModularDialogueSystemLibrary::~UModularDialogueSystemLibrary() {}
// ********** End Class UModularDialogueSystemLibrary **********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FModularDialogueSystemEvents, Z_Construct_UScriptStruct_FModularDialogueSystemEvents_Statics::NewStructOps, TEXT("ModularDialogueSystemEvents"),&Z_Registration_Info_UScriptStruct_FModularDialogueSystemEvents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularDialogueSystemEvents), 2315453791U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueSystemLibrary, TEXT("UModularDialogueSystemLibrary"), &Z_Registration_Info_UClass_UModularDialogueSystemLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueSystemLibrary), 306497797U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemLibrary_h__Script_ModularDialogueSystem_2ebb9a044db7df39c92c5fd7fd9d64d5d49425b8{
	TEXT("/Script/ModularDialogueSystem"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
