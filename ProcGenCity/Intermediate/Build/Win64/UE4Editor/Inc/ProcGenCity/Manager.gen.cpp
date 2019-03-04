// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Manager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManager() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_AManager_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_AManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_AChecker_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AManager::StaticRegisterNativesAManager()
	{
	}
	UClass* Z_Construct_UClass_AManager_NoRegister()
	{
		return AManager::StaticClass();
	}
	struct Z_Construct_UClass_AManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGenerating_MetaData[];
#endif
		static void NewProp_isGenerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGenerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_branches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_branches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_branches_Inner;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Manager.h" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManager_Statics::NewProp_isGenerating_MetaData[] = {
		{ "Category", "Values" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif
	void Z_Construct_UClass_AManager_Statics::NewProp_isGenerating_SetBit(void* Obj)
	{
		((AManager*)Obj)->isGenerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_isGenerating = { UE4CodeGen_Private::EPropertyClass::Bool, "isGenerating", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AManager), &Z_Construct_UClass_AManager_Statics::NewProp_isGenerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_AManager_Statics::NewProp_isGenerating_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::NewProp_isGenerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManager_Statics::NewProp_branches_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_branches = { UE4CodeGen_Private::EPropertyClass::Array, "branches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AManager, branches), METADATA_PARAMS(Z_Construct_UClass_AManager_Statics::NewProp_branches_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::NewProp_branches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_branches_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "branches", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_ABranch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs_MetaData[] = {
		{ "Category", "Objects" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs = { UE4CodeGen_Private::EPropertyClass::Array, "checkerObjs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AManager, checkerObjs), METADATA_PARAMS(Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "checkerObjs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UClass_AChecker_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManager_Statics::NewProp_bpBranch_MetaData[] = {
		{ "Category", "Object BP" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_bpBranch = { UE4CodeGen_Private::EPropertyClass::Class, "bpBranch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AManager, bpBranch), Z_Construct_UClass_ABranch_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AManager_Statics::NewProp_bpBranch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::NewProp_bpBranch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManager_Statics::NewProp_bpChecker_MetaData[] = {
		{ "Category", "Object BP" },
		{ "ModuleRelativePath", "Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AManager_Statics::NewProp_bpChecker = { UE4CodeGen_Private::EPropertyClass::Class, "bpChecker", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AManager, bpChecker), Z_Construct_UClass_AChecker_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AManager_Statics::NewProp_bpChecker_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::NewProp_bpChecker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_isGenerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_branches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_branches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_checkerObjs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_bpBranch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManager_Statics::NewProp_bpChecker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManager_Statics::ClassParams = {
		&AManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManager, 3359893165);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManager(Z_Construct_UClass_AManager, &AManager::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("AManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
