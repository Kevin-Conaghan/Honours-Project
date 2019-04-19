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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCGENCITY_API UClass* Z_Construct_UClass_ANewProcMesh_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotDesigner_NoRegister();
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
	IMPLEMENT_CLASS(APlacement, 2093478798);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlacement(Z_Construct_UClass_APlacement, &APlacement::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("APlacement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlacement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
