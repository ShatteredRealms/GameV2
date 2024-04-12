// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/TargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetComponent() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetDetailsWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UTargetComponent::execGetDetailsUserWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTargetDetailsWidget**)Z_Param__Result=P_THIS->GetDetailsUserWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetComponent::execSetDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayName(Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetComponent::execIsTargeted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargeted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetComponent::execSetTargeted)
	{
		P_GET_UBOOL(Z_Param_bIsTargeted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargeted(Z_Param_bIsTargeted);
		P_NATIVE_END;
	}
	void UTargetComponent::StaticRegisterNativesUTargetComponent()
	{
		UClass* Class = UTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetailsUserWidget", &UTargetComponent::execGetDetailsUserWidget },
			{ "IsTargeted", &UTargetComponent::execIsTargeted },
			{ "SetDisplayName", &UTargetComponent::execSetDisplayName },
			{ "SetTargeted", &UTargetComponent::execSetTargeted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics
	{
		struct TargetComponent_eventGetDetailsUserWidget_Parms
		{
			UTargetDetailsWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetComponent_eventGetDetailsUserWidget_Parms, ReturnValue), Z_Construct_UClass_UTargetDetailsWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Public/TargetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetComponent, nullptr, "GetDetailsUserWidget", nullptr, nullptr, Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::TargetComponent_eventGetDetailsUserWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::TargetComponent_eventGetDetailsUserWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics
	{
		struct TargetComponent_eventIsTargeted_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetComponent_eventIsTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetComponent_eventIsTargeted_Parms), &Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether is targeted. */" },
#endif
		{ "ModuleRelativePath", "Public/TargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether is targeted." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetComponent, nullptr, "IsTargeted", nullptr, nullptr, Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::TargetComponent_eventIsTargeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::TargetComponent_eventIsTargeted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetComponent_IsTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetComponent_IsTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics
	{
		struct TargetComponent_eventSetDisplayName_Parms
		{
			FString NewName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetComponent_eventSetDisplayName_Parms, NewName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter for DisplayName. */" },
#endif
		{ "ModuleRelativePath", "Public/TargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter for DisplayName." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetComponent, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::TargetComponent_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::TargetComponent_eventSetDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetComponent_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetComponent_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics
	{
		struct TargetComponent_eventSetTargeted_Parms
		{
			bool bIsTargeted;
		};
		static void NewProp_bIsTargeted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTargeted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::NewProp_bIsTargeted_SetBit(void* Obj)
	{
		((TargetComponent_eventSetTargeted_Parms*)Obj)->bIsTargeted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::NewProp_bIsTargeted = { "bIsTargeted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetComponent_eventSetTargeted_Parms), &Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::NewProp_bIsTargeted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::NewProp_bIsTargeted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set whether targeted or not. Nothing happens if does not change. */" },
#endif
		{ "ModuleRelativePath", "Public/TargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether targeted or not. Nothing happens if does not change." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetComponent, nullptr, "SetTargeted", nullptr, nullptr, Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::TargetComponent_eventSetTargeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::TargetComponent_eventSetTargeted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetComponent_SetTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetComponent_SetTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetComponent);
	UClass* Z_Construct_UClass_UTargetComponent_NoRegister()
	{
		return UTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetComponent_GetDetailsUserWidget, "GetDetailsUserWidget" }, // 185346385
		{ &Z_Construct_UFunction_UTargetComponent_IsTargeted, "IsTargeted" }, // 2796005897
		{ &Z_Construct_UFunction_UTargetComponent_SetDisplayName, "SetDisplayName" }, // 4064909990
		{ &Z_Construct_UFunction_UTargetComponent_SetTargeted, "SetTargeted" }, // 2078049816
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "TargetComponent.h" },
		{ "ModuleRelativePath", "Public/TargetComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetComponent_Statics::ClassParams = {
		&UTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetComponent.OuterSingleton, Z_Construct_UClass_UTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetComponent.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetComponent>()
	{
		return UTargetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetComponent);
	UTargetComponent::~UTargetComponent() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_TargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_TargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetComponent, UTargetComponent::StaticClass, TEXT("UTargetComponent"), &Z_Registration_Info_UClass_UTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetComponent), 3838665302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_TargetComponent_h_3886262952(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_TargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_TargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
