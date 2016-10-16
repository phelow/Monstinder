#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LerpText
struct  LerpText_t2209774790  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text LerpText::m_text
	Text_t356221433 * ___m_text_2;
	// System.Single LerpText::lerpTime
	float ___lerpTime_3;

public:
	inline static int32_t get_offset_of_m_text_2() { return static_cast<int32_t>(offsetof(LerpText_t2209774790, ___m_text_2)); }
	inline Text_t356221433 * get_m_text_2() const { return ___m_text_2; }
	inline Text_t356221433 ** get_address_of_m_text_2() { return &___m_text_2; }
	inline void set_m_text_2(Text_t356221433 * value)
	{
		___m_text_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_2, value);
	}

	inline static int32_t get_offset_of_lerpTime_3() { return static_cast<int32_t>(offsetof(LerpText_t2209774790, ___lerpTime_3)); }
	inline float get_lerpTime_3() const { return ___lerpTime_3; }
	inline float* get_address_of_lerpTime_3() { return &___lerpTime_3; }
	inline void set_lerpTime_3(float value)
	{
		___lerpTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
