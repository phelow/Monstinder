#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenFaderComponents.FaderTask
struct FaderTask_t3162630793;
// System.Collections.Generic.Queue`1<ScreenFaderComponents.FaderTask>
struct Queue_1_t2982287628;
// Fader
struct Fader_t1787722948;
// System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs>
struct EventHandler_1_t2269171375;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators817748141.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators284981385.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fader
struct  Fader_t1787722948  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color Fader::color
	Color_t2020392075  ___color_2;
	// ScreenFaderComponents.Enumerators.FadeDirection Fader::defaultState
	int32_t ___defaultState_3;
	// System.Single Fader::fadeInDelay
	float ___fadeInDelay_4;
	// System.Single Fader::fadeOutDelay
	float ___fadeOutDelay_5;
	// System.Int32 Fader::GUIdepth
	int32_t ___GUIdepth_6;
	// System.Single Fader::fadeBalance
	float ___fadeBalance_7;
	// ScreenFaderComponents.Enumerators.FadeState Fader::currentState
	int32_t ___currentState_8;
	// ScreenFaderComponents.FaderTask Fader::currentTask
	FaderTask_t3162630793 * ___currentTask_9;
	// System.Collections.Generic.Queue`1<ScreenFaderComponents.FaderTask> Fader::tasks
	Queue_1_t2982287628 * ___tasks_10;
	// System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs> Fader::FadeStart
	EventHandler_1_t2269171375 * ___FadeStart_12;
	// System.EventHandler`1<ScreenFaderComponents.Events.FadeEventArgs> Fader::FadeFinish
	EventHandler_1_t2269171375 * ___FadeFinish_13;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_defaultState_3() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___defaultState_3)); }
	inline int32_t get_defaultState_3() const { return ___defaultState_3; }
	inline int32_t* get_address_of_defaultState_3() { return &___defaultState_3; }
	inline void set_defaultState_3(int32_t value)
	{
		___defaultState_3 = value;
	}

	inline static int32_t get_offset_of_fadeInDelay_4() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___fadeInDelay_4)); }
	inline float get_fadeInDelay_4() const { return ___fadeInDelay_4; }
	inline float* get_address_of_fadeInDelay_4() { return &___fadeInDelay_4; }
	inline void set_fadeInDelay_4(float value)
	{
		___fadeInDelay_4 = value;
	}

	inline static int32_t get_offset_of_fadeOutDelay_5() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___fadeOutDelay_5)); }
	inline float get_fadeOutDelay_5() const { return ___fadeOutDelay_5; }
	inline float* get_address_of_fadeOutDelay_5() { return &___fadeOutDelay_5; }
	inline void set_fadeOutDelay_5(float value)
	{
		___fadeOutDelay_5 = value;
	}

	inline static int32_t get_offset_of_GUIdepth_6() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___GUIdepth_6)); }
	inline int32_t get_GUIdepth_6() const { return ___GUIdepth_6; }
	inline int32_t* get_address_of_GUIdepth_6() { return &___GUIdepth_6; }
	inline void set_GUIdepth_6(int32_t value)
	{
		___GUIdepth_6 = value;
	}

	inline static int32_t get_offset_of_fadeBalance_7() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___fadeBalance_7)); }
	inline float get_fadeBalance_7() const { return ___fadeBalance_7; }
	inline float* get_address_of_fadeBalance_7() { return &___fadeBalance_7; }
	inline void set_fadeBalance_7(float value)
	{
		___fadeBalance_7 = value;
	}

	inline static int32_t get_offset_of_currentState_8() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___currentState_8)); }
	inline int32_t get_currentState_8() const { return ___currentState_8; }
	inline int32_t* get_address_of_currentState_8() { return &___currentState_8; }
	inline void set_currentState_8(int32_t value)
	{
		___currentState_8 = value;
	}

	inline static int32_t get_offset_of_currentTask_9() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___currentTask_9)); }
	inline FaderTask_t3162630793 * get_currentTask_9() const { return ___currentTask_9; }
	inline FaderTask_t3162630793 ** get_address_of_currentTask_9() { return &___currentTask_9; }
	inline void set_currentTask_9(FaderTask_t3162630793 * value)
	{
		___currentTask_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentTask_9, value);
	}

	inline static int32_t get_offset_of_tasks_10() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___tasks_10)); }
	inline Queue_1_t2982287628 * get_tasks_10() const { return ___tasks_10; }
	inline Queue_1_t2982287628 ** get_address_of_tasks_10() { return &___tasks_10; }
	inline void set_tasks_10(Queue_1_t2982287628 * value)
	{
		___tasks_10 = value;
		Il2CppCodeGenWriteBarrier(&___tasks_10, value);
	}

	inline static int32_t get_offset_of_FadeStart_12() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___FadeStart_12)); }
	inline EventHandler_1_t2269171375 * get_FadeStart_12() const { return ___FadeStart_12; }
	inline EventHandler_1_t2269171375 ** get_address_of_FadeStart_12() { return &___FadeStart_12; }
	inline void set_FadeStart_12(EventHandler_1_t2269171375 * value)
	{
		___FadeStart_12 = value;
		Il2CppCodeGenWriteBarrier(&___FadeStart_12, value);
	}

	inline static int32_t get_offset_of_FadeFinish_13() { return static_cast<int32_t>(offsetof(Fader_t1787722948, ___FadeFinish_13)); }
	inline EventHandler_1_t2269171375 * get_FadeFinish_13() const { return ___FadeFinish_13; }
	inline EventHandler_1_t2269171375 ** get_address_of_FadeFinish_13() { return &___FadeFinish_13; }
	inline void set_FadeFinish_13(EventHandler_1_t2269171375 * value)
	{
		___FadeFinish_13 = value;
		Il2CppCodeGenWriteBarrier(&___FadeFinish_13, value);
	}
};

struct Fader_t1787722948_StaticFields
{
public:
	// Fader Fader::instance
	Fader_t1787722948 * ___instance_11;

public:
	inline static int32_t get_offset_of_instance_11() { return static_cast<int32_t>(offsetof(Fader_t1787722948_StaticFields, ___instance_11)); }
	inline Fader_t1787722948 * get_instance_11() const { return ___instance_11; }
	inline Fader_t1787722948 ** get_address_of_instance_11() { return &___instance_11; }
	inline void set_instance_11(Fader_t1787722948 * value)
	{
		___instance_11 = value;
		Il2CppCodeGenWriteBarrier(&___instance_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
