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
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Texture[]
struct TextureU5BU5D_t2474608790;
// UnityEngine.UI.Image
struct Image_t2042527209;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoObjectFadingGUI
struct  DemoObjectFadingGUI_t151030800  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DemoObjectFadingGUI::character
	GameObject_t1756533147 * ___character_2;
	// UnityEngine.Texture DemoObjectFadingGUI::damageImage
	Texture_t2243626319 * ___damageImage_3;
	// UnityEngine.Texture[] DemoObjectFadingGUI::linesImages
	TextureU5BU5D_t2474608790* ___linesImages_4;
	// UnityEngine.UI.Image DemoObjectFadingGUI::canvasImage
	Image_t2042527209 * ___canvasImage_5;
	// System.Boolean DemoObjectFadingGUI::showGUI
	bool ___showGUI_6;
	// UnityEngine.Rect DemoObjectFadingGUI::codeWindowRectangle
	Rect_t3681755626  ___codeWindowRectangle_7;
	// System.Boolean DemoObjectFadingGUI::showCode
	bool ___showCode_8;
	// System.String DemoObjectFadingGUI::exampleCode
	String_t* ___exampleCode_9;
	// System.String DemoObjectFadingGUI::exampleCodeFormatted
	String_t* ___exampleCodeFormatted_10;
	// System.Boolean DemoObjectFadingGUI::copy
	bool ___copy_11;

public:
	inline static int32_t get_offset_of_character_2() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___character_2)); }
	inline GameObject_t1756533147 * get_character_2() const { return ___character_2; }
	inline GameObject_t1756533147 ** get_address_of_character_2() { return &___character_2; }
	inline void set_character_2(GameObject_t1756533147 * value)
	{
		___character_2 = value;
		Il2CppCodeGenWriteBarrier(&___character_2, value);
	}

	inline static int32_t get_offset_of_damageImage_3() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___damageImage_3)); }
	inline Texture_t2243626319 * get_damageImage_3() const { return ___damageImage_3; }
	inline Texture_t2243626319 ** get_address_of_damageImage_3() { return &___damageImage_3; }
	inline void set_damageImage_3(Texture_t2243626319 * value)
	{
		___damageImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___damageImage_3, value);
	}

	inline static int32_t get_offset_of_linesImages_4() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___linesImages_4)); }
	inline TextureU5BU5D_t2474608790* get_linesImages_4() const { return ___linesImages_4; }
	inline TextureU5BU5D_t2474608790** get_address_of_linesImages_4() { return &___linesImages_4; }
	inline void set_linesImages_4(TextureU5BU5D_t2474608790* value)
	{
		___linesImages_4 = value;
		Il2CppCodeGenWriteBarrier(&___linesImages_4, value);
	}

	inline static int32_t get_offset_of_canvasImage_5() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___canvasImage_5)); }
	inline Image_t2042527209 * get_canvasImage_5() const { return ___canvasImage_5; }
	inline Image_t2042527209 ** get_address_of_canvasImage_5() { return &___canvasImage_5; }
	inline void set_canvasImage_5(Image_t2042527209 * value)
	{
		___canvasImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___canvasImage_5, value);
	}

	inline static int32_t get_offset_of_showGUI_6() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___showGUI_6)); }
	inline bool get_showGUI_6() const { return ___showGUI_6; }
	inline bool* get_address_of_showGUI_6() { return &___showGUI_6; }
	inline void set_showGUI_6(bool value)
	{
		___showGUI_6 = value;
	}

	inline static int32_t get_offset_of_codeWindowRectangle_7() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___codeWindowRectangle_7)); }
	inline Rect_t3681755626  get_codeWindowRectangle_7() const { return ___codeWindowRectangle_7; }
	inline Rect_t3681755626 * get_address_of_codeWindowRectangle_7() { return &___codeWindowRectangle_7; }
	inline void set_codeWindowRectangle_7(Rect_t3681755626  value)
	{
		___codeWindowRectangle_7 = value;
	}

	inline static int32_t get_offset_of_showCode_8() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___showCode_8)); }
	inline bool get_showCode_8() const { return ___showCode_8; }
	inline bool* get_address_of_showCode_8() { return &___showCode_8; }
	inline void set_showCode_8(bool value)
	{
		___showCode_8 = value;
	}

	inline static int32_t get_offset_of_exampleCode_9() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___exampleCode_9)); }
	inline String_t* get_exampleCode_9() const { return ___exampleCode_9; }
	inline String_t** get_address_of_exampleCode_9() { return &___exampleCode_9; }
	inline void set_exampleCode_9(String_t* value)
	{
		___exampleCode_9 = value;
		Il2CppCodeGenWriteBarrier(&___exampleCode_9, value);
	}

	inline static int32_t get_offset_of_exampleCodeFormatted_10() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___exampleCodeFormatted_10)); }
	inline String_t* get_exampleCodeFormatted_10() const { return ___exampleCodeFormatted_10; }
	inline String_t** get_address_of_exampleCodeFormatted_10() { return &___exampleCodeFormatted_10; }
	inline void set_exampleCodeFormatted_10(String_t* value)
	{
		___exampleCodeFormatted_10 = value;
		Il2CppCodeGenWriteBarrier(&___exampleCodeFormatted_10, value);
	}

	inline static int32_t get_offset_of_copy_11() { return static_cast<int32_t>(offsetof(DemoObjectFadingGUI_t151030800, ___copy_11)); }
	inline bool get_copy_11() const { return ___copy_11; }
	inline bool* get_address_of_copy_11() { return &___copy_11; }
	inline void set_copy_11(bool value)
	{
		___copy_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
