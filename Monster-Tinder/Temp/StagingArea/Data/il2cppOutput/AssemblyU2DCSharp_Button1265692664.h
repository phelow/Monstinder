#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerProfile
struct PlayerProfile_t962272206;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Button
struct  Button_t1265692664  : public MonoBehaviour_t1158329972
{
public:
	// PlayerProfile Button::m_player
	PlayerProfile_t962272206 * ___m_player_2;
	// UnityEngine.AudioSource Button::m_audioSource
	AudioSource_t1135106623 * ___m_audioSource_3;

public:
	inline static int32_t get_offset_of_m_player_2() { return static_cast<int32_t>(offsetof(Button_t1265692664, ___m_player_2)); }
	inline PlayerProfile_t962272206 * get_m_player_2() const { return ___m_player_2; }
	inline PlayerProfile_t962272206 ** get_address_of_m_player_2() { return &___m_player_2; }
	inline void set_m_player_2(PlayerProfile_t962272206 * value)
	{
		___m_player_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_player_2, value);
	}

	inline static int32_t get_offset_of_m_audioSource_3() { return static_cast<int32_t>(offsetof(Button_t1265692664, ___m_audioSource_3)); }
	inline AudioSource_t1135106623 * get_m_audioSource_3() const { return ___m_audioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_m_audioSource_3() { return &___m_audioSource_3; }
	inline void set_m_audioSource_3(AudioSource_t1135106623 * value)
	{
		___m_audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_audioSource_3, value);
	}
};

struct Button_t1265692664_StaticFields
{
public:
	// System.Boolean Button::ms_active
	bool ___ms_active_4;

public:
	inline static int32_t get_offset_of_ms_active_4() { return static_cast<int32_t>(offsetof(Button_t1265692664_StaticFields, ___ms_active_4)); }
	inline bool get_ms_active_4() const { return ___ms_active_4; }
	inline bool* get_address_of_ms_active_4() { return &___ms_active_4; }
	inline void set_ms_active_4(bool value)
	{
		___ms_active_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
