// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/LRoad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLRoad() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ALRoad_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALRoad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCGENCITY_API UClass* Z_Construct_UClass_ARoad_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALRoad::StaticRegisterNativesALRoad()
	{
	}
	UClass* Z_Construct_UClass_ALRoad_NoRegister()
	{
		return ALRoad::StaticClass();
	}
	struct Z_Construct_UClass_ALRoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_segmentRoads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_segmentRoads;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_segmentRoads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roads_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roads;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_roads_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpRoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpRoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_road_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_road;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_road_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGenerating_MetaData[];
#endif
		static void NewProp_isGenerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGenerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instructions_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_instructions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_negAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_negAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_angle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALRoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LRoad.h" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads_MetaData[] = {
		{ "Category", "Lists" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads = { UE4CodeGen_Private::EPropertyClass::Array, "segmentRoads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ALRoad, segmentRoads), METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "segmentRoads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ARoad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_roads_MetaData[] = {
		{ "Category", "Lists" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_roads = { UE4CodeGen_Private::EPropertyClass::Array, "roads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ALRoad, roads), METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_roads_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_roads_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_roads_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "roads", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ARoad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_bpRoad_MetaData[] = {
		{ "Category", "Plot Designer" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_bpRoad = { UE4CodeGen_Private::EPropertyClass::Class, "bpRoad", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(ALRoad, bpRoad), Z_Construct_UClass_ARoad_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_bpRoad_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_bpRoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_road_MetaData[] = {
		{ "Category", "LRoad" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_road = { UE4CodeGen_Private::EPropertyClass::Array, "road", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALRoad, road), METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_road_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_road_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_road_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "road", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ARoad_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	void Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating_SetBit(void* Obj)
	{
		((ALRoad*)Obj)->isGenerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating = { UE4CodeGen_Private::EPropertyClass::Bool, "isGenerating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALRoad), &Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_instructions_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_instructions = { UE4CodeGen_Private::EPropertyClass::Int, "instructions", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALRoad, instructions), METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_instructions_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_instructions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_negAngle_MetaData[] = {
		{ "Category", "LRoad" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_negAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "negAngle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALRoad, negAngle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_negAngle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_negAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_angle_MetaData[] = {
		{ "Category", "LRoad" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_angle = { UE4CodeGen_Private::EPropertyClass::Struct, "angle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ALRoad, angle), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_angle_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_angle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRoad_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "LRoad" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LRoad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRoad_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALRoad, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALRoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_segmentRoads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_roads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_roads_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_bpRoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_road,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_road_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_isGenerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_instructions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_negAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRoad_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALRoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALRoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALRoad_Statics::ClassParams = {
		&ALRoad::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALRoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALRoad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALRoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALRoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALRoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALRoad, 1637531437);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALRoad(Z_Construct_UClass_ALRoad, &ALRoad::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ALRoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALRoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
