// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Targetable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetable();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetable::StaticRegisterNativesUTargetable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetable);
	UClass* Z_Construct_UClass_UTargetable_NoRegister()
	{
		return UTargetable::StaticClass();
	}
	struct Z_Construct_UClass_UTargetable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetable_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Targetable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITargetable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetable_Statics::ClassParams = {
		&UTargetable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetable_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTargetable()
	{
		if (!Z_Registration_Info_UClass_UTargetable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetable.OuterSingleton, Z_Construct_UClass_UTargetable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetable.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetable>()
	{
		return UTargetable::StaticClass();
	}
	UTargetable::UTargetable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetable);
	UTargetable::~UTargetable() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetable, UTargetable::StaticClass, TEXT("UTargetable"), &Z_Registration_Info_UClass_UTargetable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetable), 3126126370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_182091596(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targetable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
