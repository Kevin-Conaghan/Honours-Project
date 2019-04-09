// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Placement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacement() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_APlacement_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_APlacement();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotDesigner_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_AChecker_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCGENCITY_API UClass* Z_Construct_UClass_ANewProcMesh_NoRegister();
// End Cross Module References
	void APlacement::StaticRegisterNativesAPlacement()
	{
	}
	UClass* Z_Construct_UClass_APlacement_NoRegister()
	{
		return APlacement::StaticClass();
	}
	struct Z_Construct_UClass_APlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plotPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_plotPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plotPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rightCheckers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rightCheckers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rightCheckers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leftCheckers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_leftCheckers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leftCheckers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downCheckers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_downCheckers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_downCheckers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_upCheckers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_upCheckers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_upCheckers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpNewProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpNewProcMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpLotDesigner_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpLotDesigner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Placement.h" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_point_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_point = { UE4CodeGen_Private::EPropertyClass::Struct, "point", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(APlacement, point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_point_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints = { UE4CodeGen_Private::EPropertyClass::Array, "plotPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(APlacement, plotPoints), METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "plotPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers = { UE4CodeGen_Private::EPropertyClass::Array, "rightCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(APlacement, rightCheckers), METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "rightCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers = { UE4CodeGen_Private::EPropertyClass::Array, "leftCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(APlacement, leftCheckers), METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "leftCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers = { UE4CodeGen_Private::EPropertyClass::Array, "downCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(APlacement, downCheckers), METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "downCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers = { UE4CodeGen_Private::EPropertyClass::Array, "upCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(APlacement, upCheckers), METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "upCheckers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_bpNewProcMesh_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_bpNewProcMesh = { UE4CodeGen_Private::EPropertyClass::Class, "bpNewProcMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(APlacement, bpNewProcMesh), Z_Construct_UClass_ANewProcMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_bpNewProcMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_bpNewProcMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlacement_Statics::NewProp_bpLotDesigner_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Placement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlacement_Statics::NewProp_bpLotDesigner = { UE4CodeGen_Private::EPropertyClass::Class, "bpLotDesigner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(APlacement, bpLotDesigner), Z_Construct_UClass_ALotDesigner_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::NewProp_bpLotDesigner_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::NewProp_bpLotDesigner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_plotPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_rightCheckers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_leftCheckers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_downCheckers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_upCheckers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_bpNewProcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlacement_Statics::NewProp_bpLotDesigner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlacement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlacement_Statics::ClassParams = {
		&APlacement::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_APlacement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APlacement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlacement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlacement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlacement, 2009205005);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlacement(Z_Construct_UClass_APlacement, &APlacement::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("APlacement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlacement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
