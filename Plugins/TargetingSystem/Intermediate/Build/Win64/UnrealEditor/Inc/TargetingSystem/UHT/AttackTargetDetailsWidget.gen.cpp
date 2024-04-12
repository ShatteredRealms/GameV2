// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/UI/AttackTargetDetailsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackTargetDetailsWidget() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAttackTargetDetailsWidget();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UAttackTargetDetailsWidget_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetDetailsWidget();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UAttackTargetDetailsWidget::execIsAttacked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttacked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttackTargetDetailsWidget::execSetAttacked)
	{
		P_GET_UBOOL(Z_Param_bNewAttacked);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAttacked_Implementation(Z_Param_bNewAttacked);
		P_NATIVE_END;
	}
	struct AttackTargetDetailsWidget_eventSetAttacked_Parms
	{
		bool bNewAttacked;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AttackTargetDetailsWidget_eventSetAttacked_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UAttackTargetDetailsWidget_SetAttacked = FName(TEXT("SetAttacked"));
	bool UAttackTargetDetailsWidget::SetAttacked(bool bNewAttacked)
	{
		AttackTargetDetailsWidget_eventSetAttacked_Parms Parms;
		Parms.bNewAttacked=bNewAttacked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UAttackTargetDetailsWidget_SetAttacked),&Parms);
		return !!Parms.ReturnValue;
	}
	void UAttackTargetDetailsWidget::StaticRegisterNativesUAttackTargetDetailsWidget()
	{
		UClass* Class = UAttackTargetDetailsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAttacked", &UAttackTargetDetailsWidget::execIsAttacked },
			{ "SetAttacked", &UAttackTargetDetailsWidget::execSetAttacked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics
	{
		struct AttackTargetDetailsWidget_eventIsAttacked_Parms
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
	void Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttackTargetDetailsWidget_eventIsAttacked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttackTargetDetailsWidget_eventIsAttacked_Parms), &Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AttackTargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackTargetDetailsWidget, nullptr, "IsAttacked", nullptr, nullptr, Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::AttackTargetDetailsWidget_eventIsAttacked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::AttackTargetDetailsWidget_eventIsAttacked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics
	{
		static void NewProp_bNewAttacked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAttacked;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_bNewAttacked_SetBit(void* Obj)
	{
		((AttackTargetDetailsWidget_eventSetAttacked_Parms*)Obj)->bNewAttacked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_bNewAttacked = { "bNewAttacked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttackTargetDetailsWidget_eventSetAttacked_Parms), &Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_bNewAttacked_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttackTargetDetailsWidget_eventSetAttacked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AttackTargetDetailsWidget_eventSetAttacked_Parms), &Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_bNewAttacked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AttackTargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttackTargetDetailsWidget, nullptr, "SetAttacked", nullptr, nullptr, Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::PropPointers), sizeof(AttackTargetDetailsWidget_eventSetAttacked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::PropPointers) < 2048);
	static_assert(sizeof(AttackTargetDetailsWidget_eventSetAttacked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackTargetDetailsWidget);
	UClass* Z_Construct_UClass_UAttackTargetDetailsWidget_NoRegister()
	{
		return UAttackTargetDetailsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAttackTargetDetailsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttacked_MetaData[];
#endif
		static void NewProp_bAttacked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttacked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetDetailsWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttackTargetDetailsWidget_IsAttacked, "IsAttacked" }, // 2419663430
		{ &Z_Construct_UFunction_UAttackTargetDetailsWidget_SetAttacked, "SetAttacked" }, // 1435759431
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/AttackTargetDetailsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/AttackTargetDetailsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AttackTargetDetailsWidget.h" },
	};
#endif
	void Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked_SetBit(void* Obj)
	{
		((UAttackTargetDetailsWidget*)Obj)->bAttacked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked = { "bAttacked", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAttackTargetDetailsWidget), &Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked_MetaData), Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::NewProp_bAttacked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackTargetDetailsWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::ClassParams = {
		&UAttackTargetDetailsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAttackTargetDetailsWidget()
	{
		if (!Z_Registration_Info_UClass_UAttackTargetDetailsWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackTargetDetailsWidget.OuterSingleton, Z_Construct_UClass_UAttackTargetDetailsWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttackTargetDetailsWidget.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UAttackTargetDetailsWidget>()
	{
		return UAttackTargetDetailsWidget::StaticClass();
	}
	UAttackTargetDetailsWidget::UAttackTargetDetailsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackTargetDetailsWidget);
	UAttackTargetDetailsWidget::~UAttackTargetDetailsWidget() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_AttackTargetDetailsWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_AttackTargetDetailsWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttackTargetDetailsWidget, UAttackTargetDetailsWidget::StaticClass, TEXT("UAttackTargetDetailsWidget"), &Z_Registration_Info_UClass_UAttackTargetDetailsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackTargetDetailsWidget), 3378989822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_AttackTargetDetailsWidget_h_4004187228(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_AttackTargetDetailsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_AttackTargetDetailsWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
