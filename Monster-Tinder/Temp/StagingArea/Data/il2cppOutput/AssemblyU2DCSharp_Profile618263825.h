#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// BodyPart
struct BodyPart_t1244368617;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.Dictionary`2<UnityEngine.SpriteRenderer,UnityEngine.Color>
struct Dictionary_2_t3390842008;
// UnityEngine.UI.Image
struct Image_t2042527209;
// System.Collections.Generic.Dictionary`2<BodyPart/ElementType,System.Collections.Generic.List`1<BodyPart/ElementType>>
struct Dictionary_2_t1636509663;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Profile
struct  Profile_t618263825  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject[] Profile::m_bodies
	GameObjectU5BU5D_t3057952154* ___m_bodies_2;
	// BodyPart Profile::m_body
	BodyPart_t1244368617 * ___m_body_3;
	// UnityEngine.GameObject Profile::m_bodySlot
	GameObject_t1756533147 * ___m_bodySlot_4;
	// System.Int32[] Profile::m_typeScores
	Int32U5BU5D_t3030399641* ___m_typeScores_5;
	// UnityEngine.UI.Text Profile::m_text
	Text_t356221433 * ___m_text_6;
	// System.Collections.IEnumerator Profile::m_highlightBodyPartsCoroutine
	Il2CppObject * ___m_highlightBodyPartsCoroutine_7;
	// System.Collections.Generic.Dictionary`2<UnityEngine.SpriteRenderer,UnityEngine.Color> Profile::m_toHighlight
	Dictionary_2_t3390842008 * ___m_toHighlight_8;
	// UnityEngine.Color Profile::m_highlightColor
	Color_t2020392075  ___m_highlightColor_9;
	// System.Boolean Profile::m_shouldInit
	bool ___m_shouldInit_10;
	// UnityEngine.UI.Image Profile::m_polaroidGraphic
	Image_t2042527209 * ___m_polaroidGraphic_11;

public:
	inline static int32_t get_offset_of_m_bodies_2() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_bodies_2)); }
	inline GameObjectU5BU5D_t3057952154* get_m_bodies_2() const { return ___m_bodies_2; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_m_bodies_2() { return &___m_bodies_2; }
	inline void set_m_bodies_2(GameObjectU5BU5D_t3057952154* value)
	{
		___m_bodies_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_bodies_2, value);
	}

	inline static int32_t get_offset_of_m_body_3() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_body_3)); }
	inline BodyPart_t1244368617 * get_m_body_3() const { return ___m_body_3; }
	inline BodyPart_t1244368617 ** get_address_of_m_body_3() { return &___m_body_3; }
	inline void set_m_body_3(BodyPart_t1244368617 * value)
	{
		___m_body_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_body_3, value);
	}

	inline static int32_t get_offset_of_m_bodySlot_4() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_bodySlot_4)); }
	inline GameObject_t1756533147 * get_m_bodySlot_4() const { return ___m_bodySlot_4; }
	inline GameObject_t1756533147 ** get_address_of_m_bodySlot_4() { return &___m_bodySlot_4; }
	inline void set_m_bodySlot_4(GameObject_t1756533147 * value)
	{
		___m_bodySlot_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_bodySlot_4, value);
	}

	inline static int32_t get_offset_of_m_typeScores_5() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_typeScores_5)); }
	inline Int32U5BU5D_t3030399641* get_m_typeScores_5() const { return ___m_typeScores_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_m_typeScores_5() { return &___m_typeScores_5; }
	inline void set_m_typeScores_5(Int32U5BU5D_t3030399641* value)
	{
		___m_typeScores_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_typeScores_5, value);
	}

	inline static int32_t get_offset_of_m_text_6() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_text_6)); }
	inline Text_t356221433 * get_m_text_6() const { return ___m_text_6; }
	inline Text_t356221433 ** get_address_of_m_text_6() { return &___m_text_6; }
	inline void set_m_text_6(Text_t356221433 * value)
	{
		___m_text_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_6, value);
	}

	inline static int32_t get_offset_of_m_highlightBodyPartsCoroutine_7() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_highlightBodyPartsCoroutine_7)); }
	inline Il2CppObject * get_m_highlightBodyPartsCoroutine_7() const { return ___m_highlightBodyPartsCoroutine_7; }
	inline Il2CppObject ** get_address_of_m_highlightBodyPartsCoroutine_7() { return &___m_highlightBodyPartsCoroutine_7; }
	inline void set_m_highlightBodyPartsCoroutine_7(Il2CppObject * value)
	{
		___m_highlightBodyPartsCoroutine_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_highlightBodyPartsCoroutine_7, value);
	}

	inline static int32_t get_offset_of_m_toHighlight_8() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_toHighlight_8)); }
	inline Dictionary_2_t3390842008 * get_m_toHighlight_8() const { return ___m_toHighlight_8; }
	inline Dictionary_2_t3390842008 ** get_address_of_m_toHighlight_8() { return &___m_toHighlight_8; }
	inline void set_m_toHighlight_8(Dictionary_2_t3390842008 * value)
	{
		___m_toHighlight_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_toHighlight_8, value);
	}

	inline static int32_t get_offset_of_m_highlightColor_9() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_highlightColor_9)); }
	inline Color_t2020392075  get_m_highlightColor_9() const { return ___m_highlightColor_9; }
	inline Color_t2020392075 * get_address_of_m_highlightColor_9() { return &___m_highlightColor_9; }
	inline void set_m_highlightColor_9(Color_t2020392075  value)
	{
		___m_highlightColor_9 = value;
	}

	inline static int32_t get_offset_of_m_shouldInit_10() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_shouldInit_10)); }
	inline bool get_m_shouldInit_10() const { return ___m_shouldInit_10; }
	inline bool* get_address_of_m_shouldInit_10() { return &___m_shouldInit_10; }
	inline void set_m_shouldInit_10(bool value)
	{
		___m_shouldInit_10 = value;
	}

	inline static int32_t get_offset_of_m_polaroidGraphic_11() { return static_cast<int32_t>(offsetof(Profile_t618263825, ___m_polaroidGraphic_11)); }
	inline Image_t2042527209 * get_m_polaroidGraphic_11() const { return ___m_polaroidGraphic_11; }
	inline Image_t2042527209 ** get_address_of_m_polaroidGraphic_11() { return &___m_polaroidGraphic_11; }
	inline void set_m_polaroidGraphic_11(Image_t2042527209 * value)
	{
		___m_polaroidGraphic_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_polaroidGraphic_11, value);
	}
};

struct Profile_t618263825_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<BodyPart/ElementType,System.Collections.Generic.List`1<BodyPart/ElementType>> Profile::ms_strongAgainst
	Dictionary_2_t1636509663 * ___ms_strongAgainst_12;

public:
	inline static int32_t get_offset_of_ms_strongAgainst_12() { return static_cast<int32_t>(offsetof(Profile_t618263825_StaticFields, ___ms_strongAgainst_12)); }
	inline Dictionary_2_t1636509663 * get_ms_strongAgainst_12() const { return ___ms_strongAgainst_12; }
	inline Dictionary_2_t1636509663 ** get_address_of_ms_strongAgainst_12() { return &___ms_strongAgainst_12; }
	inline void set_ms_strongAgainst_12(Dictionary_2_t1636509663 * value)
	{
		___ms_strongAgainst_12 = value;
		Il2CppCodeGenWriteBarrier(&___ms_strongAgainst_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
