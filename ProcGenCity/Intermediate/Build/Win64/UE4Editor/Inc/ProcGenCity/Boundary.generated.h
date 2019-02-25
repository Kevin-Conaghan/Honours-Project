// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCGENCITY_Boundary_generated_h
#error "Boundary.generated.h already included, missing '#pragma once' in Boundary.h"
#endif
#define PROCGENCITY_Boundary_generated_h

#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_RPC_WRAPPERS
#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoundary(); \
	friend struct Z_Construct_UClass_ABoundary_Statics; \
public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProcGenCity"), NO_API) \
	DECLARE_SERIALIZER(ABoundary)


#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABoundary(); \
	friend struct Z_Construct_UClass_ABoundary_Statics; \
public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProcGenCity"), NO_API) \
	DECLARE_SERIALIZER(ABoundary)


#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoundary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoundary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public:


#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoundary)


#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__boundaryBox() { return STRUCT_OFFSET(ABoundary, boundaryBox); }


#define ProcGenCity_Source_ProcGenCity_Boundary_h_11_PROLOG
#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_PRIVATE_PROPERTY_OFFSET \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_RPC_WRAPPERS \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_INCLASS \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProcGenCity_Source_ProcGenCity_Boundary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_PRIVATE_PROPERTY_OFFSET \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_INCLASS_NO_PURE_DECLS \
	ProcGenCity_Source_ProcGenCity_Boundary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProcGenCity_Source_ProcGenCity_Boundary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
