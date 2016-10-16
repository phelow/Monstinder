#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BodyPart
struct BodyPart_t1244368617;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_BodyPartSlot_BodyPartType4191074093.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyPartSlot
struct  BodyPartSlot_t1362323901  : public MonoBehaviour_t1158329972
{
public:
	// BodyPartSlot/BodyPartType BodyPartSlot::m_slotType
	int32_t ___m_slotType_2;
	// BodyPart BodyPartSlot::m_parentPart
	BodyPart_t1244368617 * ___m_parentPart_3;
	// System.Int32 BodyPartSlot::m_depth
	int32_t ___m_depth_4;

public:
	inline static int32_t get_offset_of_m_slotType_2() { return static_cast<int32_t>(offsetof(BodyPartSlot_t1362323901, ___m_slotType_2)); }
	inline int32_t get_m_slotType_2() const { return ___m_slotType_2; }
	inline int32_t* get_address_of_m_slotType_2() { return &___m_slotType_2; }
	inline void set_m_slotType_2(int32_t value)
	{
		___m_slotType_2 = value;
	}

	inline static int32_t get_offset_of_m_parentPart_3() { return static_cast<int32_t>(offsetof(BodyPartSlot_t1362323901, ___m_parentPart_3)); }
	inline BodyPart_t1244368617 * get_m_parentPart_3() const { return ___m_parentPart_3; }
	inline BodyPart_t1244368617 ** get_address_of_m_parentPart_3() { return &___m_parentPart_3; }
	inline void set_m_parentPart_3(BodyPart_t1244368617 * value)
	{
		___m_parentPart_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_parentPart_3, value);
	}

	inline static int32_t get_offset_of_m_depth_4() { return static_cast<int32_t>(offsetof(BodyPartSlot_t1362323901, ___m_depth_4)); }
	inline int32_t get_m_depth_4() const { return ___m_depth_4; }
	inline int32_t* get_address_of_m_depth_4() { return &___m_depth_4; }
	inline void set_m_depth_4(int32_t value)
	{
		___m_depth_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
