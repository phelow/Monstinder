#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;

#include "AssemblyU2DCSharp_Button1265692664.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LikeButton
struct  LikeButton_t2617392451  : public Button_t1265692664
{
public:
	// UnityEngine.GameObject LikeButton::m_match
	GameObject_t1756533147 * ___m_match_5;
	// UnityEngine.AudioClip LikeButton::m_noMatchLikeClip
	AudioClip_t1932558630 * ___m_noMatchLikeClip_6;
	// UnityEngine.AudioClip LikeButton::m_matchLikeClip
	AudioClip_t1932558630 * ___m_matchLikeClip_7;

public:
	inline static int32_t get_offset_of_m_match_5() { return static_cast<int32_t>(offsetof(LikeButton_t2617392451, ___m_match_5)); }
	inline GameObject_t1756533147 * get_m_match_5() const { return ___m_match_5; }
	inline GameObject_t1756533147 ** get_address_of_m_match_5() { return &___m_match_5; }
	inline void set_m_match_5(GameObject_t1756533147 * value)
	{
		___m_match_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_match_5, value);
	}

	inline static int32_t get_offset_of_m_noMatchLikeClip_6() { return static_cast<int32_t>(offsetof(LikeButton_t2617392451, ___m_noMatchLikeClip_6)); }
	inline AudioClip_t1932558630 * get_m_noMatchLikeClip_6() const { return ___m_noMatchLikeClip_6; }
	inline AudioClip_t1932558630 ** get_address_of_m_noMatchLikeClip_6() { return &___m_noMatchLikeClip_6; }
	inline void set_m_noMatchLikeClip_6(AudioClip_t1932558630 * value)
	{
		___m_noMatchLikeClip_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_noMatchLikeClip_6, value);
	}

	inline static int32_t get_offset_of_m_matchLikeClip_7() { return static_cast<int32_t>(offsetof(LikeButton_t2617392451, ___m_matchLikeClip_7)); }
	inline AudioClip_t1932558630 * get_m_matchLikeClip_7() const { return ___m_matchLikeClip_7; }
	inline AudioClip_t1932558630 ** get_address_of_m_matchLikeClip_7() { return &___m_matchLikeClip_7; }
	inline void set_m_matchLikeClip_7(AudioClip_t1932558630 * value)
	{
		___m_matchLikeClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_matchLikeClip_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
