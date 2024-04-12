// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Components/DropDownList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropDownList() {}
// Cross Module References
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownData_NoRegister();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownList();
	MODULARWINDOWS_API UClass* Z_Construct_UClass_UDropDownList_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ModularWindows();
// End Cross Module References
	DEFINE_FUNCTION(UDropDownList::execGetSelectedIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectedIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownList::execOnDropDownHovered)
	{
		P_GET_OBJECT(UDropDownData,Z_Param_SelectedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDropDownHovered(Z_Param_SelectedData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownList::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownList::execSelectPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectPrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownList::execSelectNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownList::execAddEntry)
	{
		P_GET_OBJECT(UDropDownData,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDropDownData**)Z_Param__Result=P_THIS->AddEntry(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDropDownList::execCreateEntry)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDropDownData**)Z_Param__Result=P_THIS->CreateEntry(Z_Param_Name);
		P_NATIVE_END;
	}
	void UDropDownList::StaticRegisterNativesUDropDownList()
	{
		UClass* Class = UDropDownList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEntry", &UDropDownList::execAddEntry },
			{ "Clear", &UDropDownList::execClear },
			{ "CreateEntry", &UDropDownList::execCreateEntry },
			{ "GetSelectedIndex", &UDropDownList::execGetSelectedIndex },
			{ "OnDropDownHovered", &UDropDownList::execOnDropDownHovered },
			{ "SelectNext", &UDropDownList::execSelectNext },
			{ "SelectPrevious", &UDropDownList::execSelectPrevious },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDropDownList_AddEntry_Statics
	{
		struct DropDownList_eventAddEntry_Parms
		{
			UDropDownData* Data;
			UDropDownData* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropDownList_AddEntry_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropDownList_eventAddEntry_Parms, Data), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropDownList_AddEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropDownList_eventAddEntry_Parms, ReturnValue), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropDownList_AddEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropDownList_AddEntry_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropDownList_AddEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_AddEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_AddEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "AddEntry", nullptr, nullptr, Z_Construct_UFunction_UDropDownList_AddEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_AddEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropDownList_AddEntry_Statics::DropDownList_eventAddEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_AddEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_AddEntry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_AddEntry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDropDownList_AddEntry_Statics::DropDownList_eventAddEntry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDropDownList_AddEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_AddEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownList_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_Clear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDropDownList_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownList_CreateEntry_Statics
	{
		struct DropDownList_eventCreateEntry_Parms
		{
			FString Name;
			UDropDownData* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropDownList_eventCreateEntry_Parms, Name), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropDownList_eventCreateEntry_Parms, ReturnValue), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "CreateEntry", nullptr, nullptr, Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::DropDownList_eventCreateEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::DropDownList_eventCreateEntry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDropDownList_CreateEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_CreateEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics
	{
		struct DropDownList_eventGetSelectedIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropDownList_eventGetSelectedIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "GetSelectedIndex", nullptr, nullptr, Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::DropDownList_eventGetSelectedIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::DropDownList_eventGetSelectedIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDropDownList_GetSelectedIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_GetSelectedIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics
	{
		struct DropDownList_eventOnDropDownHovered_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::NewProp_SelectedData = { "SelectedData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DropDownList_eventOnDropDownHovered_Parms, SelectedData), Z_Construct_UClass_UDropDownData_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::NewProp_SelectedData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "OnDropDownHovered", nullptr, nullptr, Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::DropDownList_eventOnDropDownHovered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::DropDownList_eventOnDropDownHovered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDropDownList_OnDropDownHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_OnDropDownHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownList_SelectNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_SelectNext_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_SelectNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "SelectNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_SelectNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_SelectNext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDropDownList_SelectNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_SelectNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDropDownList_SelectPrevious_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDropDownList_SelectPrevious_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDropDownList_SelectPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDropDownList, nullptr, "SelectPrevious", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDropDownList_SelectPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDropDownList_SelectPrevious_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UDropDownList_SelectPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDropDownList_SelectPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDropDownList);
	UClass* Z_Construct_UClass_UDropDownList_NoRegister()
	{
		return UDropDownList::StaticClass();
	}
	struct Z_Construct_UClass_UDropDownList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDropDownList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularWindows,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownList_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDropDownList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDropDownList_AddEntry, "AddEntry" }, // 523828825
		{ &Z_Construct_UFunction_UDropDownList_Clear, "Clear" }, // 1714912301
		{ &Z_Construct_UFunction_UDropDownList_CreateEntry, "CreateEntry" }, // 1462787105
		{ &Z_Construct_UFunction_UDropDownList_GetSelectedIndex, "GetSelectedIndex" }, // 2890854776
		{ &Z_Construct_UFunction_UDropDownList_OnDropDownHovered, "OnDropDownHovered" }, // 874047723
		{ &Z_Construct_UFunction_UDropDownList_SelectNext, "SelectNext" }, // 3659016467
		{ &Z_Construct_UFunction_UDropDownList_SelectPrevious, "SelectPrevious" }, // 1438955732
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownList_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownList_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/DropDownList.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDropDownList_Statics::NewProp_Entries_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DropDownList" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DropDownList.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDropDownList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDropDownList, Entries), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownList_Statics::NewProp_Entries_MetaData), Z_Construct_UClass_UDropDownList_Statics::NewProp_Entries_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDropDownList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDropDownList_Statics::NewProp_Entries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDropDownList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDropDownList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDropDownList_Statics::ClassParams = {
		&UDropDownList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDropDownList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownList_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownList_Statics::Class_MetaDataParams), Z_Construct_UClass_UDropDownList_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDropDownList_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDropDownList()
	{
		if (!Z_Registration_Info_UClass_UDropDownList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDropDownList.OuterSingleton, Z_Construct_UClass_UDropDownList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDropDownList.OuterSingleton;
	}
	template<> MODULARWINDOWS_API UClass* StaticClass<UDropDownList>()
	{
		return UDropDownList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDropDownList);
	UDropDownList::~UDropDownList() {}
	struct Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDropDownList, UDropDownList::StaticClass, TEXT("UDropDownList"), &Z_Registration_Info_UClass_UDropDownList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDropDownList), 899234250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_493201463(TEXT("/Script/ModularWindows"),
		Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
