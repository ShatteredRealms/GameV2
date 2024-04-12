// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Components/TabWidget.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabWidget() {}
// Cross Module References
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UTabWidget();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UTabWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	DEFINE_FUNCTION(UTabWidget::execOnTabClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTabClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTabWidget::execIsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTabWidget::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_bNewSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_bNewSelection);
		P_NATIVE_END;
	}
	void UTabWidget::StaticRegisterNativesUTabWidget()
	{
		UClass* Class = UTabWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSelected", &UTabWidget::execIsSelected },
			{ "OnTabClicked", &UTabWidget::execOnTabClicked },
			{ "SetSelected", &UTabWidget::execSetSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTabWidget_IsSelected_Statics
	{
		struct TabWidget_eventIsSelected_Parms
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
	void Z_Construct_UFunction_UTabWidget_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TabWidget_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTabWidget_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TabWidget_eventIsSelected_Parms), &Z_Construct_UFunction_UTabWidget_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTabWidget_IsSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabWidget_IsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabWidget_IsSelected_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether the button is selected or not\n\x09 * @returns true if the button is selected\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the button is selected or not\n@returns true if the button is selected" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabWidget_IsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabWidget, nullptr, "IsSelected", nullptr, nullptr, Z_Construct_UFunction_UTabWidget_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_IsSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTabWidget_IsSelected_Statics::TabWidget_eventIsSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_IsSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTabWidget_IsSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_IsSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTabWidget_IsSelected_Statics::TabWidget_eventIsSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTabWidget_IsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabWidget_IsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTabWidget_OnTabClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabWidget_OnTabClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabWidget_OnTabClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabWidget, nullptr, "OnTabClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_OnTabClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTabWidget_OnTabClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UTabWidget_OnTabClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabWidget_OnTabClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTabWidget_SetSelected_Statics
	{
		struct TabWidget_eventSetSelected_Parms
		{
			bool bNewSelection;
		};
		static void NewProp_bNewSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTabWidget_SetSelected_Statics::NewProp_bNewSelection_SetBit(void* Obj)
	{
		((TabWidget_eventSetSelected_Parms*)Obj)->bNewSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTabWidget_SetSelected_Statics::NewProp_bNewSelection = { "bNewSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TabWidget_eventSetSelected_Parms), &Z_Construct_UFunction_UTabWidget_SetSelected_Statics::NewProp_bNewSelection_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTabWidget_SetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTabWidget_SetSelected_Statics::NewProp_bNewSelection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTabWidget_SetSelected_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets the style and whether the button is selected */" },
#endif
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the style and whether the button is selected" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTabWidget_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTabWidget, nullptr, "SetSelected", nullptr, nullptr, Z_Construct_UFunction_UTabWidget_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_SetSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTabWidget_SetSelected_Statics::TabWidget_eventSetSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_SetSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTabWidget_SetSelected_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTabWidget_SetSelected_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UTabWidget_SetSelected_Statics::TabWidget_eventSetSelected_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UTabWidget_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTabWidget_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTabWidget);
	UClass* Z_Construct_UClass_UTabWidget_NoRegister()
	{
		return UTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelected_MetaData[];
#endif
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UTabWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTabWidget_IsSelected, "IsSelected" }, // 3245083457
		{ &Z_Construct_UFunction_UTabWidget_OnTabClicked, "OnTabClicked" }, // 3250844861
		{ &Z_Construct_UFunction_UTabWidget_SetSelected, "SetSelected" }, // 1934453644
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/TabWidget.h" },
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
	};
#endif
	void Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((UTabWidget*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTabWidget), &Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected_MetaData), Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabWidget_Statics::NewProp_TabButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Chat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabWidget_Statics::NewProp_TabButton = { "TabButton", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTabWidget, TabButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::NewProp_TabButton_MetaData), Z_Construct_UClass_UTabWidget_Statics::NewProp_TabButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabWidget_Statics::NewProp_TabName_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Chat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTabWidget_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTabWidget, TabName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::NewProp_TabName_MetaData), Z_Construct_UClass_UTabWidget_Statics::NewProp_TabName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabWidget_Statics::NewProp_InactiveStyle_MetaData[] = {
		{ "Category", "TabWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The style used when the tab is not selected */" },
#endif
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The style used when the tab is not selected" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTabWidget_Statics::NewProp_InactiveStyle = { "InactiveStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTabWidget, InactiveStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::NewProp_InactiveStyle_MetaData), Z_Construct_UClass_UTabWidget_Statics::NewProp_InactiveStyle_MetaData) }; // 1902661672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTabWidget_Statics::NewProp_ActiveStyle_MetaData[] = {
		{ "Category", "TabWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The style used when the tab is selected */" },
#endif
		{ "ModuleRelativePath", "Public/Components/TabWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The style used when the tab is selected" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTabWidget_Statics::NewProp_ActiveStyle = { "ActiveStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTabWidget, ActiveStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::NewProp_ActiveStyle_MetaData), Z_Construct_UClass_UTabWidget_Statics::NewProp_ActiveStyle_MetaData) }; // 1902661672
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTabWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabWidget_Statics::NewProp_bSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabWidget_Statics::NewProp_TabButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabWidget_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabWidget_Statics::NewProp_InactiveStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTabWidget_Statics::NewProp_ActiveStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTabWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTabWidget_Statics::ClassParams = {
		&UTabWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTabWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UTabWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTabWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UTabWidget()
	{
		if (!Z_Registration_Info_UClass_UTabWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTabWidget.OuterSingleton, Z_Construct_UClass_UTabWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTabWidget.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UTabWidget>()
	{
		return UTabWidget::StaticClass();
	}
	UTabWidget::UTabWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTabWidget);
	UTabWidget::~UTabWidget() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTabWidget, UTabWidget::StaticClass, TEXT("UTabWidget"), &Z_Registration_Info_UClass_UTabWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTabWidget), 833069266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_1214318701(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_TabWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
