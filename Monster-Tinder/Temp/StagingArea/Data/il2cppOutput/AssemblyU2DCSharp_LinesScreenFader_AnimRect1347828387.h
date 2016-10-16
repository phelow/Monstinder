#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LinesScreenFader/AnimRect
struct  AnimRect_t1347828387 
{
public:
	// UnityEngine.Rect LinesScreenFader/AnimRect::rectStart
	Rect_t3681755626  ___rectStart_0;
	// UnityEngine.Rect LinesScreenFader/AnimRect::rectFinal
	Rect_t3681755626  ___rectFinal_1;

public:
	inline static int32_t get_offset_of_rectStart_0() { return static_cast<int32_t>(offsetof(AnimRect_t1347828387, ___rectStart_0)); }
	inline Rect_t3681755626  get_rectStart_0() const { return ___rectStart_0; }
	inline Rect_t3681755626 * get_address_of_rectStart_0() { return &___rectStart_0; }
	inline void set_rectStart_0(Rect_t3681755626  value)
	{
		___rectStart_0 = value;
	}

	inline static int32_t get_offset_of_rectFinal_1() { return static_cast<int32_t>(offsetof(AnimRect_t1347828387, ___rectFinal_1)); }
	inline Rect_t3681755626  get_rectFinal_1() const { return ___rectFinal_1; }
	inline Rect_t3681755626 * get_address_of_rectFinal_1() { return &___rectFinal_1; }
	inline void set_rectFinal_1(Rect_t3681755626  value)
	{
		___rectFinal_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: LinesScreenFader/AnimRect
struct AnimRect_t1347828387_marshaled_pinvoke
{
	Rect_t3681755626_marshaled_pinvoke ___rectStart_0;
	Rect_t3681755626_marshaled_pinvoke ___rectFinal_1;
};
// Native definition for marshalling of: LinesScreenFader/AnimRect
struct AnimRect_t1347828387_marshaled_com
{
	Rect_t3681755626_marshaled_com ___rectStart_0;
	Rect_t3681755626_marshaled_com ___rectFinal_1;
};
