// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Floater_generated_h
#error "Floater.generated.h already included, missing '#pragma once' in Floater.h"
#endif
#define MYPROJECT_Floater_generated_h

#define MyProject_Source_MyProject_Floater_h_12_RPC_WRAPPERS
#define MyProject_Source_MyProject_Floater_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Floater_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloater(); \
	friend struct Z_Construct_UClass_AFloater_Statics; \
public: \
	DECLARE_CLASS(AFloater, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AFloater)


#define MyProject_Source_MyProject_Floater_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloater(); \
	friend struct Z_Construct_UClass_AFloater_Statics; \
public: \
	DECLARE_CLASS(AFloater, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AFloater)


#define MyProject_Source_MyProject_Floater_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloater(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloater) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloater); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloater); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloater(AFloater&&); \
	NO_API AFloater(const AFloater&); \
public:


#define MyProject_Source_MyProject_Floater_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloater(AFloater&&); \
	NO_API AFloater(const AFloater&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloater); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloater); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloater)


#define MyProject_Source_MyProject_Floater_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_Floater_h_9_PROLOG
#define MyProject_Source_MyProject_Floater_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Floater_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Floater_h_12_RPC_WRAPPERS \
	MyProject_Source_MyProject_Floater_h_12_INCLASS \
	MyProject_Source_MyProject_Floater_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Floater_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Floater_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Floater_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Floater_h_12_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Floater_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AFloater>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Floater_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
