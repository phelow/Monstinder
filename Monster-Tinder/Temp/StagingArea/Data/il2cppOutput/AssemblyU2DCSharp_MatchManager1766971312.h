#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MatchManager
struct MatchManager_t1766971312;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatchManager
struct  MatchManager_t1766971312  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject MatchManager::m_matchDockingPoint
	GameObject_t1756533147 * ___m_matchDockingPoint_5;
	// UnityEngine.GameObject MatchManager::m_dockedMatch
	GameObject_t1756533147 * ___m_dockedMatch_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MatchManager::m_rejectedMatches
	List_1_t1125654279 * ___m_rejectedMatches_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MatchManager::m_acceptedMatches
	List_1_t1125654279 * ___m_acceptedMatches_8;
	// UnityEngine.GameObject MatchManager::m_originalMatch
	GameObject_t1756533147 * ___m_originalMatch_9;

public:
	inline static int32_t get_offset_of_m_matchDockingPoint_5() { return static_cast<int32_t>(offsetof(MatchManager_t1766971312, ___m_matchDockingPoint_5)); }
	inline GameObject_t1756533147 * get_m_matchDockingPoint_5() const { return ___m_matchDockingPoint_5; }
	inline GameObject_t1756533147 ** get_address_of_m_matchDockingPoint_5() { return &___m_matchDockingPoint_5; }
	inline void set_m_matchDockingPoint_5(GameObject_t1756533147 * value)
	{
		___m_matchDockingPoint_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_matchDockingPoint_5, value);
	}

	inline static int32_t get_offset_of_m_dockedMatch_6() { return static_cast<int32_t>(offsetof(MatchManager_t1766971312, ___m_dockedMatch_6)); }
	inline GameObject_t1756533147 * get_m_dockedMatch_6() const { return ___m_dockedMatch_6; }
	inline GameObject_t1756533147 ** get_address_of_m_dockedMatch_6() { return &___m_dockedMatch_6; }
	inline void set_m_dockedMatch_6(GameObject_t1756533147 * value)
	{
		___m_dockedMatch_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_dockedMatch_6, value);
	}

	inline static int32_t get_offset_of_m_rejectedMatches_7() { return static_cast<int32_t>(offsetof(MatchManager_t1766971312, ___m_rejectedMatches_7)); }
	inline List_1_t1125654279 * get_m_rejectedMatches_7() const { return ___m_rejectedMatches_7; }
	inline List_1_t1125654279 ** get_address_of_m_rejectedMatches_7() { return &___m_rejectedMatches_7; }
	inline void set_m_rejectedMatches_7(List_1_t1125654279 * value)
	{
		___m_rejectedMatches_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_rejectedMatches_7, value);
	}

	inline static int32_t get_offset_of_m_acceptedMatches_8() { return static_cast<int32_t>(offsetof(MatchManager_t1766971312, ___m_acceptedMatches_8)); }
	inline List_1_t1125654279 * get_m_acceptedMatches_8() const { return ___m_acceptedMatches_8; }
	inline List_1_t1125654279 ** get_address_of_m_acceptedMatches_8() { return &___m_acceptedMatches_8; }
	inline void set_m_acceptedMatches_8(List_1_t1125654279 * value)
	{
		___m_acceptedMatches_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_acceptedMatches_8, value);
	}

	inline static int32_t get_offset_of_m_originalMatch_9() { return static_cast<int32_t>(offsetof(MatchManager_t1766971312, ___m_originalMatch_9)); }
	inline GameObject_t1756533147 * get_m_originalMatch_9() const { return ___m_originalMatch_9; }
	inline GameObject_t1756533147 ** get_address_of_m_originalMatch_9() { return &___m_originalMatch_9; }
	inline void set_m_originalMatch_9(GameObject_t1756533147 * value)
	{
		___m_originalMatch_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_originalMatch_9, value);
	}
};

struct MatchManager_t1766971312_StaticFields
{
public:
	// MatchManager MatchManager::ms_instance
	MatchManager_t1766971312 * ___ms_instance_4;

public:
	inline static int32_t get_offset_of_ms_instance_4() { return static_cast<int32_t>(offsetof(MatchManager_t1766971312_StaticFields, ___ms_instance_4)); }
	inline MatchManager_t1766971312 * get_ms_instance_4() const { return ___ms_instance_4; }
	inline MatchManager_t1766971312 ** get_address_of_ms_instance_4() { return &___ms_instance_4; }
	inline void set_ms_instance_4(MatchManager_t1766971312 * value)
	{
		___ms_instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___ms_instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
