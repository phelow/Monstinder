#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.TextMesh
struct TextMesh_t1641806576;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemoCoroutineGUI
struct  DemoCoroutineGUI_t47940834  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.TextMesh DemoCoroutineGUI::text
	TextMesh_t1641806576 * ___text_2;
	// UnityEngine.TextMesh DemoCoroutineGUI::smalltext
	TextMesh_t1641806576 * ___smalltext_3;
	// System.Boolean DemoCoroutineGUI::showLabel
	bool ___showLabel_4;
	// System.Int32 DemoCoroutineGUI::showButton
	int32_t ___showButton_5;
	// UnityEngine.Transform DemoCoroutineGUI::cameraTransform
	Transform_t3275118058 * ___cameraTransform_6;
	// UnityEngine.Vector3 DemoCoroutineGUI::originalCamPos
	Vector3_t2243707580  ___originalCamPos_7;
	// UnityEngine.Vector3 DemoCoroutineGUI::whatsnewCamPos
	Vector3_t2243707580  ___whatsnewCamPos_8;
	// UnityEngine.Vector3 DemoCoroutineGUI::howtouseCamPos
	Vector3_t2243707580  ___howtouseCamPos_9;

public:
	inline static int32_t get_offset_of_text_2() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___text_2)); }
	inline TextMesh_t1641806576 * get_text_2() const { return ___text_2; }
	inline TextMesh_t1641806576 ** get_address_of_text_2() { return &___text_2; }
	inline void set_text_2(TextMesh_t1641806576 * value)
	{
		___text_2 = value;
		Il2CppCodeGenWriteBarrier(&___text_2, value);
	}

	inline static int32_t get_offset_of_smalltext_3() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___smalltext_3)); }
	inline TextMesh_t1641806576 * get_smalltext_3() const { return ___smalltext_3; }
	inline TextMesh_t1641806576 ** get_address_of_smalltext_3() { return &___smalltext_3; }
	inline void set_smalltext_3(TextMesh_t1641806576 * value)
	{
		___smalltext_3 = value;
		Il2CppCodeGenWriteBarrier(&___smalltext_3, value);
	}

	inline static int32_t get_offset_of_showLabel_4() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___showLabel_4)); }
	inline bool get_showLabel_4() const { return ___showLabel_4; }
	inline bool* get_address_of_showLabel_4() { return &___showLabel_4; }
	inline void set_showLabel_4(bool value)
	{
		___showLabel_4 = value;
	}

	inline static int32_t get_offset_of_showButton_5() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___showButton_5)); }
	inline int32_t get_showButton_5() const { return ___showButton_5; }
	inline int32_t* get_address_of_showButton_5() { return &___showButton_5; }
	inline void set_showButton_5(int32_t value)
	{
		___showButton_5 = value;
	}

	inline static int32_t get_offset_of_cameraTransform_6() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___cameraTransform_6)); }
	inline Transform_t3275118058 * get_cameraTransform_6() const { return ___cameraTransform_6; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_6() { return &___cameraTransform_6; }
	inline void set_cameraTransform_6(Transform_t3275118058 * value)
	{
		___cameraTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_6, value);
	}

	inline static int32_t get_offset_of_originalCamPos_7() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___originalCamPos_7)); }
	inline Vector3_t2243707580  get_originalCamPos_7() const { return ___originalCamPos_7; }
	inline Vector3_t2243707580 * get_address_of_originalCamPos_7() { return &___originalCamPos_7; }
	inline void set_originalCamPos_7(Vector3_t2243707580  value)
	{
		___originalCamPos_7 = value;
	}

	inline static int32_t get_offset_of_whatsnewCamPos_8() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___whatsnewCamPos_8)); }
	inline Vector3_t2243707580  get_whatsnewCamPos_8() const { return ___whatsnewCamPos_8; }
	inline Vector3_t2243707580 * get_address_of_whatsnewCamPos_8() { return &___whatsnewCamPos_8; }
	inline void set_whatsnewCamPos_8(Vector3_t2243707580  value)
	{
		___whatsnewCamPos_8 = value;
	}

	inline static int32_t get_offset_of_howtouseCamPos_9() { return static_cast<int32_t>(offsetof(DemoCoroutineGUI_t47940834, ___howtouseCamPos_9)); }
	inline Vector3_t2243707580  get_howtouseCamPos_9() const { return ___howtouseCamPos_9; }
	inline Vector3_t2243707580 * get_address_of_howtouseCamPos_9() { return &___howtouseCamPos_9; }
	inline void set_howtouseCamPos_9(Vector3_t2243707580  value)
	{
		___howtouseCamPos_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
