#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MatchChoice
struct MatchChoice_t718402754;
// Profile
struct Profile_t618263825;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_MatchChoice718402754.h"

// System.Void MatchChoice::.ctor()
extern "C"  void MatchChoice__ctor_m909372307 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::Awake()
extern "C"  void MatchChoice_Awake_m4137458514 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::OnLevelWasLoaded()
extern "C"  void MatchChoice_OnLevelWasLoaded_m1774073310 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Profile MatchChoice::GetMonsterProfile()
extern "C"  Profile_t618263825 * MatchChoice_GetMonsterProfile_m899475804 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::Update()
extern "C"  void MatchChoice_Update_m24856048 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button MatchChoice::GetButton()
extern "C"  Button_t2872111280 * MatchChoice_GetButton_m3802797943 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::HideCharacter()
extern "C"  void MatchChoice_HideCharacter_m732733242 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::ExplodeCharacter()
extern "C"  void MatchChoice_ExplodeCharacter_m4046613677 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::SetPlayerChoice()
extern "C"  void MatchChoice_SetPlayerChoice_m2826161429 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchChoice::SetMonster(UnityEngine.GameObject)
extern "C"  void MatchChoice_SetMonster_m3416616237 (MatchChoice_t718402754 * __this, GameObject_t1756533147 * ___choice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MatchChoice::GetIsBetterChoiceThan(MatchChoice)
extern "C"  bool MatchChoice_GetIsBetterChoiceThan_m4152362679 (MatchChoice_t718402754 * __this, MatchChoice_t718402754 * ___otherChoice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MatchChoice::GetSamePartsAsPlayerCount()
extern "C"  int32_t MatchChoice_GetSamePartsAsPlayerCount_m950380947 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MatchChoice::GetDifferentPartsFromPlayerCount()
extern "C"  int32_t MatchChoice_GetDifferentPartsFromPlayerCount_m2777094364 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MatchChoice::GetMonster()
extern "C"  GameObject_t1756533147 * MatchChoice_GetMonster_m4113157512 (MatchChoice_t718402754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
