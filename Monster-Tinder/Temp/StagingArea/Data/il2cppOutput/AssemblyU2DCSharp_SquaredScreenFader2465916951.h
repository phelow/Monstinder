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
// SquaredScreenFader/AnimRect[,]
struct AnimRectU5BU2CU5D_t2029905543;

#include "AssemblyU2DCSharp_Fader1787722948.h"
#include "AssemblyU2DCSharp_SquaredScreenFader_Direction3375101977.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SquaredScreenFader
struct  SquaredScreenFader_t2465916951  : public Fader_t1787722948
{
public:
	// System.Int32 SquaredScreenFader::columns
	int32_t ___columns_14;
	// System.Int32 SquaredScreenFader::last_columns
	int32_t ___last_columns_15;
	// SquaredScreenFader/Direction SquaredScreenFader::direction
	int32_t ___direction_16;
	// UnityEngine.Texture SquaredScreenFader::texture
	Texture_t2243626319 * ___texture_17;
	// System.Int32 SquaredScreenFader::rows
	int32_t ___rows_18;
	// SquaredScreenFader/AnimRect[,] SquaredScreenFader::squares
	AnimRectU5BU2CU5D_t2029905543* ___squares_19;

public:
	inline static int32_t get_offset_of_columns_14() { return static_cast<int32_t>(offsetof(SquaredScreenFader_t2465916951, ___columns_14)); }
	inline int32_t get_columns_14() const { return ___columns_14; }
	inline int32_t* get_address_of_columns_14() { return &___columns_14; }
	inline void set_columns_14(int32_t value)
	{
		___columns_14 = value;
	}

	inline static int32_t get_offset_of_last_columns_15() { return static_cast<int32_t>(offsetof(SquaredScreenFader_t2465916951, ___last_columns_15)); }
	inline int32_t get_last_columns_15() const { return ___last_columns_15; }
	inline int32_t* get_address_of_last_columns_15() { return &___last_columns_15; }
	inline void set_last_columns_15(int32_t value)
	{
		___last_columns_15 = value;
	}

	inline static int32_t get_offset_of_direction_16() { return static_cast<int32_t>(offsetof(SquaredScreenFader_t2465916951, ___direction_16)); }
	inline int32_t get_direction_16() const { return ___direction_16; }
	inline int32_t* get_address_of_direction_16() { return &___direction_16; }
	inline void set_direction_16(int32_t value)
	{
		___direction_16 = value;
	}

	inline static int32_t get_offset_of_texture_17() { return static_cast<int32_t>(offsetof(SquaredScreenFader_t2465916951, ___texture_17)); }
	inline Texture_t2243626319 * get_texture_17() const { return ___texture_17; }
	inline Texture_t2243626319 ** get_address_of_texture_17() { return &___texture_17; }
	inline void set_texture_17(Texture_t2243626319 * value)
	{
		___texture_17 = value;
		Il2CppCodeGenWriteBarrier(&___texture_17, value);
	}

	inline static int32_t get_offset_of_rows_18() { return static_cast<int32_t>(offsetof(SquaredScreenFader_t2465916951, ___rows_18)); }
	inline int32_t get_rows_18() const { return ___rows_18; }
	inline int32_t* get_address_of_rows_18() { return &___rows_18; }
	inline void set_rows_18(int32_t value)
	{
		___rows_18 = value;
	}

	inline static int32_t get_offset_of_squares_19() { return static_cast<int32_t>(offsetof(SquaredScreenFader_t2465916951, ___squares_19)); }
	inline AnimRectU5BU2CU5D_t2029905543* get_squares_19() const { return ___squares_19; }
	inline AnimRectU5BU2CU5D_t2029905543** get_address_of_squares_19() { return &___squares_19; }
	inline void set_squares_19(AnimRectU5BU2CU5D_t2029905543* value)
	{
		___squares_19 = value;
		Il2CppCodeGenWriteBarrier(&___squares_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
