#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SquaredScreenFader
struct SquaredScreenFader_t2465916951;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2724090252;
// ScreenFaderComponents.Actions.ShowLogoAction
struct ShowLogoAction_t1883935896;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoSquaredGUI
struct  DemoSquaredGUI_t3027218487  : public MonoBehaviour_t1158329972
{
public:
	// SquaredScreenFader DemoSquaredGUI::component
	SquaredScreenFader_t2465916951 * ___component_2;
	// UnityEngine.Texture2D DemoSquaredGUI::logo
	Texture2D_t3542995729 * ___logo_3;
	// UnityEngine.Texture2D[] DemoSquaredGUI::patterns
	Texture2DU5BU5D_t2724090252* ___patterns_4;
	// System.Int32 DemoSquaredGUI::selectedPattern
	int32_t ___selectedPattern_5;
	// System.Single DemoSquaredGUI::fadeSpeed
	float ___fadeSpeed_6;
	// ScreenFaderComponents.Actions.ShowLogoAction DemoSquaredGUI::showLogoAction
	ShowLogoAction_t1883935896 * ___showLogoAction_7;

public:
	inline static int32_t get_offset_of_component_2() { return static_cast<int32_t>(offsetof(DemoSquaredGUI_t3027218487, ___component_2)); }
	inline SquaredScreenFader_t2465916951 * get_component_2() const { return ___component_2; }
	inline SquaredScreenFader_t2465916951 ** get_address_of_component_2() { return &___component_2; }
	inline void set_component_2(SquaredScreenFader_t2465916951 * value)
	{
		___component_2 = value;
		Il2CppCodeGenWriteBarrier(&___component_2, value);
	}

	inline static int32_t get_offset_of_logo_3() { return static_cast<int32_t>(offsetof(DemoSquaredGUI_t3027218487, ___logo_3)); }
	inline Texture2D_t3542995729 * get_logo_3() const { return ___logo_3; }
	inline Texture2D_t3542995729 ** get_address_of_logo_3() { return &___logo_3; }
	inline void set_logo_3(Texture2D_t3542995729 * value)
	{
		___logo_3 = value;
		Il2CppCodeGenWriteBarrier(&___logo_3, value);
	}

	inline static int32_t get_offset_of_patterns_4() { return static_cast<int32_t>(offsetof(DemoSquaredGUI_t3027218487, ___patterns_4)); }
	inline Texture2DU5BU5D_t2724090252* get_patterns_4() const { return ___patterns_4; }
	inline Texture2DU5BU5D_t2724090252** get_address_of_patterns_4() { return &___patterns_4; }
	inline void set_patterns_4(Texture2DU5BU5D_t2724090252* value)
	{
		___patterns_4 = value;
		Il2CppCodeGenWriteBarrier(&___patterns_4, value);
	}

	inline static int32_t get_offset_of_selectedPattern_5() { return static_cast<int32_t>(offsetof(DemoSquaredGUI_t3027218487, ___selectedPattern_5)); }
	inline int32_t get_selectedPattern_5() const { return ___selectedPattern_5; }
	inline int32_t* get_address_of_selectedPattern_5() { return &___selectedPattern_5; }
	inline void set_selectedPattern_5(int32_t value)
	{
		___selectedPattern_5 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_6() { return static_cast<int32_t>(offsetof(DemoSquaredGUI_t3027218487, ___fadeSpeed_6)); }
	inline float get_fadeSpeed_6() const { return ___fadeSpeed_6; }
	inline float* get_address_of_fadeSpeed_6() { return &___fadeSpeed_6; }
	inline void set_fadeSpeed_6(float value)
	{
		___fadeSpeed_6 = value;
	}

	inline static int32_t get_offset_of_showLogoAction_7() { return static_cast<int32_t>(offsetof(DemoSquaredGUI_t3027218487, ___showLogoAction_7)); }
	inline ShowLogoAction_t1883935896 * get_showLogoAction_7() const { return ___showLogoAction_7; }
	inline ShowLogoAction_t1883935896 ** get_address_of_showLogoAction_7() { return &___showLogoAction_7; }
	inline void set_showLogoAction_7(ShowLogoAction_t1883935896 * value)
	{
		___showLogoAction_7 = value;
		Il2CppCodeGenWriteBarrier(&___showLogoAction_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
