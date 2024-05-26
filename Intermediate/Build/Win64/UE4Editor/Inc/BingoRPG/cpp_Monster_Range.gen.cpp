// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BingoRPG/cpp_Monster_Range.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecpp_Monster_Range() {}
// Cross Module References
	BINGORPG_API UClass* Z_Construct_UClass_Acpp_Monster_Range_NoRegister();
	BINGORPG_API UClass* Z_Construct_UClass_Acpp_Monster_Range();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BingoRPG();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Acpp_Monster_Range::execSetInputValue)
	{
		P_GET_UBOOL_REF(Z_Param_Out_inputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetInputValue(Z_Param_Out_inputValue);
		P_NATIVE_END;
	}
	void Acpp_Monster_Range::StaticRegisterNativesAcpp_Monster_Range()
	{
		UClass* Class = Acpp_Monster_Range::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInputValue", &Acpp_Monster_Range::execSetInputValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics
	{
		struct cpp_Monster_Range_eventSetInputValue_Parms
		{
			bool inputValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputValue_MetaData[];
#endif
		static void NewProp_inputValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inputValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue_SetBit(void* Obj)
	{
		((cpp_Monster_Range_eventSetInputValue_Parms*)Obj)->inputValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue = { "inputValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(cpp_Monster_Range_eventSetInputValue_Parms), &Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue_MetaData)) };
	void Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((cpp_Monster_Range_eventSetInputValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(cpp_Monster_Range_eventSetInputValue_Parms), &Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_inputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "cpp_Monster_Range.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Acpp_Monster_Range, nullptr, "SetInputValue", nullptr, nullptr, sizeof(cpp_Monster_Range_eventSetInputValue_Parms), Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Acpp_Monster_Range_NoRegister()
	{
		return Acpp_Monster_Range::StaticClass();
	}
	struct Z_Construct_UClass_Acpp_Monster_Range_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonsterRangeColl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonsterRangeColl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonsterAtkImg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MonsterAtkImg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MonsterSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MonsterSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Acpp_Monster_Range_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BingoRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Acpp_Monster_Range_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Acpp_Monster_Range_SetInputValue, "SetInputValue" }, // 1922506326
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_Monster_Range_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "cpp_Monster_Range.h" },
		{ "ModuleRelativePath", "cpp_Monster_Range.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterRangeColl_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cpp_Monster_Range.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterRangeColl = { "MonsterRangeColl", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_Monster_Range, MonsterRangeColl), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterRangeColl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterRangeColl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterAtkImg_MetaData[] = {
		{ "Category", "Animation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cpp_Monster_Range.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterAtkImg = { "MonsterAtkImg", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_Monster_Range, MonsterAtkImg), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterAtkImg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterAtkImg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Direcrtion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cpp_Monster_Range.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_Monster_Range, root), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterSpeed_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "cpp_Monster_Range.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterSpeed = { "MonsterSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Acpp_Monster_Range, MonsterSpeed), METADATA_PARAMS(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Acpp_Monster_Range_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterRangeColl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterAtkImg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Acpp_Monster_Range_Statics::NewProp_MonsterSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Acpp_Monster_Range_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Acpp_Monster_Range>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Acpp_Monster_Range_Statics::ClassParams = {
		&Acpp_Monster_Range::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Acpp_Monster_Range_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_Monster_Range_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Acpp_Monster_Range_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Acpp_Monster_Range_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Acpp_Monster_Range()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Acpp_Monster_Range_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Acpp_Monster_Range, 2616972531);
	template<> BINGORPG_API UClass* StaticClass<Acpp_Monster_Range>()
	{
		return Acpp_Monster_Range::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Acpp_Monster_Range(Z_Construct_UClass_Acpp_Monster_Range, &Acpp_Monster_Range::StaticClass, TEXT("/Script/BingoRPG"), TEXT("Acpp_Monster_Range"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Acpp_Monster_Range);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
