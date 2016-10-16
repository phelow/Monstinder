#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;

#include "AssemblyU2DCSharp_ScreenFaderComponents_FaderFacto4167222669.h"
#include "AssemblyU2DCSharp_LinesScreenFader_Direction2463454677.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.LinesFaderFactory
struct  LinesFaderFactory_t1905775669  : public FaderFactoryBase_t4167222669
{
public:
	// System.Int32 ScreenFaderComponents.LinesFaderFactory::stripes
	int32_t ___stripes_0;
	// LinesScreenFader/Direction ScreenFaderComponents.LinesFaderFactory::direction
	int32_t ___direction_1;
	// UnityEngine.Texture[] ScreenFaderComponents.LinesFaderFactory::images
	TextureU5BU5D_t2474608790* ___images_2;

public:
	inline static int32_t get_offset_of_stripes_0() { return static_cast<int32_t>(offsetof(LinesFaderFactory_t1905775669, ___stripes_0)); }
	inline int32_t get_stripes_0() const { return ___stripes_0; }
	inline int32_t* get_address_of_stripes_0() { return &___stripes_0; }
	inline void set_stripes_0(int32_t value)
	{
		___stripes_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(LinesFaderFactory_t1905775669, ___direction_1)); }
	inline int32_t get_direction_1() const { return ___direction_1; }
	inline int32_t* get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(int32_t value)
	{
		___direction_1 = value;
	}

	inline static int32_t get_offset_of_images_2() { return static_cast<int32_t>(offsetof(LinesFaderFactory_t1905775669, ___images_2)); }
	inline TextureU5BU5D_t2474608790* get_images_2() const { return ___images_2; }
	inline TextureU5BU5D_t2474608790** get_address_of_images_2() { return &___images_2; }
	inline void set_images_2(TextureU5BU5D_t2474608790* value)
	{
		___images_2 = value;
		Il2CppCodeGenWriteBarrier(&___images_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
