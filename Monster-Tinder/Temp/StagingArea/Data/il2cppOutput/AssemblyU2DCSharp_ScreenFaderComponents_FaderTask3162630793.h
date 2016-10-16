#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScreenFaderComponents.Actions.IAction
struct IAction_t663314653;
// ScreenFaderComponents.Actions.IParametrizedAction
struct IParametrizedAction_t1849374401;
// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_Enumerators284981385.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenFaderComponents.FaderTask
struct  FaderTask_t3162630793  : public Il2CppObject
{
public:
	// ScreenFaderComponents.Enumerators.FadeState ScreenFaderComponents.FaderTask::State
	int32_t ___State_0;
	// System.Single ScreenFaderComponents.FaderTask::Time
	float ___Time_1;
	// System.Single ScreenFaderComponents.FaderTask::PostDelay
	float ___PostDelay_2;
	// ScreenFaderComponents.Actions.IAction ScreenFaderComponents.FaderTask::action
	Il2CppObject * ___action_3;
	// ScreenFaderComponents.Actions.IParametrizedAction ScreenFaderComponents.FaderTask::pAction
	Il2CppObject * ___pAction_4;
	// System.Object[] ScreenFaderComponents.FaderTask::pActionParameters
	ObjectU5BU5D_t3614634134* ___pActionParameters_5;

public:
	inline static int32_t get_offset_of_State_0() { return static_cast<int32_t>(offsetof(FaderTask_t3162630793, ___State_0)); }
	inline int32_t get_State_0() const { return ___State_0; }
	inline int32_t* get_address_of_State_0() { return &___State_0; }
	inline void set_State_0(int32_t value)
	{
		___State_0 = value;
	}

	inline static int32_t get_offset_of_Time_1() { return static_cast<int32_t>(offsetof(FaderTask_t3162630793, ___Time_1)); }
	inline float get_Time_1() const { return ___Time_1; }
	inline float* get_address_of_Time_1() { return &___Time_1; }
	inline void set_Time_1(float value)
	{
		___Time_1 = value;
	}

	inline static int32_t get_offset_of_PostDelay_2() { return static_cast<int32_t>(offsetof(FaderTask_t3162630793, ___PostDelay_2)); }
	inline float get_PostDelay_2() const { return ___PostDelay_2; }
	inline float* get_address_of_PostDelay_2() { return &___PostDelay_2; }
	inline void set_PostDelay_2(float value)
	{
		___PostDelay_2 = value;
	}

	inline static int32_t get_offset_of_action_3() { return static_cast<int32_t>(offsetof(FaderTask_t3162630793, ___action_3)); }
	inline Il2CppObject * get_action_3() const { return ___action_3; }
	inline Il2CppObject ** get_address_of_action_3() { return &___action_3; }
	inline void set_action_3(Il2CppObject * value)
	{
		___action_3 = value;
		Il2CppCodeGenWriteBarrier(&___action_3, value);
	}

	inline static int32_t get_offset_of_pAction_4() { return static_cast<int32_t>(offsetof(FaderTask_t3162630793, ___pAction_4)); }
	inline Il2CppObject * get_pAction_4() const { return ___pAction_4; }
	inline Il2CppObject ** get_address_of_pAction_4() { return &___pAction_4; }
	inline void set_pAction_4(Il2CppObject * value)
	{
		___pAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___pAction_4, value);
	}

	inline static int32_t get_offset_of_pActionParameters_5() { return static_cast<int32_t>(offsetof(FaderTask_t3162630793, ___pActionParameters_5)); }
	inline ObjectU5BU5D_t3614634134* get_pActionParameters_5() const { return ___pActionParameters_5; }
	inline ObjectU5BU5D_t3614634134** get_address_of_pActionParameters_5() { return &___pActionParameters_5; }
	inline void set_pActionParameters_5(ObjectU5BU5D_t3614634134* value)
	{
		___pActionParameters_5 = value;
		Il2CppCodeGenWriteBarrier(&___pActionParameters_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
