#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Tutorializer
struct Tutorializer_t3416802430;
// UnityEngine.UI.Text
struct Text_t356221433;
// MatchChoice
struct MatchChoice_t718402754;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tutorializer
struct  Tutorializer_t3416802430  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Tutorializer::m_text
	Text_t356221433 * ___m_text_3;
	// MatchChoice Tutorializer::m_leftChoice
	MatchChoice_t718402754 * ___m_leftChoice_4;
	// MatchChoice Tutorializer::m_rightChoice
	MatchChoice_t718402754 * ___m_rightChoice_5;
	// UnityEngine.UI.Text Tutorializer::m_timerText
	Text_t356221433 * ___m_timerText_7;
	// UnityEngine.UI.Text Tutorializer::m_hintText
	Text_t356221433 * ___m_hintText_8;
	// UnityEngine.AudioSource Tutorializer::m_source
	AudioSource_t1135106623 * ___m_source_9;
	// UnityEngine.AudioClip Tutorializer::m_countingSound
	AudioClip_t1932558630 * ___m_countingSound_10;
	// UnityEngine.AudioClip Tutorializer::m_alarm
	AudioClip_t1932558630 * ___m_alarm_11;
	// UnityEngine.AudioClip Tutorializer::m_tick
	AudioClip_t1932558630 * ___m_tick_12;
	// UnityEngine.AudioClip Tutorializer::m_match
	AudioClip_t1932558630 * ___m_match_13;
	// UnityEngine.AudioClip Tutorializer::m_fail
	AudioClip_t1932558630 * ___m_fail_14;
	// UnityEngine.AudioClip Tutorializer::m_completeSound
	AudioClip_t1932558630 * ___m_completeSound_15;
	// UnityEngine.UI.Text Tutorializer::m_TutorialText
	Text_t356221433 * ___m_TutorialText_16;
	// UnityEngine.UI.Text Tutorializer::m_scoreText
	Text_t356221433 * ___m_scoreText_17;
	// System.Int32 Tutorializer::score
	int32_t ___score_18;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Tutorializer::matches
	List_1_t1125654279 * ___matches_19;

public:
	inline static int32_t get_offset_of_m_text_3() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_text_3)); }
	inline Text_t356221433 * get_m_text_3() const { return ___m_text_3; }
	inline Text_t356221433 ** get_address_of_m_text_3() { return &___m_text_3; }
	inline void set_m_text_3(Text_t356221433 * value)
	{
		___m_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_3, value);
	}

	inline static int32_t get_offset_of_m_leftChoice_4() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_leftChoice_4)); }
	inline MatchChoice_t718402754 * get_m_leftChoice_4() const { return ___m_leftChoice_4; }
	inline MatchChoice_t718402754 ** get_address_of_m_leftChoice_4() { return &___m_leftChoice_4; }
	inline void set_m_leftChoice_4(MatchChoice_t718402754 * value)
	{
		___m_leftChoice_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_leftChoice_4, value);
	}

	inline static int32_t get_offset_of_m_rightChoice_5() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_rightChoice_5)); }
	inline MatchChoice_t718402754 * get_m_rightChoice_5() const { return ___m_rightChoice_5; }
	inline MatchChoice_t718402754 ** get_address_of_m_rightChoice_5() { return &___m_rightChoice_5; }
	inline void set_m_rightChoice_5(MatchChoice_t718402754 * value)
	{
		___m_rightChoice_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_rightChoice_5, value);
	}

	inline static int32_t get_offset_of_m_timerText_7() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_timerText_7)); }
	inline Text_t356221433 * get_m_timerText_7() const { return ___m_timerText_7; }
	inline Text_t356221433 ** get_address_of_m_timerText_7() { return &___m_timerText_7; }
	inline void set_m_timerText_7(Text_t356221433 * value)
	{
		___m_timerText_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_timerText_7, value);
	}

	inline static int32_t get_offset_of_m_hintText_8() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_hintText_8)); }
	inline Text_t356221433 * get_m_hintText_8() const { return ___m_hintText_8; }
	inline Text_t356221433 ** get_address_of_m_hintText_8() { return &___m_hintText_8; }
	inline void set_m_hintText_8(Text_t356221433 * value)
	{
		___m_hintText_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_hintText_8, value);
	}

	inline static int32_t get_offset_of_m_source_9() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_source_9)); }
	inline AudioSource_t1135106623 * get_m_source_9() const { return ___m_source_9; }
	inline AudioSource_t1135106623 ** get_address_of_m_source_9() { return &___m_source_9; }
	inline void set_m_source_9(AudioSource_t1135106623 * value)
	{
		___m_source_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_source_9, value);
	}

	inline static int32_t get_offset_of_m_countingSound_10() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_countingSound_10)); }
	inline AudioClip_t1932558630 * get_m_countingSound_10() const { return ___m_countingSound_10; }
	inline AudioClip_t1932558630 ** get_address_of_m_countingSound_10() { return &___m_countingSound_10; }
	inline void set_m_countingSound_10(AudioClip_t1932558630 * value)
	{
		___m_countingSound_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_countingSound_10, value);
	}

	inline static int32_t get_offset_of_m_alarm_11() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_alarm_11)); }
	inline AudioClip_t1932558630 * get_m_alarm_11() const { return ___m_alarm_11; }
	inline AudioClip_t1932558630 ** get_address_of_m_alarm_11() { return &___m_alarm_11; }
	inline void set_m_alarm_11(AudioClip_t1932558630 * value)
	{
		___m_alarm_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_alarm_11, value);
	}

	inline static int32_t get_offset_of_m_tick_12() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_tick_12)); }
	inline AudioClip_t1932558630 * get_m_tick_12() const { return ___m_tick_12; }
	inline AudioClip_t1932558630 ** get_address_of_m_tick_12() { return &___m_tick_12; }
	inline void set_m_tick_12(AudioClip_t1932558630 * value)
	{
		___m_tick_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_tick_12, value);
	}

	inline static int32_t get_offset_of_m_match_13() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_match_13)); }
	inline AudioClip_t1932558630 * get_m_match_13() const { return ___m_match_13; }
	inline AudioClip_t1932558630 ** get_address_of_m_match_13() { return &___m_match_13; }
	inline void set_m_match_13(AudioClip_t1932558630 * value)
	{
		___m_match_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_match_13, value);
	}

	inline static int32_t get_offset_of_m_fail_14() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_fail_14)); }
	inline AudioClip_t1932558630 * get_m_fail_14() const { return ___m_fail_14; }
	inline AudioClip_t1932558630 ** get_address_of_m_fail_14() { return &___m_fail_14; }
	inline void set_m_fail_14(AudioClip_t1932558630 * value)
	{
		___m_fail_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_fail_14, value);
	}

	inline static int32_t get_offset_of_m_completeSound_15() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_completeSound_15)); }
	inline AudioClip_t1932558630 * get_m_completeSound_15() const { return ___m_completeSound_15; }
	inline AudioClip_t1932558630 ** get_address_of_m_completeSound_15() { return &___m_completeSound_15; }
	inline void set_m_completeSound_15(AudioClip_t1932558630 * value)
	{
		___m_completeSound_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_completeSound_15, value);
	}

	inline static int32_t get_offset_of_m_TutorialText_16() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_TutorialText_16)); }
	inline Text_t356221433 * get_m_TutorialText_16() const { return ___m_TutorialText_16; }
	inline Text_t356221433 ** get_address_of_m_TutorialText_16() { return &___m_TutorialText_16; }
	inline void set_m_TutorialText_16(Text_t356221433 * value)
	{
		___m_TutorialText_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_TutorialText_16, value);
	}

	inline static int32_t get_offset_of_m_scoreText_17() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___m_scoreText_17)); }
	inline Text_t356221433 * get_m_scoreText_17() const { return ___m_scoreText_17; }
	inline Text_t356221433 ** get_address_of_m_scoreText_17() { return &___m_scoreText_17; }
	inline void set_m_scoreText_17(Text_t356221433 * value)
	{
		___m_scoreText_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_scoreText_17, value);
	}

	inline static int32_t get_offset_of_score_18() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___score_18)); }
	inline int32_t get_score_18() const { return ___score_18; }
	inline int32_t* get_address_of_score_18() { return &___score_18; }
	inline void set_score_18(int32_t value)
	{
		___score_18 = value;
	}

	inline static int32_t get_offset_of_matches_19() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430, ___matches_19)); }
	inline List_1_t1125654279 * get_matches_19() const { return ___matches_19; }
	inline List_1_t1125654279 ** get_address_of_matches_19() { return &___matches_19; }
	inline void set_matches_19(List_1_t1125654279 * value)
	{
		___matches_19 = value;
		Il2CppCodeGenWriteBarrier(&___matches_19, value);
	}
};

struct Tutorializer_t3416802430_StaticFields
{
public:
	// Tutorializer Tutorializer::ms_instance
	Tutorializer_t3416802430 * ___ms_instance_2;
	// MatchChoice Tutorializer::ms_playerChoice
	MatchChoice_t718402754 * ___ms_playerChoice_6;

public:
	inline static int32_t get_offset_of_ms_instance_2() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430_StaticFields, ___ms_instance_2)); }
	inline Tutorializer_t3416802430 * get_ms_instance_2() const { return ___ms_instance_2; }
	inline Tutorializer_t3416802430 ** get_address_of_ms_instance_2() { return &___ms_instance_2; }
	inline void set_ms_instance_2(Tutorializer_t3416802430 * value)
	{
		___ms_instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___ms_instance_2, value);
	}

	inline static int32_t get_offset_of_ms_playerChoice_6() { return static_cast<int32_t>(offsetof(Tutorializer_t3416802430_StaticFields, ___ms_playerChoice_6)); }
	inline MatchChoice_t718402754 * get_ms_playerChoice_6() const { return ___ms_playerChoice_6; }
	inline MatchChoice_t718402754 ** get_address_of_ms_playerChoice_6() { return &___ms_playerChoice_6; }
	inline void set_ms_playerChoice_6(MatchChoice_t718402754 * value)
	{
		___ms_playerChoice_6 = value;
		Il2CppCodeGenWriteBarrier(&___ms_playerChoice_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
