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
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// System.Collections.Generic.Dictionary`2<BodyPartSlot/BodyPartType,System.Collections.Generic.Dictionary`2<BodyPart/ElementType,UnityEngine.Object[]>>
struct Dictionary_2_t462435199;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadSprite
struct  LoadSprite_t3708329601  : public MonoBehaviour_t1158329972
{
public:
	// BodyPart LoadSprite::m_bp
	BodyPart_t1244368617 * ___m_bp_2;
	// UnityEngine.SpriteRenderer LoadSprite::m_spriteRenderer
	SpriteRenderer_t1209076198 * ___m_spriteRenderer_3;

public:
	inline static int32_t get_offset_of_m_bp_2() { return static_cast<int32_t>(offsetof(LoadSprite_t3708329601, ___m_bp_2)); }
	inline BodyPart_t1244368617 * get_m_bp_2() const { return ___m_bp_2; }
	inline BodyPart_t1244368617 ** get_address_of_m_bp_2() { return &___m_bp_2; }
	inline void set_m_bp_2(BodyPart_t1244368617 * value)
	{
		___m_bp_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_bp_2, value);
	}

	inline static int32_t get_offset_of_m_spriteRenderer_3() { return static_cast<int32_t>(offsetof(LoadSprite_t3708329601, ___m_spriteRenderer_3)); }
	inline SpriteRenderer_t1209076198 * get_m_spriteRenderer_3() const { return ___m_spriteRenderer_3; }
	inline SpriteRenderer_t1209076198 ** get_address_of_m_spriteRenderer_3() { return &___m_spriteRenderer_3; }
	inline void set_m_spriteRenderer_3(SpriteRenderer_t1209076198 * value)
	{
		___m_spriteRenderer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_spriteRenderer_3, value);
	}
};

struct LoadSprite_t3708329601_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<BodyPartSlot/BodyPartType,System.Collections.Generic.Dictionary`2<BodyPart/ElementType,UnityEngine.Object[]>> LoadSprite::ms_sprites
	Dictionary_2_t462435199 * ___ms_sprites_4;

public:
	inline static int32_t get_offset_of_ms_sprites_4() { return static_cast<int32_t>(offsetof(LoadSprite_t3708329601_StaticFields, ___ms_sprites_4)); }
	inline Dictionary_2_t462435199 * get_ms_sprites_4() const { return ___ms_sprites_4; }
	inline Dictionary_2_t462435199 ** get_address_of_ms_sprites_4() { return &___ms_sprites_4; }
	inline void set_ms_sprites_4(Dictionary_2_t462435199 * value)
	{
		___ms_sprites_4 = value;
		Il2CppCodeGenWriteBarrier(&___ms_sprites_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
