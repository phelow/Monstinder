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

// LinesScreenFader
struct LinesScreenFader_t3552971443;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LinesScreenFader_AnimRect1347828387.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_LinesScreenFader_Direction2463454677.h"

// System.Void LinesScreenFader::.ctor()
extern "C"  void LinesScreenFader__ctor_m2220094720 (LinesScreenFader_t3552971443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LinesScreenFader::AddTextures(UnityEngine.Texture[])
extern "C"  void LinesScreenFader_AddTextures_m22172557 (LinesScreenFader_t3552971443 * __this, TextureU5BU5D_t2474608790* ___images0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LinesScreenFader::Init()
extern "C"  void LinesScreenFader_Init_m987007944 (LinesScreenFader_t3552971443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LinesScreenFader/AnimRect LinesScreenFader::CreateRect(System.Int32,System.Int32,System.Int32)
extern "C"  AnimRect_t1347828387  LinesScreenFader_CreateRect_m2585296145 (LinesScreenFader_t3552971443 * __this, int32_t ___rectW0, int32_t ___index1, int32_t ___extra2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LinesScreenFader::Update()
extern "C"  void LinesScreenFader_Update_m1695947831 (LinesScreenFader_t3552971443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LinesScreenFader::DrawOnGUI()
extern "C"  void LinesScreenFader_DrawOnGUI_m1866308350 (LinesScreenFader_t3552971443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 LinesScreenFader::GetStartOffset(LinesScreenFader/Direction,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  LinesScreenFader_GetStartOffset_m307002717 (LinesScreenFader_t3552971443 * __this, int32_t ___direction0, int32_t ___lineWidth1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 LinesScreenFader::GetFinalOffset(LinesScreenFader/Direction,System.Int32,System.Int32)
extern "C"  Vector2_t2243707579  LinesScreenFader_GetFinalOffset_m3869112661 (LinesScreenFader_t3552971443 * __this, int32_t ___direction0, int32_t ___lineWidth1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
