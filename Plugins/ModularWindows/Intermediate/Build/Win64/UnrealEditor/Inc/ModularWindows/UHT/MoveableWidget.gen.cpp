// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MoveableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveableWidget() {}
// Cross Module References
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UMoveableWidget();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UMoveableWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	void UMoveableWidget::StaticRegisterNativesUMoveableWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveableWidget);
	UClass* Z_Construct_UClass_UMoveableWidget_NoRegister()
	{
		return UMoveableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMoveableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MoveableWidget.h" },
		{ "ModuleRelativePath", "Public/MoveableWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveableWidget_Statics::ClassParams = {
		&UMoveableWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveableWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMoveableWidget()
	{
		if (!Z_Registration_Info_UClass_UMoveableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveableWidget.OuterSingleton, Z_Construct_UClass_UMoveableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveableWidget.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UMoveableWidget>()
	{
		return UMoveableWidget::StaticClass();
	}
	UMoveableWidget::UMoveableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveableWidget);
	UMoveableWidget::~UMoveableWidget() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveableWidget, UMoveableWidget::StaticClass, TEXT("UMoveableWidget"), &Z_Registration_Info_UClass_UMoveableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveableWidget), 3970794519U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableWidget_h_279396637(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
