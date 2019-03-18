// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Branch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranch() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCGENCITY_API UClass* Z_Construct_UClass_AChecker_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABranch::StaticRegisterNativesABranch()
	{
	}
	UClass* Z_Construct_UClass_ABranch_NoRegister()
	{
		return ABranch::StaticClass();
	}
	struct Z_Construct_UClass_ABranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isComplete_MetaData[];
#endif
		static void NewProp_isComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGenerating_MetaData[];
#endif
		static void NewProp_isGenerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGenerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roadLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roadLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_checkerObjs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_checkerObjs;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_checkerObjs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpBranch_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpBranch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpChecker_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpChecker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Branch.h" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_isComplete_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	void Z_Construct_UClass_ABranch_Statics::NewProp_isComplete_SetBit(void* Obj)
	{
		((ABranch*)Obj)->isComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_isComplete = { UE4CodeGen_Private::EPropertyClass::Bool, "isComplete", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABranch), &Z_Construct_UClass_ABranch_Statics::NewProp_isComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_isComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_isComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	void Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating_SetBit(void* Obj)
	{
		((ABranch*)Obj)->isGenerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating = { UE4CodeGen_Private::EPropertyClass::Bool, "isGenerating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABranch), &Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_roadLength_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_roadLength = { UE4CodeGen_Private::EPropertyClass::Float, "roadLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranch, roadLength), METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_roadLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_roadLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs = { UE4CodeGen_Private::EPropertyClass::Array, "checkerObjs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranch, checkerObjs), METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "checkerObjs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_bpBranch_MetaData[] = {
		{ "Category", "Object BP" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_bpBranch = { UE4CodeGen_Private::EPropertyClass::Class, "bpBranch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ABranch, bpBranch), Z_Construct_UClass_ABranch_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_bpBranch_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_bpBranch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_bpChecker_MetaData[] = {
		{ "Category", "Object BP" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_bpChecker = { UE4CodeGen_Private::EPropertyClass::Class, "bpChecker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ABranch, bpChecker), Z_Construct_UClass_AChecker_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_bpChecker_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_bpChecker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ABranch, mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_isComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_roadLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_bpBranch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_bpChecker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABranch_Statics::ClassParams = {
		&ABranch::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ABranch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABranch, 1864505902);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABranch(Z_Construct_UClass_ABranch, &ABranch::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ABranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
