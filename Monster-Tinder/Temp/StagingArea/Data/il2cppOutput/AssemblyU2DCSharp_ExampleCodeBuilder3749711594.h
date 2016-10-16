#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExampleCodeBuilder
struct  ExampleCodeBuilder_t3749711594  : public Il2CppObject
{
public:
	// System.Text.StringBuilder ExampleCodeBuilder::sb_fields
	StringBuilder_t1221177846 * ___sb_fields_0;
	// System.Text.StringBuilder ExampleCodeBuilder::sb_OnGUI
	StringBuilder_t1221177846 * ___sb_OnGUI_1;
	// System.Text.StringBuilder ExampleCodeBuilder::sb_methods
	StringBuilder_t1221177846 * ___sb_methods_2;

public:
	inline static int32_t get_offset_of_sb_fields_0() { return static_cast<int32_t>(offsetof(ExampleCodeBuilder_t3749711594, ___sb_fields_0)); }
	inline StringBuilder_t1221177846 * get_sb_fields_0() const { return ___sb_fields_0; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_fields_0() { return &___sb_fields_0; }
	inline void set_sb_fields_0(StringBuilder_t1221177846 * value)
	{
		___sb_fields_0 = value;
		Il2CppCodeGenWriteBarrier(&___sb_fields_0, value);
	}

	inline static int32_t get_offset_of_sb_OnGUI_1() { return static_cast<int32_t>(offsetof(ExampleCodeBuilder_t3749711594, ___sb_OnGUI_1)); }
	inline StringBuilder_t1221177846 * get_sb_OnGUI_1() const { return ___sb_OnGUI_1; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_OnGUI_1() { return &___sb_OnGUI_1; }
	inline void set_sb_OnGUI_1(StringBuilder_t1221177846 * value)
	{
		___sb_OnGUI_1 = value;
		Il2CppCodeGenWriteBarrier(&___sb_OnGUI_1, value);
	}

	inline static int32_t get_offset_of_sb_methods_2() { return static_cast<int32_t>(offsetof(ExampleCodeBuilder_t3749711594, ___sb_methods_2)); }
	inline StringBuilder_t1221177846 * get_sb_methods_2() const { return ___sb_methods_2; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_methods_2() { return &___sb_methods_2; }
	inline void set_sb_methods_2(StringBuilder_t1221177846 * value)
	{
		___sb_methods_2 = value;
		Il2CppCodeGenWriteBarrier(&___sb_methods_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
