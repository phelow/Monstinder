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

// LinesScreenFader/AnimRect
struct AnimRect_t1347828387;
struct AnimRect_t1347828387_marshaled_pinvoke;
struct AnimRect_t1347828387_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LinesScreenFader_AnimRect1347828387.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void LinesScreenFader/AnimRect::.ctor(UnityEngine.Rect,UnityEngine.Rect)
extern "C"  void AnimRect__ctor_m2413741240 (AnimRect_t1347828387 * __this, Rect_t3681755626  ___rectStart0, Rect_t3681755626  ___rectFinal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect LinesScreenFader/AnimRect::GetRect(System.Single)
extern "C"  Rect_t3681755626  AnimRect_GetRect_m1582747301 (AnimRect_t1347828387 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect LinesScreenFader/AnimRect::GetRectByT(System.Single)
extern "C"  Rect_t3681755626  AnimRect_GetRectByT_m3447859496 (AnimRect_t1347828387 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimRect_t1347828387;
struct AnimRect_t1347828387_marshaled_pinvoke;

extern "C" void AnimRect_t1347828387_marshal_pinvoke(const AnimRect_t1347828387& unmarshaled, AnimRect_t1347828387_marshaled_pinvoke& marshaled);
extern "C" void AnimRect_t1347828387_marshal_pinvoke_back(const AnimRect_t1347828387_marshaled_pinvoke& marshaled, AnimRect_t1347828387& unmarshaled);
extern "C" void AnimRect_t1347828387_marshal_pinvoke_cleanup(AnimRect_t1347828387_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimRect_t1347828387;
struct AnimRect_t1347828387_marshaled_com;

extern "C" void AnimRect_t1347828387_marshal_com(const AnimRect_t1347828387& unmarshaled, AnimRect_t1347828387_marshaled_com& marshaled);
extern "C" void AnimRect_t1347828387_marshal_com_back(const AnimRect_t1347828387_marshaled_com& marshaled, AnimRect_t1347828387& unmarshaled);
extern "C" void AnimRect_t1347828387_marshal_com_cleanup(AnimRect_t1347828387_marshaled_com& marshaled);
