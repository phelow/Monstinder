#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_ScreenFaderComponents_FaderFacto4167222669.h"
#include "AssemblyU2DCSharp_StripeScreenFader_Direction4231954537.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.StripesFaderFactory
struct  StripesFaderFactory_t397315518  : public FaderFactoryBase_t4167222669
{
public:
	// System.Int32 ScreenFaderComponents.StripesFaderFactory::stripes
	int32_t ___stripes_0;
	// StripeScreenFader/Direction ScreenFaderComponents.StripesFaderFactory::direction
	int32_t ___direction_1;

public:
	inline static int32_t get_offset_of_stripes_0() { return static_cast<int32_t>(offsetof(StripesFaderFactory_t397315518, ___stripes_0)); }
	inline int32_t get_stripes_0() const { return ___stripes_0; }
	inline int32_t* get_address_of_stripes_0() { return &___stripes_0; }
	inline void set_stripes_0(int32_t value)
	{
		___stripes_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(StripesFaderFactory_t397315518, ___direction_1)); }
	inline int32_t get_direction_1() const { return ___direction_1; }
	inline int32_t* get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(int32_t value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
