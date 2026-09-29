// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueSystemUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueSystemUserWidget() {}

// ********** Begin Cross Module References ********************************************************
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueSystemUserWidget Function HighlightPlayerResponse ********
struct ModularDialogueSystemUserWidget_eventHighlightPlayerResponse_Parms
{
	int32 Index;
};
static FName NAME_UModularDialogueSystemUserWidget_HighlightPlayerResponse = FName(TEXT("HighlightPlayerResponse"));
void UModularDialogueSystemUserWidget::HighlightPlayerResponse(int32 const& Index)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_HighlightPlayerResponse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemUserWidget_eventHighlightPlayerResponse_Parms Parms;
		Parms.Index=Index;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		HighlightPlayerResponse_Implementation(Index);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_HighlightPlayerResponse_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use to highlight a Player Response\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use to highlight a Player Response" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function HighlightPlayerResponse constinit property declarations ***************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HighlightPlayerResponse constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HighlightPlayerResponse Property Definitions **************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemUserWidget_eventHighlightPlayerResponse_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function HighlightPlayerResponse Property Definitions ****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "HighlightPlayerResponse", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemUserWidget_eventHighlightPlayerResponse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemUserWidget_eventHighlightPlayerResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_HighlightPlayerResponse(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execHighlightPlayerResponse)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HighlightPlayerResponse_Implementation(Z_Param_Out_Index);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function HighlightPlayerResponse **********

// ********** Begin Class UModularDialogueSystemUserWidget Function K2_PopulatePlayerResponse ******
struct ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms
{
	int32 Index;
	FName NodeName;
	FString Response;
};
static FName NAME_UModularDialogueSystemUserWidget_K2_PopulatePlayerResponse = FName(TEXT("K2_PopulatePlayerResponse"));
void UModularDialogueSystemUserWidget::K2_PopulatePlayerResponse(int32 const& Index, FName const& NodeName, const FString& Response)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_K2_PopulatePlayerResponse);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms Parms;
		Parms.Index=Index;
		Parms.NodeName=NodeName;
		Parms.Response=Response;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_PopulatePlayerResponse_Implementation(Index, NodeName, Response);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_K2_PopulatePlayerResponse_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use to add PlayerResponse for current NPC Node\n" },
		{ "DisplayName", "Populate Player Response" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use to add PlayerResponse for current NPC Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_PopulatePlayerResponse constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_PopulatePlayerResponse constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_PopulatePlayerResponse Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NodeName = { "NodeName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms, NodeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeName_MetaData), NewProp_NodeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NodeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_PopulatePlayerResponse Property Definitions **************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "K2_PopulatePlayerResponse", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemUserWidget_eventK2_PopulatePlayerResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_K2_PopulatePlayerResponse(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execK2_PopulatePlayerResponse)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Index);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NodeName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_PopulatePlayerResponse_Implementation(Z_Param_Out_Index,Z_Param_Out_NodeName,Z_Param_Response);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function K2_PopulatePlayerResponse ********

// ********** Begin Class UModularDialogueSystemUserWidget Function K2_ResetPlayerResponses ********
static FName NAME_UModularDialogueSystemUserWidget_K2_ResetPlayerResponses = FName(TEXT("K2_ResetPlayerResponses"));
void UModularDialogueSystemUserWidget::K2_ResetPlayerResponses()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_K2_ResetPlayerResponses);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		K2_ResetPlayerResponses_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_K2_ResetPlayerResponses_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use to clear out PlayerResponses to execute next NPC Node.\n" },
		{ "DisplayName", "Reset Player Responses" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use to clear out PlayerResponses to execute next NPC Node." },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_ResetPlayerResponses constinit property declarations ***************
// ********** End Function K2_ResetPlayerResponses constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "K2_ResetPlayerResponses", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_K2_ResetPlayerResponses(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execK2_ResetPlayerResponses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_ResetPlayerResponses_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function K2_ResetPlayerResponses **********

// ********** Begin Class UModularDialogueSystemUserWidget Function UpdateExitButton ***************
struct ModularDialogueSystemUserWidget_eventUpdateExitButton_Parms
{
	bool bIsVisible;
};
static FName NAME_UModularDialogueSystemUserWidget_UpdateExitButton = FName(TEXT("UpdateExitButton"));
void UModularDialogueSystemUserWidget::UpdateExitButton(bool bIsVisible)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_UpdateExitButton);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemUserWidget_eventUpdateExitButton_Parms Parms;
		Parms.bIsVisible=bIsVisible ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateExitButton_Implementation(bIsVisible);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateExitButton_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use to handle visibility of Exit button\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use to handle visibility of Exit button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateExitButton constinit property declarations **********************
	static void NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ModularDialogueSystemUserWidget_eventUpdateExitButton_Parms*)Obj)->bIsVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateExitButton constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateExitButton Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSystemUserWidget_eventUpdateExitButton_Parms), &UHT_STATICS::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateExitButton Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "UpdateExitButton", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemUserWidget_eventUpdateExitButton_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemUserWidget_eventUpdateExitButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateExitButton(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execUpdateExitButton)
{
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateExitButton_Implementation(Z_Param_bIsVisible);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function UpdateExitButton *****************

// ********** Begin Class UModularDialogueSystemUserWidget Function UpdateNextButton ***************
struct ModularDialogueSystemUserWidget_eventUpdateNextButton_Parms
{
	bool bIsVisible;
};
static FName NAME_UModularDialogueSystemUserWidget_UpdateNextButton = FName(TEXT("UpdateNextButton"));
void UModularDialogueSystemUserWidget::UpdateNextButton(bool bIsVisible)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_UpdateNextButton);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemUserWidget_eventUpdateNextButton_Parms Parms;
		Parms.bIsVisible=bIsVisible ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateNextButton_Implementation(bIsVisible);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNextButton_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use to handle visibility of Next button\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use to handle visibility of Next button" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateNextButton constinit property declarations **********************
	static void NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ModularDialogueSystemUserWidget_eventUpdateNextButton_Parms*)Obj)->bIsVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateNextButton constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateNextButton Property Definitions *********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularDialogueSystemUserWidget_eventUpdateNextButton_Parms), &UHT_STATICS::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateNextButton Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "UpdateNextButton", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemUserWidget_eventUpdateNextButton_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemUserWidget_eventUpdateNextButton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNextButton(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execUpdateNextButton)
{
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNextButton_Implementation(Z_Param_bIsVisible);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function UpdateNextButton *****************

// ********** Begin Class UModularDialogueSystemUserWidget Function UpdateNPCName ******************
struct ModularDialogueSystemUserWidget_eventUpdateNPCName_Parms
{
	FName Name;
};
static FName NAME_UModularDialogueSystemUserWidget_UpdateNPCName = FName(TEXT("UpdateNPCName"));
void UModularDialogueSystemUserWidget::UpdateNPCName(FName const& Name)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_UpdateNPCName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemUserWidget_eventUpdateNPCName_Parms Parms;
		Parms.Name=Name;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateNPCName_Implementation(Name);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNPCName_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use for updating NPC Name in the widget\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use for updating NPC Name in the widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateNPCName constinit property declarations *************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateNPCName constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateNPCName Property Definitions ************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemUserWidget_eventUpdateNPCName_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateNPCName Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "UpdateNPCName", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemUserWidget_eventUpdateNPCName_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemUserWidget_eventUpdateNPCName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNPCName(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execUpdateNPCName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNPCName_Implementation(Z_Param_Out_Name);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function UpdateNPCName ********************

// ********** Begin Class UModularDialogueSystemUserWidget Function UpdateNPCText ******************
struct ModularDialogueSystemUserWidget_eventUpdateNPCText_Parms
{
	FString Response;
};
static FName NAME_UModularDialogueSystemUserWidget_UpdateNPCText = FName(TEXT("UpdateNPCText"));
void UModularDialogueSystemUserWidget::UpdateNPCText(const FString& Response)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemUserWidget_UpdateNPCText);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemUserWidget_eventUpdateNPCText_Parms Parms;
		Parms.Response=Response;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		UpdateNPCText_Implementation(Response);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNPCText_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "// Use to show NPC Text for current NPC Node\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
		{ "ToolTip", "Use to show NPC Text for current NPC Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateNPCText constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateNPCText constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateNPCText Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemUserWidget_eventUpdateNPCText_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateNPCText Property Definitions **************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemUserWidget, nullptr, "UpdateNPCText", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemUserWidget_eventUpdateNPCText_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemUserWidget_eventUpdateNPCText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNPCText(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemUserWidget::execUpdateNPCText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateNPCText_Implementation(Z_Param_Response);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemUserWidget Function UpdateNPCText ********************

// ********** Begin Class UModularDialogueSystemUserWidget *****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueSystemUserWidget_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "DisplayName", "Modular Dialogue System User Widget" },
		{ "IncludePath", "ModularDialogueSystemUserWidget.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemUserWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueSystemUserWidget constinit property declarations *********
// ********** End Class UModularDialogueSystemUserWidget constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HighlightPlayerResponse"), .Pointer = &UModularDialogueSystemUserWidget::execHighlightPlayerResponse },
		{ .NameUTF8 = UTF8TEXT("K2_PopulatePlayerResponse"), .Pointer = &UModularDialogueSystemUserWidget::execK2_PopulatePlayerResponse },
		{ .NameUTF8 = UTF8TEXT("K2_ResetPlayerResponses"), .Pointer = &UModularDialogueSystemUserWidget::execK2_ResetPlayerResponses },
		{ .NameUTF8 = UTF8TEXT("UpdateExitButton"), .Pointer = &UModularDialogueSystemUserWidget::execUpdateExitButton },
		{ .NameUTF8 = UTF8TEXT("UpdateNextButton"), .Pointer = &UModularDialogueSystemUserWidget::execUpdateNextButton },
		{ .NameUTF8 = UTF8TEXT("UpdateNPCName"), .Pointer = &UModularDialogueSystemUserWidget::execUpdateNPCName },
		{ .NameUTF8 = UTF8TEXT("UpdateNPCText"), .Pointer = &UModularDialogueSystemUserWidget::execUpdateNPCText },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_HighlightPlayerResponse, "HighlightPlayerResponse" }, // 31cb8d73a7b875d719f5b03821f500b5c7e413f4
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_K2_PopulatePlayerResponse, "K2_PopulatePlayerResponse" }, // 727d8008b69aa9a237de9873cb7e35df8446e077
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_K2_ResetPlayerResponses, "K2_ResetPlayerResponses" }, // 257f7dab7a36369184b7b5cf98f7f96a1f7823a9
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateExitButton, "UpdateExitButton" }, // ba46aa7ab662f0ee54251a24e41aa1342d910f04
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNextButton, "UpdateNextButton" }, // 60e69d739b09d61056478e55f63a72fffbfcc53d
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNPCName, "UpdateNPCName" }, // 8612e4505cd8812993942778b309c6de3d9ab0cf
		{ &Z_Construct_UFunction_UModularDialogueSystemUserWidget_UpdateNPCText, "UpdateNPCText" }, // 062767f5b5da80545fe94ff6124a8cc521f87632
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueSystemUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UUserWidget,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueSystemUserWidget,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UModularDialogueSystemUserWidget_StaticRegisterNativesUModularDialogueSystemUserWidget()
{
	UClass* Class = UModularDialogueSystemUserWidget::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueSystemUserWidget;
UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueSystemUserWidget;
		if (!Z_Registration_Info_UClass_UModularDialogueSystemUserWidget.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueSystemUserWidget"),
				Z_Registration_Info_UClass_UModularDialogueSystemUserWidget.InnerSingleton,
				UModularDialogueSystemUserWidget_StaticRegisterNativesUModularDialogueSystemUserWidget,
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
		return Z_Registration_Info_UClass_UModularDialogueSystemUserWidget.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueSystemUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueSystemUserWidget.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueSystemUserWidget.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueSystemUserWidget::UModularDialogueSystemUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueSystemUserWidget);
UModularDialogueSystemUserWidget::~UModularDialogueSystemUserWidget() {}
// ********** End Class UModularDialogueSystemUserWidget *******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueSystemUserWidget, TEXT("UModularDialogueSystemUserWidget"), &Z_Registration_Info_UClass_UModularDialogueSystemUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueSystemUserWidget), 526734280U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemUserWidget_h__Script_ModularDialogueSystem_c511093ea9594d6519acc2f0118863c4d8debe87{
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
