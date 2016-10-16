#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// StripeScreenFader/AnimRect[]
struct AnimRectU5BU5D_t1667995206;

#include "AssemblyU2DCSharp_Fader1787722948.h"
#include "AssemblyU2DCSharp_StripeScreenFader_Direction4231954537.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StripeScreenFader
struct  StripeScreenFader_t408566975  : public Fader_t1787722948
{
public:
	// System.Int32 StripeScreenFader::numberOfStripes
	int32_t ___numberOfStripes_14;
	// StripeScreenFader/Direction StripeScreenFader::direction
	int32_t ___direction_15;
	// UnityEngine.Color StripeScreenFader::last_color
	Color_t2020392075  ___last_color_16;
	// System.Int32 StripeScreenFader::last_numberOfStripes
	int32_t ___last_numberOfStripes_17;
	// UnityEngine.Texture StripeScreenFader::texture
	Texture_t2243626319 * ___texture_18;
	// StripeScreenFader/AnimRect[] StripeScreenFader::rcs
	AnimRectU5BU5D_t1667995206* ___rcs_19;

public:
	inline static int32_t get_offset_of_numberOfStripes_14() { return static_cast<int32_t>(offsetof(StripeScreenFader_t408566975, ___numberOfStripes_14)); }
	inline int32_t get_numberOfStripes_14() const { return ___numberOfStripes_14; }
	inline int32_t* get_address_of_numberOfStripes_14() { return &___numberOfStripes_14; }
	inline void set_numberOfStripes_14(int32_t value)
	{
		___numberOfStripes_14 = value;
	}

	inline static int32_t get_offset_of_direction_15() { return static_cast<int32_t>(offsetof(StripeScreenFader_t408566975, ___direction_15)); }
	inline int32_t get_direction_15() const { return ___direction_15; }
	inline int32_t* get_address_of_direction_15() { return &___direction_15; }
	inline void set_direction_15(int32_t value)
	{
		___direction_15 = value;
	}

	inline static int32_t get_offset_of_last_color_16() { return static_cast<int32_t>(offsetof(StripeScreenFader_t408566975, ___last_color_16)); }
	inline Color_t2020392075  get_last_color_16() const { return ___last_color_16; }
	inline Color_t2020392075 * get_address_of_last_color_16() { return &___last_color_16; }
	inline void set_last_color_16(Color_t2020392075  value)
	{
		___last_color_16 = value;
	}

	inline static int32_t get_offset_of_last_numberOfStripes_17() { return static_cast<int32_t>(offsetof(StripeScreenFader_t408566975, ___last_numberOfStripes_17)); }
	inline int32_t get_last_numberOfStripes_17() const { return ___last_numberOfStripes_17; }
	inline int32_t* get_address_of_last_numberOfStripes_17() { return &___last_numberOfStripes_17; }
	inline void set_last_numberOfStripes_17(int32_t value)
	{
		___last_numberOfStripes_17 = value;
	}

	inline static int32_t get_offset_of_texture_18() { return static_cast<int32_t>(offsetof(StripeScreenFader_t408566975, ___texture_18)); }
	inline Texture_t2243626319 * get_texture_18() const { return ___texture_18; }
	inline Texture_t2243626319 ** get_address_of_texture_18() { return &___texture_18; }
	inline void set_texture_18(Texture_t2243626319 * value)
	{
		___texture_18 = value;
		Il2CppCodeGenWriteBarrier(&___texture_18, value);
	}

	inline static int32_t get_offset_of_rcs_19() { return static_cast<int32_t>(offsetof(StripeScreenFader_t408566975, ___rcs_19)); }
	inline AnimRectU5BU5D_t1667995206* get_rcs_19() const { return ___rcs_19; }
	inline AnimRectU5BU5D_t1667995206** get_address_of_rcs_19() { return &___rcs_19; }
	inline void set_rcs_19(AnimRectU5BU5D_t1667995206* value)
	{
		___rcs_19 = value;
		Il2CppCodeGenWriteBarrier(&___rcs_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
