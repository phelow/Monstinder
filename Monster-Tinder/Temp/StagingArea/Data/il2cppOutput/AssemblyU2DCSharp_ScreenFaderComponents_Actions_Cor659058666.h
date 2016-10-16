#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenFaderComponents.FaderCoroutine
struct FaderCoroutine_t726346428;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.Actions.CoroutineAction
struct  CoroutineAction_t659058666  : public Il2CppObject
{
public:
	// ScreenFaderComponents.FaderCoroutine ScreenFaderComponents.Actions.CoroutineAction::result
	FaderCoroutine_t726346428 * ___result_0;
	// System.Boolean ScreenFaderComponents.Actions.CoroutineAction::<Completed>k__BackingField
	bool ___U3CCompletedU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(CoroutineAction_t659058666, ___result_0)); }
	inline FaderCoroutine_t726346428 * get_result_0() const { return ___result_0; }
	inline FaderCoroutine_t726346428 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(FaderCoroutine_t726346428 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier(&___result_0, value);
	}

	inline static int32_t get_offset_of_U3CCompletedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CoroutineAction_t659058666, ___U3CCompletedU3Ek__BackingField_1)); }
	inline bool get_U3CCompletedU3Ek__BackingField_1() const { return ___U3CCompletedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CCompletedU3Ek__BackingField_1() { return &___U3CCompletedU3Ek__BackingField_1; }
	inline void set_U3CCompletedU3Ek__BackingField_1(bool value)
	{
		___U3CCompletedU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
