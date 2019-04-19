// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Boundary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoundary() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ABoundary_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABoundary();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABoundary::StaticRegisterNativesABoundary()
	{
	}
	UClass* Z_Construct_UClass_ABoundary_NoRegister()
	{
		return ABoundary::StaticClass();
	}
	struct Z_Construct_UClass_ABoundary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roadPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roadPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roadPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_branches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_branches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_branches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBoundingHeight_MetaData[];
#endif
		static void NewProp_isBoundingHeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBoundingHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBoundingWidth_MetaData[];
#endif
		static void NewProp_isBoundingWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBoundingWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDestroy_MetaData[];
#endif
		static void NewProp_isDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxBranches_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxBranches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boundaryBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_boundaryBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoundary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Boundary.h" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions_MetaData[] = {
		{ "Category", "Road Data" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions = { UE4CodeGen_Private::EPropertyClass::Array, "roadPositions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ABoundary, roadPositions), METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "roadPositions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_branches_MetaData[] = {
		{ "Category", "Actors" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_branches = { UE4CodeGen_Private::EPropertyClass::Array, "branches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ABoundary, branches), METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_branches_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_branches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_branches_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "branches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ABranch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	void Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight_SetBit(void* Obj)
	{
		((ABoundary*)Obj)->isBoundingHeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight = { UE4CodeGen_Private::EPropertyClass::Bool, "isBoundingHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABoundary), &Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	void Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth_SetBit(void* Obj)
	{
		((ABoundary*)Obj)->isBoundingWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth = { UE4CodeGen_Private::EPropertyClass::Bool, "isBoundingWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABoundary), &Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	void Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy_SetBit(void* Obj)
	{
		((ABoundary*)Obj)->isDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy = { UE4CodeGen_Private::EPropertyClass::Bool, "isDestroy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABoundary), &Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_maxBranches_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_maxBranches = { UE4CodeGen_Private::EPropertyClass::Int, "maxBranches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABoundary, maxBranches), METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_maxBranches_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_maxBranches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoundary_Statics::NewProp_boundaryBox_MetaData[] = {
		{ "Category", "Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Boundary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoundary_Statics::NewProp_boundaryBox = { UE4CodeGen_Private::EPropertyClass::Object, "boundaryBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000080009, 1, nullptr, STRUCT_OFFSET(ABoundary, boundaryBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::NewProp_boundaryBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::NewProp_boundaryBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoundary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_roadPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_branches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_isBoundingWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_isDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_maxBranches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoundary_Statics::NewProp_boundaryBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoundary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoundary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoundary_Statics::ClassParams = {
		&ABoundary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABoundary_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABoundary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABoundary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoundary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoundary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoundary, 998784353);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoundary(Z_Construct_UClass_ABoundary, &ABoundary::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ABoundary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoundary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
