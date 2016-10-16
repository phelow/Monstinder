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

// ScreenFaderComponents.SquaredFaderFactory
struct SquaredFaderFactory_t4210490081;
// UnityEngine.Texture
struct Texture_t2243626319;
// Fader
struct Fader_t1787722948;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SquaredScreenFader_Direction3375101977.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void ScreenFaderComponents.SquaredFaderFactory::.ctor(System.Int32,SquaredScreenFader/Direction)
extern "C"  void SquaredFaderFactory__ctor_m1169078474 (SquaredFaderFactory_t4210490081 * __this, int32_t ___columns0, int32_t ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenFaderComponents.SquaredFaderFactory::.ctor(System.Int32,SquaredScreenFader/Direction,UnityEngine.Texture)
extern "C"  void SquaredFaderFactory__ctor_m3303387988 (SquaredFaderFactory_t4210490081 * __this, int32_t ___columns0, int32_t ___direction1, Texture_t2243626319 * ___texture2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader ScreenFaderComponents.SquaredFaderFactory::CreateFader(UnityEngine.GameObject)
extern "C"  Fader_t1787722948 * SquaredFaderFactory_CreateFader_m297668443 (SquaredFaderFactory_t4210490081 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
