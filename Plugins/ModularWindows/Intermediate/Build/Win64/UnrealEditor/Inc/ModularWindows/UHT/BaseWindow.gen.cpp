// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/BaseWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWindow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UBaseWindow();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UBaseWindow_NoRegister();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UMoveableResizeableWidget();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UTabWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	DEFINE_FUNCTION(UBaseWindow::execSetCloseable)
	{
		P_GET_UBOOL(Z_Param_IsCloseable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCloseable(Z_Param_IsCloseable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseWindow::execFocusTab)
	{
		P_GET_OBJECT(UTabWidget,Z_Param_Tab);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FocusTab(Z_Param_Tab);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseWindow::execAppendTab)
	{
		P_GET_OBJECT(UTabWidget,Z_Param_Tab);
		P_GET_OBJECT(UUserWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendTab(Z_Param_Tab,Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseWindow::execCreateTab)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_TabName);
		P_GET_OBJECT(UUserWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTabWidget**)Z_Param__Result=P_THIS->CreateTab(Z_Param_Out_TabName,Z_Param_Content);
		P_NATIVE_END;
	}
	void UBaseWindow::StaticRegisterNativesUBaseWindow()
	{
		UClass* Class = UBaseWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendTab", &UBaseWindow::execAppendTab },
			{ "CreateTab", &UBaseWindow::execCreateTab },
			{ "FocusTab", &UBaseWindow::execFocusTab },
			{ "SetCloseable", &UBaseWindow::execSetCloseable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseWindow_AppendTab_Statics
	{
		struct BaseWindow_eventAppendTab_Parms
		{
			UTabWidget* Tab;
			UUserWidget* Content;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tab_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Tab_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Tab = { "Tab", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWindow_eventAppendTab_Parms, Tab), Z_Construct_UClass_UTabWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Tab_MetaData), Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Tab_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWindow_eventAppendTab_Parms, Content), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Content_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Tab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWindow, nullptr, "AppendTab", nullptr, nullptr, Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::BaseWindow_eventAppendTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::BaseWindow_eventAppendTab_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseWindow_AppendTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWindow_AppendTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseWindow_CreateTab_Statics
	{
		struct BaseWindow_eventCreateTab_Parms
		{
			FText TabName;
			UUserWidget* Content;
			UTabWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TabName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_TabName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_TabName = { "TabName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWindow_eventCreateTab_Parms, TabName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_TabName_MetaData), Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_TabName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWindow_eventCreateTab_Parms, Content), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_Content_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWindow_eventCreateTab_Parms, ReturnValue), Z_Construct_UClass_UTabWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_TabName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Adds a new tab to the chat panel*/" },
#endif
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a new tab to the chat panel" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWindow, nullptr, "CreateTab", nullptr, nullptr, Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::BaseWindow_eventCreateTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::BaseWindow_eventCreateTab_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseWindow_CreateTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWindow_CreateTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseWindow_FocusTab_Statics
	{
		struct BaseWindow_eventFocusTab_Parms
		{
			UTabWidget* Tab;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tab_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tab;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::NewProp_Tab_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::NewProp_Tab = { "Tab", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseWindow_eventFocusTab_Parms, Tab), Z_Construct_UClass_UTabWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::NewProp_Tab_MetaData), Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::NewProp_Tab_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::NewProp_Tab,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Focuses the given tab and shows the paired chatbox */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Focuses the given tab and shows the paired chatbox" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWindow, nullptr, "FocusTab", nullptr, nullptr, Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::BaseWindow_eventFocusTab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::BaseWindow_eventFocusTab_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseWindow_FocusTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWindow_FocusTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics
	{
		struct BaseWindow_eventSetCloseable_Parms
		{
			bool IsCloseable;
		};
		static void NewProp_IsCloseable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCloseable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::NewProp_IsCloseable_SetBit(void* Obj)
	{
		((BaseWindow_eventSetCloseable_Parms*)Obj)->IsCloseable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::NewProp_IsCloseable = { "IsCloseable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseWindow_eventSetCloseable_Parms), &Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::NewProp_IsCloseable_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::NewProp_IsCloseable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseWindow, nullptr, "SetCloseable", nullptr, nullptr, Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::BaseWindow_eventSetCloseable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::BaseWindow_eventSetCloseable_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseWindow_SetCloseable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseWindow_SetCloseable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseWindow);
	UClass* Z_Construct_UClass_UBaseWindow_NoRegister()
	{
		return UBaseWindow::StaticClass();
	}
	struct Z_Construct_UClass_UBaseWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTab_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveTab;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowBorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WindowBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tabs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tabs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabMapping_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TabMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TabMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TabWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoveableResizeableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseWindow_AppendTab, "AppendTab" }, // 1326490254
		{ &Z_Construct_UFunction_UBaseWindow_CreateTab, "CreateTab" }, // 2248260240
		{ &Z_Construct_UFunction_UBaseWindow_FocusTab, "FocusTab" }, // 1717434227
		{ &Z_Construct_UFunction_UBaseWindow_SetCloseable, "SetCloseable" }, // 2661055937
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseWindow.h" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_ActiveTab_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_ActiveTab = { "ActiveTab", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, ActiveTab), Z_Construct_UClass_UTabWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_ActiveTab_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_ActiveTab_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_OuterPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_OuterPanel = { "OuterPanel", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, OuterPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_OuterPanel_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_OuterPanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_CloseButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_CloseButton_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_CloseButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_ContentSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_ContentSlot = { "ContentSlot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, ContentSlot), Z_Construct_UClass_UNamedSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_ContentSlot_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_ContentSlot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBackgroundImage = { "WindowBackgroundImage", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, WindowBackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBackgroundImage_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBackgroundImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBorder_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBorder = { "WindowBorder", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, WindowBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBorder_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBorder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_Tabs_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_Tabs = { "Tabs", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, Tabs), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_Tabs_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_Tabs_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_ValueProp = { "TabMapping", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_Key_KeyProp = { "TabMapping_Key", nullptr, (EPropertyFlags)0x0000000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTabWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_MetaData[] = {
		{ "Category", "BaseWindow" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping = { "TabMapping", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, TabMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabWidgetClass_MetaData[] = {
		{ "Category", "BaseWindow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tab Widget BP Class that creates the UI */" },
#endif
		{ "ModuleRelativePath", "Public/BaseWindow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tab Widget BP Class that creates the UI" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabWidgetClass = { "TabWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseWindow, TabWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTabWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabWidgetClass_MetaData), Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_ActiveTab,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_OuterPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_CloseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_ContentSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_WindowBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_Tabs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseWindow_Statics::NewProp_TabWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseWindow_Statics::ClassParams = {
		&UBaseWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseWindow_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWindow_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseWindow()
	{
		if (!Z_Registration_Info_UClass_UBaseWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseWindow.OuterSingleton, Z_Construct_UClass_UBaseWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseWindow.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UBaseWindow>()
	{
		return UBaseWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWindow);
	UBaseWindow::~UBaseWindow() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseWindow, UBaseWindow::StaticClass, TEXT("UBaseWindow"), &Z_Registration_Info_UClass_UBaseWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseWindow), 2411729257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_2169838045(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_BaseWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
