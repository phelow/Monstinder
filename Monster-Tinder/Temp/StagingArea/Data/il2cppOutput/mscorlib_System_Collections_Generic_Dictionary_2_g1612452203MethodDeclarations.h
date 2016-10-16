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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>
struct Dictionary_2_t1612452203;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>[]
struct KeyValuePair_2U5BU5D_t4207603948;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Color>>
struct IEnumerator_1_t1140288548;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Color>
struct KeyCollection_t4095949974;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Color>
struct ValueCollection_t315512046;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23664764721.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E2932476905.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor()
extern "C"  void Dictionary_2__ctor_m3943850459_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3943850459(__this, method) ((  void (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2__ctor_m3943850459_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3787583744_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3787583744(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3787583744_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1083466396_gshared (Dictionary_2_t1612452203 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m1083466396(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1612452203 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1083466396_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3786063293_gshared (Dictionary_2_t1612452203 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3786063293(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t1612452203 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3786063293_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3035696718_gshared (Dictionary_2_t1612452203 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3035696718(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1612452203 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3035696718_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m819275699_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m819275699(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m819275699_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m551541210_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m551541210(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m551541210_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2939712565_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2939712565(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2939712565_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1857298078_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1857298078(__this, ___key0, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1857298078_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2939292471_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2939292471(__this, method) ((  bool (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2939292471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2184143231_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2184143231(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2184143231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3289330565_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3289330565(__this, method) ((  bool (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3289330565_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4027223636_gshared (Dictionary_2_t1612452203 * __this, KeyValuePair_2_t3664764721  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4027223636(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1612452203 *, KeyValuePair_2_t3664764721 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m4027223636_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2424839028_gshared (Dictionary_2_t1612452203 * __this, KeyValuePair_2_t3664764721  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2424839028(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1612452203 *, KeyValuePair_2_t3664764721 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2424839028_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2892971536_gshared (Dictionary_2_t1612452203 * __this, KeyValuePair_2U5BU5D_t4207603948* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2892971536(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1612452203 *, KeyValuePair_2U5BU5D_t4207603948*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2892971536_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4158462267_gshared (Dictionary_2_t1612452203 * __this, KeyValuePair_2_t3664764721  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4158462267(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1612452203 *, KeyValuePair_2_t3664764721 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m4158462267_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m242533599_gshared (Dictionary_2_t1612452203 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m242533599(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m242533599_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1151869178_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1151869178(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1151869178_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m588105645_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m588105645(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m588105645_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3045520568_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3045520568(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3045520568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1573410647_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1573410647(__this, method) ((  int32_t (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_get_Count_m1573410647_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Item(TKey)
extern "C"  Color_t2020392075  Dictionary_2_get_Item_m2128296656_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2128296656(__this, ___key0, method) ((  Color_t2020392075  (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2128296656_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2021480347_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2021480347(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Dictionary_2_set_Item_m2021480347_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1387113491_gshared (Dictionary_2_t1612452203 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1387113491(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1612452203 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1387113491_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m4211592584_gshared (Dictionary_2_t1612452203 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m4211592584(__this, ___size0, method) ((  void (*) (Dictionary_2_t1612452203 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m4211592584_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1053837334_gshared (Dictionary_2_t1612452203 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1053837334(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1053837334_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3664764721  Dictionary_2_make_pair_m1749356032_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m1749356032(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3664764721  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Dictionary_2_make_pair_m1749356032_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2575284790_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2575284790(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Dictionary_2_pick_key_m2575284790_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::pick_value(TKey,TValue)
extern "C"  Color_t2020392075  Dictionary_2_pick_value_m488240166_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m488240166(__this /* static, unused */, ___key0, ___value1, method) ((  Color_t2020392075  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Dictionary_2_pick_value_m488240166_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m727185367_gshared (Dictionary_2_t1612452203 * __this, KeyValuePair_2U5BU5D_t4207603948* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m727185367(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1612452203 *, KeyValuePair_2U5BU5D_t4207603948*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m727185367_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Resize()
extern "C"  void Dictionary_2_Resize_m584309341_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m584309341(__this, method) ((  void (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_Resize_m584309341_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3787783512_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3787783512(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Dictionary_2_Add_m3787783512_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Clear()
extern "C"  void Dictionary_2_Clear_m2539632760_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2539632760(__this, method) ((  void (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_Clear_m2539632760_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1131326168_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1131326168(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m1131326168_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m369892456_gshared (Dictionary_2_t1612452203 * __this, Color_t2020392075  ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m369892456(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1612452203 *, Color_t2020392075 , const MethodInfo*))Dictionary_2_ContainsValue_m369892456_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2728330091_gshared (Dictionary_2_t1612452203 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2728330091(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1612452203 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m2728330091_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m471927675_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m471927675(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m471927675_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m3292175276_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m3292175276(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m3292175276_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m1405706531_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, Color_t2020392075 * ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1405706531(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1612452203 *, Il2CppObject *, Color_t2020392075 *, const MethodInfo*))Dictionary_2_TryGetValue_m1405706531_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Keys()
extern "C"  KeyCollection_t4095949974 * Dictionary_2_get_Keys_m3578225404_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3578225404(__this, method) ((  KeyCollection_t4095949974 * (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_get_Keys_m3578225404_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::get_Values()
extern "C"  ValueCollection_t315512046 * Dictionary_2_get_Values_m1062989508_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1062989508(__this, method) ((  ValueCollection_t315512046 * (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_get_Values_m1062989508_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m725465861_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m725465861(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m725465861_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ToTValue(System.Object)
extern "C"  Color_t2020392075  Dictionary_2_ToTValue_m4150507629_gshared (Dictionary_2_t1612452203 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m4150507629(__this, ___value0, method) ((  Color_t2020392075  (*) (Dictionary_2_t1612452203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m4150507629_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2255866267_gshared (Dictionary_2_t1612452203 * __this, KeyValuePair_2_t3664764721  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2255866267(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1612452203 *, KeyValuePair_2_t3664764721 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2255866267_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::GetEnumerator()
extern "C"  Enumerator_t2932476905  Dictionary_2_GetEnumerator_m4272390704_gshared (Dictionary_2_t1612452203 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m4272390704(__this, method) ((  Enumerator_t2932476905  (*) (Dictionary_2_t1612452203 *, const MethodInfo*))Dictionary_2_GetEnumerator_m4272390704_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Color>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m3316205285_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Color_t2020392075  ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3316205285(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Color_t2020392075 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3316205285_gshared)(__this /* static, unused */, ___key0, ___value1, method)
