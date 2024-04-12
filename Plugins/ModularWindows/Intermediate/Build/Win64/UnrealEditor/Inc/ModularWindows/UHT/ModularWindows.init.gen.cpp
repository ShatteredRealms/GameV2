// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularWindows_init() {}
	MODULARWINDOWS_API UFunction* Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature();
	MODULARWINDOWS_API UFunction* Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularWindows;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularWindows()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularWindows.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularWindows",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x39DF4FD0,
				0x76E18589,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularWindows.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModularWindows.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularWindows(Z_Construct_UPackage__Script_ModularWindows, TEXT("/Script/ModularWindows"), Z_Registration_Info_UPackage__Script_ModularWindows, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x39DF4FD0, 0x76E18589));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
