#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Texture>
struct Dictionary_2_t1251451954;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LinesScreenFader/TextureCollection
struct  TextureCollection_t3515505805  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Texture> LinesScreenFader/TextureCollection::textures
	Dictionary_2_t1251451954 * ___textures_0;

public:
	inline static int32_t get_offset_of_textures_0() { return static_cast<int32_t>(offsetof(TextureCollection_t3515505805, ___textures_0)); }
	inline Dictionary_2_t1251451954 * get_textures_0() const { return ___textures_0; }
	inline Dictionary_2_t1251451954 ** get_address_of_textures_0() { return &___textures_0; }
	inline void set_textures_0(Dictionary_2_t1251451954 * value)
	{
		___textures_0 = value;
		Il2CppCodeGenWriteBarrier(&___textures_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
