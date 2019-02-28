// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Checker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChecker() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_AChecker_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_AChecker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ARoad_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AChecker::StaticRegisterNativesAChecker()
	{
	}
	UClass* Z_Construct_UClass_AChecker_NoRegister()
	{
		return AChecker::StaticClass();
	}
	struct Z_Construct_UClass_AChecker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_branch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_branch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numOfRoads_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numOfRoads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roadLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_roadLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roadList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roadList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_roadList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpRoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpRoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpBranch_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpBranch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChecker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Checker.h" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_branch_MetaData[] = {
		{ "Category", "New Branch" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_branch = { UE4CodeGen_Private::EPropertyClass::Object, "branch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AChecker, branch), Z_Construct_UClass_ABranch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_branch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_branch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_numOfRoads_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_numOfRoads = { UE4CodeGen_Private::EPropertyClass::Int, "numOfRoads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AChecker, numOfRoads), METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_numOfRoads_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_numOfRoads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_roadLength_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_roadLength = { UE4CodeGen_Private::EPropertyClass::Int, "roadLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AChecker, roadLength), METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_roadLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_roadLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_roadList_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_roadList = { UE4CodeGen_Private::EPropertyClass::Array, "roadList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AChecker, roadList), METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_roadList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_roadList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_roadList_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "roadList", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ARoad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_bpRoad_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_bpRoad = { UE4CodeGen_Private::EPropertyClass::Class, "bpRoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AChecker, bpRoad), Z_Construct_UClass_ARoad_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_bpRoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_bpRoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_bpBranch_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_bpBranch = { UE4CodeGen_Private::EPropertyClass::Class, "bpBranch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AChecker, bpBranch), Z_Construct_UClass_ABranch_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_bpBranch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_bpBranch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChecker_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Checker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AChecker_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AChecker, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChecker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_branch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_numOfRoads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_roadLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_roadList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_roadList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_bpRoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_bpBranch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChecker_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChecker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChecker>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChecker_Statics::ClassParams = {
		&AChecker::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AChecker_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AChecker_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AChecker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChecker()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChecker_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChecker, 4186919121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChecker(Z_Construct_UClass_AChecker, &AChecker::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("AChecker"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChecker);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
