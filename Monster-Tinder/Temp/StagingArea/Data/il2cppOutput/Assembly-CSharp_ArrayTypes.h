#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// BodyPartSlot
struct BodyPartSlot_t1362323901;
// BodyPart
struct BodyPart_t1244368617;
// BodyPartDisplay
struct BodyPartDisplay_t889529187;
// ScreenFaderComponents.FaderTask
struct FaderTask_t3162630793;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_BodyPartSlot1362323901.h"
#include "AssemblyU2DCSharp_BodyPartSlot_BodyPartType4191074093.h"
#include "AssemblyU2DCSharp_BodyPart1244368617.h"
#include "AssemblyU2DCSharp_BodyPart_ElementType3370823878.h"
#include "AssemblyU2DCSharp_BodyPartDisplay889529187.h"
#include "AssemblyU2DCSharp_ScreenFaderComponents_FaderTask3162630793.h"
#include "AssemblyU2DCSharp_LinesScreenFader_AnimRect1347828387.h"
#include "AssemblyU2DCSharp_SquaredScreenFader_AnimRect4023970335.h"
#include "AssemblyU2DCSharp_StripeScreenFader_AnimRect2616632671.h"

#pragma once
// BodyPartSlot[]
struct BodyPartSlotU5BU5D_t4000779952  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BodyPartSlot_t1362323901 * m_Items[1];

public:
	inline BodyPartSlot_t1362323901 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BodyPartSlot_t1362323901 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BodyPartSlot_t1362323901 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BodyPartSlot/BodyPartType[]
struct BodyPartTypeU5BU5D_t1370697088  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// BodyPart[]
struct BodyPartU5BU5D_t255636308  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BodyPart_t1244368617 * m_Items[1];

public:
	inline BodyPart_t1244368617 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BodyPart_t1244368617 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BodyPart_t1244368617 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BodyPart/ElementType[]
struct ElementTypeU5BU5D_t2919138659  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// BodyPartDisplay[]
struct BodyPartDisplayU5BU5D_t4269271986  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BodyPartDisplay_t889529187 * m_Items[1];

public:
	inline BodyPartDisplay_t889529187 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BodyPartDisplay_t889529187 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BodyPartDisplay_t889529187 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ScreenFaderComponents.FaderTask[]
struct FaderTaskU5BU5D_t2136495412  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) FaderTask_t3162630793 * m_Items[1];

public:
	inline FaderTask_t3162630793 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline FaderTask_t3162630793 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, FaderTask_t3162630793 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// LinesScreenFader/AnimRect[]
struct AnimRectU5BU5D_t1645039474  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AnimRect_t1347828387  m_Items[1];

public:
	inline AnimRect_t1347828387  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AnimRect_t1347828387 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AnimRect_t1347828387  value)
	{
		m_Items[index] = value;
	}
};
// SquaredScreenFader/AnimRect[,]
struct AnimRectU5BU2CU5D_t2029905543  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AnimRect_t4023970335  m_Items[1];

public:
	inline AnimRect_t4023970335  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AnimRect_t4023970335 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AnimRect_t4023970335  value)
	{
		m_Items[index] = value;
	}
	inline AnimRect_t4023970335  GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t index = i * bounds[1].length + j;
		return m_Items[index];
	}
	inline AnimRect_t4023970335 * GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t index = i * bounds[1].length + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, AnimRect_t4023970335  value)
	{
		il2cpp_array_size_t index = i * bounds[1].length + j;
		m_Items[index] = value;
	}
};
// SquaredScreenFader/AnimRect[]
struct AnimRectU5BU5D_t2029905542  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AnimRect_t4023970335  m_Items[1];

public:
	inline AnimRect_t4023970335  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AnimRect_t4023970335 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AnimRect_t4023970335  value)
	{
		m_Items[index] = value;
	}
};
// StripeScreenFader/AnimRect[]
struct AnimRectU5BU5D_t1667995206  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AnimRect_t2616632671  m_Items[1];

public:
	inline AnimRect_t2616632671  GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline AnimRect_t2616632671 * GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, AnimRect_t2616632671  value)
	{
		m_Items[index] = value;
	}
};
