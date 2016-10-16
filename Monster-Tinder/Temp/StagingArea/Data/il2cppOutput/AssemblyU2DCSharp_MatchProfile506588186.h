#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MatchProfile
struct MatchProfile_t506588186;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "AssemblyU2DCSharp_Profile618263825.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchProfile
struct  MatchProfile_t506588186  : public Profile_t618263825
{
public:
	// UnityEngine.GameObject MatchProfile::m_nextMatch
	GameObject_t1756533147 * ___m_nextMatch_14;
	// UnityEngine.SpriteRenderer MatchProfile::m_polaroid
	SpriteRenderer_t1209076198 * ___m_polaroid_15;
	// System.Boolean MatchProfile::m_isMatch
	bool ___m_isMatch_16;

public:
	inline static int32_t get_offset_of_m_nextMatch_14() { return static_cast<int32_t>(offsetof(MatchProfile_t506588186, ___m_nextMatch_14)); }
	inline GameObject_t1756533147 * get_m_nextMatch_14() const { return ___m_nextMatch_14; }
	inline GameObject_t1756533147 ** get_address_of_m_nextMatch_14() { return &___m_nextMatch_14; }
	inline void set_m_nextMatch_14(GameObject_t1756533147 * value)
	{
		___m_nextMatch_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_nextMatch_14, value);
	}

	inline static int32_t get_offset_of_m_polaroid_15() { return static_cast<int32_t>(offsetof(MatchProfile_t506588186, ___m_polaroid_15)); }
	inline SpriteRenderer_t1209076198 * get_m_polaroid_15() const { return ___m_polaroid_15; }
	inline SpriteRenderer_t1209076198 ** get_address_of_m_polaroid_15() { return &___m_polaroid_15; }
	inline void set_m_polaroid_15(SpriteRenderer_t1209076198 * value)
	{
		___m_polaroid_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_polaroid_15, value);
	}

	inline static int32_t get_offset_of_m_isMatch_16() { return static_cast<int32_t>(offsetof(MatchProfile_t506588186, ___m_isMatch_16)); }
	inline bool get_m_isMatch_16() const { return ___m_isMatch_16; }
	inline bool* get_address_of_m_isMatch_16() { return &___m_isMatch_16; }
	inline void set_m_isMatch_16(bool value)
	{
		___m_isMatch_16 = value;
	}
};

struct MatchProfile_t506588186_StaticFields
{
public:
	// MatchProfile MatchProfile::ms_currentMatch
	MatchProfile_t506588186 * ___ms_currentMatch_13;

public:
	inline static int32_t get_offset_of_ms_currentMatch_13() { return static_cast<int32_t>(offsetof(MatchProfile_t506588186_StaticFields, ___ms_currentMatch_13)); }
	inline MatchProfile_t506588186 * get_ms_currentMatch_13() const { return ___ms_currentMatch_13; }
	inline MatchProfile_t506588186 ** get_address_of_ms_currentMatch_13() { return &___ms_currentMatch_13; }
	inline void set_ms_currentMatch_13(MatchProfile_t506588186 * value)
	{
		___ms_currentMatch_13 = value;
		Il2CppCodeGenWriteBarrier(&___ms_currentMatch_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
