// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Road.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoad() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ARoad_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ARoad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ARoad::StaticRegisterNativesARoad()
	{
	}
	UClass* Z_Construct_UClass_ARoad_NoRegister()
	{
		return ARoad::StaticClass();
	}
	struct Z_Construct_UClass_ARoad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roadLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roadLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_stateDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dir_MetaData[];
#endif
		static void NewProp_dir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_dir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_maxPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_onMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Road.h" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_roadLength_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_roadLength = { UE4CodeGen_Private::EPropertyClass::Float, "roadLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ARoad, roadLength), METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_roadLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_roadLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_stateDir_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_stateDir = { UE4CodeGen_Private::EPropertyClass::Int, "stateDir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ARoad, stateDir), METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_stateDir_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_stateDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_dir_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
	void Z_Construct_UClass_ARoad_Statics::NewProp_dir_SetBit(void* Obj)
	{
		((ARoad*)Obj)->dir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_dir = { UE4CodeGen_Private::EPropertyClass::Bool, "dir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARoad), &Z_Construct_UClass_ARoad_Statics::NewProp_dir_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_dir_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_dir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_maxPoint_MetaData[] = {
		{ "Category", "Point" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_maxPoint = { UE4CodeGen_Private::EPropertyClass::Object, "maxPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ARoad, maxPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_maxPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_maxPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_onMaterial_MetaData[] = {
		{ "Category", "Road" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_onMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "onMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ARoad, onMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_onMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_onMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoad_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Road" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Road.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoad_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ARoad, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_roadLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_stateDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_dir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_maxPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_onMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoad_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARoad_Statics::ClassParams = {
		&ARoad::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ARoad_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARoad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARoad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoad, 147150859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoad(Z_Construct_UClass_ARoad, &ARoad::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ARoad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
