#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception
struct Exception_t1927440687;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.FaderCoroutine
struct  FaderCoroutine_t726346428  : public Il2CppObject
{
public:
	// System.Boolean ScreenFaderComponents.FaderCoroutine::completed
	bool ___completed_0;
	// System.Exception ScreenFaderComponents.FaderCoroutine::exception
	Exception_t1927440687 * ___exception_1;
	// UnityEngine.Coroutine ScreenFaderComponents.FaderCoroutine::coroutine
	Coroutine_t2299508840 * ___coroutine_2;

public:
	inline static int32_t get_offset_of_completed_0() { return static_cast<int32_t>(offsetof(FaderCoroutine_t726346428, ___completed_0)); }
	inline bool get_completed_0() const { return ___completed_0; }
	inline bool* get_address_of_completed_0() { return &___completed_0; }
	inline void set_completed_0(bool value)
	{
		___completed_0 = value;
	}

	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(FaderCoroutine_t726346428, ___exception_1)); }
	inline Exception_t1927440687 * get_exception_1() const { return ___exception_1; }
	inline Exception_t1927440687 ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(Exception_t1927440687 * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier(&___exception_1, value);
	}

	inline static int32_t get_offset_of_coroutine_2() { return static_cast<int32_t>(offsetof(FaderCoroutine_t726346428, ___coroutine_2)); }
	inline Coroutine_t2299508840 * get_coroutine_2() const { return ___coroutine_2; }
	inline Coroutine_t2299508840 ** get_address_of_coroutine_2() { return &___coroutine_2; }
	inline void set_coroutine_2(Coroutine_t2299508840 * value)
	{
		___coroutine_2 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
