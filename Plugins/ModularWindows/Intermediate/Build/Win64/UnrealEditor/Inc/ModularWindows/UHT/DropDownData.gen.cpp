// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Components/DropDownData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropDownData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownData();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownData_NoRegister();
	MODULARWINDOWS_API UFunction* Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature();
	MODULARWINDOWS_API UFunction* Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics
	{
		struct _Script_ModularWindows_eventDropDownSelected_Parms
		{
			UDropDownData* SelectedData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::NewProp_SelectedData = { "SelectedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularWindows_eventDropDownSelected_Parms, SelectedData), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::NewProp_SelectedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularWindows, nullptr, "DropDownSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::_Script_ModularWindows_eventDropDownSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::_Script_ModularWindows_eventDropDownSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDropDownSelected_DelegateWrapper(const FMulticastScriptDelegate& DropDownSelected, UDropDownData* SelectedData)
{
	struct _Script_ModularWindows_eventDropDownSelected_Parms
	{
		UDropDownData* SelectedData;
	};
	_Script_ModularWindows_eventDropDownSelected_Parms Parms;
	Parms.SelectedData=SelectedData;
	DropDownSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics
	{
		struct _Script_ModularWindows_eventDropDownClicked_Parms
		{
			UDropDownData* ClickedData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClickedData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::NewProp_ClickedData = { "ClickedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularWindows_eventDropDownClicked_Parms, ClickedData), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::NewProp_ClickedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularWindows, nullptr, "DropDownClicked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::_Script_ModularWindows_eventDropDownClicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::_Script_ModularWindows_eventDropDownClicked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDropDownClicked_DelegateWrapper(const FMulticastScriptDelegate& DropDownClicked, UDropDownData* ClickedData)
{
	struct _Script_ModularWindows_eventDropDownClicked_Parms
	{
		UDropDownData* ClickedData;
	};
	_Script_ModularWindows_eventDropDownClicked_Parms Parms;
	Parms.ClickedData=ClickedData;
	DropDownClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UDropDownData::StaticRegisterNativesUDropDownData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropDownData);
	UClass* Z_Construct_UClass_UDropDownData_NoRegister()
	{
		return UDropDownData::StaticClass();
	}
	struct Z_Construct_UClass_UDropDownData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropDown_MetaData[];
#endif
		static void NewProp_bDropDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHovered_MetaData[];
#endif
		static void NewProp_bHovered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHovered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropDownData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/DropDownData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::NewProp_DataObject_MetaData[] = {
		{ "Category", "DropDownData" },
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropDownData_Statics::NewProp_DataObject = { "DataObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownData, DataObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::NewProp_DataObject_MetaData), Z_Construct_UClass_UDropDownData_Statics::NewProp_DataObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DropDownData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What to display in the dropdown\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What to display in the dropdown" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDropDownData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UDropDownData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown_MetaData[] = {
		{ "Category", "DropDownData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether this should open another drop down\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this should open another drop down" },
#endif
	};
#endif
	void Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown_SetBit(void* Obj)
	{
		((UDropDownData*)Obj)->bDropDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown = { "bDropDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDropDownData), &Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown_MetaData), Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::NewProp_OnSelected_MetaData[] = {
		{ "Category", "DropDownData" },
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDropDownData_Statics::NewProp_OnSelected = { "OnSelected", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownData, OnSelected), Z_Construct_UDelegateFunction_ModularWindows_DropDownSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::NewProp_OnSelected_MetaData), Z_Construct_UClass_UDropDownData_Statics::NewProp_OnSelected_MetaData) }; // 236716020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::NewProp_OnClicked_MetaData[] = {
		{ "Category", "DropDownData" },
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDropDownData_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownData, OnClicked), Z_Construct_UDelegateFunction_ModularWindows_DropDownClicked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::NewProp_OnClicked_MetaData), Z_Construct_UClass_UDropDownData_Statics::NewProp_OnClicked_MetaData) }; // 1935715775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered_MetaData[] = {
		{ "Category", "DropDownData" },
		{ "ModuleRelativePath", "Public/Components/DropDownData.h" },
	};
#endif
	void Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered_SetBit(void* Obj)
	{
		((UDropDownData*)Obj)->bHovered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered = { "bHovered", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDropDownData), &Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered_MetaData), Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropDownData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownData_Statics::NewProp_DataObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownData_Statics::NewProp_bDropDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownData_Statics::NewProp_OnSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownData_Statics::NewProp_OnClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownData_Statics::NewProp_bHovered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropDownData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropDownData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropDownData_Statics::ClassParams = {
		&UDropDownData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDropDownData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropDownData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDropDownData()
	{
		if (!Z_Registration_Info_UClass_UDropDownData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropDownData.OuterSingleton, Z_Construct_UClass_UDropDownData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDropDownData.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UDropDownData>()
	{
		return UDropDownData::StaticClass();
	}
	UDropDownData::UDropDownData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropDownData);
	UDropDownData::~UDropDownData() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDropDownData, UDropDownData::StaticClass, TEXT("UDropDownData"), &Z_Registration_Info_UClass_UDropDownData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropDownData), 1005169861U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_924430450(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
