// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Targets/StationaryTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStationaryTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_AStationaryTarget();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_AStationaryTarget_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetable_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(AStationaryTarget::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStationaryTarget::execSetDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayName(Z_Param_NewDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AStationaryTarget::execGetTargetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTargetComponent**)Z_Param__Result=P_THIS->GetTargetComponent();
		P_NATIVE_END;
	}
	void AStationaryTarget::StaticRegisterNativesAStationaryTarget()
	{
		UClass* Class = AStationaryTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &AStationaryTarget::execGetDisplayName },
			{ "GetTargetComponent", &AStationaryTarget::execGetTargetComponent },
			{ "SetDisplayName", &AStationaryTarget::execSetDisplayName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics
	{
		struct StationaryTarget_eventGetDisplayName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationaryTarget_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStationaryTarget, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::StationaryTarget_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::StationaryTarget_eventGetDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStationaryTarget_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationaryTarget_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics
	{
		struct StationaryTarget_eventGetTargetComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationaryTarget_eventGetTargetComponent_Parms, ReturnValue), Z_Construct_UClass_UTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStationaryTarget, nullptr, "GetTargetComponent", nullptr, nullptr, Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::StationaryTarget_eventGetTargetComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::StationaryTarget_eventGetTargetComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStationaryTarget_GetTargetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationaryTarget_GetTargetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics
	{
		struct StationaryTarget_eventSetDisplayName_Parms
		{
			FString NewDisplayName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StationaryTarget_eventSetDisplayName_Parms, NewDisplayName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::NewProp_NewDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStationaryTarget, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::StationaryTarget_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::StationaryTarget_eventSetDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStationaryTarget_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStationaryTarget_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStationaryTarget);
	UClass* Z_Construct_UClass_AStationaryTarget_NoRegister()
	{
		return AStationaryTarget::StaticClass();
	}
	struct Z_Construct_UClass_AStationaryTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStationaryTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AStationaryTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStationaryTarget_GetDisplayName, "GetDisplayName" }, // 216365449
		{ &Z_Construct_UFunction_AStationaryTarget_GetTargetComponent, "GetTargetComponent" }, // 3716334172
		{ &Z_Construct_UFunction_AStationaryTarget_SetDisplayName, "SetDisplayName" }, // 3703064803
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStationaryTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Targets/StationaryTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStationaryTarget_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StationaryTarget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The main skeletal mesh associated with this stationary target (optional sub-object). */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The main skeletal mesh associated with this stationary target (optional sub-object)." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AStationaryTarget_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationaryTarget, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AStationaryTarget_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStationaryTarget_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "Category", "Targeting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStationaryTarget_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationaryTarget, TargetComponent), Z_Construct_UClass_UTargetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::NewProp_TargetComponent_MetaData), Z_Construct_UClass_AStationaryTarget_Statics::NewProp_TargetComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStationaryTarget_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/Targets/StationaryTarget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AStationaryTarget_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStationaryTarget, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::NewProp_DisplayName_MetaData), Z_Construct_UClass_AStationaryTarget_Statics::NewProp_DisplayName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStationaryTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationaryTarget_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationaryTarget_Statics::NewProp_TargetComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStationaryTarget_Statics::NewProp_DisplayName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AStationaryTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTargetable_NoRegister, (int32)VTABLE_OFFSET(AStationaryTarget, ITargetable), false },  // 3126126370
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStationaryTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStationaryTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStationaryTarget_Statics::ClassParams = {
		&AStationaryTarget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStationaryTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_AStationaryTarget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStationaryTarget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStationaryTarget()
	{
		if (!Z_Registration_Info_UClass_AStationaryTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStationaryTarget.OuterSingleton, Z_Construct_UClass_AStationaryTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStationaryTarget.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<AStationaryTarget>()
	{
		return AStationaryTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStationaryTarget);
	AStationaryTarget::~AStationaryTarget() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStationaryTarget, AStationaryTarget::StaticClass, TEXT("AStationaryTarget"), &Z_Registration_Info_UClass_AStationaryTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStationaryTarget), 2116484569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_1041879925(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_Targets_StationaryTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
