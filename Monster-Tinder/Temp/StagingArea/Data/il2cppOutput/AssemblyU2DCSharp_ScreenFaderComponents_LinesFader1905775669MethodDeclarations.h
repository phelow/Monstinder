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

// ScreenFaderComponents.LinesFaderFactory
struct LinesFaderFactory_t1905775669;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// Fader
struct Fader_t1787722948;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LinesScreenFader_Direction2463454677.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void ScreenFaderComponents.LinesFaderFactory::.ctor(System.Int32,LinesScreenFader/Direction)
extern "C"  void LinesFaderFactory__ctor_m3740421898 (LinesFaderFactory_t1905775669 * __this, int32_t ___stripes0, int32_t ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScreenFaderComponents.LinesFaderFactory::.ctor(System.Int32,LinesScreenFader/Direction,UnityEngine.Texture[])
extern "C"  void LinesFaderFactory__ctor_m1656424596 (LinesFaderFactory_t1905775669 * __this, int32_t ___stripes0, int32_t ___direction1, TextureU5BU5D_t2474608790* ___images2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fader ScreenFaderComponents.LinesFaderFactory::CreateFader(UnityEngine.GameObject)
extern "C"  Fader_t1787722948 * LinesFaderFactory_CreateFader_m3271949079 (LinesFaderFactory_t1905775669 * __this, GameObject_t1756533147 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
