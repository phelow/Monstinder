#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SessionManager
struct  SessionManager_t2831357987  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text SessionManager::m_timerText
	Text_t356221433 * ___m_timerText_4;
	// UnityEngine.UI.Text SessionManager::m_matchesNeededText
	Text_t356221433 * ___m_matchesNeededText_5;
	// UnityEngine.AudioSource SessionManager::m_audioSource
	AudioSource_t1135106623 * ___m_audioSource_6;
	// UnityEngine.AudioClip SessionManager::m_alarmClip
	AudioClip_t1932558630 * ___m_alarmClip_7;
	// UnityEngine.GameObject SessionManager::m_highscoreSpawnPosition
	GameObject_t1756533147 * ___m_highscoreSpawnPosition_8;
	// UnityEngine.GameObject[] SessionManager::m_endGameDestruction
	GameObjectU5BU5D_t3057952154* ___m_endGameDestruction_9;
	// System.Int32 SessionManager::time
	int32_t ___time_10;

public:
	inline static int32_t get_offset_of_m_timerText_4() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___m_timerText_4)); }
	inline Text_t356221433 * get_m_timerText_4() const { return ___m_timerText_4; }
	inline Text_t356221433 ** get_address_of_m_timerText_4() { return &___m_timerText_4; }
	inline void set_m_timerText_4(Text_t356221433 * value)
	{
		___m_timerText_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_timerText_4, value);
	}

	inline static int32_t get_offset_of_m_matchesNeededText_5() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___m_matchesNeededText_5)); }
	inline Text_t356221433 * get_m_matchesNeededText_5() const { return ___m_matchesNeededText_5; }
	inline Text_t356221433 ** get_address_of_m_matchesNeededText_5() { return &___m_matchesNeededText_5; }
	inline void set_m_matchesNeededText_5(Text_t356221433 * value)
	{
		___m_matchesNeededText_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_matchesNeededText_5, value);
	}

	inline static int32_t get_offset_of_m_audioSource_6() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___m_audioSource_6)); }
	inline AudioSource_t1135106623 * get_m_audioSource_6() const { return ___m_audioSource_6; }
	inline AudioSource_t1135106623 ** get_address_of_m_audioSource_6() { return &___m_audioSource_6; }
	inline void set_m_audioSource_6(AudioSource_t1135106623 * value)
	{
		___m_audioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_audioSource_6, value);
	}

	inline static int32_t get_offset_of_m_alarmClip_7() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___m_alarmClip_7)); }
	inline AudioClip_t1932558630 * get_m_alarmClip_7() const { return ___m_alarmClip_7; }
	inline AudioClip_t1932558630 ** get_address_of_m_alarmClip_7() { return &___m_alarmClip_7; }
	inline void set_m_alarmClip_7(AudioClip_t1932558630 * value)
	{
		___m_alarmClip_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_alarmClip_7, value);
	}

	inline static int32_t get_offset_of_m_highscoreSpawnPosition_8() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___m_highscoreSpawnPosition_8)); }
	inline GameObject_t1756533147 * get_m_highscoreSpawnPosition_8() const { return ___m_highscoreSpawnPosition_8; }
	inline GameObject_t1756533147 ** get_address_of_m_highscoreSpawnPosition_8() { return &___m_highscoreSpawnPosition_8; }
	inline void set_m_highscoreSpawnPosition_8(GameObject_t1756533147 * value)
	{
		___m_highscoreSpawnPosition_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_highscoreSpawnPosition_8, value);
	}

	inline static int32_t get_offset_of_m_endGameDestruction_9() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___m_endGameDestruction_9)); }
	inline GameObjectU5BU5D_t3057952154* get_m_endGameDestruction_9() const { return ___m_endGameDestruction_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_endGameDestruction_9() { return &___m_endGameDestruction_9; }
	inline void set_m_endGameDestruction_9(GameObjectU5BU5D_t3057952154* value)
	{
		___m_endGameDestruction_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_endGameDestruction_9, value);
	}

	inline static int32_t get_offset_of_time_10() { return static_cast<int32_t>(offsetof(SessionManager_t2831357987, ___time_10)); }
	inline int32_t get_time_10() const { return ___time_10; }
	inline int32_t* get_address_of_time_10() { return &___time_10; }
	inline void set_time_10(int32_t value)
	{
		___time_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
