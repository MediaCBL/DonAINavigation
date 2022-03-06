// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDoNNavigationQueryData;
struct FDonNavigationDynamicCollisionPayload;
struct FVector;
struct FDoNNavigationDebugParams;
struct FColor;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FDoNNavigationQueryParams;
#ifdef DONAINAVIGATION_DonNavigationManager_generated_h
#error "DonNavigationManager.generated.h already included, missing '#pragma once' in DonNavigationManager.h"
#endif
#define DONAINAVIGATION_DonNavigationManager_generated_h

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_577_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionTask_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDonNavigationTask Super;


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavigationDynamicCollisionTask>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_477_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavigationQueryTask_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct(); \
	typedef FDonNavigationTask Super;


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavigationQueryTask>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_465_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavigationTask_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavigationTask>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_355_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoNNavigationQueryData_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDoNNavigationQueryData>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoNNavigationDebugParams_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDoNNavigationDebugParams>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDoNNavigationQueryParams_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDoNNavigationQueryParams>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavVoxelXYZ_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavVoxelXYZ>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_169_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavVoxelX_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavVoxelX>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavVoxelY_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavVoxelY>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionNotifyee_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavigationDynamicCollisionNotifyee>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavigationDynamicCollisionPayload_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavigationDynamicCollisionPayload>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonVoxelCollisionProfile_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonVoxelCollisionProfile>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDonNavigationVoxel_Statics; \
	DONAINAVIGATION_API static class UScriptStruct* StaticStruct();


template<> DONAINAVIGATION_API UScriptStruct* StaticStruct<struct FDonNavigationVoxel>();

#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_523_DELEGATE \
struct _Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms \
{ \
	bool bTaskSuccessful; \
}; \
static inline void FDonCollisionSamplerCallback_DelegateWrapper(const FScriptDelegate& DonCollisionSamplerCallback, bool bTaskSuccessful) \
{ \
	_Script_DonAINavigation_eventDonCollisionSamplerCallback_Parms Parms; \
	Parms.bTaskSuccessful=bTaskSuccessful ? true : false; \
	DonCollisionSamplerCallback.ProcessDelegate<UObject>(&Parms); \
}


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_454_DELEGATE \
struct _Script_DonAINavigation_eventDoNNavigationResultHandler_Parms \
{ \
	FDoNNavigationQueryData Data; \
}; \
static inline void FDoNNavigationResultHandler_DelegateWrapper(const FScriptDelegate& DoNNavigationResultHandler, FDoNNavigationQueryData const& Data) \
{ \
	_Script_DonAINavigation_eventDoNNavigationResultHandler_Parms Parms; \
	Parms.Data=Data; \
	DoNNavigationResultHandler.ProcessDelegate<UObject>(&Parms); \
}


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_120_DELEGATE \
struct _Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms \
{ \
	FDonNavigationDynamicCollisionPayload Data; \
}; \
static inline void FDonNavigationDynamicCollisionDelegate_DelegateWrapper(const FScriptDelegate& DonNavigationDynamicCollisionDelegate, FDonNavigationDynamicCollisionPayload const& Data) \
{ \
	_Script_DonAINavigation_eventDonNavigationDynamicCollisionDelegate_Parms Parms; \
	Parms.Data=Data; \
	DonNavigationDynamicCollisionDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_SPARSE_DATA
#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanNavigate); \
	DECLARE_FUNCTION(execVisualizeDynamicCollisionListeners); \
	DECLARE_FUNCTION(execVisualizeNAVResult); \
	DECLARE_FUNCTION(execIsMeshBoundsWithinNavigableWorld); \
	DECLARE_FUNCTION(execIsLocationBeneathLandscape); \
	DECLARE_FUNCTION(execFindRandomPointAroundOriginInNavWorld); \
	DECLARE_FUNCTION(execFindRandomPointFromActorInNavWorld); \
	DECLARE_FUNCTION(execIsDirectPathLineSweep); \
	DECLARE_FUNCTION(execIsDirectPathLineTrace); \
	DECLARE_FUNCTION(execIsDirectPathSweep); \
	DECLARE_FUNCTION(execFindPathSolution_StressTesting); \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPathIndex); \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPath); \
	DECLARE_FUNCTION(execScheduleDynamicCollisionUpdate); \
	DECLARE_FUNCTION(execHasTask); \
	DECLARE_FUNCTION(execAbortPathfindingTask); \
	DECLARE_FUNCTION(execSchedulePathfindingTask); \
	DECLARE_FUNCTION(execIsLocationWithinNavigableWorld); \
	DECLARE_FUNCTION(execClampLocationToNavigableWorld); \
	DECLARE_FUNCTION(execDebug_ClearAllVolumes); \
	DECLARE_FUNCTION(execDebug_DrawVoxelCollisionProfile); \
	DECLARE_FUNCTION(execDebug_DrawVolumesAroundPoint); \
	DECLARE_FUNCTION(execDebug_DrawAllVolumes); \
	DECLARE_FUNCTION(execDebug_ToggleWorldBoundaryInGame); \
	DECLARE_FUNCTION(execConstructBuilder);


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanNavigate); \
	DECLARE_FUNCTION(execVisualizeDynamicCollisionListeners); \
	DECLARE_FUNCTION(execVisualizeNAVResult); \
	DECLARE_FUNCTION(execIsMeshBoundsWithinNavigableWorld); \
	DECLARE_FUNCTION(execIsLocationBeneathLandscape); \
	DECLARE_FUNCTION(execFindRandomPointAroundOriginInNavWorld); \
	DECLARE_FUNCTION(execFindRandomPointFromActorInNavWorld); \
	DECLARE_FUNCTION(execIsDirectPathLineSweep); \
	DECLARE_FUNCTION(execIsDirectPathLineTrace); \
	DECLARE_FUNCTION(execIsDirectPathSweep); \
	DECLARE_FUNCTION(execFindPathSolution_StressTesting); \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPathIndex); \
	DECLARE_FUNCTION(execStopListeningToDynamicCollisionsForPath); \
	DECLARE_FUNCTION(execScheduleDynamicCollisionUpdate); \
	DECLARE_FUNCTION(execHasTask); \
	DECLARE_FUNCTION(execAbortPathfindingTask); \
	DECLARE_FUNCTION(execSchedulePathfindingTask); \
	DECLARE_FUNCTION(execIsLocationWithinNavigableWorld); \
	DECLARE_FUNCTION(execClampLocationToNavigableWorld); \
	DECLARE_FUNCTION(execDebug_ClearAllVolumes); \
	DECLARE_FUNCTION(execDebug_DrawVoxelCollisionProfile); \
	DECLARE_FUNCTION(execDebug_DrawVolumesAroundPoint); \
	DECLARE_FUNCTION(execDebug_DrawAllVolumes); \
	DECLARE_FUNCTION(execDebug_ToggleWorldBoundaryInGame); \
	DECLARE_FUNCTION(execConstructBuilder);


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADonNavigationManager(); \
	friend struct Z_Construct_UClass_ADonNavigationManager_Statics; \
public: \
	DECLARE_CLASS(ADonNavigationManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(ADonNavigationManager)


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_INCLASS \
private: \
	static void StaticRegisterNativesADonNavigationManager(); \
	friend struct Z_Construct_UClass_ADonNavigationManager_Statics; \
public: \
	DECLARE_CLASS(ADonNavigationManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DonAINavigation"), NO_API) \
	DECLARE_SERIALIZER(ADonNavigationManager)


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADonNavigationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADonNavigationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonNavigationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonNavigationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonNavigationManager(ADonNavigationManager&&); \
	NO_API ADonNavigationManager(const ADonNavigationManager&); \
public:


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADonNavigationManager(ADonNavigationManager&&); \
	NO_API ADonNavigationManager(const ADonNavigationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADonNavigationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADonNavigationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADonNavigationManager)


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveNavigationTaskOwners() { return STRUCT_OFFSET(ADonNavigationManager, ActiveNavigationTaskOwners); } \
	FORCEINLINE static uint32 __PPO__ActiveCollisionTaskOwners() { return STRUCT_OFFSET(ADonNavigationManager, ActiveCollisionTaskOwners); }


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_660_PROLOG
#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_PRIVATE_PROPERTY_OFFSET \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_SPARSE_DATA \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_RPC_WRAPPERS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_INCLASS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_PRIVATE_PROPERTY_OFFSET \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_SPARSE_DATA \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_RPC_WRAPPERS_NO_PURE_DECLS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_INCLASS_NO_PURE_DECLS \
	BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h_663_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DONAINAVIGATION_API UClass* StaticClass<class ADonNavigationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BombHit_Plugins_DonAINavigation_Source_DonAINavigation_Classes_DonNavigationManager_h


#define FOREACH_ENUM_EDONNAVIGATIONQUERYSTATUS(op) \
	op(EDonNavigationQueryStatus::Unscheduled) \
	op(EDonNavigationQueryStatus::InProgress) \
	op(EDonNavigationQueryStatus::Success) \
	op(EDonNavigationQueryStatus::Failure) \
	op(EDonNavigationQueryStatus::QueryHasNoSolution) \
	op(EDonNavigationQueryStatus::TimedOut) 

enum class EDonNavigationQueryStatus : uint8;
template<> DONAINAVIGATION_API UEnum* StaticEnum<EDonNavigationQueryStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
