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

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_ForceMode2D4177575466.h"

// System.Void UnityEngine.Rigidbody2D::set_drag(System.Single)
extern "C"  void Rigidbody2D_set_drag_m1191678372 (Rigidbody2D_t502193897 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rigidbody2D::get_gravityScale()
extern "C"  float Rigidbody2D_get_gravityScale_m3363788087 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
extern "C"  void Rigidbody2D_set_gravityScale_m1426625078 (Rigidbody2D_t502193897 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody2D_set_isKinematic_m548319077 (Rigidbody2D_t502193897 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_AddForce_m3200488178 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::INTERNAL_CALL_AddForce(UnityEngine.Rigidbody2D,UnityEngine.Vector2&,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_INTERNAL_CALL_AddForce_m1958598324 (Il2CppObject * __this /* static, unused */, Rigidbody2D_t502193897 * ___self0, Vector2_t2243707579 * ___force1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single,UnityEngine.ForceMode2D)
extern "C"  void Rigidbody2D_AddTorque_m714733013 (Rigidbody2D_t502193897 * __this, float ___torque0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
extern "C"  void Rigidbody2D_AddTorque_m775750448 (Rigidbody2D_t502193897 * __this, float ___torque0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
