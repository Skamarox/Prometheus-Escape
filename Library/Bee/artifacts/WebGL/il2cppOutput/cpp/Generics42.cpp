#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject* ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m72A9AE2E6E8B4EDFC952B7D56E5BCEFA813A48BC (const RuntimeMethod* method) ;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_mD47B989E9AABCC58368D9A65D53B7995240BB1FD (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___extractKey0;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_12 = V_3;
		RuntimeObject* L_13 = (RuntimeObject*)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___Value_0;
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_17 = V_3;
		int32_t L_18 = (int32_t)((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___Next_2;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_3;
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_24 = V_3;
		int32_t L_25 = (int32_t)((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___Next_2;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_40 = V_4;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_45 = V_5;
		RuntimeObject* L_46 = (RuntimeObject*)((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___Value_0;
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_49 = V_5;
		int32_t L_50 = (int32_t)((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49)))->___Next_2;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___value3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = (RuntimeObject*)((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___Value_0;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___value0, RuntimeObject** ___newValue1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___newValue1;
		RuntimeObject* L_1 = ___value0;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		RuntimeObject* L_3 = ___value0;
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_16 = V_0;
		RuntimeObject* L_17 = ___value0;
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_19 = V_0;
		int32_t L_20 = V_3;
		((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode_1 = L_20;
		Thread_MemoryBarrier_m72A9AE2E6E8B4EDFC952B7D56E5BCEFA813A48BC(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_28 = V_1;
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___Next_2);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_m1B1A89142CF77793A6B396019B98265E6EE306FA(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___newValue1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_41 = V_1;
		RuntimeObject* L_42 = (RuntimeObject*)((L_40)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_41)))->___Value_0;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode_1;
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_15 = V_1;
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___Value_0;
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_1;
		int32_t L_21 = (int32_t)((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_23 = V_1;
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___Value_0);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_26 = V_1;
		int32_t L_27 = (int32_t)((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___Next_2;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_30 = ___hashCode0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_32 = V_1;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_34 = V_0;
		int32_t L_35 = V_1;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___Next_2 = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___count3;
		String_t* L_37 = V_2;
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___key1;
		int32_t L_40 = ___index2;
		String_t* L_41 = V_2;
		int32_t L_42 = ___count3;
		int32_t L_43;
		L_43 = String_CompareOrdinal_mD47B989E9AABCC58368D9A65D53B7995240BB1FD(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___entryIndex4;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_48 = V_1;
		int32_t L_49 = (int32_t)((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___Next_2;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___entryIndex4;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mF096B359C13274D169EC5FDA87DB6A1E1D0ECAF3_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___index1;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject** L_4 = ___value3;
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___value0;
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_3 = L_8;
			Thread_MemoryBarrier_m72A9AE2E6E8B4EDFC952B7D56E5BCEFA813A48BC(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
