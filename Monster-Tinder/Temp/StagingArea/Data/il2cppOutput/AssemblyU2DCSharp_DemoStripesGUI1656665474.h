#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// StripeScreenFader
struct StripeScreenFader_t408566975;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoStripesGUI
struct  DemoStripesGUI_t1656665474  : public MonoBehaviour_t1158329972
{
public:
	// StripeScreenFader DemoStripesGUI::component
	StripeScreenFader_t408566975 * ___component_2;
	// UnityEngine.Texture2D DemoStripesGUI::logo
	Texture2D_t3542995729 * ___logo_3;
	// System.Boolean DemoStripesGUI::showLogo
	bool ___showLogo_4;
	// System.Single DemoStripesGUI::_r
	float ____r_5;
	// System.Single DemoStripesGUI::_g
	float ____g_6;
	// System.Single DemoStripesGUI::_b
	float ____b_7;
	// System.Single DemoStripesGUI::fadeSpeed
	float ___fadeSpeed_8;

public:
	inline static int32_t get_offset_of_component_2() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ___component_2)); }
	inline StripeScreenFader_t408566975 * get_component_2() const { return ___component_2; }
	inline StripeScreenFader_t408566975 ** get_address_of_component_2() { return &___component_2; }
	inline void set_component_2(StripeScreenFader_t408566975 * value)
	{
		___component_2 = value;
		Il2CppCodeGenWriteBarrier(&___component_2, value);
	}

	inline static int32_t get_offset_of_logo_3() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ___logo_3)); }
	inline Texture2D_t3542995729 * get_logo_3() const { return ___logo_3; }
	inline Texture2D_t3542995729 ** get_address_of_logo_3() { return &___logo_3; }
	inline void set_logo_3(Texture2D_t3542995729 * value)
	{
		___logo_3 = value;
		Il2CppCodeGenWriteBarrier(&___logo_3, value);
	}

	inline static int32_t get_offset_of_showLogo_4() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ___showLogo_4)); }
	inline bool get_showLogo_4() const { return ___showLogo_4; }
	inline bool* get_address_of_showLogo_4() { return &___showLogo_4; }
	inline void set_showLogo_4(bool value)
	{
		___showLogo_4 = value;
	}

	inline static int32_t get_offset_of__r_5() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ____r_5)); }
	inline float get__r_5() const { return ____r_5; }
	inline float* get_address_of__r_5() { return &____r_5; }
	inline void set__r_5(float value)
	{
		____r_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ____g_6)); }
	inline float get__g_6() const { return ____g_6; }
	inline float* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(float value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__b_7() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ____b_7)); }
	inline float get__b_7() const { return ____b_7; }
	inline float* get_address_of__b_7() { return &____b_7; }
	inline void set__b_7(float value)
	{
		____b_7 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_8() { return static_cast<int32_t>(offsetof(DemoStripesGUI_t1656665474, ___fadeSpeed_8)); }
	inline float get_fadeSpeed_8() const { return ___fadeSpeed_8; }
	inline float* get_address_of_fadeSpeed_8() { return &___fadeSpeed_8; }
	inline void set_fadeSpeed_8(float value)
	{
		___fadeSpeed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
