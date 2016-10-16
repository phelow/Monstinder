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
// Profile
struct Profile_t618263825;
// PlayerProfile
struct PlayerProfile_t962272206;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchChoice
struct  MatchChoice_t718402754  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MatchChoice::m_monster
	GameObject_t1756533147 * ___m_monster_2;
	// UnityEngine.GameObject MatchChoice::m_monsterReference
	GameObject_t1756533147 * ___m_monsterReference_3;
	// Profile MatchChoice::m_monsterProfile
	Profile_t618263825 * ___m_monsterProfile_4;
	// UnityEngine.UI.Button MatchChoice::m_button
	Button_t2872111280 * ___m_button_6;

public:
	inline static int32_t get_offset_of_m_monster_2() { return static_cast<int32_t>(offsetof(MatchChoice_t718402754, ___m_monster_2)); }
	inline GameObject_t1756533147 * get_m_monster_2() const { return ___m_monster_2; }
	inline GameObject_t1756533147 ** get_address_of_m_monster_2() { return &___m_monster_2; }
	inline void set_m_monster_2(GameObject_t1756533147 * value)
	{
		___m_monster_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_monster_2, value);
	}

	inline static int32_t get_offset_of_m_monsterReference_3() { return static_cast<int32_t>(offsetof(MatchChoice_t718402754, ___m_monsterReference_3)); }
	inline GameObject_t1756533147 * get_m_monsterReference_3() const { return ___m_monsterReference_3; }
	inline GameObject_t1756533147 ** get_address_of_m_monsterReference_3() { return &___m_monsterReference_3; }
	inline void set_m_monsterReference_3(GameObject_t1756533147 * value)
	{
		___m_monsterReference_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_monsterReference_3, value);
	}

	inline static int32_t get_offset_of_m_monsterProfile_4() { return static_cast<int32_t>(offsetof(MatchChoice_t718402754, ___m_monsterProfile_4)); }
	inline Profile_t618263825 * get_m_monsterProfile_4() const { return ___m_monsterProfile_4; }
	inline Profile_t618263825 ** get_address_of_m_monsterProfile_4() { return &___m_monsterProfile_4; }
	inline void set_m_monsterProfile_4(Profile_t618263825 * value)
	{
		___m_monsterProfile_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_monsterProfile_4, value);
	}

	inline static int32_t get_offset_of_m_button_6() { return static_cast<int32_t>(offsetof(MatchChoice_t718402754, ___m_button_6)); }
	inline Button_t2872111280 * get_m_button_6() const { return ___m_button_6; }
	inline Button_t2872111280 ** get_address_of_m_button_6() { return &___m_button_6; }
	inline void set_m_button_6(Button_t2872111280 * value)
	{
		___m_button_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_button_6, value);
	}
};

struct MatchChoice_t718402754_StaticFields
{
public:
	// PlayerProfile MatchChoice::ms_playerProfile
	PlayerProfile_t962272206 * ___ms_playerProfile_5;

public:
	inline static int32_t get_offset_of_ms_playerProfile_5() { return static_cast<int32_t>(offsetof(MatchChoice_t718402754_StaticFields, ___ms_playerProfile_5)); }
	inline PlayerProfile_t962272206 * get_ms_playerProfile_5() const { return ___ms_playerProfile_5; }
	inline PlayerProfile_t962272206 ** get_address_of_ms_playerProfile_5() { return &___ms_playerProfile_5; }
	inline void set_ms_playerProfile_5(PlayerProfile_t962272206 * value)
	{
		___ms_playerProfile_5 = value;
		Il2CppCodeGenWriteBarrier(&___ms_playerProfile_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
