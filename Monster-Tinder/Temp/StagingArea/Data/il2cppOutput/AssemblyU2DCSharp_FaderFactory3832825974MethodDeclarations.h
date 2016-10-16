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

// FaderFactory
struct FaderFactory_t3832825974;
// Fader
struct Fader_t1787722948;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Texture
struct Texture_t2243626319;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"

// System.Void FaderFactory::.ctor()
extern "C"  void FaderFactory__ctor_m333512415 (FaderFactory_t3832825974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader FaderFactory::CreateDefaultFader(UnityEngine.GameObject)
extern "C"  Fader_t1787722948 * FaderFactory_CreateDefaultFader_m1215561963 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader FaderFactory::CreateSquaredFader(UnityEngine.GameObject,System.Int32)
extern "C"  Fader_t1787722948 * FaderFactory_CreateSquaredFader_m175269000 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___squares1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader FaderFactory::CreateStripesFader(UnityEngine.GameObject,System.Int32)
extern "C"  Fader_t1787722948 * FaderFactory_CreateStripesFader_m3385952063 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, int32_t ___stripes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader FaderFactory::CreateImageFader(UnityEngine.GameObject,UnityEngine.Texture)
extern "C"  Fader_t1787722948 * FaderFactory_CreateImageFader_m4280966935 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 * ___go0, Texture_t2243626319 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
