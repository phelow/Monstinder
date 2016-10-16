#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StripeScreenFader/AnimRect
struct  AnimRect_t2616632671 
{
public:
	// UnityEngine.Rect StripeScreenFader/AnimRect::rect
	Rect_t3681755626  ___rect_0;
	// System.Single StripeScreenFader/AnimRect::fromScale
	float ___fromScale_1;
	// System.Single StripeScreenFader/AnimRect::toScale
	float ___toScale_2;

public:
	inline static int32_t get_offset_of_rect_0() { return static_cast<int32_t>(offsetof(AnimRect_t2616632671, ___rect_0)); }
	inline Rect_t3681755626  get_rect_0() const { return ___rect_0; }
	inline Rect_t3681755626 * get_address_of_rect_0() { return &___rect_0; }
	inline void set_rect_0(Rect_t3681755626  value)
	{
		___rect_0 = value;
	}

	inline static int32_t get_offset_of_fromScale_1() { return static_cast<int32_t>(offsetof(AnimRect_t2616632671, ___fromScale_1)); }
	inline float get_fromScale_1() const { return ___fromScale_1; }
	inline float* get_address_of_fromScale_1() { return &___fromScale_1; }
	inline void set_fromScale_1(float value)
	{
		___fromScale_1 = value;
	}

	inline static int32_t get_offset_of_toScale_2() { return static_cast<int32_t>(offsetof(AnimRect_t2616632671, ___toScale_2)); }
	inline float get_toScale_2() const { return ___toScale_2; }
	inline float* get_address_of_toScale_2() { return &___toScale_2; }
	inline void set_toScale_2(float value)
	{
		___toScale_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: StripeScreenFader/AnimRect
struct AnimRect_t2616632671_marshaled_pinvoke
{
	Rect_t3681755626_marshaled_pinvoke ___rect_0;
	float ___fromScale_1;
	float ___toScale_2;
};
// Native definition for marshalling of: StripeScreenFader/AnimRect
struct AnimRect_t2616632671_marshaled_com
{
	Rect_t3681755626_marshaled_com ___rect_0;
	float ___fromScale_1;
	float ___toScale_2;
};
