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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyPartDisplay
struct  BodyPartDisplay_t889529187  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BodyPartDisplay::m_displayedPart
	GameObject_t1756533147 * ___m_displayedPart_2;
	// UnityEngine.UI.Text BodyPartDisplay::m_text
	Text_t356221433 * ___m_text_3;

public:
	inline static int32_t get_offset_of_m_displayedPart_2() { return static_cast<int32_t>(offsetof(BodyPartDisplay_t889529187, ___m_displayedPart_2)); }
	inline GameObject_t1756533147 * get_m_displayedPart_2() const { return ___m_displayedPart_2; }
	inline GameObject_t1756533147 ** get_address_of_m_displayedPart_2() { return &___m_displayedPart_2; }
	inline void set_m_displayedPart_2(GameObject_t1756533147 * value)
	{
		___m_displayedPart_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_displayedPart_2, value);
	}

	inline static int32_t get_offset_of_m_text_3() { return static_cast<int32_t>(offsetof(BodyPartDisplay_t889529187, ___m_text_3)); }
	inline Text_t356221433 * get_m_text_3() const { return ___m_text_3; }
	inline Text_t356221433 ** get_address_of_m_text_3() { return &___m_text_3; }
	inline void set_m_text_3(Text_t356221433 * value)
	{
		___m_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
