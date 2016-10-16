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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,UnityEngine.Color>
struct Transform_1_t2584654945;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1214720823_gshared (Transform_1_t2584654945 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1214720823(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2584654945 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1214720823_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,UnityEngine.Color>::Invoke(TKey,TValue)
extern "C"  Color_t2020392075  Transform_1_Invoke_m1106646115_gshared (Transform_1_t2584654945 * __this, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1106646115(__this, ___key0, ___value1, method) ((  Color_t2020392075  (*) (Transform_1_t2584654945 *, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Transform_1_Invoke_m1106646115_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,UnityEngine.Color>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3722235266_gshared (Transform_1_t2584654945 * __this, Il2CppObject * ___key0, Color_t2020392075  ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3722235266(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2584654945 *, Il2CppObject *, Color_t2020392075 , AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3722235266_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Color,UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  Color_t2020392075  Transform_1_EndInvoke_m2922183457_gshared (Transform_1_t2584654945 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2922183457(__this, ___result0, method) ((  Color_t2020392075  (*) (Transform_1_t2584654945 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2922183457_gshared)(__this, ___result0, method)
