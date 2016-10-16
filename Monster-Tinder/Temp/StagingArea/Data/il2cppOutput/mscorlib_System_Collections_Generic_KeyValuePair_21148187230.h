#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.SpriteRenderer,UnityEngine.Color>
struct  KeyValuePair_2_t1148187230 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SpriteRenderer_t1209076198 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Color_t2020392075  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1148187230, ___key_0)); }
	inline SpriteRenderer_t1209076198 * get_key_0() const { return ___key_0; }
	inline SpriteRenderer_t1209076198 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(SpriteRenderer_t1209076198 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1148187230, ___value_1)); }
	inline Color_t2020392075  get_value_1() const { return ___value_1; }
	inline Color_t2020392075 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Color_t2020392075  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
