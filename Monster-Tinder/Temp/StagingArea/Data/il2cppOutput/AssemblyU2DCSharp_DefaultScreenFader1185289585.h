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

#include "AssemblyU2DCSharp_Fader1787722948.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultScreenFader
struct  DefaultScreenFader_t1185289585  : public Fader_t1787722948
{
public:
	// UnityEngine.Color DefaultScreenFader::last_fadeColor
	Color_t2020392075  ___last_fadeColor_14;
	// System.Single DefaultScreenFader::maxDensity
	float ___maxDensity_15;
	// UnityEngine.Texture DefaultScreenFader::colorTexture
	Texture_t2243626319 * ___colorTexture_16;

public:
	inline static int32_t get_offset_of_last_fadeColor_14() { return static_cast<int32_t>(offsetof(DefaultScreenFader_t1185289585, ___last_fadeColor_14)); }
	inline Color_t2020392075  get_last_fadeColor_14() const { return ___last_fadeColor_14; }
	inline Color_t2020392075 * get_address_of_last_fadeColor_14() { return &___last_fadeColor_14; }
	inline void set_last_fadeColor_14(Color_t2020392075  value)
	{
		___last_fadeColor_14 = value;
	}

	inline static int32_t get_offset_of_maxDensity_15() { return static_cast<int32_t>(offsetof(DefaultScreenFader_t1185289585, ___maxDensity_15)); }
	inline float get_maxDensity_15() const { return ___maxDensity_15; }
	inline float* get_address_of_maxDensity_15() { return &___maxDensity_15; }
	inline void set_maxDensity_15(float value)
	{
		___maxDensity_15 = value;
	}

	inline static int32_t get_offset_of_colorTexture_16() { return static_cast<int32_t>(offsetof(DefaultScreenFader_t1185289585, ___colorTexture_16)); }
	inline Texture_t2243626319 * get_colorTexture_16() const { return ___colorTexture_16; }
	inline Texture_t2243626319 ** get_address_of_colorTexture_16() { return &___colorTexture_16; }
	inline void set_colorTexture_16(Texture_t2243626319 * value)
	{
		___colorTexture_16 = value;
		Il2CppCodeGenWriteBarrier(&___colorTexture_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
