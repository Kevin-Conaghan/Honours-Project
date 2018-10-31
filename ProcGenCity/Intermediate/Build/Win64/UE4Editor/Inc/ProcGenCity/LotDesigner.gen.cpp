// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/LotDesigner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLotDesigner() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotDesigner_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotDesigner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALotDesigner::StaticRegisterNativesALotDesigner()
	{
	}
	UClass* Z_Construct_UClass_ALotDesigner_NoRegister()
	{
		return ALotDesigner::StaticClass();
	}
	struct Z_Construct_UClass_ALotDesigner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_distances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALotDesigner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotDesigner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LotDesigner.h" },
		{ "ModuleRelativePath", "LotDesigner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances_MetaData[] = {
		{ "Category", "Distances" },
		{ "ModuleRelativePath", "LotDesigner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances = { UE4CodeGen_Private::EPropertyClass::Array, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALotDesigner, distances), METADATA_PARAMS(Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent_MetaData[] = {
		{ "Category", "LotDesigner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LotDesigner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "myMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALotDesigner, myMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALotDesigner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotDesigner_Statics::NewProp_distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALotDesigner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALotDesigner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALotDesigner_Statics::ClassParams = {
		&ALotDesigner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALotDesigner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALotDesigner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALotDesigner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALotDesigner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALotDesigner, 4267207174);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALotDesigner(Z_Construct_UClass_ALotDesigner, &ALotDesigner::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ALotDesigner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALotDesigner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
