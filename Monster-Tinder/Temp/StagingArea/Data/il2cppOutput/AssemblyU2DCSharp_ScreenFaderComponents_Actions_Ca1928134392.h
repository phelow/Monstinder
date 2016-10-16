#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t2042527209;

#include "AssemblyU2DCSharp_ScreenFaderComponents_Actions_Ga1992430420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.Actions.CanvasImageFadingAction
struct  CanvasImageFadingAction_t1928134392  : public GameObjectFadingAction_t1992430420
{
public:
	// UnityEngine.UI.Image ScreenFaderComponents.Actions.CanvasImageFadingAction::_obj
	Image_t2042527209 * ____obj_8;

public:
	inline static int32_t get_offset_of__obj_8() { return static_cast<int32_t>(offsetof(CanvasImageFadingAction_t1928134392, ____obj_8)); }
	inline Image_t2042527209 * get__obj_8() const { return ____obj_8; }
	inline Image_t2042527209 ** get_address_of__obj_8() { return &____obj_8; }
	inline void set__obj_8(Image_t2042527209 * value)
	{
		____obj_8 = value;
		Il2CppCodeGenWriteBarrier(&____obj_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
