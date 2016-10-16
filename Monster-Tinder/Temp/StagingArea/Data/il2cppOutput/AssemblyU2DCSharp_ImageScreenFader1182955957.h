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

// ImageScreenFader
struct  ImageScreenFader_t1182955957  : public Fader_t1787722948
{
public:
	// UnityEngine.Texture ImageScreenFader::image
	Texture_t2243626319 * ___image_14;
	// UnityEngine.Color ImageScreenFader::last_fadeColor
	Color_t2020392075  ___last_fadeColor_15;
	// System.Single ImageScreenFader::maxDensity
	float ___maxDensity_16;
	// UnityEngine.Texture ImageScreenFader::colorTexture
	Texture_t2243626319 * ___colorTexture_17;

public:
	inline static int32_t get_offset_of_image_14() { return static_cast<int32_t>(offsetof(ImageScreenFader_t1182955957, ___image_14)); }
	inline Texture_t2243626319 * get_image_14() const { return ___image_14; }
	inline Texture_t2243626319 ** get_address_of_image_14() { return &___image_14; }
	inline void set_image_14(Texture_t2243626319 * value)
	{
		___image_14 = value;
		Il2CppCodeGenWriteBarrier(&___image_14, value);
	}

	inline static int32_t get_offset_of_last_fadeColor_15() { return static_cast<int32_t>(offsetof(ImageScreenFader_t1182955957, ___last_fadeColor_15)); }
	inline Color_t2020392075  get_last_fadeColor_15() const { return ___last_fadeColor_15; }
	inline Color_t2020392075 * get_address_of_last_fadeColor_15() { return &___last_fadeColor_15; }
	inline void set_last_fadeColor_15(Color_t2020392075  value)
	{
		___last_fadeColor_15 = value;
	}

	inline static int32_t get_offset_of_maxDensity_16() { return static_cast<int32_t>(offsetof(ImageScreenFader_t1182955957, ___maxDensity_16)); }
	inline float get_maxDensity_16() const { return ___maxDensity_16; }
	inline float* get_address_of_maxDensity_16() { return &___maxDensity_16; }
	inline void set_maxDensity_16(float value)
	{
		___maxDensity_16 = value;
	}

	inline static int32_t get_offset_of_colorTexture_17() { return static_cast<int32_t>(offsetof(ImageScreenFader_t1182955957, ___colorTexture_17)); }
	inline Texture_t2243626319 * get_colorTexture_17() const { return ___colorTexture_17; }
	inline Texture_t2243626319 ** get_address_of_colorTexture_17() { return &___colorTexture_17; }
	inline void set_colorTexture_17(Texture_t2243626319 * value)
	{
		___colorTexture_17 = value;
		Il2CppCodeGenWriteBarrier(&___colorTexture_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
