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

// Profile
struct Profile_t618263825;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.SpriteRenderer,UnityEngine.SpriteRenderer>>
struct List_1_t4000959781;
// System.Collections.Generic.List`1<BodyPart>
struct List_1_t613489749;
// UnityEngine.UI.Image
struct Image_t2042527209;
// BodyPart
struct BodyPart_t1244368617;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Profile618263825.h"
#include "AssemblyU2DCSharp_BodyPart1244368617.h"
#include "AssemblyU2DCSharp_BodyPart_ElementType3370823878.h"

// System.Void Profile::.ctor()
extern "C"  void Profile__ctor_m3383956620 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::TellNotToInit()
extern "C"  void Profile_TellNotToInit_m2108160941 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Profile::LerpToClear()
extern "C"  Il2CppObject * Profile_LerpToClear_m1922448475 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::OnLevelWasLoaded()
extern "C"  void Profile_OnLevelWasLoaded_m4035136033 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.SpriteRenderer,UnityEngine.SpriteRenderer>> Profile::GetMatchingPairs(Profile,Profile)
extern "C"  List_1_t4000959781 * Profile_GetMatchingPairs_m3919184232 (Il2CppObject * __this /* static, unused */, Profile_t618263825 * ___a0, Profile_t618263825 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.SpriteRenderer,UnityEngine.SpriteRenderer>> Profile::GetClashingPairs(Profile,Profile)
extern "C"  List_1_t4000959781 * Profile_GetClashingPairs_m3607590624 (Il2CppObject * __this /* static, unused */, Profile_t618263825 * ___a0, Profile_t618263825 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::HighLightMatchingParts(Profile,Profile)
extern "C"  void Profile_HighLightMatchingParts_m2331395871 (Il2CppObject * __this /* static, unused */, Profile_t618263825 * ___a0, Profile_t618263825 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::SetSpritesToHighlight(System.Collections.Generic.List`1<BodyPart>)
extern "C"  void Profile_SetSpritesToHighlight_m3676709600 (Profile_t618263825 * __this, List_1_t613489749 * ___toHighlight0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::HighLightConflicts(Profile,Profile)
extern "C"  void Profile_HighLightConflicts_m1371914113 (Il2CppObject * __this /* static, unused */, Profile_t618263825 * ___a0, Profile_t618263825 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image Profile::GetPolaroidGraphic()
extern "C"  Image_t2042527209 * Profile_GetPolaroidGraphic_m358048971 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::ClearHighlighting()
extern "C"  void Profile_ClearHighlighting_m2047197805 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Profile::HighLightBodyParts()
extern "C"  Il2CppObject * Profile_HighLightBodyParts_m976785204 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Profile::ContainsConflict(BodyPart,System.Collections.Generic.List`1<BodyPart>)
extern "C"  bool Profile_ContainsConflict_m3416457219 (Il2CppObject * __this /* static, unused */, BodyPart_t1244368617 * ___part0, List_1_t613489749 * ___bps1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BodyPart> Profile::getAllBodyParts()
extern "C"  List_1_t613489749 * Profile_getAllBodyParts_m2740513393 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::Start()
extern "C"  void Profile_Start_m1030765804 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::Init()
extern "C"  void Profile_Init_m2271293096 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::StartHighlighting()
extern "C"  void Profile_StartHighlighting_m4088535768 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::ResetScore()
extern "C"  void Profile_ResetScore_m663560633 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::Update()
extern "C"  void Profile_Update_m2172779921 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Profile::GenerateProfileAfterPlayer()
extern "C"  Il2CppObject * Profile_GenerateProfileAfterPlayer_m2636876805 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::AssembleStrongAgainst()
extern "C"  void Profile_AssembleStrongAgainst_m2973272342 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Profile::GetPartsOfType(BodyPart/ElementType)
extern "C"  int32_t Profile_GetPartsOfType_m2277443919 (Profile_t618263825 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::GenerateProfile()
extern "C"  void Profile_GenerateProfile_m3138027136 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Profile::CacheIfMatchProfile()
extern "C"  void Profile_CacheIfMatchProfile_m1050681259 (Profile_t618263825 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
