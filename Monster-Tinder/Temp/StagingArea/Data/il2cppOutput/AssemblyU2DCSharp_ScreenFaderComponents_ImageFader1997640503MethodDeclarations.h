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

// ScreenFaderComponents.ImageFaderFactory
struct ImageFaderFactory_t1997640503;
// UnityEngine.Texture
struct Texture_t2243626319;
// Fader
struct Fader_t1787722948;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void ScreenFaderComponents.ImageFaderFactory::.ctor(UnityEngine.Texture)
extern "C"  void ImageFaderFactory__ctor_m3630313128 (ImageFaderFactory_t1997640503 * __this, Texture_t2243626319 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader ScreenFaderComponents.ImageFaderFactory::CreateFader(UnityEngine.GameObject)
extern "C"  Fader_t1787722948 * ImageFaderFactory_CreateFader_m2741718205 (ImageFaderFactory_t1997640503 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
