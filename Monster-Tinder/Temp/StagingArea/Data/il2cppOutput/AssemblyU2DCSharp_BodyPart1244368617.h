#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BodyPartSlot[]
struct BodyPartSlotU5BU5D_t4000779952;
// System.Collections.Generic.Dictionary`2<BodyPartSlot/BodyPartType,System.Collections.Generic.List`1<UnityEngine.GameObject>>
struct Dictionary_2_t2768744657;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t948534547;
// System.Collections.Generic.List`1<BodyPart>
struct List_1_t613489749;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// UnityEngine.Sprite
struct Sprite_t309593783;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_BodyPart_ElementType3370823878.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_BodyPartSlot_BodyPartType4191074093.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BodyPart
struct  BodyPart_t1244368617  : public MonoBehaviour_t1158329972
{
public:
	// BodyPartSlot[] BodyPart::slots
	BodyPartSlotU5BU5D_t4000779952* ___slots_3;
	// UnityEngine.BoxCollider2D BodyPart::m_collider
	BoxCollider2D_t948534547 * ___m_collider_5;
	// System.Collections.Generic.List`1<BodyPart> BodyPart::theseBodyParts
	List_1_t613489749 * ___theseBodyParts_8;
	// BodyPart/ElementType BodyPart::m_type
	int32_t ___m_type_9;
	// System.Single BodyPart::m_minRotation
	float ___m_minRotation_10;
	// System.Single BodyPart::m_maxRotation
	float ___m_maxRotation_11;
	// UnityEngine.SpriteRenderer BodyPart::m_spriteRenderer
	SpriteRenderer_t1209076198 * ___m_spriteRenderer_12;
	// UnityEngine.Color BodyPart::m_origColor
	Color_t2020392075  ___m_origColor_13;
	// UnityEngine.Sprite BodyPart::m_setsprite
	Sprite_t309593783 * ___m_setsprite_14;
	// BodyPartSlot/BodyPartType BodyPart::m_bodyType
	int32_t ___m_bodyType_15;

public:
	inline static int32_t get_offset_of_slots_3() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___slots_3)); }
	inline BodyPartSlotU5BU5D_t4000779952* get_slots_3() const { return ___slots_3; }
	inline BodyPartSlotU5BU5D_t4000779952** get_address_of_slots_3() { return &___slots_3; }
	inline void set_slots_3(BodyPartSlotU5BU5D_t4000779952* value)
	{
		___slots_3 = value;
		Il2CppCodeGenWriteBarrier(&___slots_3, value);
	}

	inline static int32_t get_offset_of_m_collider_5() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_collider_5)); }
	inline BoxCollider2D_t948534547 * get_m_collider_5() const { return ___m_collider_5; }
	inline BoxCollider2D_t948534547 ** get_address_of_m_collider_5() { return &___m_collider_5; }
	inline void set_m_collider_5(BoxCollider2D_t948534547 * value)
	{
		___m_collider_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_collider_5, value);
	}

	inline static int32_t get_offset_of_theseBodyParts_8() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___theseBodyParts_8)); }
	inline List_1_t613489749 * get_theseBodyParts_8() const { return ___theseBodyParts_8; }
	inline List_1_t613489749 ** get_address_of_theseBodyParts_8() { return &___theseBodyParts_8; }
	inline void set_theseBodyParts_8(List_1_t613489749 * value)
	{
		___theseBodyParts_8 = value;
		Il2CppCodeGenWriteBarrier(&___theseBodyParts_8, value);
	}

	inline static int32_t get_offset_of_m_type_9() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_type_9)); }
	inline int32_t get_m_type_9() const { return ___m_type_9; }
	inline int32_t* get_address_of_m_type_9() { return &___m_type_9; }
	inline void set_m_type_9(int32_t value)
	{
		___m_type_9 = value;
	}

	inline static int32_t get_offset_of_m_minRotation_10() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_minRotation_10)); }
	inline float get_m_minRotation_10() const { return ___m_minRotation_10; }
	inline float* get_address_of_m_minRotation_10() { return &___m_minRotation_10; }
	inline void set_m_minRotation_10(float value)
	{
		___m_minRotation_10 = value;
	}

	inline static int32_t get_offset_of_m_maxRotation_11() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_maxRotation_11)); }
	inline float get_m_maxRotation_11() const { return ___m_maxRotation_11; }
	inline float* get_address_of_m_maxRotation_11() { return &___m_maxRotation_11; }
	inline void set_m_maxRotation_11(float value)
	{
		___m_maxRotation_11 = value;
	}

	inline static int32_t get_offset_of_m_spriteRenderer_12() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_spriteRenderer_12)); }
	inline SpriteRenderer_t1209076198 * get_m_spriteRenderer_12() const { return ___m_spriteRenderer_12; }
	inline SpriteRenderer_t1209076198 ** get_address_of_m_spriteRenderer_12() { return &___m_spriteRenderer_12; }
	inline void set_m_spriteRenderer_12(SpriteRenderer_t1209076198 * value)
	{
		___m_spriteRenderer_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_spriteRenderer_12, value);
	}

	inline static int32_t get_offset_of_m_origColor_13() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_origColor_13)); }
	inline Color_t2020392075  get_m_origColor_13() const { return ___m_origColor_13; }
	inline Color_t2020392075 * get_address_of_m_origColor_13() { return &___m_origColor_13; }
	inline void set_m_origColor_13(Color_t2020392075  value)
	{
		___m_origColor_13 = value;
	}

	inline static int32_t get_offset_of_m_setsprite_14() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_setsprite_14)); }
	inline Sprite_t309593783 * get_m_setsprite_14() const { return ___m_setsprite_14; }
	inline Sprite_t309593783 ** get_address_of_m_setsprite_14() { return &___m_setsprite_14; }
	inline void set_m_setsprite_14(Sprite_t309593783 * value)
	{
		___m_setsprite_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_setsprite_14, value);
	}

	inline static int32_t get_offset_of_m_bodyType_15() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617, ___m_bodyType_15)); }
	inline int32_t get_m_bodyType_15() const { return ___m_bodyType_15; }
	inline int32_t* get_address_of_m_bodyType_15() { return &___m_bodyType_15; }
	inline void set_m_bodyType_15(int32_t value)
	{
		___m_bodyType_15 = value;
	}
};

struct BodyPart_t1244368617_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<BodyPartSlot/BodyPartType,System.Collections.Generic.List`1<UnityEngine.GameObject>> BodyPart::bodyParts
	Dictionary_2_t2768744657 * ___bodyParts_4;
	// System.Collections.Generic.Dictionary`2<BodyPartSlot/BodyPartType,System.Collections.Generic.List`1<UnityEngine.GameObject>> BodyPart::usableBodyParts
	Dictionary_2_t2768744657 * ___usableBodyParts_6;
	// System.Single BodyPart::ms_placementTolerance
	float ___ms_placementTolerance_7;

public:
	inline static int32_t get_offset_of_bodyParts_4() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617_StaticFields, ___bodyParts_4)); }
	inline Dictionary_2_t2768744657 * get_bodyParts_4() const { return ___bodyParts_4; }
	inline Dictionary_2_t2768744657 ** get_address_of_bodyParts_4() { return &___bodyParts_4; }
	inline void set_bodyParts_4(Dictionary_2_t2768744657 * value)
	{
		___bodyParts_4 = value;
		Il2CppCodeGenWriteBarrier(&___bodyParts_4, value);
	}

	inline static int32_t get_offset_of_usableBodyParts_6() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617_StaticFields, ___usableBodyParts_6)); }
	inline Dictionary_2_t2768744657 * get_usableBodyParts_6() const { return ___usableBodyParts_6; }
	inline Dictionary_2_t2768744657 ** get_address_of_usableBodyParts_6() { return &___usableBodyParts_6; }
	inline void set_usableBodyParts_6(Dictionary_2_t2768744657 * value)
	{
		___usableBodyParts_6 = value;
		Il2CppCodeGenWriteBarrier(&___usableBodyParts_6, value);
	}

	inline static int32_t get_offset_of_ms_placementTolerance_7() { return static_cast<int32_t>(offsetof(BodyPart_t1244368617_StaticFields, ___ms_placementTolerance_7)); }
	inline float get_ms_placementTolerance_7() const { return ___ms_placementTolerance_7; }
	inline float* get_address_of_ms_placementTolerance_7() { return &___ms_placementTolerance_7; }
	inline void set_ms_placementTolerance_7(float value)
	{
		___ms_placementTolerance_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
