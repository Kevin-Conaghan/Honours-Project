// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/LotPlacement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLotPlacement() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotPlacement_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotPlacement();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCGENCITY_API UClass* Z_Construct_UClass_AMyProcMesh_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ALotDesigner_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ALotPlacement::StaticRegisterNativesALotPlacement()
	{
	}
	UClass* Z_Construct_UClass_ALotPlacement_NoRegister()
	{
		return ALotPlacement::StaticClass();
	}
	struct Z_Construct_UClass_ALotPlacement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpLotPlacement_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpLotPlacement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpProcMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpLotDesigner_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpLotDesigner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_distances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_distances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_distances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_procMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_procMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_plots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_plots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointFour_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pointFour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointThree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pointThree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pointTwo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pointOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGenerating_MetaData[];
#endif
		static void NewProp_isGenerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGenerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasDivided_MetaData[];
#endif
		static void NewProp_hasDivided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasDivided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasGenerated_MetaData[];
#endif
		static void NewProp_hasGenerated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasGenerated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALotPlacement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LotPlacement.h" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotPlacement_MetaData[] = {
		{ "Category", "Lot Placement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotPlacement = { UE4CodeGen_Private::EPropertyClass::Class, "bpLotPlacement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(ALotPlacement, bpLotPlacement), Z_Construct_UClass_ALotPlacement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotPlacement_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotPlacement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpProcMesh_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpProcMesh = { UE4CodeGen_Private::EPropertyClass::Class, "bpProcMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(ALotPlacement, bpProcMesh), Z_Construct_UClass_AMyProcMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpProcMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpProcMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotDesigner_MetaData[] = {
		{ "Category", "Plot Designer" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotDesigner = { UE4CodeGen_Private::EPropertyClass::Class, "bpLotDesigner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000015, 1, nullptr, STRUCT_OFFSET(ALotPlacement, bpLotDesigner), Z_Construct_UClass_ALotDesigner_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotDesigner_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotDesigner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances = { UE4CodeGen_Private::EPropertyClass::Array, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ALotPlacement, distances), METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "distances", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_procMesh_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_procMesh = { UE4CodeGen_Private::EPropertyClass::Object, "procMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotPlacement, procMesh), Z_Construct_UClass_AMyProcMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_procMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_procMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots = { UE4CodeGen_Private::EPropertyClass::Array, "plots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotPlacement, plots), METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "plots", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointFour_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointFour = { UE4CodeGen_Private::EPropertyClass::Object, "pointFour", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotPlacement, pointFour), Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointFour_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointFour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointThree_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointThree = { UE4CodeGen_Private::EPropertyClass::Object, "pointThree", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotPlacement, pointThree), Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointThree_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointThree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointTwo_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointTwo = { UE4CodeGen_Private::EPropertyClass::Object, "pointTwo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotPlacement, pointTwo), Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointTwo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointTwo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointOne_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointOne = { UE4CodeGen_Private::EPropertyClass::Object, "pointOne", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(ALotPlacement, pointOne), Z_Construct_UClass_ALotDesigner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_myMeshComponent_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_myMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "myMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALotPlacement, myMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_myMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_myMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	void Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating_SetBit(void* Obj)
	{
		((ALotPlacement*)Obj)->isGenerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating = { UE4CodeGen_Private::EPropertyClass::Bool, "isGenerating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALotPlacement), &Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	void Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided_SetBit(void* Obj)
	{
		((ALotPlacement*)Obj)->hasDivided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided = { UE4CodeGen_Private::EPropertyClass::Bool, "hasDivided", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALotPlacement), &Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated_MetaData[] = {
		{ "Category", "LotPlacement" },
		{ "ModuleRelativePath", "LotPlacement.h" },
	};
#endif
	void Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated_SetBit(void* Obj)
	{
		((ALotPlacement*)Obj)->hasGenerated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated = { UE4CodeGen_Private::EPropertyClass::Bool, "hasGenerated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALotPlacement), &Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALotPlacement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotPlacement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpProcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_bpLotDesigner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_distances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_procMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_plots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointFour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointThree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointTwo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_pointOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_myMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_isGenerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasDivided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotPlacement_Statics::NewProp_hasGenerated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALotPlacement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALotPlacement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALotPlacement_Statics::ClassParams = {
		&ALotPlacement::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ALotPlacement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALotPlacement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALotPlacement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALotPlacement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALotPlacement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALotPlacement, 2938618042);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALotPlacement(Z_Construct_UClass_ALotPlacement, &ALotPlacement::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ALotPlacement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALotPlacement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
