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

// BodyPartSlot
struct BodyPartSlot_t1362323901;
// BodyPart
struct BodyPart_t1244368617;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BodyPartSlot_BodyPartType4191074093.h"
#include "AssemblyU2DCSharp_BodyPart1244368617.h"

// System.Void BodyPartSlot::.ctor()
extern "C"  void BodyPartSlot__ctor_m2934175648 (BodyPartSlot_t1362323901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyPartSlot/BodyPartType BodyPartSlot::GetBodyPartType()
extern "C"  int32_t BodyPartSlot_GetBodyPartType_m334578885 (BodyPartSlot_t1362323901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPartSlot::Start()
extern "C"  void BodyPartSlot_Start_m2546735080 (BodyPartSlot_t1362323901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BodyPartSlot::Update()
extern "C"  void BodyPartSlot_Update_m1970637449 (BodyPartSlot_t1362323901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BodyPart BodyPartSlot::AddPart(BodyPart,BodyPart,System.Single,System.Single)
extern "C"  BodyPart_t1244368617 * BodyPartSlot_AddPart_m1952207042 (BodyPartSlot_t1362323901 * __this, BodyPart_t1244368617 * ___bp0, BodyPart_t1244368617 * ___parentPart1, float ___minRotation2, float ___maxRotation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
