// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/LotCalculator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLotCalculator() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotCalculator_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotCalculator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCGENCITY_API UClass* Z_Construct_UClass_AMyProcMesh_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ARoad_NoRegister();
// End Cross Module References
	void ALotCalculator::StaticRegisterNativesALotCalculator()
	{
	}
	UClass* Z_Construct_UClass_ALotCalculator_NoRegister()
	{
		return ALotCalculator::StaticClass();
	}
	struct Z_Construct_UClass_ALotCalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proxBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proxBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpProcMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yVert_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yVert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xVert_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xVert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roads;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_roads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_yDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_xDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xDistances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALotCalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LotCalculator.h" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_proxBox_MetaData[] = {
		{ "Category", "Box Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_proxBox = { UE4CodeGen_Private::EPropertyClass::Object, "proxBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b001d, 1, nullptr, STRUCT_OFFSET(ALotCalculator, proxBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_proxBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_proxBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_bpProcMesh_MetaData[] = {
		{ "Category", "LotCalculator" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_bpProcMesh = { UE4CodeGen_Private::EPropertyClass::Class, "bpProcMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ALotCalculator, bpProcMesh), Z_Construct_UClass_AMyProcMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_bpProcMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_bpProcMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_yVert_MetaData[] = {
		{ "Category", "Vertices" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_yVert = { UE4CodeGen_Private::EPropertyClass::Float, "yVert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALotCalculator, yVert), METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_yVert_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_yVert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_xVert_MetaData[] = {
		{ "Category", "Vertices" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_xVert = { UE4CodeGen_Private::EPropertyClass::Float, "xVert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALotCalculator, xVert), METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_xVert_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_xVert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads_MetaData[] = {
		{ "Category", "LotCalculator" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads = { UE4CodeGen_Private::EPropertyClass::Array, "roads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotCalculator, roads), METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "roads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ARoad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances_MetaData[] = {
		{ "Category", "Distances" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances = { UE4CodeGen_Private::EPropertyClass::Array, "yDistances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALotCalculator, yDistances), METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "yDistances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances_MetaData[] = {
		{ "Category", "Distances" },
		{ "ModuleRelativePath", "LotCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances = { UE4CodeGen_Private::EPropertyClass::Array, "xDistances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALotCalculator, xDistances), METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "xDistances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALotCalculator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_proxBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_bpProcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_yVert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_xVert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_roads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_yDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotCalculator_Statics::NewProp_xDistances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALotCalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALotCalculator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALotCalculator_Statics::ClassParams = {
		&ALotCalculator::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALotCalculator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALotCalculator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALotCalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALotCalculator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALotCalculator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALotCalculator, 4226661306);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALotCalculator(Z_Construct_UClass_ALotCalculator, &ALotCalculator::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ALotCalculator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALotCalculator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
