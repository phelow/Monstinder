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

#include "AssemblyU2DCSharp_ScreenFaderComponents_FaderFacto4167222669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.ImageFaderFactory
struct  ImageFaderFactory_t1997640503  : public FaderFactoryBase_t4167222669
{
public:
	// UnityEngine.Texture ScreenFaderComponents.ImageFaderFactory::texture
	Texture_t2243626319 * ___texture_0;

public:
	inline static int32_t get_offset_of_texture_0() { return static_cast<int32_t>(offsetof(ImageFaderFactory_t1997640503, ___texture_0)); }
	inline Texture_t2243626319 * get_texture_0() const { return ___texture_0; }
	inline Texture_t2243626319 ** get_address_of_texture_0() { return &___texture_0; }
	inline void set_texture_0(Texture_t2243626319 * value)
	{
		___texture_0 = value;
		Il2CppCodeGenWriteBarrier(&___texture_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
