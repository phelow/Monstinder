#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotatableObject
struct  RotatableObject_t2032248877  : public MonoBehaviour_t1158329972
{
public:
	// System.Single RotatableObject::angleX
	float ___angleX_2;
	// System.Single RotatableObject::angleY
	float ___angleY_3;
	// System.Single RotatableObject::angleZ
	float ___angleZ_4;
	// UnityEngine.Transform RotatableObject::thistransform
	Transform_t3275118058 * ___thistransform_5;

public:
	inline static int32_t get_offset_of_angleX_2() { return static_cast<int32_t>(offsetof(RotatableObject_t2032248877, ___angleX_2)); }
	inline float get_angleX_2() const { return ___angleX_2; }
	inline float* get_address_of_angleX_2() { return &___angleX_2; }
	inline void set_angleX_2(float value)
	{
		___angleX_2 = value;
	}

	inline static int32_t get_offset_of_angleY_3() { return static_cast<int32_t>(offsetof(RotatableObject_t2032248877, ___angleY_3)); }
	inline float get_angleY_3() const { return ___angleY_3; }
	inline float* get_address_of_angleY_3() { return &___angleY_3; }
	inline void set_angleY_3(float value)
	{
		___angleY_3 = value;
	}

	inline static int32_t get_offset_of_angleZ_4() { return static_cast<int32_t>(offsetof(RotatableObject_t2032248877, ___angleZ_4)); }
	inline float get_angleZ_4() const { return ___angleZ_4; }
	inline float* get_address_of_angleZ_4() { return &___angleZ_4; }
	inline void set_angleZ_4(float value)
	{
		___angleZ_4 = value;
	}

	inline static int32_t get_offset_of_thistransform_5() { return static_cast<int32_t>(offsetof(RotatableObject_t2032248877, ___thistransform_5)); }
	inline Transform_t3275118058 * get_thistransform_5() const { return ___thistransform_5; }
	inline Transform_t3275118058 ** get_address_of_thistransform_5() { return &___thistransform_5; }
	inline void set_thistransform_5(Transform_t3275118058 * value)
	{
		___thistransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___thistransform_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
