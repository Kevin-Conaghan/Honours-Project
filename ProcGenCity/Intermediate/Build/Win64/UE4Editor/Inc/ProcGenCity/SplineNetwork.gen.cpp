// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/SplineNetwork.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineNetwork() {}
// Cross Module References
	PROCGENCITY_API UClass* Z_Construct_UClass_ASplineNetwork_NoRegister();
	PROCGENCITY_API UClass* Z_Construct_UClass_ASplineNetwork();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
// End Cross Module References
	void ASplineNetwork::StaticRegisterNativesASplineNetwork()
	{
	}
	UClass* Z_Construct_UClass_ASplineNetwork_NoRegister()
	{
		return ASplineNetwork::StaticClass();
	}
	struct Z_Construct_UClass_ASplineNetwork_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineNetwork_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProcGenCity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineNetwork_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineNetwork.h" },
		{ "ModuleRelativePath", "SplineNetwork.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineNetwork_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineNetwork>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineNetwork_Statics::ClassParams = {
		&ASplineNetwork::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASplineNetwork_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASplineNetwork_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineNetwork()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplineNetwork_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplineNetwork, 4261692455);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineNetwork(Z_Construct_UClass_ASplineNetwork, &ASplineNetwork::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ASplineNetwork"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineNetwork);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
