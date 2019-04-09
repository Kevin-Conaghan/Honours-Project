// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProcGenCity/Globals.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobals() {}
// Cross Module References
	PROCGENCITY_API UEnum* Z_Construct_UEnum_ProcGenCity_EBranchDirection();
	UPackage* Z_Construct_UPackage__Script_ProcGenCity();
// End Cross Module References
	static UEnum* EBranchDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProcGenCity_EBranchDirection, Z_Construct_UPackage__Script_ProcGenCity(), TEXT("EBranchDirection"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBranchDirection(EBranchDirection_StaticEnum, TEXT("/Script/ProcGenCity"), TEXT("EBranchDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProcGenCity_EBranchDirection_CRC() { return 3196019640U; }
	UEnum* Z_Construct_UEnum_ProcGenCity_EBranchDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProcGenCity();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBranchDirection"), 0, Get_Z_Construct_UEnum_ProcGenCity_EBranchDirection_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBranchDirection::EB_UP", (int64)EBranchDirection::EB_UP },
				{ "EBranchDirection::EB_DOWN", (int64)EBranchDirection::EB_DOWN },
				{ "EBranchDirection::EB_LEFT", (int64)EBranchDirection::EB_LEFT },
				{ "EBranchDirection::EB_RIGHT", (int64)EBranchDirection::EB_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EB_DOWN.DisplayName", "Down-Dir" },
				{ "EB_LEFT.DisplayName", "Left-Dir" },
				{ "EB_RIGHT.DisplayName", "Right-Dir" },
				{ "EB_UP.DisplayName", "Up-Dir" },
				{ "ModuleRelativePath", "Globals.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProcGenCity,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBranchDirection",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBranchDirection",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
