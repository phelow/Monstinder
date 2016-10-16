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

// MatchManager
struct MatchManager_t1766971312;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void MatchManager::.ctor()
extern "C"  void MatchManager__ctor_m2474653947 (MatchManager_t1766971312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchManager::Start()
extern "C"  void MatchManager_Start_m1444682991 (MatchManager_t1766971312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MatchManager::NumMatches()
extern "C"  int32_t MatchManager_NumMatches_m3708892316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> MatchManager::GetMatches()
extern "C"  List_1_t1125654279 * MatchManager_GetMatches_m3768070785 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchManager::SaveMatch(UnityEngine.GameObject)
extern "C"  void MatchManager_SaveMatch_m2954132885 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchManager::OnLevelWasLoaded()
extern "C"  void MatchManager_OnLevelWasLoaded_m2323217436 (MatchManager_t1766971312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchManager::SaveReject(UnityEngine.GameObject)
extern "C"  void MatchManager_SaveReject_m1903944945 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchManager::ReleaseMatch()
extern "C"  void MatchManager_ReleaseMatch_m3999018141 (MatchManager_t1766971312 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MatchManager::HideMatch(UnityEngine.GameObject)
extern "C"  Il2CppObject * MatchManager_HideMatch_m2522899636 (MatchManager_t1766971312 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MatchManager::DestroyMatch(UnityEngine.GameObject)
extern "C"  Il2CppObject * MatchManager_DestroyMatch_m3359014862 (MatchManager_t1766971312 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MatchManager::ShrinkMatchCoroutine(UnityEngine.GameObject)
extern "C"  Il2CppObject * MatchManager_ShrinkMatchCoroutine_m3415646485 (MatchManager_t1766971312 * __this, GameObject_t1756533147 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MatchManager::DockMatchCoroutine(UnityEngine.GameObject)
extern "C"  Il2CppObject * MatchManager_DockMatchCoroutine_m3745395123 (MatchManager_t1766971312 * __this, GameObject_t1756533147 * ___match0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MatchManager::DockMatch(UnityEngine.GameObject,System.Boolean)
extern "C"  void MatchManager_DockMatch_m850042804 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___match0, bool ___isMatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
