// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/MoveableResizableWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveableResizableWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UMoveableResizeableWidget();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UMoveableResizeableWidget_NoRegister();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UMoveableWidget();
	MODULARWINDOWS_API UEnum* Z_Construct_UEnum_ModularWindows_ESide();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESide;
	static UEnum* ESide_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESide.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModularWindows_ESide, (UObject*)Z_Construct_UPackage__Script_ModularWindows(), TEXT("ESide"));
		}
		return Z_Registration_Info_UEnum_ESide.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UEnum* StaticEnum<ESide>()
	{
		return ESide_StaticEnum();
	}
	struct Z_Construct_UEnum_ModularWindows_ESide_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModularWindows_ESide_Statics::Enumerators[] = {
		{ "TOP", (int64)TOP },
		{ "RIGHT", (int64)RIGHT },
		{ "BOTTOM", (int64)BOTTOM },
		{ "LEFT", (int64)LEFT },
		{ "TOP_LEFT_CORNER", (int64)TOP_LEFT_CORNER },
		{ "TOP_RIGHT_CORNER", (int64)TOP_RIGHT_CORNER },
		{ "BOTTOM_RIGHT_CORNER", (int64)BOTTOM_RIGHT_CORNER },
		{ "BOTTOM_LEFT_CORNER", (int64)BOTTOM_LEFT_CORNER },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModularWindows_ESide_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BOTTOM.Name", "BOTTOM" },
		{ "BOTTOM_LEFT_CORNER.Name", "BOTTOM_LEFT_CORNER" },
		{ "BOTTOM_RIGHT_CORNER.Name", "BOTTOM_RIGHT_CORNER" },
		{ "LEFT.Name", "LEFT" },
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
		{ "RIGHT.Name", "RIGHT" },
		{ "TOP.Name", "TOP" },
		{ "TOP_LEFT_CORNER.Name", "TOP_LEFT_CORNER" },
		{ "TOP_RIGHT_CORNER.Name", "TOP_RIGHT_CORNER" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModularWindows_ESide_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModularWindows,
		nullptr,
		"ESide",
		"ESide",
		Z_Construct_UEnum_ModularWindows_ESide_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModularWindows_ESide_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModularWindows_ESide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModularWindows_ESide_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ModularWindows_ESide()
	{
		if (!Z_Registration_Info_UEnum_ESide.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESide.InnerSingleton, Z_Construct_UEnum_ModularWindows_ESide_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESide.InnerSingleton;
	}
	DEFINE_FUNCTION(UMoveableResizeableWidget::execGetMaxSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMaxSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoveableResizeableWidget::execGetMinSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMinSize();
		P_NATIVE_END;
	}
	void UMoveableResizeableWidget::StaticRegisterNativesUMoveableResizeableWidget()
	{
		UClass* Class = UMoveableResizeableWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxSize", &UMoveableResizeableWidget::execGetMaxSize },
			{ "GetMinSize", &UMoveableResizeableWidget::execGetMinSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics
	{
		struct MoveableResizeableWidget_eventGetMaxSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveableResizeableWidget_eventGetMaxSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveableResizeableWidget, nullptr, "GetMaxSize", nullptr, nullptr, Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::MoveableResizeableWidget_eventGetMaxSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::MoveableResizeableWidget_eventGetMaxSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics
	{
		struct MoveableResizeableWidget_eventGetMinSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MoveableResizeableWidget_eventGetMinSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoveableResizeableWidget, nullptr, "GetMinSize", nullptr, nullptr, Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::MoveableResizeableWidget_eventGetMinSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::MoveableResizeableWidget_eventGetMinSize_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoveableResizeableWidget);
	UClass* Z_Construct_UClass_UMoveableResizeableWidget_NoRegister()
	{
		return UMoveableResizeableWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMoveableResizeableWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResizable_MetaData[];
#endif
		static void NewProp_bResizable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResizable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDraggable_MetaData[];
#endif
		static void NewProp_bDraggable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDraggable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockable_MetaData[];
#endif
		static void NewProp_bLockable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCloseable_MetaData[];
#endif
		static void NewProp_bCloseable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCloseable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragThickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DragThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveableResizeableWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoveableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoveableResizeableWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoveableResizeableWidget_GetMaxSize, "GetMaxSize" }, // 3436323136
		{ &Z_Construct_UFunction_UMoveableResizeableWidget_GetMinSize, "GetMinSize" }, // 2346269944
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MoveableResizableWidget.h" },
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the widget can be resized */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the widget can be resized" },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable_SetBit(void* Obj)
	{
		((UMoveableResizeableWidget*)Obj)->bResizable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable = { "bResizable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveableResizeableWidget), &Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the widget can be moved */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the widget can be moved" },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable_SetBit(void* Obj)
	{
		((UMoveableResizeableWidget*)Obj)->bDraggable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable = { "bDraggable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveableResizeableWidget), &Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the widget can locked in position and size */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the widget can locked in position and size" },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable_SetBit(void* Obj)
	{
		((UMoveableResizeableWidget*)Obj)->bLockable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable = { "bLockable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveableResizeableWidget), &Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the widget can closed/deleted */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the widget can closed/deleted" },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable_SetBit(void* Obj)
	{
		((UMoveableResizeableWidget*)Obj)->bCloseable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable = { "bCloseable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveableResizeableWidget), &Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the widget is locked in position and size. Requires bLockable to be true for this to have an effect. */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the widget is locked in position and size. Requires bLockable to be true for this to have an effect." },
#endif
	};
#endif
	void Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((UMoveableResizeableWidget*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMoveableResizeableWidget), &Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the widget */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the widget" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveableResizeableWidget, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_DragThickness_MetaData[] = {
		{ "Category", "MoveableResizeableWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Thickness from the edge that can still be considered a click on the edge */" },
#endif
		{ "ModuleRelativePath", "Public/MoveableResizableWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Thickness from the edge that can still be considered a click on the edge" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_DragThickness = { "DragThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMoveableResizeableWidget, DragThickness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_DragThickness_MetaData), Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_DragThickness_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveableResizeableWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bResizable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bDraggable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLockable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bCloseable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveableResizeableWidget_Statics::NewProp_DragThickness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveableResizeableWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveableResizeableWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoveableResizeableWidget_Statics::ClassParams = {
		&UMoveableResizeableWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoveableResizeableWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMoveableResizeableWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMoveableResizeableWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMoveableResizeableWidget()
	{
		if (!Z_Registration_Info_UClass_UMoveableResizeableWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoveableResizeableWidget.OuterSingleton, Z_Construct_UClass_UMoveableResizeableWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoveableResizeableWidget.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UMoveableResizeableWidget>()
	{
		return UMoveableResizeableWidget::StaticClass();
	}
	UMoveableResizeableWidget::UMoveableResizeableWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveableResizeableWidget);
	UMoveableResizeableWidget::~UMoveableResizeableWidget() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics::EnumInfo[] = {
		{ ESide_StaticEnum, TEXT("ESide"), &Z_Registration_Info_UEnum_ESide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1932957079U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoveableResizeableWidget, UMoveableResizeableWidget::StaticClass, TEXT("UMoveableResizeableWidget"), &Z_Registration_Info_UClass_UMoveableResizeableWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoveableResizeableWidget), 786422105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_1024845875(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_MoveableResizableWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
