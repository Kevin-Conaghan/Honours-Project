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
	PROCGENCITY_API UEnum* Z_Construct_UEnum_ProcGenCity_EBranchState();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ABranch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROCGENCITY_API UClass* Z_Construct_UClass_AChecker_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* EBranchState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProcGenCity_EBranchState, Z_Construct_UPackage__Script_ProcGenCity(), TEXT("EBranchState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBranchState(EBranchState_StaticEnum, TEXT("/Script/ProcGenCity"), TEXT("EBranchState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProcGenCity_EBranchState_CRC() { return 1223732049U; }
	UEnum* Z_Construct_UEnum_ProcGenCity_EBranchState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProcGenCity();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBranchState"), 0, Get_Z_Construct_UEnum_ProcGenCity_EBranchState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBranchState::EB_NULL", (int64)EBranchState::EB_NULL },
				{ "EBranchState::EB_INIT", (int64)EBranchState::EB_INIT },
				{ "EBranchState::EB_Up", (int64)EBranchState::EB_Up },
				{ "EBranchState::EB_DOWN", (int64)EBranchState::EB_DOWN },
				{ "EBranchState::EB_LEFT", (int64)EBranchState::EB_LEFT },
				{ "EBranchState::EB_RIGHT", (int64)EBranchState::EB_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EB_DOWN.DisplayName", "Down-Direction" },
				{ "EB_INIT.DisplayName", "Initial-Branch" },
				{ "EB_LEFT.DisplayName", "Left-Direction" },
				{ "EB_NULL.DisplayName", "Null-Branch" },
				{ "EB_RIGHT.DisplayName", "Right-Direction" },
				{ "EB_Up.DisplayName", "Up-Direction" },
				{ "ModuleRelativePath", "Branch.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProcGenCity,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBranchState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBranchState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_branchDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_branchDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_branchDirection_Underlying;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection_MetaData[] = {
		{ "Category", "Enum" },
		{ "ModuleRelativePath", "Branch.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection = { UE4CodeGen_Private::EPropertyClass::Enum, "branchDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranch, branchDirection), Z_Construct_UEnum_ProcGenCity_EBranchState, METADATA_PARAMS(Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_branchDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_isGenerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_roadLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABranch_Statics::NewProp_checkerObjs_Inner,
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
	IMPLEMENT_CLASS(ABranch, 2258043808);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABranch(Z_Construct_UClass_ABranch, &ABranch::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ABranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
