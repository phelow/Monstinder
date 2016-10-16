#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.BoxCollider2D[]
struct BoxCollider2DU5BU5D_t2538734914;
// System.Object
struct Il2CppObject;
// MatchManager
struct MatchManager_t1766971312;

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchManager/<DockMatchCoroutine>c__Iterator8
struct  U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022  : public Il2CppObject
{
public:
	// UnityEngine.GameObject MatchManager/<DockMatchCoroutine>c__Iterator8::match
	GameObject_t1756533147 * ___match_0;
	// UnityEngine.Rigidbody2D MatchManager/<DockMatchCoroutine>c__Iterator8::<rb>__0
	Rigidbody2D_t502193897 * ___U3CrbU3E__0_1;
	// UnityEngine.BoxCollider2D[] MatchManager/<DockMatchCoroutine>c__Iterator8::<colliders>__1
	BoxCollider2DU5BU5D_t2538734914* ___U3CcollidersU3E__1_2;
	// System.Int32 MatchManager/<DockMatchCoroutine>c__Iterator8::<i>__2
	int32_t ___U3CiU3E__2_3;
	// UnityEngine.Vector2 MatchManager/<DockMatchCoroutine>c__Iterator8::<force>__3
	Vector2_t2243707579  ___U3CforceU3E__3_4;
	// System.Int32 MatchManager/<DockMatchCoroutine>c__Iterator8::$PC
	int32_t ___U24PC_5;
	// System.Object MatchManager/<DockMatchCoroutine>c__Iterator8::$current
	Il2CppObject * ___U24current_6;
	// UnityEngine.GameObject MatchManager/<DockMatchCoroutine>c__Iterator8::<$>match
	GameObject_t1756533147 * ___U3CU24U3Ematch_7;
	// MatchManager MatchManager/<DockMatchCoroutine>c__Iterator8::<>f__this
	MatchManager_t1766971312 * ___U3CU3Ef__this_8;

public:
	inline static int32_t get_offset_of_match_0() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___match_0)); }
	inline GameObject_t1756533147 * get_match_0() const { return ___match_0; }
	inline GameObject_t1756533147 ** get_address_of_match_0() { return &___match_0; }
	inline void set_match_0(GameObject_t1756533147 * value)
	{
		___match_0 = value;
		Il2CppCodeGenWriteBarrier(&___match_0, value);
	}

	inline static int32_t get_offset_of_U3CrbU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U3CrbU3E__0_1)); }
	inline Rigidbody2D_t502193897 * get_U3CrbU3E__0_1() const { return ___U3CrbU3E__0_1; }
	inline Rigidbody2D_t502193897 ** get_address_of_U3CrbU3E__0_1() { return &___U3CrbU3E__0_1; }
	inline void set_U3CrbU3E__0_1(Rigidbody2D_t502193897 * value)
	{
		___U3CrbU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrbU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U3CcollidersU3E__1_2() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U3CcollidersU3E__1_2)); }
	inline BoxCollider2DU5BU5D_t2538734914* get_U3CcollidersU3E__1_2() const { return ___U3CcollidersU3E__1_2; }
	inline BoxCollider2DU5BU5D_t2538734914** get_address_of_U3CcollidersU3E__1_2() { return &___U3CcollidersU3E__1_2; }
	inline void set_U3CcollidersU3E__1_2(BoxCollider2DU5BU5D_t2538734914* value)
	{
		___U3CcollidersU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcollidersU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CiU3E__2_3() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U3CiU3E__2_3)); }
	inline int32_t get_U3CiU3E__2_3() const { return ___U3CiU3E__2_3; }
	inline int32_t* get_address_of_U3CiU3E__2_3() { return &___U3CiU3E__2_3; }
	inline void set_U3CiU3E__2_3(int32_t value)
	{
		___U3CiU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CforceU3E__3_4() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U3CforceU3E__3_4)); }
	inline Vector2_t2243707579  get_U3CforceU3E__3_4() const { return ___U3CforceU3E__3_4; }
	inline Vector2_t2243707579 * get_address_of_U3CforceU3E__3_4() { return &___U3CforceU3E__3_4; }
	inline void set_U3CforceU3E__3_4(Vector2_t2243707579  value)
	{
		___U3CforceU3E__3_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U24current_6)); }
	inline Il2CppObject * get_U24current_6() const { return ___U24current_6; }
	inline Il2CppObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(Il2CppObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_6, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ematch_7() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U3CU24U3Ematch_7)); }
	inline GameObject_t1756533147 * get_U3CU24U3Ematch_7() const { return ___U3CU24U3Ematch_7; }
	inline GameObject_t1756533147 ** get_address_of_U3CU24U3Ematch_7() { return &___U3CU24U3Ematch_7; }
	inline void set_U3CU24U3Ematch_7(GameObject_t1756533147 * value)
	{
		___U3CU24U3Ematch_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ematch_7, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_8() { return static_cast<int32_t>(offsetof(U3CDockMatchCoroutineU3Ec__Iterator8_t2829099022, ___U3CU3Ef__this_8)); }
	inline MatchManager_t1766971312 * get_U3CU3Ef__this_8() const { return ___U3CU3Ef__this_8; }
	inline MatchManager_t1766971312 ** get_address_of_U3CU3Ef__this_8() { return &___U3CU3Ef__this_8; }
	inline void set_U3CU3Ef__this_8(MatchManager_t1766971312 * value)
	{
		___U3CU3Ef__this_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
