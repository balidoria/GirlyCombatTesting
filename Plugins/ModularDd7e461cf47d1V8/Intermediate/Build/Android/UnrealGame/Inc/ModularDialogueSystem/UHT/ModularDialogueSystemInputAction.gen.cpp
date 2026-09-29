// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueSystemInputAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueSystemInputAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UWorld(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemInputAction(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemInputAction(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemUserWidget(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueSystemInputAction Function K2_OnDialogueFinished *********
static FName NAME_UModularDialogueSystemInputAction_K2_OnDialogueFinished = FName(TEXT("K2_OnDialogueFinished"));
void UModularDialogueSystemInputAction::K2_OnDialogueFinished()
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemInputAction_K2_OnDialogueFinished);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		K2_OnDialogueFinished_Implementation();
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemInputAction_K2_OnDialogueFinished_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Called by DialogueSystem itself when a Dialogue is ended.\n//  Should handle Player's input only\n" },
		{ "DisplayName", "On Dialogue Finished" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemInputAction.h" },
		{ "ToolTip", "Called by DialogueSystem itself when a Dialogue is ended.\n Should handle Player's input only" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_OnDialogueFinished constinit property declarations *****************
// ********** End Function K2_OnDialogueFinished constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemInputAction, nullptr, "K2_OnDialogueFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
UFunction* Z_Construct_UFunction_UModularDialogueSystemInputAction_K2_OnDialogueFinished(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemInputAction::execK2_OnDialogueFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_OnDialogueFinished_Implementation();
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemInputAction Function K2_OnDialogueFinished ***********

// ********** Begin Class UModularDialogueSystemInputAction Function K2_OnDialogueStarted **********
struct ModularDialogueSystemInputAction_eventK2_OnDialogueStarted_Parms
{
	UModularDialogueSystemUserWidget* Widget;
};
static FName NAME_UModularDialogueSystemInputAction_K2_OnDialogueStarted = FName(TEXT("K2_OnDialogueStarted"));
void UModularDialogueSystemInputAction::K2_OnDialogueStarted(UModularDialogueSystemUserWidget* Widget)
{
	UFunction* Func = FindFunctionChecked(NAME_UModularDialogueSystemInputAction_K2_OnDialogueStarted);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ModularDialogueSystemInputAction_eventK2_OnDialogueStarted_Parms Parms;
		Parms.Widget=Widget;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		K2_OnDialogueStarted_Implementation(Widget);
	}
}
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueSystemInputAction_K2_OnDialogueStarted_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Called by DialogueSystem itself when a Dialogue is started.\n//  Should handle Player's input only\n" },
		{ "DisplayName", "On Dialogue Started" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemInputAction.h" },
		{ "ToolTip", "Called by DialogueSystem itself when a Dialogue is started.\n Should handle Player's input only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function K2_OnDialogueStarted constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function K2_OnDialogueStarted constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function K2_OnDialogueStarted Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueSystemInputAction_eventK2_OnDialogueStarted_Parms, Widget), Z_Construct_UClass_UModularDialogueSystemUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function K2_OnDialogueStarted Property Definitions *******************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueSystemInputAction, nullptr, "K2_OnDialogueStarted", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<ModularDialogueSystemInputAction_eventK2_OnDialogueStarted_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(ModularDialogueSystemInputAction_eventK2_OnDialogueStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueSystemInputAction_K2_OnDialogueStarted(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueSystemInputAction::execK2_OnDialogueStarted)
{
	P_GET_OBJECT(UModularDialogueSystemUserWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_OnDialogueStarted_Implementation(Z_Param_Widget);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueSystemInputAction Function K2_OnDialogueStarted ************

// ********** Begin Class UModularDialogueSystemInputAction ****************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueSystemInputAction_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ModularDialogueSystemInputAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularDialogueSystemInputAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModularDialogueSystemInputAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueSystemInputAction constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueSystemInputAction constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("K2_OnDialogueFinished"), .Pointer = &UModularDialogueSystemInputAction::execK2_OnDialogueFinished },
		{ .NameUTF8 = UTF8TEXT("K2_OnDialogueStarted"), .Pointer = &UModularDialogueSystemInputAction::execK2_OnDialogueStarted },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueSystemInputAction_K2_OnDialogueFinished, "K2_OnDialogueFinished" }, // c086efa9a430db1c981cefb677505922f992580d
		{ &Z_Construct_UFunction_UModularDialogueSystemInputAction_K2_OnDialogueStarted, "K2_OnDialogueStarted" }, // bd002312eb86912adc2e4359ab87f5cd1ddb449f
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueSystemInputAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueSystemInputAction Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueSystemInputAction, World), Z_Construct_UClass_UWorld, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueSystemInputAction Property Definitions *********************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueSystemInputAction,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UModularDialogueSystemInputAction_StaticRegisterNativesUModularDialogueSystemInputAction()
{
	UClass* Class = UModularDialogueSystemInputAction::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueSystemInputAction;
UClass* Z_Construct_UClass_UModularDialogueSystemInputAction(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueSystemInputAction;
		if (!Z_Registration_Info_UClass_UModularDialogueSystemInputAction.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueSystemInputAction"),
				Z_Registration_Info_UClass_UModularDialogueSystemInputAction.InnerSingleton,
				UModularDialogueSystemInputAction_StaticRegisterNativesUModularDialogueSystemInputAction,
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
		return Z_Registration_Info_UClass_UModularDialogueSystemInputAction.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueSystemInputAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueSystemInputAction.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueSystemInputAction.OuterSingleton;
}
#undef UHT_STATICS
UModularDialogueSystemInputAction::UModularDialogueSystemInputAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueSystemInputAction);
UModularDialogueSystemInputAction::~UModularDialogueSystemInputAction() {}
// ********** End Class UModularDialogueSystemInputAction ******************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemInputAction_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueSystemInputAction, TEXT("UModularDialogueSystemInputAction"), &Z_Registration_Info_UClass_UModularDialogueSystemInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueSystemInputAction), 3773370943U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueSystemInputAction_h__Script_ModularDialogueSystem_8a7bc8b56d42dcb7900a870da723a690b276b082{
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
