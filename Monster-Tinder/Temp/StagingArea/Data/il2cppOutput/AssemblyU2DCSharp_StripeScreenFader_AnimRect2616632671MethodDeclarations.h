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

// StripeScreenFader/AnimRect
struct AnimRect_t2616632671;
struct AnimRect_t2616632671_marshaled_pinvoke;
struct AnimRect_t2616632671_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_StripeScreenFader_AnimRect2616632671.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void StripeScreenFader/AnimRect::.ctor(UnityEngine.Rect,System.Single,System.Single)
extern "C"  void AnimRect__ctor_m3827221857 (AnimRect_t2616632671 * __this, Rect_t3681755626  ___rect0, float ___fromScale1, float ___toScale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect StripeScreenFader/AnimRect::GetRect(System.Single)
extern "C"  Rect_t3681755626  AnimRect_GetRect_m2243314709 (AnimRect_t2616632671 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct AnimRect_t2616632671;
struct AnimRect_t2616632671_marshaled_pinvoke;

extern "C" void AnimRect_t2616632671_marshal_pinvoke(const AnimRect_t2616632671& unmarshaled, AnimRect_t2616632671_marshaled_pinvoke& marshaled);
extern "C" void AnimRect_t2616632671_marshal_pinvoke_back(const AnimRect_t2616632671_marshaled_pinvoke& marshaled, AnimRect_t2616632671& unmarshaled);
extern "C" void AnimRect_t2616632671_marshal_pinvoke_cleanup(AnimRect_t2616632671_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct AnimRect_t2616632671;
struct AnimRect_t2616632671_marshaled_com;

extern "C" void AnimRect_t2616632671_marshal_com(const AnimRect_t2616632671& unmarshaled, AnimRect_t2616632671_marshaled_com& marshaled);
extern "C" void AnimRect_t2616632671_marshal_com_back(const AnimRect_t2616632671_marshaled_com& marshaled, AnimRect_t2616632671& unmarshaled);
extern "C" void AnimRect_t2616632671_marshal_com_cleanup(AnimRect_t2616632671_marshaled_com& marshaled);
