// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Components/DropDownListEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropDownListEntry() {}
// Cross Module References
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownData_NoRegister();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownListEntry();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	DEFINE_FUNCTION(UDropDownListEntry::execOnUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownListEntry::execOnSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownListEntry::execOnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClicked();
		P_NATIVE_END;
	}
	void UDropDownListEntry::StaticRegisterNativesUDropDownListEntry()
	{
		UClass* Class = UDropDownListEntry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClicked", &UDropDownListEntry::execOnClicked },
			{ "OnSelected", &UDropDownListEntry::execOnSelected },
			{ "OnUnhovered", &UDropDownListEntry::execOnUnhovered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDropDownListEntry_OnClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownListEntry_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownListEntry_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownListEntry, nullptr, "OnClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownListEntry_OnClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownListEntry_OnClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDropDownListEntry_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownListEntry_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownListEntry_OnSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownListEntry_OnSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownListEntry_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownListEntry, nullptr, "OnSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownListEntry_OnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownListEntry_OnSelected_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDropDownListEntry_OnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownListEntry_OnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownListEntry_OnUnhovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownListEntry_OnUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownListEntry_OnUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownListEntry, nullptr, "OnUnhovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownListEntry_OnUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownListEntry_OnUnhovered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDropDownListEntry_OnUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownListEntry_OnUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropDownListEntry);
	UClass* Z_Construct_UClass_UDropDownListEntry_NoRegister()
	{
		return UDropDownListEntry::StaticClass();
	}
	struct Z_Construct_UClass_UDropDownListEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropDownListEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDropDownListEntry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDropDownListEntry_OnClicked, "OnClicked" }, // 4211130975
		{ &Z_Construct_UFunction_UDropDownListEntry_OnSelected, "OnSelected" }, // 906463058
		{ &Z_Construct_UFunction_UDropDownListEntry_OnUnhovered, "OnUnhovered" }, // 4122688973
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownListEntry_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/DropDownListEntry.h" },
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "DropDownListEntry" },
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownListEntry, Data), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Data_MetaData), Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_EntryText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DropDownListEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_EntryText = { "EntryText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownListEntry, EntryText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_EntryText_MetaData), Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_EntryText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DropDownListEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DropDownListEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownListEntry, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Button_MetaData), Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Button_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropDownListEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_EntryText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownListEntry_Statics::NewProp_Button,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDropDownListEntry_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UDropDownListEntry, IUserObjectListEntry), false },  // 3135978134
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropDownListEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropDownListEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropDownListEntry_Statics::ClassParams = {
		&UDropDownListEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDropDownListEntry_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropDownListEntry_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownListEntry_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDropDownListEntry()
	{
		if (!Z_Registration_Info_UClass_UDropDownListEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropDownListEntry.OuterSingleton, Z_Construct_UClass_UDropDownListEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDropDownListEntry.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UDropDownListEntry>()
	{
		return UDropDownListEntry::StaticClass();
	}
	UDropDownListEntry::UDropDownListEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropDownListEntry);
	UDropDownListEntry::~UDropDownListEntry() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownListEntry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownListEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDropDownListEntry, UDropDownListEntry::StaticClass, TEXT("UDropDownListEntry"), &Z_Registration_Info_UClass_UDropDownListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropDownListEntry), 2090975143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownListEntry_h_976366407(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownListEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownListEntry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
