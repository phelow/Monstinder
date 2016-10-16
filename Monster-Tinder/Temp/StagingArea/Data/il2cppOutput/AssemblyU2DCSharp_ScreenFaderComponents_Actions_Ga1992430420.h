#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer[]
struct RendererU5BU5D_t2810717544;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t590162004;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t4216439300;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators817748141.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.Actions.GameObjectFadingAction
struct  GameObjectFadingAction_t1992430420  : public Il2CppObject
{
public:
	// ScreenFaderComponents.Enumerators.FadeDirection ScreenFaderComponents.Actions.GameObjectFadingAction::direction
	int32_t ___direction_0;
	// System.Single ScreenFaderComponents.Actions.GameObjectFadingAction::time
	float ___time_1;
	// System.Single ScreenFaderComponents.Actions.GameObjectFadingAction::start
	float ___start_2;
	// System.Single ScreenFaderComponents.Actions.GameObjectFadingAction::finish
	float ___finish_3;
	// UnityEngine.Renderer[] ScreenFaderComponents.Actions.GameObjectFadingAction::renderers
	RendererU5BU5D_t2810717544* ___renderers_4;
	// UnityEngine.UI.Image[] ScreenFaderComponents.Actions.GameObjectFadingAction::images
	ImageU5BU5D_t590162004* ___images_5;
	// UnityEngine.UI.Text[] ScreenFaderComponents.Actions.GameObjectFadingAction::texts
	TextU5BU5D_t4216439300* ___texts_6;
	// System.Boolean ScreenFaderComponents.Actions.GameObjectFadingAction::<Completed>k__BackingField
	bool ___U3CCompletedU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_direction_0() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___direction_0)); }
	inline int32_t get_direction_0() const { return ___direction_0; }
	inline int32_t* get_address_of_direction_0() { return &___direction_0; }
	inline void set_direction_0(int32_t value)
	{
		___direction_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}

	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___start_2)); }
	inline float get_start_2() const { return ___start_2; }
	inline float* get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(float value)
	{
		___start_2 = value;
	}

	inline static int32_t get_offset_of_finish_3() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___finish_3)); }
	inline float get_finish_3() const { return ___finish_3; }
	inline float* get_address_of_finish_3() { return &___finish_3; }
	inline void set_finish_3(float value)
	{
		___finish_3 = value;
	}

	inline static int32_t get_offset_of_renderers_4() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___renderers_4)); }
	inline RendererU5BU5D_t2810717544* get_renderers_4() const { return ___renderers_4; }
	inline RendererU5BU5D_t2810717544** get_address_of_renderers_4() { return &___renderers_4; }
	inline void set_renderers_4(RendererU5BU5D_t2810717544* value)
	{
		___renderers_4 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_4, value);
	}

	inline static int32_t get_offset_of_images_5() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___images_5)); }
	inline ImageU5BU5D_t590162004* get_images_5() const { return ___images_5; }
	inline ImageU5BU5D_t590162004** get_address_of_images_5() { return &___images_5; }
	inline void set_images_5(ImageU5BU5D_t590162004* value)
	{
		___images_5 = value;
		Il2CppCodeGenWriteBarrier(&___images_5, value);
	}

	inline static int32_t get_offset_of_texts_6() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___texts_6)); }
	inline TextU5BU5D_t4216439300* get_texts_6() const { return ___texts_6; }
	inline TextU5BU5D_t4216439300** get_address_of_texts_6() { return &___texts_6; }
	inline void set_texts_6(TextU5BU5D_t4216439300* value)
	{
		___texts_6 = value;
		Il2CppCodeGenWriteBarrier(&___texts_6, value);
	}

	inline static int32_t get_offset_of_U3CCompletedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(GameObjectFadingAction_t1992430420, ___U3CCompletedU3Ek__BackingField_7)); }
	inline bool get_U3CCompletedU3Ek__BackingField_7() const { return ___U3CCompletedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CCompletedU3Ek__BackingField_7() { return &___U3CCompletedU3Ek__BackingField_7; }
	inline void set_U3CCompletedU3Ek__BackingField_7(bool value)
	{
		___U3CCompletedU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
