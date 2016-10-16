#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LinesScreenFader/TextureCollection
struct TextureCollection_t3515505805;
// LinesScreenFader/AnimRect[]
struct AnimRectU5BU5D_t1645039474;

#include "AssemblyU2DCSharp_Fader1787722948.h"
#include "AssemblyU2DCSharp_LinesScreenFader_Direction2463454677.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LinesScreenFader
struct  LinesScreenFader_t3552971443  : public Fader_t1787722948
{
public:
	// System.Int32 LinesScreenFader::numberOfStripes
	int32_t ___numberOfStripes_14;
	// System.Int32 LinesScreenFader::space
	int32_t ___space_15;
	// LinesScreenFader/Direction LinesScreenFader::direction
	int32_t ___direction_16;
	// UnityEngine.Color LinesScreenFader::last_color
	Color_t2020392075  ___last_color_17;
	// System.Int32 LinesScreenFader::last_numberOfStripes
	int32_t ___last_numberOfStripes_18;
	// LinesScreenFader/TextureCollection LinesScreenFader::textures
	TextureCollection_t3515505805 * ___textures_19;
	// LinesScreenFader/AnimRect[] LinesScreenFader::rects
	AnimRectU5BU5D_t1645039474* ___rects_20;

public:
	inline static int32_t get_offset_of_numberOfStripes_14() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___numberOfStripes_14)); }
	inline int32_t get_numberOfStripes_14() const { return ___numberOfStripes_14; }
	inline int32_t* get_address_of_numberOfStripes_14() { return &___numberOfStripes_14; }
	inline void set_numberOfStripes_14(int32_t value)
	{
		___numberOfStripes_14 = value;
	}

	inline static int32_t get_offset_of_space_15() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___space_15)); }
	inline int32_t get_space_15() const { return ___space_15; }
	inline int32_t* get_address_of_space_15() { return &___space_15; }
	inline void set_space_15(int32_t value)
	{
		___space_15 = value;
	}

	inline static int32_t get_offset_of_direction_16() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___direction_16)); }
	inline int32_t get_direction_16() const { return ___direction_16; }
	inline int32_t* get_address_of_direction_16() { return &___direction_16; }
	inline void set_direction_16(int32_t value)
	{
		___direction_16 = value;
	}

	inline static int32_t get_offset_of_last_color_17() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___last_color_17)); }
	inline Color_t2020392075  get_last_color_17() const { return ___last_color_17; }
	inline Color_t2020392075 * get_address_of_last_color_17() { return &___last_color_17; }
	inline void set_last_color_17(Color_t2020392075  value)
	{
		___last_color_17 = value;
	}

	inline static int32_t get_offset_of_last_numberOfStripes_18() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___last_numberOfStripes_18)); }
	inline int32_t get_last_numberOfStripes_18() const { return ___last_numberOfStripes_18; }
	inline int32_t* get_address_of_last_numberOfStripes_18() { return &___last_numberOfStripes_18; }
	inline void set_last_numberOfStripes_18(int32_t value)
	{
		___last_numberOfStripes_18 = value;
	}

	inline static int32_t get_offset_of_textures_19() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___textures_19)); }
	inline TextureCollection_t3515505805 * get_textures_19() const { return ___textures_19; }
	inline TextureCollection_t3515505805 ** get_address_of_textures_19() { return &___textures_19; }
	inline void set_textures_19(TextureCollection_t3515505805 * value)
	{
		___textures_19 = value;
		Il2CppCodeGenWriteBarrier(&___textures_19, value);
	}

	inline static int32_t get_offset_of_rects_20() { return static_cast<int32_t>(offsetof(LinesScreenFader_t3552971443, ___rects_20)); }
	inline AnimRectU5BU5D_t1645039474* get_rects_20() const { return ___rects_20; }
	inline AnimRectU5BU5D_t1645039474** get_address_of_rects_20() { return &___rects_20; }
	inline void set_rects_20(AnimRectU5BU5D_t1645039474* value)
	{
		___rects_20 = value;
		Il2CppCodeGenWriteBarrier(&___rects_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
