// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/MyProcMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProcMesh() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_AMyProcMesh_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_AMyProcMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	void AMyProcMesh::StaticRegisterNativesAMyProcMesh()
	{
	}
	UClass* Z_Construct_UClass_AMyProcMesh_NoRegister()
	{
		return AMyProcMesh::StaticClass();
	}
	struct Z_Construct_UClass_AMyProcMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tangents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tangents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertexColors_Inner;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plotVerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_plotVerts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_plotVerts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_distances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_vertEdit_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_vertEdit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertEdit_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myProcMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProcMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyProcMesh.h" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_height = { UE4CodeGen_Private::EPropertyClass::Float, "height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, height), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_height_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_yVert_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_yVert = { UE4CodeGen_Private::EPropertyClass::Float, "yVert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, yVert), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_yVert_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_yVert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_xVert_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_xVert = { UE4CodeGen_Private::EPropertyClass::Float, "xVert", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, xVert), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_xVert_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_xVert_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents = { UE4CodeGen_Private::EPropertyClass::Array, "tangents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, tangents), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "tangents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors = { UE4CodeGen_Private::EPropertyClass::Array, "vertexColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, vertexColors), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "vertexColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs = { UE4CodeGen_Private::EPropertyClass::Array, "uvs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, uvs), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "uvs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles = { UE4CodeGen_Private::EPropertyClass::Array, "triangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, triangles), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "triangles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals = { UE4CodeGen_Private::EPropertyClass::Array, "normals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, normals), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "normals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices = { UE4CodeGen_Private::EPropertyClass::Array, "vertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, vertices), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "vertices", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts_MetaData[] = {
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts = { UE4CodeGen_Private::EPropertyClass::Array, "plotVerts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, plotVerts), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "plotVerts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances = { UE4CodeGen_Private::EPropertyClass::Array, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, distances), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit_MetaData[] = {
		{ "Category", "Vertices" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit = { UE4CodeGen_Private::EPropertyClass::Array, "vertEdit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, vertEdit), METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "vertEdit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProcMesh_Statics::NewProp_myProcMesh_MetaData[] = {
		{ "Category", "MyProcMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProcMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProcMesh_Statics::NewProp_myProcMesh = { UE4CodeGen_Private::EPropertyClass::Object, "myProcMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(AMyProcMesh, myProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_myProcMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::NewProp_myProcMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProcMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_yVert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_xVert,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_uvs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_plotVerts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_vertEdit_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProcMesh_Statics::NewProp_myProcMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProcMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProcMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProcMesh_Statics::ClassParams = {
		&AMyProcMesh::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMyProcMesh_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMyProcMesh_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyProcMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProcMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProcMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProcMesh, 1391366522);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProcMesh(Z_Construct_UClass_AMyProcMesh, &AMyProcMesh::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("AMyProcMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProcMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
