// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/NewProcMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewProcMesh() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ANewProcMesh_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ANewProcMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotDesigner_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void ANewProcMesh::StaticRegisterNativesANewProcMesh()
	{
	}
	UClass* Z_Construct_UClass_ANewProcMesh_NoRegister()
	{
		return ANewProcMesh::StaticClass();
	}
	struct Z_Construct_UClass_ANewProcMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertCount;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_vertCount_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plotPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_plotPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plotPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yVert_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yVert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xVert_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xVert;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_distances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertexColours_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertexColours;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertexColours_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uvs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_uvs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_uvs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_normals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roofVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_roofVerts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_roofVerts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_procRoof_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_procRoof;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_procMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_procMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewProcMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NewProcMesh.h" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount = { UE4CodeGen_Private::EPropertyClass::Array, "vertCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, vertCount), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "vertCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints_MetaData[] = {
		{ "Category", "Plots" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints = { UE4CodeGen_Private::EPropertyClass::Array, "plotPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, plotPoints), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "plotPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_height = { UE4CodeGen_Private::EPropertyClass::Float, "height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, height), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_height_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_yVert_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_yVert = { UE4CodeGen_Private::EPropertyClass::Float, "yVert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, yVert), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_yVert_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_yVert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_xVert_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_xVert = { UE4CodeGen_Private::EPropertyClass::Float, "xVert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, xVert), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_xVert_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_xVert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances = { UE4CodeGen_Private::EPropertyClass::Array, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, distances), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents_MetaData[] = {
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents = { UE4CodeGen_Private::EPropertyClass::Array, "tangents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, tangents), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "tangents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours_MetaData[] = {
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours = { UE4CodeGen_Private::EPropertyClass::Array, "vertexColours", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, vertexColours), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "vertexColours", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs_MetaData[] = {
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs = { UE4CodeGen_Private::EPropertyClass::Array, "uvs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, uvs), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "uvs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles_MetaData[] = {
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles = { UE4CodeGen_Private::EPropertyClass::Array, "triangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, triangles), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "triangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals_MetaData[] = {
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals = { UE4CodeGen_Private::EPropertyClass::Array, "normals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, normals), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "normals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices = { UE4CodeGen_Private::EPropertyClass::Array, "vertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, vertices), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "vertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts_MetaData[] = {
		{ "Category", "Vertices" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts = { UE4CodeGen_Private::EPropertyClass::Array, "roofVerts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, roofVerts), METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "roofVerts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procRoof_MetaData[] = {
		{ "Category", "ProcMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procRoof = { UE4CodeGen_Private::EPropertyClass::Object, "procRoof", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, procRoof), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procRoof_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procRoof_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procMesh_MetaData[] = {
		{ "Category", "ProcMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NewProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procMesh = { UE4CodeGen_Private::EPropertyClass::Object, "procMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ANewProcMesh, procMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewProcMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_plotPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_yVert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_xVert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertexColours_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_uvs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_roofVerts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procRoof,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewProcMesh_Statics::NewProp_procMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewProcMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewProcMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewProcMesh_Statics::ClassParams = {
		&ANewProcMesh::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ANewProcMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANewProcMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANewProcMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewProcMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewProcMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewProcMesh, 3109553448);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewProcMesh(Z_Construct_UClass_ANewProcMesh, &ANewProcMesh::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ANewProcMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewProcMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
