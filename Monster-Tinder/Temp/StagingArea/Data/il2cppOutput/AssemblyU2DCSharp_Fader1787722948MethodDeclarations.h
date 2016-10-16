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

// Fader
struct Fader_t1787722948;
// System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs>
struct EventHandler_1_t2269171375;
// IFader
struct IFader_t2927764539;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Image
struct Image_t2042527209;
// ScreenFaderComponents.Actions.IAction
struct IAction_t663314653;
// System.String
struct String_t;
// ScreenFaderComponents.Actions.IParametrizedAction
struct IParametrizedAction_t1849374401;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// ScreenFaderComponents.FaderTask
struct FaderTask_t3162630793;
// ScreenFaderComponents.Events.FadeEventArgs
struct FadeEventArgs_t3677864203;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// ScreenFaderComponents.FaderFactoryBase
struct FaderFactoryBase_t4167222669;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators817748141.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_Image2042527209.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators284981385.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_FaderTask3162630793.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Events_Fad3677864203.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "AssemblyU2DCSharp_StripeScreenFader_Direction4231954537.h"
#include "AssemblyU2DCSharp_SquaredScreenFader_Direction3375101977.h"
#include "AssemblyU2DCSharp_LinesScreenFader_Direction2463454677.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_FaderFacto4167222669.h"

// System.Void Fader::.ctor()
extern "C"  void Fader__ctor_m3199352571 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::.cctor()
extern "C"  void Fader__cctor_m1064352282 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::add_FadeStart(System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs>)
extern "C"  void Fader_add_FadeStart_m3525211509 (Fader_t1787722948 * __this, EventHandler_1_t2269171375 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::remove_FadeStart(System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs>)
extern "C"  void Fader_remove_FadeStart_m1399020290 (Fader_t1787722948 * __this, EventHandler_1_t2269171375 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::add_FadeFinish(System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs>)
extern "C"  void Fader_add_FadeFinish_m395884286 (Fader_t1787722948 * __this, EventHandler_1_t2269171375 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::remove_FadeFinish(System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs>)
extern "C"  void Fader_remove_FadeFinish_m971161249 (Fader_t1787722948 * __this, EventHandler_1_t2269171375 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::Fade(ScreenFaderComponents.Enumerators.FadeDirection,System.Single)
extern "C"  Il2CppObject * Fader_Fade_m3031452958 (Fader_t1787722948 * __this, int32_t ___fadeDirection0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::FadeIn(System.Single)
extern "C"  Il2CppObject * Fader_FadeIn_m3360901445 (Fader_t1787722948 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::FadeIn(UnityEngine.GameObject,System.Single)
extern "C"  Il2CppObject * Fader_FadeIn_m146619261 (Fader_t1787722948 * __this, GameObject_t1756533147 * ___obj0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::FadeIn(UnityEngine.UI.Image,System.Single)
extern "C"  Il2CppObject * Fader_FadeIn_m833580243 (Fader_t1787722948 * __this, Image_t2042527209 * ___img0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::FadeOut(System.Single)
extern "C"  Il2CppObject * Fader_FadeOut_m3447823214 (Fader_t1787722948 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::FadeOut(UnityEngine.GameObject,System.Single)
extern "C"  Il2CppObject * Fader_FadeOut_m798331492 (Fader_t1787722948 * __this, GameObject_t1756533147 * ___obj0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::FadeOut(UnityEngine.UI.Image,System.Single)
extern "C"  Il2CppObject * Fader_FadeOut_m1458209400 (Fader_t1787722948 * __this, Image_t2042527209 * ___img0, float ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::Pause(System.Single)
extern "C"  Il2CppObject * Fader_Pause_m3517268006 (Fader_t1787722948 * __this, float ___pause0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::StartAction(ScreenFaderComponents.Actions.IAction)
extern "C"  Il2CppObject * Fader_StartAction_m2690322569 (Fader_t1787722948 * __this, Il2CppObject * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::SetColor(UnityEngine.Color)
extern "C"  Il2CppObject * Fader_SetColor_m2439850656 (Fader_t1787722948 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::LoadLevel(System.Int32)
extern "C"  Il2CppObject * Fader_LoadLevel_m3627166984 (Fader_t1787722948 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::LoadLevel(System.String)
extern "C"  Il2CppObject * Fader_LoadLevel_m1317554279 (Fader_t1787722948 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::StartAction(ScreenFaderComponents.Actions.IParametrizedAction,System.Object[])
extern "C"  Il2CppObject * Fader_StartAction_m2291752123 (Fader_t1787722948 * __this, Il2CppObject * ___action0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::Flash(System.Single,System.Single)
extern "C"  Il2CppObject * Fader_Flash_m3096472993 (Fader_t1787722948 * __this, float ___inTime0, float ___outTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::StopAllFadings()
extern "C"  void Fader_StopAllFadings_m3263053996 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::StartCoroutine(UnityEngine.MonoBehaviour,System.String)
extern "C"  Il2CppObject * Fader_StartCoroutine_m628541944 (Fader_t1787722948 * __this, MonoBehaviour_t1158329972 * ___component0, String_t* ___methodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::StartCoroutine(UnityEngine.MonoBehaviour,System.String,System.Object)
extern "C"  Il2CppObject * Fader_StartCoroutine_m3684362554 (Fader_t1787722948 * __this, MonoBehaviour_t1158329972 * ___component0, String_t* ___methodName1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::StartCoroutine(UnityEngine.MonoBehaviour,System.Collections.IEnumerator)
extern "C"  Il2CppObject * Fader_StartCoroutine_m1867752743 (Fader_t1787722948 * __this, MonoBehaviour_t1158329972 * ___component0, Il2CppObject * ___routine1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::Fade(ScreenFaderComponents.Enumerators.FadeDirection,System.Single,ScreenFaderComponents.Actions.IAction,System.Single)
extern "C"  Il2CppObject * Fader_Fade_m3083654621 (Il2CppObject * __this /* static, unused */, int32_t ___fadeDirection0, float ___time1, Il2CppObject * ___action2, float ___postDelay3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ScreenFaderComponents.Enumerators.FadeState Fader::get_State()
extern "C"  int32_t Fader_get_State_m1706002684 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::AddTask(ScreenFaderComponents.FaderTask)
extern "C"  void Fader_AddTask_m3848624936 (Fader_t1787722948 * __this, FaderTask_t3162630793 * ___task0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::StartTask()
extern "C"  void Fader_StartTask_m2251112474 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::ExecuteTaskAction()
extern "C"  void Fader_ExecuteTaskAction_m1286487683 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::FinishTask()
extern "C"  void Fader_FinishTask_m3900296301 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::OnFadeStart(ScreenFaderComponents.Events.FadeEventArgs)
extern "C"  void Fader_OnFadeStart_m3234906084 (Fader_t1787722948 * __this, FadeEventArgs_t3677864203 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::OnFadeFinish(ScreenFaderComponents.Events.FadeEventArgs)
extern "C"  void Fader_OnFadeFinish_m3433174713 (Fader_t1787722948 * __this, FadeEventArgs_t3677864203 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::Awake()
extern "C"  void Fader_Awake_m3306980404 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::OnGUI()
extern "C"  void Fader_OnGUI_m2075395937 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::Update()
extern "C"  void Fader_Update_m1654254118 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::Init()
extern "C"  void Fader_Init_m2552153857 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::DrawOnGUI()
extern "C"  void Fader_DrawOnGUI_m1463859309 (Fader_t1787722948 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IFader Fader::get_Instance()
extern "C"  Il2CppObject * Fader_get_Instance_m1467693797 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsImageFader(UnityEngine.Texture)
extern "C"  void Fader_SetupAsImageFader_m3713673633 (Il2CppObject * __this /* static, unused */, Texture_t2243626319 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsStripesFader(System.Int32)
extern "C"  void Fader_SetupAsStripesFader_m2105173217 (Il2CppObject * __this /* static, unused */, int32_t ___stripes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsStripesFader(System.Int32,StripeScreenFader/Direction)
extern "C"  void Fader_SetupAsStripesFader_m2694913394 (Il2CppObject * __this /* static, unused */, int32_t ___stripes0, int32_t ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsSquaredFader(System.Int32)
extern "C"  void Fader_SetupAsSquaredFader_m620286232 (Il2CppObject * __this /* static, unused */, int32_t ___columns0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsSquaredFader(System.Int32,SquaredScreenFader/Direction)
extern "C"  void Fader_SetupAsSquaredFader_m125758445 (Il2CppObject * __this /* static, unused */, int32_t ___columns0, int32_t ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsLinesFader(System.Int32)
extern "C"  void Fader_SetupAsLinesFader_m365987562 (Il2CppObject * __this /* static, unused */, int32_t ___stripes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsLinesFader(System.Int32,LinesScreenFader/Direction)
extern "C"  void Fader_SetupAsLinesFader_m1645784045 (Il2CppObject * __this /* static, unused */, int32_t ___stripes0, int32_t ___direction1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsLinesFader(LinesScreenFader/Direction,UnityEngine.Texture[])
extern "C"  void Fader_SetupAsLinesFader_m872811492 (Il2CppObject * __this /* static, unused */, int32_t ___direction0, TextureU5BU5D_t2474608790* ___images1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::SetupAsDefaultFader()
extern "C"  void Fader_SetupAsDefaultFader_m823983133 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fader::CreateFaderInstance(ScreenFaderComponents.FaderFactoryBase)
extern "C"  void Fader_CreateFaderInstance_m2783460805 (Il2CppObject * __this /* static, unused */, FaderFactoryBase_t4167222669 * ___factory0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Fader::GetTextureFromColor(UnityEngine.Color)
extern "C"  Texture_t2243626319 * Fader_GetTextureFromColor_m767697394 (Fader_t1787722948 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Fader::GetLinearT(System.Int32,System.Int32)
extern "C"  float Fader_GetLinearT_m1639720714 (Fader_t1787722948 * __this, int32_t ___i0, int32_t ___from1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Fader::GetNonLinearT(System.Int32,System.Int32)
extern "C"  float Fader_GetNonLinearT_m3580257001 (Fader_t1787722948 * __this, int32_t ___i0, int32_t ___from1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
