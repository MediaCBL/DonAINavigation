// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DONAINAVIGATION_DonNavigatorInterface_generated_h
#error "DonNavigatorInterface.generated.h already included, missing '#pragma once' in DonNavigatorInterface.h"
#endif
#define DONAINAVIGATION_DonNavigatorInterface_generated_h

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_SPARSE_DATA
#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS \
	virtual void OnNextSegment_Implementation(FVector NextPoint) {}; \
	virtual void OnLocomotionAbort_Implementation() {}; \
	virtual void OnLocomotionEnd_Implementation(bool bLocomotionSuccess) {}; \
	virtual void OnLocomotionBegin_Implementation() {}; \
	virtual void AddMovementInputCustom_Implementation(FVector WorldDirection, float ScaleValue) {}; \
 \
	DECLARE_FUNCTION(execOnNextSegment); \
	DECLARE_FUNCTION(execOnLocomotionAbort); \
	DECLARE_FUNCTION(execOnLocomotionEnd); \
	DECLARE_FUNCTION(execOnLocomotionBegin); \
	DECLARE_FUNCTION(execAddMovementInputCustom);


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnNextSegment_Implementation(FVector NextPoint) {}; \
	virtual void OnLocomotionAbort_Implementation() {}; \
	virtual void OnLocomotionEnd_Implementation(bool bLocomotionSuccess) {}; \
	virtual void OnLocomotionBegin_Implementation() {}; \
	virtual void AddMovementInputCustom_Implementation(FVector WorldDirection, float ScaleValue) {}; \
 \
	DECLARE_FUNCTION(execOnNextSegment); \
	DECLARE_FUNCTION(execOnLocomotionAbort); \
	DECLARE_FUNCTION(execOnLocomotionEnd); \
	DECLARE_FUNCTION(execOnLocomotionBegin); \
	DECLARE_FUNCTION(execAddMovementInputCustom);


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_EVENT_PARMS \
	struct DonNavigator_eventAddMovementInputCustom_Parms \
	{ \
		FVector WorldDirection; \
		float ScaleValue; \
	}; \
	struct DonNavigator_eventOnLocomotionEnd_Parms \
	{ \
		bool bLocomotionSuccess; \
	}; \
	struct DonNavigator_eventOnNextSegment_Parms \
	{ \
		FVector NextPoint; \
	};


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_CALLBACK_WRAPPERS
#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDonNavigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDonNavigator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDonNavigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDonNavigator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDonNavigator(UDonNavigator&&); \
	NO_API UDonNavigator(const UDonNavigator&); \
public:


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDonNavigator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDonNavigator(UDonNavigator&&); \
	NO_API UDonNavigator(const UDonNavigator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDonNavigator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDonNavigator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDonNavigator)


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDonNavigator(); \
	friend struct Z_Construct_UClass_UDonNavigator_Statics; \
public: \
	DECLARE_CLASS(UDonNavigator, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(UDonNavigator)


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_GENERATED_UINTERFACE_BODY() \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDonNavigator() {} \
public: \
	typedef UDonNavigator UClassType; \
	typedef IDonNavigator ThisClass; \
	static void Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue); \
	static void Execute_OnLocomotionAbort(UObject* O); \
	static void Execute_OnLocomotionBegin(UObject* O); \
	static void Execute_OnLocomotionEnd(UObject* O, bool bLocomotionSuccess); \
	static void Execute_OnNextSegment(UObject* O, FVector NextPoint); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IDonNavigator() {} \
public: \
	typedef UDonNavigator UClassType; \
	typedef IDonNavigator ThisClass; \
	static void Execute_AddMovementInputCustom(UObject* O, FVector WorldDirection, float ScaleValue); \
	static void Execute_OnLocomotionAbort(UObject* O); \
	static void Execute_OnLocomotionBegin(UObject* O); \
	static void Execute_OnLocomotionEnd(UObject* O, bool bLocomotionSuccess); \
	static void Execute_OnNextSegment(UObject* O, FVector NextPoint); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_19_PROLOG \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_EVENT_PARMS


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_SPARSE_DATA \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_CALLBACK_WRAPPERS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_SPARSE_DATA \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_CALLBACK_WRAPPERS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class UDonNavigator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigatorInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
