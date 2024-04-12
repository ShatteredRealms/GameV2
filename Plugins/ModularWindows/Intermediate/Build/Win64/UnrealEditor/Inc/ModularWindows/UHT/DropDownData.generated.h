// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DropDownData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDropDownData;
#ifdef MODULARWINDOWS_DropDownData_generated_h
#error "DropDownData.generated.h already included, missing '#pragma once' in DropDownData.h"
#endif
#define MODULARWINDOWS_DropDownData_generated_h

#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_9_DELEGATE \
MODULARWINDOWS_API void FDropDownSelected_DelegateWrapper(const FMulticastScriptDelegate& DropDownSelected, UDropDownData* SelectedData);


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_10_DELEGATE \
MODULARWINDOWS_API void FDropDownClicked_DelegateWrapper(const FMulticastScriptDelegate& DropDownClicked, UDropDownData* ClickedData);


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDropDownData(); \
	friend struct Z_Construct_UClass_UDropDownData_Statics; \
public: \
	DECLARE_CLASS(UDropDownData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularWindows"), NO_API) \
	DECLARE_SERIALIZER(UDropDownData)


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropDownData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDropDownData(UDropDownData&&); \
	NO_API UDropDownData(const UDropDownData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropDownData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropDownData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropDownData) \
	NO_API virtual ~UDropDownData();


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_15_PROLOG
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARWINDOWS_API UClass* StaticClass<class UDropDownData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
