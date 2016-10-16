#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyAfterTime
struct  DestroyAfterTime_t793195293  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DestroyAfterTime::m_timeUntilDestroy
	float ___m_timeUntilDestroy_2;
	// UnityEngine.Rigidbody2D DestroyAfterTime::m_rigidbody
	Rigidbody2D_t502193897 * ___m_rigidbody_3;
	// System.Boolean DestroyAfterTime::activated
	bool ___activated_4;

public:
	inline static int32_t get_offset_of_m_timeUntilDestroy_2() { return static_cast<int32_t>(offsetof(DestroyAfterTime_t793195293, ___m_timeUntilDestroy_2)); }
	inline float get_m_timeUntilDestroy_2() const { return ___m_timeUntilDestroy_2; }
	inline float* get_address_of_m_timeUntilDestroy_2() { return &___m_timeUntilDestroy_2; }
	inline void set_m_timeUntilDestroy_2(float value)
	{
		___m_timeUntilDestroy_2 = value;
	}

	inline static int32_t get_offset_of_m_rigidbody_3() { return static_cast<int32_t>(offsetof(DestroyAfterTime_t793195293, ___m_rigidbody_3)); }
	inline Rigidbody2D_t502193897 * get_m_rigidbody_3() const { return ___m_rigidbody_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_m_rigidbody_3() { return &___m_rigidbody_3; }
	inline void set_m_rigidbody_3(Rigidbody2D_t502193897 * value)
	{
		___m_rigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_rigidbody_3, value);
	}

	inline static int32_t get_offset_of_activated_4() { return static_cast<int32_t>(offsetof(DestroyAfterTime_t793195293, ___activated_4)); }
	inline bool get_activated_4() const { return ___activated_4; }
	inline bool* get_address_of_activated_4() { return &___activated_4; }
	inline void set_activated_4(bool value)
	{
		___activated_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
