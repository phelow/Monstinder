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

// BodyPart
struct BodyPart_t1244368617;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// System.String
struct String_t;
// System.Collections.Generic.HashSet`1<BodyPart/ElementType>
struct HashSet_1_t1704284732;
// System.Collections.Generic.List`1<BodyPart>
struct List_1_t613489749;
// BodyPartSlot[]
struct BodyPartSlotU5BU5D_t4000779952;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_BoxCollider2D948534547.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_BodyPart_ElementType3370823878.h"
#include "AssemblyU2DCSharp_BodyPart1244368617.h"
#include "AssemblyU2DCSharp_BodyPartSlot_BodyPartType4191074093.h"
#include "AssemblyU2DCSharp_BodyPart_Orientation1530845288.h"

// System.Void BodyPart::.ctor()
extern "C"  void BodyPart__ctor_m2020791988 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::.cctor()
extern "C"  void BodyPart__cctor_m4171158019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::Start()
extern "C"  void BodyPart_Start_m3844684052 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::SetCollider(UnityEngine.BoxCollider2D)
extern "C"  void BodyPart_SetCollider_m1721450728 (BodyPart_t1244368617 * __this, BoxCollider2D_t948534547 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color BodyPart::GetColor()
extern "C"  Color_t2020392075  BodyPart_GetColor_m2481025498 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SpriteRenderer BodyPart::GetSpriteRenderer()
extern "C"  SpriteRenderer_t1209076198 * BodyPart_GetSpriteRenderer_m3875360658 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BodyPart::GetElementTypeString(BodyPart/ElementType)
extern "C"  String_t* BodyPart_GetElementTypeString_m1455084308 (Il2CppObject * __this /* static, unused */, int32_t ___et0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BodyPart::MinRotation()
extern "C"  float BodyPart_MinRotation_m4041078084 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single BodyPart::MaxRotation()
extern "C"  float BodyPart_MaxRotation_m3824166506 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::AddChildPart(BodyPart)
extern "C"  void BodyPart_AddChildPart_m607293631 (BodyPart_t1244368617 * __this, BodyPart_t1244368617 * ___bp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<BodyPart/ElementType> BodyPart::CountTypes(System.Collections.Generic.HashSet`1<BodyPart/ElementType>&)
extern "C"  HashSet_1_t1704284732 * BodyPart_CountTypes_m2799330617 (BodyPart_t1244368617 * __this, HashSet_1_t1704284732 ** ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::InitAndGenerateBody()
extern "C"  void BodyPart_InitAndGenerateBody_m616146092 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BodyPart> BodyPart::GetAllBodyParts()
extern "C"  List_1_t613489749 * BodyPart_GetAllBodyParts_m380605689 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::Init()
extern "C"  void BodyPart_Init_m2909119204 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyPartSlot/BodyPartType BodyPart::GetBodyPartType()
extern "C"  int32_t BodyPart_GetBodyPartType_m2665365937 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyPart/ElementType BodyPart::GetElementType()
extern "C"  int32_t BodyPart_GetElementType_m3452234501 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyPartSlot[] BodyPart::GetSlots()
extern "C"  BodyPartSlotU5BU5D_t4000779952* BodyPart_GetSlots_m3796665595 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator BodyPart::GenerateBodyCoroutine(System.Int32,BodyPart/Orientation)
extern "C"  Il2CppObject * BodyPart_GenerateBodyCoroutine_m3761316796 (BodyPart_t1244368617 * __this, int32_t ___depth0, int32_t ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> BodyPart::GetUsableParts(BodyPartSlot/BodyPartType,System.Boolean,System.Collections.Generic.HashSet`1<BodyPart/ElementType>)
extern "C"  List_1_t1125654279 * BodyPart_GetUsableParts_m1808981633 (Il2CppObject * __this /* static, unused */, int32_t ___bodyPartSlot0, bool ___isPlayer1, HashSet_1_t1704284732 * ___types2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.GameObject> BodyPart::RemoveAllOfType(System.Collections.Generic.List`1<UnityEngine.GameObject>,BodyPart/ElementType)
extern "C"  List_1_t1125654279 * BodyPart_RemoveAllOfType_m4200799595 (Il2CppObject * __this /* static, unused */, List_1_t1125654279 * ___parts0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::GenerateBody(System.Int32,BodyPart/Orientation)
extern "C"  void BodyPart_GenerateBody_m1879372582 (BodyPart_t1244368617 * __this, int32_t ___depth0, int32_t ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::RemoveConflicts(BodyPart)
extern "C"  void BodyPart_RemoveConflicts_m3471167836 (Il2CppObject * __this /* static, unused */, BodyPart_t1244368617 * ___part0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::CalculateScore(System.Int32[]&)
extern "C"  void BodyPart_CalculateScore_m2946144189 (BodyPart_t1244368617 * __this, Int32U5BU5D_t3030399641** ___typeScores0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPart::Update()
extern "C"  void BodyPart_Update_m1117170517 (BodyPart_t1244368617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
