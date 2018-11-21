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
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proxBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proxBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSearching_MetaData[];
#endif
		static void NewProp_isSearching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSearching;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotDesigner_Statics::NewProp_proxBox_MetaData[] = {
		{ "Category", "Prox box" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LotDesigner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotDesigner_Statics::NewProp_proxBox = { UE4CodeGen_Private::EPropertyClass::Object, "proxBox", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000b001d, 1, nullptr, STRUCT_OFFSET(ALotDesigner, proxBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotDesigner_Statics::NewProp_proxBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::NewProp_proxBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent_MetaData[] = {
		{ "Category", "LotDesigner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LotDesigner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "myMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALotDesigner, myMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching_MetaData[] = {
		{ "Category", "Find Landmarks" },
		{ "ModuleRelativePath", "LotDesigner.h" },
	};
#endif
	void Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching_SetBit(void* Obj)
	{
		((ALotDesigner*)Obj)->isSearching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching = { UE4CodeGen_Private::EPropertyClass::Bool, "isSearching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALotDesigner), &Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALotDesigner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotDesigner_Statics::NewProp_proxBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotDesigner_Statics::NewProp_myMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALotDesigner_Statics::NewProp_isSearching,
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
	IMPLEMENT_CLASS(ALotDesigner, 3521455939);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALotDesigner(Z_Construct_UClass_ALotDesigner, &ALotDesigner::StaticClass, TEXT("/Script/ProcGenCity"), TEXT("ALotDesigner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALotDesigner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
