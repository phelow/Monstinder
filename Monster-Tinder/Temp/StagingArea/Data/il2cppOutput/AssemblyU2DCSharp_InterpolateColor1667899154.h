#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InterpolateColor
struct  InterpolateColor_t1667899154  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.MeshRenderer InterpolateColor::m_meshRenderer
	MeshRenderer_t1268241104 * ___m_meshRenderer_2;
	// System.Single InterpolateColor::m_lerpTime
	float ___m_lerpTime_3;

public:
	inline static int32_t get_offset_of_m_meshRenderer_2() { return static_cast<int32_t>(offsetof(InterpolateColor_t1667899154, ___m_meshRenderer_2)); }
	inline MeshRenderer_t1268241104 * get_m_meshRenderer_2() const { return ___m_meshRenderer_2; }
	inline MeshRenderer_t1268241104 ** get_address_of_m_meshRenderer_2() { return &___m_meshRenderer_2; }
	inline void set_m_meshRenderer_2(MeshRenderer_t1268241104 * value)
	{
		___m_meshRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshRenderer_2, value);
	}

	inline static int32_t get_offset_of_m_lerpTime_3() { return static_cast<int32_t>(offsetof(InterpolateColor_t1667899154, ___m_lerpTime_3)); }
	inline float get_m_lerpTime_3() const { return ___m_lerpTime_3; }
	inline float* get_address_of_m_lerpTime_3() { return &___m_lerpTime_3; }
	inline void set_m_lerpTime_3(float value)
	{
		___m_lerpTime_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
