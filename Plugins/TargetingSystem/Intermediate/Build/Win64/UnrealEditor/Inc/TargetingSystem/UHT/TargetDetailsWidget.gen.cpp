// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/UI/TargetDetailsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetDetailsWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetDetailsWidget();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetDetailsWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	DEFINE_FUNCTION(UTargetDetailsWidget::execIsTargeted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTargeted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetDetailsWidget::execSetTargeted)
	{
		P_GET_UBOOL(Z_Param_bNewTargeted);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTargeted_Implementation(Z_Param_bNewTargeted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetDetailsWidget::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetDetailsWidget::execSetDisplayName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayName(Z_Param_NewDisplayName);
		P_NATIVE_END;
	}
	struct TargetDetailsWidget_eventSetTargeted_Parms
	{
		bool bNewTargeted;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		TargetDetailsWidget_eventSetTargeted_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UTargetDetailsWidget_SetTargeted = FName(TEXT("SetTargeted"));
	bool UTargetDetailsWidget::SetTargeted(bool bNewTargeted)
	{
		TargetDetailsWidget_eventSetTargeted_Parms Parms;
		Parms.bNewTargeted=bNewTargeted ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTargetDetailsWidget_SetTargeted),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTargetDetailsWidget::StaticRegisterNativesUTargetDetailsWidget()
	{
		UClass* Class = UTargetDetailsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UTargetDetailsWidget::execGetDisplayName },
			{ "IsTargeted", &UTargetDetailsWidget::execIsTargeted },
			{ "SetDisplayName", &UTargetDetailsWidget::execSetDisplayName },
			{ "SetTargeted", &UTargetDetailsWidget::execSetTargeted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics
	{
		struct TargetDetailsWidget_eventGetDisplayName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetDetailsWidget_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetDetailsWidget, nullptr, "GetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::TargetDetailsWidget_eventGetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::TargetDetailsWidget_eventGetDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics
	{
		struct TargetDetailsWidget_eventIsTargeted_Parms
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
	void Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetDetailsWidget_eventIsTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetDetailsWidget_eventIsTargeted_Parms), &Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetDetailsWidget, nullptr, "IsTargeted", nullptr, nullptr, Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::TargetDetailsWidget_eventIsTargeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::TargetDetailsWidget_eventIsTargeted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics
	{
		struct TargetDetailsWidget_eventSetDisplayName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::NewProp_NewDisplayName = { "NewDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TargetDetailsWidget_eventSetDisplayName_Parms, NewDisplayName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::NewProp_NewDisplayName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetDetailsWidget, nullptr, "SetDisplayName", nullptr, nullptr, Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::TargetDetailsWidget_eventSetDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::TargetDetailsWidget_eventSetDisplayName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics
	{
		static void NewProp_bNewTargeted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewTargeted;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_bNewTargeted_SetBit(void* Obj)
	{
		((TargetDetailsWidget_eventSetTargeted_Parms*)Obj)->bNewTargeted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_bNewTargeted = { "bNewTargeted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetDetailsWidget_eventSetTargeted_Parms), &Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_bNewTargeted_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetDetailsWidget_eventSetTargeted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TargetDetailsWidget_eventSetTargeted_Parms), &Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_bNewTargeted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetDetailsWidget, nullptr, "SetTargeted", nullptr, nullptr, Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::PropPointers), sizeof(TargetDetailsWidget_eventSetTargeted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::PropPointers) < 2048);
	static_assert(sizeof(TargetDetailsWidget_eventSetTargeted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetDetailsWidget);
	UClass* Z_Construct_UClass_UTargetDetailsWidget_NoRegister()
	{
		return UTargetDetailsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTargetDetailsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTargeted_MetaData[];
#endif
		static void NewProp_bTargeted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargeted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentSlot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetDetailsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetDetailsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetDetailsWidget_GetDisplayName, "GetDisplayName" }, // 392771250
		{ &Z_Construct_UFunction_UTargetDetailsWidget_IsTargeted, "IsTargeted" }, // 4236212653
		{ &Z_Construct_UFunction_UTargetDetailsWidget_SetDisplayName, "SetDisplayName" }, // 3071844934
		{ &Z_Construct_UFunction_UTargetDetailsWidget_SetTargeted, "SetTargeted" }, // 1431473199
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDetailsWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/TargetDetailsWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetDetailsWidget, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_Target_MetaData), Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_Target_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	void Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted_SetBit(void* Obj)
	{
		((UTargetDetailsWidget*)Obj)->bTargeted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted = { "bTargeted", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTargetDetailsWidget), &Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted_MetaData), Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetDetailsWidget, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_DisplayName_MetaData), Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_DisplayName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_ContentSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "TargetDetailsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/TargetDetailsWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_ContentSlot = { "ContentSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTargetDetailsWidget, ContentSlot), Z_Construct_UClass_UNamedSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_ContentSlot_MetaData), Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_ContentSlot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetDetailsWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_bTargeted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetDetailsWidget_Statics::NewProp_ContentSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetDetailsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetDetailsWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetDetailsWidget_Statics::ClassParams = {
		&UTargetDetailsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetDetailsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTargetDetailsWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTargetDetailsWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTargetDetailsWidget()
	{
		if (!Z_Registration_Info_UClass_UTargetDetailsWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetDetailsWidget.OuterSingleton, Z_Construct_UClass_UTargetDetailsWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetDetailsWidget.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetDetailsWidget>()
	{
		return UTargetDetailsWidget::StaticClass();
	}
	UTargetDetailsWidget::UTargetDetailsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetDetailsWidget);
	UTargetDetailsWidget::~UTargetDetailsWidget() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetDetailsWidget, UTargetDetailsWidget::StaticClass, TEXT("UTargetDetailsWidget"), &Z_Registration_Info_UClass_UTargetDetailsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetDetailsWidget), 3482720370U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_2698870394(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_TargetingSystem_Source_Public_UI_TargetDetailsWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
