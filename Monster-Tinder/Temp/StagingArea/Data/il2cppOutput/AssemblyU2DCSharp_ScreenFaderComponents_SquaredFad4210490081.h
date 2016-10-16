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
#include "AssemblyU2DCSharp_SquaredScreenFader_Direction3375101977.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.SquaredFaderFactory
struct  SquaredFaderFactory_t4210490081  : public FaderFactoryBase_t4167222669
{
public:
	// System.Int32 ScreenFaderComponents.SquaredFaderFactory::columns
	int32_t ___columns_0;
	// SquaredScreenFader/Direction ScreenFaderComponents.SquaredFaderFactory::direction
	int32_t ___direction_1;
	// UnityEngine.Texture ScreenFaderComponents.SquaredFaderFactory::texture
	Texture_t2243626319 * ___texture_2;

public:
	inline static int32_t get_offset_of_columns_0() { return static_cast<int32_t>(offsetof(SquaredFaderFactory_t4210490081, ___columns_0)); }
	inline int32_t get_columns_0() const { return ___columns_0; }
	inline int32_t* get_address_of_columns_0() { return &___columns_0; }
	inline void set_columns_0(int32_t value)
	{
		___columns_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(SquaredFaderFactory_t4210490081, ___direction_1)); }
	inline int32_t get_direction_1() const { return ___direction_1; }
	inline int32_t* get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(int32_t value)
	{
		___direction_1 = value;
	}

	inline static int32_t get_offset_of_texture_2() { return static_cast<int32_t>(offsetof(SquaredFaderFactory_t4210490081, ___texture_2)); }
	inline Texture_t2243626319 * get_texture_2() const { return ___texture_2; }
	inline Texture_t2243626319 ** get_address_of_texture_2() { return &___texture_2; }
	inline void set_texture_2(Texture_t2243626319 * value)
	{
		___texture_2 = value;
		Il2CppCodeGenWriteBarrier(&___texture_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
