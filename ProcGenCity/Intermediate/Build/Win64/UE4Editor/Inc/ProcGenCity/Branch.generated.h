// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCGENCITY_Branch_generated_h
#error "Branch.generated.h already included, missing '#pragma once' in Branch.h"
#endif
#define PROCGENCITY_Branch_generated_h

#define ProcGenCity_Source_ProcGenCity_Branch_h_24_RPC_WRAPPERS
#define ProcGenCity_Source_ProcGenCity_Branch_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define ProcGenCity_Source_ProcGenCity_Branch_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABranch(); \
	friend struct Z_Construct_UClass_ABranch_Statics; \
public: \
	DECLARE_CLASS(ABranch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProcGenCity"), NO_API) \
	DECLARE_SERIALIZER(ABranch)


#define ProcGenCity_Source_ProcGenCity_Branch_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABranch(); \
	friend struct Z_Construct_UClass_ABranch_Statics; \
public: \
	DECLARE_CLASS(ABranch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProcGenCity"), NO_API) \
	DECLARE_SERIALIZER(ABranch)


#define ProcGenCity_Source_ProcGenCity_Branch_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABranch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABranch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABranch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABranch(ABranch&&); \
	NO_API ABranch(const ABranch&); \
public:


#define ProcGenCity_Source_ProcGenCity_Branch_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABranch(ABranch&&); \
	NO_API ABranch(const ABranch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABranch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABranch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABranch)


#define ProcGenCity_Source_ProcGenCity_Branch_h_24_PRIVATE_PROPERTY_OFFSET
#define ProcGenCity_Source_ProcGenCity_Branch_h_21_PROLOG
#define ProcGenCity_Source_ProcGenCity_Branch_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_PRIVATE_PROPERTY_OFFSET \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_RPC_WRAPPERS \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_INCLASS \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProcGenCity_Source_ProcGenCity_Branch_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_PRIVATE_PROPERTY_OFFSET \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_INCLASS_NO_PURE_DECLS \
	ProcGenCity_Source_ProcGenCity_Branch_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProcGenCity_Source_ProcGenCity_Branch_h


#define FOREACH_ENUM_EBRANCHSTATE(op) \
	op(EBranchState::EB_Up) \
	op(EBranchState::EB_DOWN) \
	op(EBranchState::EB_LEFT) \
	op(EBranchState::EB_RIGHT) \
	op(EBranchState::EB_INIT) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
