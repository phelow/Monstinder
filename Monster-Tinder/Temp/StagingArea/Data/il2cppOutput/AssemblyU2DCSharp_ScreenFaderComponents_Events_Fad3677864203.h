#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators817748141.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.Events.FadeEventArgs
struct  FadeEventArgs_t3677864203  : public EventArgs_t3289624707
{
public:
	// ScreenFaderComponents.Enumerators.FadeDirection ScreenFaderComponents.Events.FadeEventArgs::Direction
	int32_t ___Direction_1;

public:
	inline static int32_t get_offset_of_Direction_1() { return static_cast<int32_t>(offsetof(FadeEventArgs_t3677864203, ___Direction_1)); }
	inline int32_t get_Direction_1() const { return ___Direction_1; }
	inline int32_t* get_address_of_Direction_1() { return &___Direction_1; }
	inline void set_Direction_1(int32_t value)
	{
		___Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
