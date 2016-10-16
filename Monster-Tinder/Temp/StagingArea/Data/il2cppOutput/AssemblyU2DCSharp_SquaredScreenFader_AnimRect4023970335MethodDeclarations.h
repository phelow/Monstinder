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

// SquaredScreenFader/AnimRect
struct AnimRect_t4023970335;
struct AnimRect_t4023970335_marshaled_pinvoke;
struct AnimRect_t4023970335_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SquaredScreenFader_AnimRect4023970335.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void SquaredScreenFader/AnimRect::.ctor(UnityEngine.Rect,System.Single,System.Single)
extern "C"  void AnimRect__ctor_m3441237573 (AnimRect_t4023970335 * __this, Rect_t3681755626  ___rect0, float ___fromScale1, float ___toScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect SquaredScreenFader/AnimRect::GetRect(System.Single)
extern "C"  Rect_t3681755626  AnimRect_GetRect_m105615049 (AnimRect_t4023970335 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimRect_t4023970335;
struct AnimRect_t4023970335_marshaled_pinvoke;

extern "C" void AnimRect_t4023970335_marshal_pinvoke(const AnimRect_t4023970335& unmarshaled, AnimRect_t4023970335_marshaled_pinvoke& marshaled);
extern "C" void AnimRect_t4023970335_marshal_pinvoke_back(const AnimRect_t4023970335_marshaled_pinvoke& marshaled, AnimRect_t4023970335& unmarshaled);
extern "C" void AnimRect_t4023970335_marshal_pinvoke_cleanup(AnimRect_t4023970335_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimRect_t4023970335;
struct AnimRect_t4023970335_marshaled_com;

extern "C" void AnimRect_t4023970335_marshal_com(const AnimRect_t4023970335& unmarshaled, AnimRect_t4023970335_marshaled_com& marshaled);
extern "C" void AnimRect_t4023970335_marshal_com_back(const AnimRect_t4023970335_marshaled_com& marshaled, AnimRect_t4023970335& unmarshaled);
extern "C" void AnimRect_t4023970335_marshal_com_cleanup(AnimRect_t4023970335_marshaled_com& marshaled);
