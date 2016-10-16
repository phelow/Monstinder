#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayAfterThirtySeconds
struct  PlayAfterThirtySeconds_t4291799579  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource PlayAfterThirtySeconds::m_audioSource
	AudioSource_t1135106623 * ___m_audioSource_2;

public:
	inline static int32_t get_offset_of_m_audioSource_2() { return static_cast<int32_t>(offsetof(PlayAfterThirtySeconds_t4291799579, ___m_audioSource_2)); }
	inline AudioSource_t1135106623 * get_m_audioSource_2() const { return ___m_audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_m_audioSource_2() { return &___m_audioSource_2; }
	inline void set_m_audioSource_2(AudioSource_t1135106623 * value)
	{
		___m_audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_audioSource_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
