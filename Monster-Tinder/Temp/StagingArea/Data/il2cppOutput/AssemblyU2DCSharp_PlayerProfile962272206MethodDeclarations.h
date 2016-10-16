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

// PlayerProfile
struct PlayerProfile_t962272206;
// BodyPart
struct BodyPart_t1244368617;
// Profile
struct Profile_t618263825;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BodyPart1244368617.h"
#include "AssemblyU2DCSharp_Profile618263825.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void PlayerProfile::.ctor()
extern "C"  void PlayerProfile__ctor_m1708695259 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::.cctor()
extern "C"  void PlayerProfile__cctor_m2233460556 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlayerProfile PlayerProfile::GetPlayer()
extern "C"  PlayerProfile_t962272206 * PlayerProfile_GetPlayer_m202838377 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::Awake()
extern "C"  void PlayerProfile_Awake_m3554642298 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerProfile::GetCorrectChoices()
extern "C"  int32_t PlayerProfile_GetCorrectChoices_m1441352685 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerProfile::GetIncorrectChoices()
extern "C"  int32_t PlayerProfile_GetIncorrectChoices_m255460522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::SetChoice(BodyPart)
extern "C"  void PlayerProfile_SetChoice_m1335863269 (Il2CppObject * __this /* static, unused */, BodyPart_t1244368617 * ___bp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::ResetScore()
extern "C"  void PlayerProfile_ResetScore_m3738902462 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerProfile::GetScore()
extern "C"  int32_t PlayerProfile_GetScore_m1396097695 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerProfile::Conflicts(BodyPart,BodyPart)
extern "C"  bool PlayerProfile_Conflicts_m1230024544 (Il2CppObject * __this /* static, unused */, BodyPart_t1244368617 * ___a0, BodyPart_t1244368617 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::DropAllText()
extern "C"  void PlayerProfile_DropAllText_m2633283342 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerProfile::GetSameParts(Profile)
extern "C"  int32_t PlayerProfile_GetSameParts_m3688621628 (PlayerProfile_t962272206 * __this, Profile_t618263825 * ___potentialMatch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlayerProfile::GetDifferentParts(Profile)
extern "C"  int32_t PlayerProfile_GetDifferentParts_m2464017573 (PlayerProfile_t962272206 * __this, Profile_t618263825 * ___potentialMatch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerProfile::CheckForMatch(Profile)
extern "C"  bool PlayerProfile_CheckForMatch_m2831013212 (PlayerProfile_t962272206 * __this, Profile_t618263825 * ___potentialMatch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PlayerProfile::DropTutorialText(System.String,UnityEngine.Color)
extern "C"  GameObject_t1756533147 * PlayerProfile_DropTutorialText_m424146510 (PlayerProfile_t962272206 * __this, String_t* ___text0, Color_t2020392075  ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::GenerateProfile()
extern "C"  void PlayerProfile_GenerateProfile_m2265487975 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerProfile::GeneratePlayerBody()
extern "C"  Il2CppObject * PlayerProfile_GeneratePlayerBody_m502875277 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::OnLevelWasLoaded()
extern "C"  void PlayerProfile_OnLevelWasLoaded_m153904262 (PlayerProfile_t962272206 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::AddMatch()
extern "C"  void PlayerProfile_AddMatch_m3852902189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerProfile::RemoveMatch()
extern "C"  void PlayerProfile_RemoveMatch_m3032750604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
