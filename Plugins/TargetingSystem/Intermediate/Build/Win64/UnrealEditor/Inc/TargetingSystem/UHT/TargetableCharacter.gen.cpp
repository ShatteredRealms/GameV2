// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Targets/TargetableCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetableCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATargetableCharacter();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_ATargetableCharacter_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(ATargetableCharacter::execGetTargetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTargetComponent**)Z_Param__Result=P_THIS->GetTargetComponent();
		P_NATIVE_END;
	}
	void ATargetableCharacter::StaticRegisterNativesATargetableCharacter()
	{
		UClass* Class = ATargetableCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTargetComponent", &ATargetableCharacter::execGetTargetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics
	{
		struct TargetableCharacter_eventGetTargetComponent_Parms
		{
			UTargetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetableCharacter_eventGetTargetComponent_Parms, ReturnValue), Z_Construct_UClass_UTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Targets/TargetableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATargetableCharacter, nullptr, "GetTargetComponent", nullptr, nullptr, Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::TargetableCharacter_eventGetTargetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::TargetableCharacter_eventGetTargetComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetableCharacter);
	UClass* Z_Construct_UClass_ATargetableCharacter_NoRegister()
	{
		return ATargetableCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATargetableCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetableCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATargetableCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATargetableCharacter_GetTargetComponent, "GetTargetComponent" }, // 211691295
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetableCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base SRO character that can be targeted.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Targets/TargetableCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targets/TargetableCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base SRO character that can be targeted." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetableCharacter_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "Targeting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Targets/TargetableCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATargetableCharacter_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetableCharacter, TargetComponent), Z_Construct_UClass_UTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::NewProp_TargetComponent_MetaData), Z_Construct_UClass_ATargetableCharacter_Statics::NewProp_TargetComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetableCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetableCharacter_Statics::NewProp_TargetComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATargetableCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTargetable_NoRegister, (int32)VTABLE_OFFSET(ATargetableCharacter, ITargetable), false },  // 3126126370
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetableCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetableCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetableCharacter_Statics::ClassParams = {
		&ATargetableCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATargetableCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetableCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetableCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATargetableCharacter()
	{
		if (!Z_Registration_Info_UClass_ATargetableCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetableCharacter.OuterSingleton, Z_Construct_UClass_ATargetableCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATargetableCharacter.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<ATargetableCharacter>()
	{
		return ATargetableCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetableCharacter);
	ATargetableCharacter::~ATargetableCharacter() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATargetableCharacter, ATargetableCharacter::StaticClass, TEXT("ATargetableCharacter"), &Z_Registration_Info_UClass_ATargetableCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetableCharacter), 3534351609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_1962332765(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_TargetableCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
