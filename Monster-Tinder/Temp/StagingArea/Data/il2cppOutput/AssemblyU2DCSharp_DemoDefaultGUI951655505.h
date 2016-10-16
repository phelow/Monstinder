#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DefaultScreenFader
struct DefaultScreenFader_t1185289585;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// ScreenFaderComponents.Actions.ShowLogoAction
struct ShowLogoAction_t1883935896;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoDefaultGUI
struct  DemoDefaultGUI_t951655505  : public MonoBehaviour_t1158329972
{
public:
	// DefaultScreenFader DemoDefaultGUI::component
	DefaultScreenFader_t1185289585 * ___component_2;
	// UnityEngine.Texture2D DemoDefaultGUI::logo
	Texture2D_t3542995729 * ___logo_3;
	// System.Single DemoDefaultGUI::_r
	float ____r_4;
	// System.Single DemoDefaultGUI::_g
	float ____g_5;
	// System.Single DemoDefaultGUI::_b
	float ____b_6;
	// System.Single DemoDefaultGUI::r
	float ___r_7;
	// System.Single DemoDefaultGUI::g
	float ___g_8;
	// System.Single DemoDefaultGUI::b
	float ___b_9;
	// System.Single DemoDefaultGUI::fadeSpeed
	float ___fadeSpeed_10;
	// ScreenFaderComponents.Actions.ShowLogoAction DemoDefaultGUI::showLogoAction
	ShowLogoAction_t1883935896 * ___showLogoAction_11;

public:
	inline static int32_t get_offset_of_component_2() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___component_2)); }
	inline DefaultScreenFader_t1185289585 * get_component_2() const { return ___component_2; }
	inline DefaultScreenFader_t1185289585 ** get_address_of_component_2() { return &___component_2; }
	inline void set_component_2(DefaultScreenFader_t1185289585 * value)
	{
		___component_2 = value;
		Il2CppCodeGenWriteBarrier(&___component_2, value);
	}

	inline static int32_t get_offset_of_logo_3() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___logo_3)); }
	inline Texture2D_t3542995729 * get_logo_3() const { return ___logo_3; }
	inline Texture2D_t3542995729 ** get_address_of_logo_3() { return &___logo_3; }
	inline void set_logo_3(Texture2D_t3542995729 * value)
	{
		___logo_3 = value;
		Il2CppCodeGenWriteBarrier(&___logo_3, value);
	}

	inline static int32_t get_offset_of__r_4() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ____r_4)); }
	inline float get__r_4() const { return ____r_4; }
	inline float* get_address_of__r_4() { return &____r_4; }
	inline void set__r_4(float value)
	{
		____r_4 = value;
	}

	inline static int32_t get_offset_of__g_5() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ____g_5)); }
	inline float get__g_5() const { return ____g_5; }
	inline float* get_address_of__g_5() { return &____g_5; }
	inline void set__g_5(float value)
	{
		____g_5 = value;
	}

	inline static int32_t get_offset_of__b_6() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ____b_6)); }
	inline float get__b_6() const { return ____b_6; }
	inline float* get_address_of__b_6() { return &____b_6; }
	inline void set__b_6(float value)
	{
		____b_6 = value;
	}

	inline static int32_t get_offset_of_r_7() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___r_7)); }
	inline float get_r_7() const { return ___r_7; }
	inline float* get_address_of_r_7() { return &___r_7; }
	inline void set_r_7(float value)
	{
		___r_7 = value;
	}

	inline static int32_t get_offset_of_g_8() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___g_8)); }
	inline float get_g_8() const { return ___g_8; }
	inline float* get_address_of_g_8() { return &___g_8; }
	inline void set_g_8(float value)
	{
		___g_8 = value;
	}

	inline static int32_t get_offset_of_b_9() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___b_9)); }
	inline float get_b_9() const { return ___b_9; }
	inline float* get_address_of_b_9() { return &___b_9; }
	inline void set_b_9(float value)
	{
		___b_9 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_10() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___fadeSpeed_10)); }
	inline float get_fadeSpeed_10() const { return ___fadeSpeed_10; }
	inline float* get_address_of_fadeSpeed_10() { return &___fadeSpeed_10; }
	inline void set_fadeSpeed_10(float value)
	{
		___fadeSpeed_10 = value;
	}

	inline static int32_t get_offset_of_showLogoAction_11() { return static_cast<int32_t>(offsetof(DemoDefaultGUI_t951655505, ___showLogoAction_11)); }
	inline ShowLogoAction_t1883935896 * get_showLogoAction_11() const { return ___showLogoAction_11; }
	inline ShowLogoAction_t1883935896 ** get_address_of_showLogoAction_11() { return &___showLogoAction_11; }
	inline void set_showLogoAction_11(ShowLogoAction_t1883935896 * value)
	{
		___showLogoAction_11 = value;
		Il2CppCodeGenWriteBarrier(&___showLogoAction_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
