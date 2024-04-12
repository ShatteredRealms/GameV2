// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/AttackTargetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackTargetComponent() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAttackTargetComponent();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAttackTargetComponent_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetComponent();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UAttackTargetComponent::execIsAttacked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttackTargetComponent::execSetAttacked)
	{
		P_GET_UBOOL(Z_Param_bAttacked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttacked(Z_Param_bAttacked);
		P_NATIVE_END;
	}
	void UAttackTargetComponent::StaticRegisterNativesUAttackTargetComponent()
	{
		UClass* Class = UAttackTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAttacked", &UAttackTargetComponent::execIsAttacked },
			{ "SetAttacked", &UAttackTargetComponent::execSetAttacked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics
	{
		struct AttackTargetComponent_eventIsAttacked_Parms
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
	void Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttackTargetComponent_eventIsAttacked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttackTargetComponent_eventIsAttacked_Parms), &Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether is targeted. */" },
#endif
		{ "ModuleRelativePath", "Public/AttackTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether is targeted." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackTargetComponent, nullptr, "IsAttacked", nullptr, nullptr, Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::AttackTargetComponent_eventIsAttacked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::AttackTargetComponent_eventIsAttacked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttackTargetComponent_IsAttacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttackTargetComponent_IsAttacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics
	{
		struct AttackTargetComponent_eventSetAttacked_Parms
		{
			bool bAttacked;
		};
		static void NewProp_bAttacked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttacked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::NewProp_bAttacked_SetBit(void* Obj)
	{
		((AttackTargetComponent_eventSetAttacked_Parms*)Obj)->bAttacked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::NewProp_bAttacked = { "bAttacked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttackTargetComponent_eventSetAttacked_Parms), &Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::NewProp_bAttacked_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::NewProp_bAttacked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Targeting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set whether targeted or not. Nothing happens if does not change. */" },
#endif
		{ "ModuleRelativePath", "Public/AttackTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether targeted or not. Nothing happens if does not change." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackTargetComponent, nullptr, "SetAttacked", nullptr, nullptr, Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::AttackTargetComponent_eventSetAttacked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::AttackTargetComponent_eventSetAttacked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttackTargetComponent_SetAttacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttackTargetComponent_SetAttacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackTargetComponent);
	UClass* Z_Construct_UClass_UAttackTargetComponent_NoRegister()
	{
		return UAttackTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttackTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttackTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttackTargetComponent_IsAttacked, "IsAttacked" }, // 2710753908
		{ &Z_Construct_UFunction_UAttackTargetComponent_SetAttacked, "SetAttacked" }, // 2453380609
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "AttackTargetComponent.h" },
		{ "ModuleRelativePath", "Public/AttackTargetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackTargetComponent_Statics::ClassParams = {
		&UAttackTargetComponent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackTargetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAttackTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UAttackTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackTargetComponent.OuterSingleton, Z_Construct_UClass_UAttackTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackTargetComponent.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UAttackTargetComponent>()
	{
		return UAttackTargetComponent::StaticClass();
	}
	UAttackTargetComponent::UAttackTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackTargetComponent);
	UAttackTargetComponent::~UAttackTargetComponent() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackTargetComponent, UAttackTargetComponent::StaticClass, TEXT("UAttackTargetComponent"), &Z_Registration_Info_UClass_UAttackTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackTargetComponent), 1365635645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_1594395816(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_AttackTargetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
