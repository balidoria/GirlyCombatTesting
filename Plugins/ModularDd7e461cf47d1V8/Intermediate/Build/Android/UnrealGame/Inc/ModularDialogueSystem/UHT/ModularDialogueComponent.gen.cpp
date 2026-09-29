// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularDialogueComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeModularDialogueComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueComponent(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueComponent(ETypeConstructPhase);
MODULARDIALOGUESYSTEM_API UClass* Z_Construct_UClass_UModularDialogueSystemDataAsset(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UModularDialogueComponent Function GetParameter **************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_UModularDialogueComponent_GetParameter_Statics
struct UHT_STATICS
{
	struct ModularDialogueComponent_eventGetParameter_Parms
	{
		FName Key;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// To get an Actor determined in Parameters variable.\n//\x09Returns nullptr if not found.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
		{ "ToolTip", "To get an Actor determined in Parameters variable.\n      Returns nullptr if not found." },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParameter constinit property declarations **************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParameter constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParameter Property Definitions *************************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueComponent_eventGetParameter_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ModularDialogueComponent_eventGetParameter_Parms, ReturnValue), Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetParameter Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_UModularDialogueComponent, nullptr, "GetParameter", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::ModularDialogueComponent_eventGetParameter_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::ModularDialogueComponent_eventGetParameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularDialogueComponent_GetParameter(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(UModularDialogueComponent::execGetParameter)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetParameter(Z_Param_Key);
	P_NATIVE_END;
}
// ********** End Class UModularDialogueComponent Function GetParameter ****************************

// ********** Begin Class UModularDialogueComponent ************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UModularDialogueComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ModularDialogueComponent.h" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPC_Name_MetaData[] = {
		{ "Category", "Modular Dialogue|NPC" },
		{ "Comment", "// In the Dialogue Widget, it can be shown.\n// Not used for Player.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
		{ "ToolTip", "In the Dialogue Widget, it can be shown.\nNot used for Player." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapRadius_MetaData[] = {
		{ "Category", "Modular Dialogue|NPC" },
		{ "Comment", "// Maximum range of dialogue interaction.\n// ** Not used for Player. **\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
		{ "ToolTip", "Maximum range of dialogue interaction.\n** Not used for Player. **" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckLineTrace_MetaData[] = {
		{ "Category", "Modular Dialogue|NPC" },
		{ "Comment", "// In addition to OverlapRadius, should we check for LineTrace for dialogue interaction?\n// ** Not used for Player. **\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
		{ "ToolTip", "In addition to OverlapRadius, should we check for LineTrace for dialogue interaction?\n** Not used for Player. **" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTraceChannel_MetaData[] = {
		{ "Category", "Modular Dialogue|NPC" },
		{ "EditCondition", "bCheckLineTrace" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSet_MetaData[] = {
		{ "Category", "Modular Dialogue|NPC" },
		{ "Comment", "// Dialogue set to execute when the Dialogue starts.\n// ** Not used for Player. **\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
		{ "ToolTip", "Dialogue set to execute when the Dialogue starts.\n** Not used for Player. **" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[] = {
		{ "Category", "Modular Dialogue" },
		{ "Comment", "// Modularity to reference any actor in the world to get access easily in Component or Dialogue Actions.\n// Can be used for both NPC and Player.\n" },
		{ "ModuleRelativePath", "Public/ModularDialogueComponent.h" },
		{ "ToolTip", "Modularity to reference any actor in the world to get access easily in Component or Dialogue Actions.\nCan be used for both NPC and Player." },
	};
#endif // WITH_METADATA

// ********** Begin Class UModularDialogueComponent constinit property declarations ****************
	static const UECodeGen_Private::FNamePropertyParams NewProp_NPC_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapRadius;
	static void NewProp_bCheckLineTrace_SetBit(void* Obj)
	{
		((UModularDialogueComponent*)Obj)->bCheckLineTrace = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckLineTrace;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineTraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSet;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Parameters_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Parameters_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UModularDialogueComponent constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetParameter"), .Pointer = &UModularDialogueComponent::execGetParameter },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularDialogueComponent_GetParameter, "GetParameter" }, // 0ac5b6d09deee89f57602934c7e1a9d9e41c4be1
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularDialogueComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UModularDialogueComponent Property Definitions ***************************
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_NPC_Name = { "NPC_Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueComponent, NPC_Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPC_Name_MetaData), NewProp_NPC_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_OverlapRadius = { "OverlapRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueComponent, OverlapRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapRadius_MetaData), NewProp_OverlapRadius_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bCheckLineTrace = { "bCheckLineTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UModularDialogueComponent), &UHT_STATICS::NewProp_bCheckLineTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckLineTrace_MetaData), NewProp_bCheckLineTrace_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LineTraceChannel = { "LineTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueComponent, LineTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTraceChannel_MetaData), NewProp_LineTraceChannel_MetaData) }; // 3aff698625c18cc2ccaa87a587b2eac8c50cdec7
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_DialogueSet = { "DialogueSet", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueComponent, DialogueSet), Z_Construct_UClass_UModularDialogueSystemDataAsset, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSet_MetaData), NewProp_DialogueSet_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams UHT_STATICS::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams UHT_STATICS::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0024080000000805, UECodeGen_Private::EPropertyGenFlags::Map, nullptr, nullptr, 1, STRUCT_OFFSET(UModularDialogueComponent, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parameters_MetaData), NewProp_Parameters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NPC_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OverlapRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bCheckLineTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LineTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DialogueSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_Parameters,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UModularDialogueComponent Property Definitions *****************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_ModularDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UModularDialogueComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void UModularDialogueComponent_StaticRegisterNativesUModularDialogueComponent()
{
	UClass* Class = UModularDialogueComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModularDialogueComponent;
UClass* Z_Construct_UClass_UModularDialogueComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UModularDialogueComponent;
		if (!Z_Registration_Info_UClass_UModularDialogueComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("ModularDialogueComponent"),
				Z_Registration_Info_UClass_UModularDialogueComponent.InnerSingleton,
				UModularDialogueComponent_StaticRegisterNativesUModularDialogueComponent,
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
		return Z_Registration_Info_UClass_UModularDialogueComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UModularDialogueComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularDialogueComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularDialogueComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UModularDialogueComponent);
UModularDialogueComponent::~UModularDialogueComponent() {}
// ********** End Class UModularDialogueComponent **************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueComponent_h__Script_ModularDialogueSystem_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularDialogueComponent, TEXT("UModularDialogueComponent"), &Z_Registration_Info_UClass_UModularDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularDialogueComponent), 56830382U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ModularDialogueSystem_Source_ModularDialogueSystem_Public_ModularDialogueComponent_h__Script_ModularDialogueSystem_50f83a03b08740747b29250ceaff99078db8ee84{
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
