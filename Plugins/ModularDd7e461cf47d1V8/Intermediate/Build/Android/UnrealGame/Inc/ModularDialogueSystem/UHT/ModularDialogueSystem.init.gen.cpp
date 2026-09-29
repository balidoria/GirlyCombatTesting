// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularDialogueSystem_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	MODULARDIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueFinished__DelegateSignature(ETypeConstructPhase);
	MODULARDIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueStarted__DelegateSignature(ETypeConstructPhase);
	MODULARDIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularOnDialogueFinished__DelegateSignature(ETypeConstructPhase);
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularDialogueSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularDialogueSystem(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_ModularDialogueSystem.OuterSingleton)
		{
		static FTypeConstructFunc* SingletonFuncArray[] = {
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueFinished__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularGlobalOnDialogueStarted__DelegateSignature,
			(FTypeConstructFunc*)Z_Construct_UDelegateFunction_ModularDialogueSystem_ModularOnDialogueFinished__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ModularDialogueSystem",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x3EFB44AE,
			0xEE0610CD,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularDialogueSystem.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ModularDialogueSystem.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularDialogueSystem(Z_Construct_UPackage__Script_ModularDialogueSystem, TEXT("/Script/ModularDialogueSystem"), Z_Registration_Info_UPackage__Script_ModularDialogueSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3EFB44AE, 0xEE0610CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
