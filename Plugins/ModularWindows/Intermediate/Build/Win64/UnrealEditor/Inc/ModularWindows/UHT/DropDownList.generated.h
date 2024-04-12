// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DropDownList.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDropDownData;
#ifdef MODULARWINDOWS_DropDownList_generated_h
#error "DropDownList.generated.h already included, missing '#pragma once' in DropDownList.h"
#endif
#define MODULARWINDOWS_DropDownList_generated_h

#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_SPARSE_DATA
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectedIndex); \
	DECLARE_FUNCTION(execOnDropDownHovered); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execSelectPrevious); \
	DECLARE_FUNCTION(execSelectNext); \
	DECLARE_FUNCTION(execAddEntry); \
	DECLARE_FUNCTION(execCreateEntry);


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_ACCESSORS
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDropDownList(); \
	friend struct Z_Construct_UClass_UDropDownList_Statics; \
public: \
	DECLARE_CLASS(UDropDownList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularWindows"), NO_API) \
	DECLARE_SERIALIZER(UDropDownList)


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDropDownList(UDropDownList&&); \
	NO_API UDropDownList(const UDropDownList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropDownList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropDownList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropDownList) \
	NO_API virtual ~UDropDownList();


#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_14_PROLOG
#define FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_SPARSE_DATA \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_ACCESSORS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_INCLASS_NO_PURE_DECLS \
	FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARWINDOWS_API UClass* StaticClass<class UDropDownList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_sro_git_MMO_Plugins_ModularWindows_Source_Public_Components_DropDownList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
