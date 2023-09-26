

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-even.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-even_h.h"

#define TYPE_FORMAT_STRING_SIZE   683                               
#define PROC_FORMAT_STRING_SIZE   1829                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Deven_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Deven_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Deven_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Deven_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Deven_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Deven_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const ms2Deven_MIDL_TYPE_FORMAT_STRING ms2Deven__MIDL_TypeFormatString;
extern const ms2Deven_MIDL_PROC_FORMAT_STRING ms2Deven__MIDL_ProcFormatString;
extern const ms2Deven_MIDL_EXPR_FORMAT_STRING ms2Deven__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   2            


/* Standard interface: eventlog, ver. 0.0,
   GUID={0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}} */

 extern const MIDL_STUBLESS_PROXY_INFO eventlog_ProxyInfo;


static const RPC_CLIENT_INTERFACE eventlog___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &eventlog_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE eventlog_v0_0_c_ifspec = (RPC_IF_HANDLE)& eventlog___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC eventlog_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE eventlog__MIDL_AutoBindHandle;


NTSTATUS ElfrClearELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  0,
                  0,
                  LogHandle,
                  BackupFileName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrBackupELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  1,
                  0,
                  LogHandle,
                  BackupFileName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrCloseEL( 
    /* [out][in] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  2,
                  0,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrDeregisterEventSource( 
    /* [out][in] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  3,
                  0,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrNumberOfRecords( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ unsigned long *NumberOfRecords)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  4,
                  0,
                  LogHandle,
                  NumberOfRecords);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOldestRecord( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ unsigned long *OldestRecordNumber)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  5,
                  0,
                  LogHandle,
                  OldestRecordNumber);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrChangeNotify( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ RPC_CLIENT_ID ClientId,
    /* [in] */ ULONG Event)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  6,
                  0,
                  LogHandle,
                  ClientId,
                  Event);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  7,
                  0,
                  UNCServerName,
                  ModuleName,
                  RegModuleName,
                  MajorVersion,
                  MinorVersion,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterEventSourceW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  8,
                  0,
                  UNCServerName,
                  ModuleName,
                  RegModuleName,
                  MajorVersion,
                  MinorVersion,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenBELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  9,
                  0,
                  UNCServerName,
                  BackupFileName,
                  MajorVersion,
                  MinorVersion,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReadELW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long ReadFlags,
    /* [in] */ unsigned long RecordOffset,
    /* [in] */ RULONG NumberOfBytesToRead,
    /* [size_is][out] */ unsigned char *Buffer,
    /* [out] */ unsigned long *NumberOfBytesRead,
    /* [out] */ unsigned long *MinNumberOfBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  10,
                  0,
                  LogHandle,
                  ReadFlags,
                  RecordOffset,
                  NumberOfBytesToRead,
                  Buffer,
                  NumberOfBytesRead,
                  MinNumberOfBytesNeeded);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long Time,
    /* [in] */ unsigned short EventType,
    /* [in] */ unsigned short EventCategory,
    /* [in] */ unsigned long EventID,
    /* [range][in] */ unsigned short NumStrings,
    /* [range][in] */ unsigned long DataSize,
    /* [in] */ PRPC_UNICODE_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_UNICODE_STRING Strings[  ],
    /* [unique][size_is][in] */ unsigned char *Data,
    /* [in] */ unsigned short Flags,
    /* [unique][out][in] */ unsigned long *RecordNumber,
    /* [unique][out][in] */ unsigned long *TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  11,
                  0,
                  LogHandle,
                  Time,
                  EventType,
                  EventCategory,
                  EventID,
                  NumStrings,
                  DataSize,
                  ComputerName,
                  UserSID,
                  Strings,
                  Data,
                  Flags,
                  RecordNumber,
                  TimeWritten);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrClearELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  12,
                  0,
                  LogHandle,
                  BackupFileName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrBackupELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  13,
                  0,
                  LogHandle,
                  BackupFileName);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  14,
                  0,
                  UNCServerName,
                  ModuleName,
                  RegModuleName,
                  MajorVersion,
                  MinorVersion,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterEventSourceA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  15,
                  0,
                  UNCServerName,
                  ModuleName,
                  RegModuleName,
                  MajorVersion,
                  MinorVersion,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenBELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING BackupFileName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  16,
                  0,
                  UNCServerName,
                  BackupFileName,
                  MajorVersion,
                  MinorVersion,
                  LogHandle);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReadELA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long ReadFlags,
    /* [in] */ unsigned long RecordOffset,
    /* [in] */ RULONG NumberOfBytesToRead,
    /* [size_is][out] */ unsigned char *Buffer,
    /* [out] */ unsigned long *NumberOfBytesRead,
    /* [out] */ unsigned long *MinNumberOfBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  17,
                  0,
                  LogHandle,
                  ReadFlags,
                  RecordOffset,
                  NumberOfBytesToRead,
                  Buffer,
                  NumberOfBytesRead,
                  MinNumberOfBytesNeeded);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long Time,
    /* [in] */ unsigned short EventType,
    /* [in] */ unsigned short EventCategory,
    /* [in] */ unsigned long EventID,
    /* [range][in] */ unsigned short NumStrings,
    /* [range][in] */ unsigned long DataSize,
    /* [in] */ PRPC_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_STRING Strings[  ],
    /* [unique][size_is][in] */ unsigned char *Data,
    /* [in] */ unsigned short Flags,
    /* [unique][out][in] */ unsigned long *RecordNumber,
    /* [unique][out][in] */ unsigned long *TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  18,
                  0,
                  LogHandle,
                  Time,
                  EventType,
                  EventCategory,
                  EventID,
                  NumStrings,
                  DataSize,
                  ComputerName,
                  UserSID,
                  Strings,
                  Data,
                  Flags,
                  RecordNumber,
                  TimeWritten);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  19,
                  0,
                  IDL_handle);
    
}


void Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  20,
                  0,
                  IDL_handle);
    
}


void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  21,
                  0,
                  IDL_handle);
    
}


NTSTATUS ElfrGetLogInformation( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long InfoLevel,
    /* [size_is][out] */ unsigned char *lpBuffer,
    /* [range][in] */ unsigned long cbBufSize,
    /* [out] */ unsigned long *pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  22,
                  0,
                  LogHandle,
                  InfoLevel,
                  lpBuffer,
                  cbBufSize,
                  pcbBytesNeeded);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


void Opnum23NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  23,
                  0,
                  IDL_handle);
    
}


NTSTATUS ElfrReportEventAndSourceW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long Time,
    /* [in] */ unsigned short EventType,
    /* [in] */ unsigned short EventCategory,
    /* [in] */ unsigned long EventID,
    /* [in] */ PRPC_UNICODE_STRING SourceName,
    /* [range][in] */ unsigned short NumStrings,
    /* [range][in] */ unsigned long DataSize,
    /* [in] */ PRPC_UNICODE_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_UNICODE_STRING Strings[  ],
    /* [unique][size_is][in] */ unsigned char *Data,
    /* [in] */ unsigned short Flags,
    /* [unique][out][in] */ unsigned long *RecordNumber,
    /* [unique][out][in] */ unsigned long *TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  24,
                  0,
                  LogHandle,
                  Time,
                  EventType,
                  EventCategory,
                  EventID,
                  SourceName,
                  NumStrings,
                  DataSize,
                  ComputerName,
                  UserSID,
                  Strings,
                  Data,
                  Flags,
                  RecordNumber,
                  TimeWritten);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventExW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PFILETIME TimeGenerated,
    /* [in] */ unsigned short EventType,
    /* [in] */ unsigned short EventCategory,
    /* [in] */ unsigned long EventID,
    /* [range][in] */ unsigned short NumStrings,
    /* [range][in] */ unsigned long DataSize,
    /* [in] */ PRPC_UNICODE_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_UNICODE_STRING Strings[  ],
    /* [unique][size_is][in] */ unsigned char *Data,
    /* [in] */ unsigned short Flags,
    /* [unique][out][in] */ unsigned long *RecordNumber)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  25,
                  0,
                  LogHandle,
                  TimeGenerated,
                  EventType,
                  EventCategory,
                  EventID,
                  NumStrings,
                  DataSize,
                  ComputerName,
                  UserSID,
                  Strings,
                  Data,
                  Flags,
                  RecordNumber);
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventExA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PFILETIME TimeGenerated,
    /* [in] */ unsigned short EventType,
    /* [in] */ unsigned short EventCategory,
    /* [in] */ unsigned long EventID,
    /* [range][in] */ unsigned short NumStrings,
    /* [range][in] */ unsigned long DataSize,
    /* [in] */ PRPC_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_STRING Strings[  ],
    /* [unique][size_is][in] */ unsigned char *Data,
    /* [in] */ unsigned short Flags,
    /* [unique][out][in] */ unsigned long *RecordNumber)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&eventlog_ProxyInfo,
                  26,
                  0,
                  LogHandle,
                  TimeGenerated,
                  EventType,
                  EventCategory,
                  EventID,
                  NumStrings,
                  DataSize,
                  ComputerName,
                  UserSID,
                  Strings,
                  Data,
                  Flags,
                  RecordNumber);
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ms2Deven_MIDL_PROC_FORMAT_STRING ms2Deven__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ElfrClearELFW */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0x24 ),	/* 36 */
/* 18 */	NdrFcShort( 0x8 ),	/* 8 */
/* 20 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 22 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 32 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 34 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 36 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 38 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 40 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 42 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 44 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 46 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrBackupELFW */

/* 50 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 60 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 62 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 64 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0x24 ),	/* 36 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 72 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x1 ),	/* 1 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 82 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 84 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 88 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 90 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 92 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 94 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 96 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 98 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrCloseEL */

/* 100 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 108 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 110 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 112 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 114 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 116 */	NdrFcShort( 0x38 ),	/* 56 */
/* 118 */	NdrFcShort( 0x40 ),	/* 64 */
/* 120 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 122 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 132 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 134 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 136 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrDeregisterEventSource */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x3 ),	/* 3 */
/* 152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 156 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x38 ),	/* 56 */
/* 162 */	NdrFcShort( 0x40 ),	/* 64 */
/* 164 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 166 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 176 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 178 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 180 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Return value */

/* 182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrNumberOfRecords */

/* 188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 198 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 204 */	NdrFcShort( 0x24 ),	/* 36 */
/* 206 */	NdrFcShort( 0x24 ),	/* 36 */
/* 208 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 210 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 220 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 224 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NumberOfRecords */

/* 226 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOldestRecord */

/* 238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	NdrFcShort( 0x5 ),	/* 5 */
/* 246 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 250 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 258 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 260 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 270 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 272 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 274 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter OldestRecordNumber */

/* 276 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrChangeNotify */

/* 288 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x6 ),	/* 6 */
/* 296 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 298 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 300 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 302 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 304 */	NdrFcShort( 0x44 ),	/* 68 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 310 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 320 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 324 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ClientId */

/* 326 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 328 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 330 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter Event */

/* 332 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 334 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 340 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenELW */

/* 344 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x7 ),	/* 7 */
/* 352 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 354 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 356 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 358 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 360 */	NdrFcShort( 0x2a ),	/* 42 */
/* 362 */	NdrFcShort( 0x40 ),	/* 64 */
/* 364 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 366 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x1 ),	/* 1 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 376 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 380 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter ModuleName */

/* 382 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 384 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 386 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter RegModuleName */

/* 388 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 392 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter MajorVersion */

/* 394 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 396 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 402 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 406 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 408 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 410 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 414 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterEventSourceW */

/* 418 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 426 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 428 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 432 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 434 */	NdrFcShort( 0x2a ),	/* 42 */
/* 436 */	NdrFcShort( 0x40 ),	/* 64 */
/* 438 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 440 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 450 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 452 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 454 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter ModuleName */

/* 456 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 460 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter RegModuleName */

/* 462 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 466 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter MajorVersion */

/* 468 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 476 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 480 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 482 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 484 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 488 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenBELW */

/* 492 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x9 ),	/* 9 */
/* 500 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 502 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 504 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 506 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 508 */	NdrFcShort( 0x2a ),	/* 42 */
/* 510 */	NdrFcShort( 0x40 ),	/* 64 */
/* 512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 514 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 524 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 526 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 528 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter BackupFileName */

/* 530 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 532 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 534 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter MajorVersion */

/* 536 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 538 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 544 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 548 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 550 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 552 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 556 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReadELW */

/* 560 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0xa ),	/* 10 */
/* 568 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 570 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 572 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 574 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 576 */	NdrFcShort( 0x3c ),	/* 60 */
/* 578 */	NdrFcShort( 0x40 ),	/* 64 */
/* 580 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 582 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 584 */	NdrFcShort( 0x1 ),	/* 1 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 592 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 594 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 596 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ReadFlags */

/* 598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RecordOffset */

/* 604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumberOfBytesToRead */

/* 610 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 612 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 614 */	NdrFcShort( 0x66 ),	/* 102 */

	/* Parameter Buffer */

/* 616 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 618 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 620 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Parameter NumberOfBytesRead */

/* 622 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 624 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinNumberOfBytesNeeded */

/* 628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 630 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 636 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventW */

/* 640 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0xb ),	/* 11 */
/* 648 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 650 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 652 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 654 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 656 */	NdrFcShort( 0x8c ),	/* 140 */
/* 658 */	NdrFcShort( 0x40 ),	/* 64 */
/* 660 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 662 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 672 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 674 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 676 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 688 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 694 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 696 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 698 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 702 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 704 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 706 */	NdrFcShort( 0x8a ),	/* 138 */

	/* Parameter DataSize */

/* 708 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 710 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 712 */	NdrFcShort( 0x94 ),	/* 148 */

	/* Parameter ComputerName */

/* 714 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 716 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 718 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter UserSID */

/* 720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 722 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 724 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter Strings */

/* 726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 728 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 730 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Parameter Data */

/* 732 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 734 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 736 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter Flags */

/* 738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 740 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 742 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 744 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 746 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 748 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Parameter TimeWritten */

/* 750 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 752 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 754 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 758 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrClearELFA */

/* 762 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0xc ),	/* 12 */
/* 770 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 772 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 774 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 776 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 778 */	NdrFcShort( 0x24 ),	/* 36 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 784 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 794 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 798 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 800 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 804 */	NdrFcShort( 0x122 ),	/* Type Offset=290 */

	/* Return value */

/* 806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 808 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrBackupELFA */

/* 812 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0xd ),	/* 13 */
/* 820 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 822 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 824 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 826 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 828 */	NdrFcShort( 0x24 ),	/* 36 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 834 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 844 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 848 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BackupFileName */

/* 850 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 854 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Return value */

/* 856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 858 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenELA */

/* 862 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0xe ),	/* 14 */
/* 870 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 872 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 874 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 876 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 878 */	NdrFcShort( 0x29 ),	/* 41 */
/* 880 */	NdrFcShort( 0x40 ),	/* 64 */
/* 882 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 884 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x1 ),	/* 1 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 894 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 896 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 898 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter ModuleName */

/* 900 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 904 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter RegModuleName */

/* 906 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 910 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter MajorVersion */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 920 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 924 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 926 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 928 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrRegisterEventSourceA */

/* 936 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0xf ),	/* 15 */
/* 944 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 946 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 948 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 950 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 952 */	NdrFcShort( 0x29 ),	/* 41 */
/* 954 */	NdrFcShort( 0x40 ),	/* 64 */
/* 956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 958 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 968 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 972 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter ModuleName */

/* 974 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 978 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter RegModuleName */

/* 980 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 984 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter MajorVersion */

/* 986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 988 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 998 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1000 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1002 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1006 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrOpenBELA */

/* 1010 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1018 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1020 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1022 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1024 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 1026 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1028 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1030 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1032 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter UNCServerName */

/* 1042 */	NdrFcShort( 0xa ),	/* Flags:  must free, in, */
/* 1044 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1046 */	NdrFcShort( 0x152 ),	/* Type Offset=338 */

	/* Parameter BackupFileName */

/* 1048 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1050 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1052 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter MajorVersion */

/* 1054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1056 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinorVersion */

/* 1060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1062 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter LogHandle */

/* 1066 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 1068 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1070 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1072 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1074 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReadELA */

/* 1078 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1086 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1088 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1090 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1092 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1094 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1096 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1098 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 1100 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1110 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1112 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1114 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ReadFlags */

/* 1116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter RecordOffset */

/* 1122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumberOfBytesToRead */

/* 1128 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1130 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1132 */	NdrFcShort( 0x156 ),	/* 342 */

	/* Parameter Buffer */

/* 1134 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1136 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1138 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Parameter NumberOfBytesRead */

/* 1140 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1142 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter MinNumberOfBytesNeeded */

/* 1146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1148 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventA */

/* 1158 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1166 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 1168 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1170 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1172 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1174 */	NdrFcShort( 0x8c ),	/* 140 */
/* 1176 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1178 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xf,		/* 15 */
/* 1180 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1190 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1194 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 1196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 1202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1206 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1210 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1212 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1214 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1216 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1220 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1222 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1224 */	NdrFcShort( 0x160 ),	/* 352 */

	/* Parameter DataSize */

/* 1226 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1228 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1230 */	NdrFcShort( 0x16a ),	/* 362 */

	/* Parameter ComputerName */

/* 1232 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1234 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1236 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter UserSID */

/* 1238 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1240 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1242 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter Strings */

/* 1244 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1246 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1248 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Parameter Data */

/* 1250 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1252 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1254 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter Flags */

/* 1256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1258 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1260 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1262 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1264 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1266 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Parameter TimeWritten */

/* 1268 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1270 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1272 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 1274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1276 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 1278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum19NotUsedOnWire */

/* 1280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1290 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1300 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum20NotUsedOnWire */

/* 1310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1320 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1330 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum21NotUsedOnWire */

/* 1340 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1348 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1350 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1360 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure ElfrGetLogInformation */

/* 1370 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1378 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1380 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1382 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1384 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1386 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1390 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 1392 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1394 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1402 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1404 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1406 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoLevel */

/* 1408 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpBuffer */

/* 1414 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1418 */	NdrFcShort( 0x1a6 ),	/* Type Offset=422 */

	/* Parameter cbBufSize */

/* 1420 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1424 */	NdrFcShort( 0x1bc ),	/* 444 */

	/* Parameter pcbBytesNeeded */

/* 1426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1428 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1434 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum23NotUsedOnWire */

/* 1438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1446 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1448 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1458 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure ElfrReportEventAndSourceW */

/* 1468 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1476 */	NdrFcShort( 0x80 ),	/* X64 Stack size/offset = 128 */
/* 1478 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1480 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1482 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1484 */	NdrFcShort( 0x8c ),	/* 140 */
/* 1486 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1488 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x10,		/* 16 */
/* 1490 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1500 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1502 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1504 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Time */

/* 1506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1508 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter EventType */

/* 1512 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1514 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1516 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1520 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1522 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1524 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1526 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SourceName */

/* 1530 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1532 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1534 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter NumStrings */

/* 1536 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1538 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1540 */	NdrFcShort( 0x1c6 ),	/* 454 */

	/* Parameter DataSize */

/* 1542 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1544 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1546 */	NdrFcShort( 0x1d0 ),	/* 464 */

	/* Parameter ComputerName */

/* 1548 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1550 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1552 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter UserSID */

/* 1554 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1556 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1558 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter Strings */

/* 1560 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1562 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1564 */	NdrFcShort( 0x1da ),	/* Type Offset=474 */

	/* Parameter Data */

/* 1566 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1568 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1570 */	NdrFcShort( 0x208 ),	/* Type Offset=520 */

	/* Parameter Flags */

/* 1572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1574 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1576 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1578 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1580 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1582 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Parameter TimeWritten */

/* 1584 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1586 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 1588 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0x78 ),	/* X64 Stack size/offset = 120 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventExW */

/* 1596 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1604 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 1606 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1608 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1610 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1612 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1614 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 1618 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1628 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1630 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1632 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter TimeGenerated */

/* 1634 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1636 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1638 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter EventType */

/* 1640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1642 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1644 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1648 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1650 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1654 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1658 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1660 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1662 */	NdrFcShort( 0x226 ),	/* 550 */

	/* Parameter DataSize */

/* 1664 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1666 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1668 */	NdrFcShort( 0x230 ),	/* 560 */

	/* Parameter ComputerName */

/* 1670 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1672 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1674 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Parameter UserSID */

/* 1676 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1678 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1680 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter Strings */

/* 1682 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1684 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1686 */	NdrFcShort( 0x23a ),	/* Type Offset=570 */

	/* Parameter Data */

/* 1688 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1690 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1692 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter Flags */

/* 1694 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1696 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1698 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1700 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1702 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1704 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 1706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1708 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ElfrReportEventExA */

/* 1712 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1718 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1720 */	NdrFcShort( 0x70 ),	/* X64 Stack size/offset = 112 */
/* 1722 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1724 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1726 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1728 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1730 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1732 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xe,		/* 14 */
/* 1734 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter LogHandle */

/* 1744 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1746 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1748 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter TimeGenerated */

/* 1750 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1754 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter EventType */

/* 1756 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1758 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1760 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventCategory */

/* 1762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1766 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter EventID */

/* 1768 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1770 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NumStrings */

/* 1774 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1776 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1778 */	NdrFcShort( 0x268 ),	/* 616 */

	/* Parameter DataSize */

/* 1780 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1782 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1784 */	NdrFcShort( 0x272 ),	/* 626 */

	/* Parameter ComputerName */

/* 1786 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1788 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1790 */	NdrFcShort( 0x13c ),	/* Type Offset=316 */

	/* Parameter UserSID */

/* 1792 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1794 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1796 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */

	/* Parameter Strings */

/* 1798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1800 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1802 */	NdrFcShort( 0x27c ),	/* Type Offset=636 */

	/* Parameter Data */

/* 1804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1806 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1808 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter Flags */

/* 1810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1812 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1814 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter RecordNumber */

/* 1816 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1818 */	NdrFcShort( 0x60 ),	/* X64 Stack size/offset = 96 */
/* 1820 */	NdrFcShort( 0x11e ),	/* Type Offset=286 */

	/* Return value */

/* 1822 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1824 */	NdrFcShort( 0x68 ),	/* X64 Stack size/offset = 104 */
/* 1826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Deven_MIDL_TYPE_FORMAT_STRING ms2Deven__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/*  4 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  6 */	
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x28 ),	/* Offset= 40 (48) */
/* 10 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 16 */	NdrFcShort( 0x2 ),	/* 2 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x55,		/* FC_DIV_2 */
/* 32 */	NdrFcShort( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 36 */	0x0 , 
			0x0,		/* 0 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcLong( 0x0 ),	/* 0 */
/* 46 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 48 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x10 ),	/* 16 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* Offset= 8 (62) */
/* 56 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 58 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 60 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 62 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 64 */	NdrFcShort( 0xffca ),	/* Offset= -54 (10) */
/* 66 */	
			0x11, 0x0,	/* FC_RP */
/* 68 */	NdrFcShort( 0xffec ),	/* Offset= -20 (48) */
/* 70 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 76 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 88 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 90 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 92 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 100 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 102 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 112 */	
			0x11, 0x0,	/* FC_RP */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 120 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 124 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 126 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 136 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 138 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcLong( 0x100 ),	/* 256 */
/* 148 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 158 */	
			0x12, 0x0,	/* FC_UP */
/* 160 */	NdrFcShort( 0x28 ),	/* Offset= 40 (200) */
/* 162 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x6 ),	/* 6 */
/* 166 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 168 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0x6 ),	/* 6 */
/* 172 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 174 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (162) */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 180 */	NdrFcShort( 0x4 ),	/* 4 */
/* 182 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 184 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 186 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 188 */	0x0 , 
			0x0,		/* 0 */
/* 190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 198 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 200 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (178) */
/* 206 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 208 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 210 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (168) */
/* 212 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 214 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (218) */
/* 218 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 222 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 224 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 226 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 228 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 234 */	NdrFcLong( 0x100 ),	/* 256 */
/* 238 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 242 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 244 */	0x0 , 
			0x0,		/* 0 */
/* 246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 254 */	
			0x12, 0x0,	/* FC_UP */
/* 256 */	NdrFcShort( 0xff30 ),	/* Offset= -208 (48) */
/* 258 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 260 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 262 */	NdrFcShort( 0x2 ),	/* Offset= 2 (264) */
/* 264 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 268 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 270 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 272 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 274 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 280 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 284 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 286 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 288 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x12, 0x0,	/* FC_UP */
/* 292 */	NdrFcShort( 0x18 ),	/* Offset= 24 (316) */
/* 294 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 298 */	0x17,		/* Corr desc:  field pointer, FC_USHORT */
			0x0,		/*  */
/* 300 */	NdrFcShort( 0x2 ),	/* 2 */
/* 302 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 304 */	0x0 , 
			0x0,		/* 0 */
/* 306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 314 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 316 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	NdrFcShort( 0x8 ),	/* Offset= 8 (330) */
/* 324 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 326 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 330 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 332 */	NdrFcShort( 0xffda ),	/* Offset= -38 (294) */
/* 334 */	
			0x11, 0x0,	/* FC_RP */
/* 336 */	NdrFcShort( 0xffec ),	/* Offset= -20 (316) */
/* 338 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 340 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 342 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 348 */	NdrFcLong( 0x7ffff ),	/* 524287 */
/* 352 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcLong( 0x100 ),	/* 256 */
/* 362 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 368 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 372 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 374 */	NdrFcShort( 0x2 ),	/* Offset= 2 (376) */
/* 376 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 380 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 382 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 384 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 386 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcLong( 0x100 ),	/* 256 */
/* 396 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 400 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 402 */	0x0 , 
			0x0,		/* 0 */
/* 404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 412 */	
			0x12, 0x0,	/* FC_UP */
/* 414 */	NdrFcShort( 0xff9e ),	/* Offset= -98 (316) */
/* 416 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 418 */	
			0x11, 0x0,	/* FC_RP */
/* 420 */	NdrFcShort( 0x2 ),	/* Offset= 2 (422) */
/* 422 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 426 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 430 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 432 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 438 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 442 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 444 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcLong( 0x400 ),	/* 1024 */
/* 454 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcLong( 0x100 ),	/* 256 */
/* 464 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 470 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 474 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (478) */
/* 478 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 484 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 486 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 488 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 494 */	NdrFcLong( 0x100 ),	/* 256 */
/* 498 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 502 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 504 */	0x0 , 
			0x0,		/* 0 */
/* 506 */	NdrFcLong( 0x0 ),	/* 0 */
/* 510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 514 */	
			0x12, 0x0,	/* FC_UP */
/* 516 */	NdrFcShort( 0xfe2c ),	/* Offset= -468 (48) */
/* 518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 520 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 522 */	NdrFcShort( 0x2 ),	/* Offset= 2 (524) */
/* 524 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 528 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 530 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 532 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 534 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 544 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 546 */	
			0x11, 0x0,	/* FC_RP */
/* 548 */	NdrFcShort( 0xfe2e ),	/* Offset= -466 (82) */
/* 550 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 556 */	NdrFcLong( 0x100 ),	/* 256 */
/* 560 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 566 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 570 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 572 */	NdrFcShort( 0x2 ),	/* Offset= 2 (574) */
/* 574 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 580 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 582 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 584 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 590 */	NdrFcLong( 0x100 ),	/* 256 */
/* 594 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 598 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 600 */	0x0 , 
			0x0,		/* 0 */
/* 602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 606 */	NdrFcLong( 0x0 ),	/* 0 */
/* 610 */	
			0x12, 0x0,	/* FC_UP */
/* 612 */	NdrFcShort( 0xfdcc ),	/* Offset= -564 (48) */
/* 614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 616 */	0xb7,		/* FC_RANGE */
			0x6,		/* 6 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcLong( 0x100 ),	/* 256 */
/* 626 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcLong( 0xf000 ),	/* 61440 */
/* 636 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 638 */	NdrFcShort( 0x2 ),	/* Offset= 2 (640) */
/* 640 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	0x27,		/* Corr desc:  parameter, FC_USHORT */
			0x0,		/*  */
/* 646 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 648 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 650 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 656 */	NdrFcLong( 0x100 ),	/* 256 */
/* 660 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 664 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 666 */	0x0 , 
			0x0,		/* 0 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 676 */	
			0x12, 0x0,	/* FC_UP */
/* 678 */	NdrFcShort( 0xfe96 ),	/* Offset= -362 (316) */
/* 680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

XFG_BIND_TRAMPOLINES(unsigned long long, EVENTLOG_HANDLE_W)
XFG_BIND_TRAMPOLINES(unsigned long long, EVENTLOG_HANDLE_A)

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ] = 
        {
        {
            (GENERIC_BINDING_ROUTINE) XFG_TRAMPOLINE_FPTR(EVENTLOG_HANDLE_W_bind),
            (GENERIC_UNBIND_ROUTINE) XFG_TRAMPOLINE_FPTR(EVENTLOG_HANDLE_W_unbind)
         }
        ,{
            (GENERIC_BINDING_ROUTINE) XFG_TRAMPOLINE_FPTR(EVENTLOG_HANDLE_A_bind),
            (GENERIC_UNBIND_ROUTINE) XFG_TRAMPOLINE_FPTR(EVENTLOG_HANDLE_A_unbind)
         }
        
        };


static const unsigned short eventlog_FormatStringOffsetTable[] =
    {
    0,
    50,
    100,
    144,
    188,
    238,
    288,
    344,
    418,
    492,
    560,
    640,
    762,
    812,
    862,
    936,
    1010,
    1078,
    1158,
    1280,
    1310,
    1340,
    1370,
    1438,
    1468,
    1596,
    1712
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-even.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)



extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag274_t;
extern const __midl_frag274_t __midl_frag274;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag272_t;
extern const __midl_frag272_t __midl_frag272;

typedef 
NDR64_FORMAT_CHAR
__midl_frag271_t;
extern const __midl_frag271_t __midl_frag271;

typedef 
NDR64_FORMAT_CHAR
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag269_t;
extern const __midl_frag269_t __midl_frag269;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag268_t;
extern const __midl_frag268_t __midl_frag268;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag265_t;
extern const __midl_frag265_t __midl_frag265;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag264_t;
extern const __midl_frag264_t __midl_frag264;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag263_t;
extern const __midl_frag263_t __midl_frag263;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag262_t;
extern const __midl_frag262_t __midl_frag262;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag261_t;
extern const __midl_frag261_t __midl_frag261;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag260_t;
extern const __midl_frag260_t __midl_frag260;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag259_t;
extern const __midl_frag259_t __midl_frag259;

typedef 
NDR64_FORMAT_CHAR
__midl_frag258_t;
extern const __midl_frag258_t __midl_frag258;

typedef 
NDR64_FORMAT_CHAR
__midl_frag257_t;
extern const __midl_frag257_t __midl_frag257;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
}
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag244_t;
extern const __midl_frag244_t __midl_frag244;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag242_t;
extern const __midl_frag242_t __midl_frag242;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag241_t;
extern const __midl_frag241_t __midl_frag241;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag239_t;
extern const __midl_frag239_t __midl_frag239;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag233_t;
extern const __midl_frag233_t __midl_frag233;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
NDR64_FORMAT_CHAR
__midl_frag223_t;
extern const __midl_frag223_t __midl_frag223;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag222_t;
extern const __midl_frag222_t __midl_frag222;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag219_t;
extern const __midl_frag219_t __midl_frag219;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag213_t;
extern const __midl_frag213_t __midl_frag213;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
NDR64_FORMAT_CHAR
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
NDR64_FORMAT_CHAR
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
    struct _NDR64_PARAM_FORMAT frag17;
    struct _NDR64_PARAM_FORMAT frag18;
}
__midl_frag205_t;
extern const __midl_frag205_t __midl_frag205;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag201_t;
extern const __midl_frag201_t __midl_frag201;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag197_t;
extern const __midl_frag197_t __midl_frag197;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag196_t;
extern const __midl_frag196_t __midl_frag196;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag182_t;
extern const __midl_frag182_t __midl_frag182;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag181_t;
extern const __midl_frag181_t __midl_frag181;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag180_t;
extern const __midl_frag180_t __midl_frag180;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag178_t;
extern const __midl_frag178_t __midl_frag178;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag176_t;
extern const __midl_frag176_t __midl_frag176;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag174_t;
extern const __midl_frag174_t __midl_frag174;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
    struct _NDR64_PARAM_FORMAT frag17;
}
__midl_frag166_t;
extern const __midl_frag166_t __midl_frag166;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag159_t;
extern const __midl_frag159_t __midl_frag159;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag158_t;
extern const __midl_frag158_t __midl_frag158;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag157_t;
extern const __midl_frag157_t __midl_frag157;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag156_t;
extern const __midl_frag156_t __midl_frag156;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag152_t;
extern const __midl_frag152_t __midl_frag152;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag150_t;
extern const __midl_frag150_t __midl_frag150;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag149_t;
extern const __midl_frag149_t __midl_frag149;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag143_t;
extern const __midl_frag143_t __midl_frag143;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag137_t;
extern const __midl_frag137_t __midl_frag137;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag134_t;
extern const __midl_frag134_t __midl_frag134;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
NDR64_FORMAT_CHAR
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
NDR64_FORMAT_CHAR
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
NDR64_FORMAT_CHAR
__midl_frag122_t;
extern const __midl_frag122_t __midl_frag122;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag120_t;
extern const __midl_frag120_t __midl_frag120;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
NDR64_FORMAT_CHAR
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag114_t;
extern const __midl_frag114_t __midl_frag114;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag112_t;
extern const __midl_frag112_t __midl_frag112;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
NDR64_FORMAT_CHAR
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag94_t;
extern const __midl_frag94_t __midl_frag94;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag92_t;
extern const __midl_frag92_t __midl_frag92;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag91_t;
extern const __midl_frag91_t __midl_frag91;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
NDR64_FORMAT_CHAR
__midl_frag86_t;
extern const __midl_frag86_t __midl_frag86;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
    struct _NDR64_PARAM_FORMAT frag13;
    struct _NDR64_PARAM_FORMAT frag14;
    struct _NDR64_PARAM_FORMAT frag15;
    struct _NDR64_PARAM_FORMAT frag16;
    struct _NDR64_PARAM_FORMAT frag17;
}
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag74_t;
extern const __midl_frag74_t __midl_frag74;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag73_t;
extern const __midl_frag73_t __midl_frag73;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
NDR64_FORMAT_CHAR
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
NDR64_FORMAT_CHAR
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag29_t;
extern const __midl_frag29_t __midl_frag29;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag6_t;
extern const __midl_frag6_t __midl_frag6;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_MEMPAD_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag274_t __midl_frag274 =
0x5    /* FC64_INT32 */;

static const __midl_frag272_t __midl_frag272 =
{ 
/* *long */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag274
};

static const __midl_frag271_t __midl_frag271 =
0x4    /* FC64_INT16 */;

static const __midl_frag270_t __midl_frag270 =
0x10    /* FC64_CHAR */;

static const __midl_frag269_t __midl_frag269 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 61440 /* 0xf000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */  /* Offset */
    }
};

static const __midl_frag268_t __midl_frag268 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag269
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag270
    }
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag268
};

static const __midl_frag266_t __midl_frag266 =
{ 
/* *_RPC_STRING */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag265_t __midl_frag265 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag264_t __midl_frag264 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag265
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_RPC_STRING */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag113
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag266
    }
};

static const __midl_frag263_t __midl_frag263 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag264
};

static const __midl_frag262_t __midl_frag262 =
{ 
/* *_RPC_SID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag92
};

static const __midl_frag261_t __midl_frag261 =
{ 
/* *_RPC_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag260_t __midl_frag260 =
{ 
/* long */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 61440 /* 0xf000 */
};

static const __midl_frag259_t __midl_frag259 =
{ 
/* short */
    0xa4,    /* FC64_RANGE */
    0x4,    /* FC64_INT16 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 256 /* 0x100 */
};

static const __midl_frag258_t __midl_frag258 =
0x5    /* FC64_INT32 */;

static const __midl_frag257_t __midl_frag257 =
0x4    /* FC64_INT16 */;

static const __midl_frag255_t __midl_frag255 =
{ 
/* *_FILETIME */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag233
};

static const __midl_frag254_t __midl_frag254 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag253_t __midl_frag253 =
{ 
/* ElfrReportEventExA */
    { 
    /* ElfrReportEventExA */      /* procedure ElfrReportEventExA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 112 /* 0x70 */ ,  /* Stack size */
        (NDR64_UINT32) 156 /* 0x9c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 14 /* 0xe */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* TimeGenerated */      /* parameter TimeGenerated */
        &__midl_frag233,
        { 
        /* TimeGenerated */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* EventType */      /* parameter EventType */
        &__midl_frag257,
        { 
        /* EventType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* EventCategory */      /* parameter EventCategory */
        &__midl_frag257,
        { 
        /* EventCategory */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* EventID */      /* parameter EventID */
        &__midl_frag258,
        { 
        /* EventID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NumStrings */      /* parameter NumStrings */
        &__midl_frag259,
        { 
        /* NumStrings */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DataSize */      /* parameter DataSize */
        &__midl_frag260,
        { 
        /* DataSize */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* ComputerName */      /* parameter ComputerName */
        &__midl_frag113,
        { 
        /* ComputerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* UserSID */      /* parameter UserSID */
        &__midl_frag262,
        { 
        /* UserSID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* Strings */      /* parameter Strings */
        &__midl_frag263,
        { 
        /* Strings */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Data */      /* parameter Data */
        &__midl_frag267,
        { 
        /* Data */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag271,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* RecordNumber */      /* parameter RecordNumber */
        &__midl_frag272,
        { 
        /* RecordNumber */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag274,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    }
};

static const __midl_frag244_t __midl_frag244 =
{ 
/* *_RPC_UNICODE_STRING */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag242_t __midl_frag242 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag265
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_RPC_UNICODE_STRING */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag244
    }
};

static const __midl_frag241_t __midl_frag241 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag242
};

static const __midl_frag239_t __midl_frag239 =
{ 
/* *_RPC_UNICODE_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag233_t __midl_frag233 =
{ 
/* _FILETIME */
    { 
    /* _FILETIME */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _FILETIME */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/* ElfrReportEventExW */
    { 
    /* ElfrReportEventExW */      /* procedure ElfrReportEventExW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 112 /* 0x70 */ ,  /* Stack size */
        (NDR64_UINT32) 156 /* 0x9c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 14 /* 0xe */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* TimeGenerated */      /* parameter TimeGenerated */
        &__midl_frag233,
        { 
        /* TimeGenerated */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* EventType */      /* parameter EventType */
        &__midl_frag257,
        { 
        /* EventType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* EventCategory */      /* parameter EventCategory */
        &__midl_frag257,
        { 
        /* EventCategory */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* EventID */      /* parameter EventID */
        &__midl_frag258,
        { 
        /* EventID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NumStrings */      /* parameter NumStrings */
        &__midl_frag259,
        { 
        /* NumStrings */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DataSize */      /* parameter DataSize */
        &__midl_frag260,
        { 
        /* DataSize */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* ComputerName */      /* parameter ComputerName */
        &__midl_frag5,
        { 
        /* ComputerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* UserSID */      /* parameter UserSID */
        &__midl_frag262,
        { 
        /* UserSID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* Strings */      /* parameter Strings */
        &__midl_frag241,
        { 
        /* Strings */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Data */      /* parameter Data */
        &__midl_frag267,
        { 
        /* Data */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag271,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* RecordNumber */      /* parameter RecordNumber */
        &__midl_frag272,
        { 
        /* RecordNumber */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag274,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    }
};

static const __midl_frag227_t __midl_frag227 =
{ 
/* *long */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag258
};

static const __midl_frag223_t __midl_frag223 =
0x10    /* FC64_CHAR */;

static const __midl_frag222_t __midl_frag222 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 61440 /* 0xf000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */  /* Offset */
    }
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag222
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag223
    }
};

static const __midl_frag220_t __midl_frag220 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag221
};

static const __midl_frag219_t __midl_frag219 =
{ 
/* *_RPC_UNICODE_STRING */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag218_t __midl_frag218 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */  /* Offset */
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag218
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_RPC_UNICODE_STRING */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag219
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag217
};

static const __midl_frag215_t __midl_frag215 =
{ 
/* *_RPC_SID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag92
};

static const __midl_frag214_t __midl_frag214 =
{ 
/* *_RPC_UNICODE_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag213_t __midl_frag213 =
{ 
/* long */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 61440 /* 0xf000 */
};

static const __midl_frag212_t __midl_frag212 =
{ 
/* short */
    0xa4,    /* FC64_RANGE */
    0x4,    /* FC64_INT16 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 256 /* 0x100 */
};

static const __midl_frag210_t __midl_frag210 =
0x5    /* FC64_INT32 */;

static const __midl_frag209_t __midl_frag209 =
0x4    /* FC64_INT16 */;

static const __midl_frag205_t __midl_frag205 =
{ 
/* ElfrReportEventAndSourceW */
    { 
    /* ElfrReportEventAndSourceW */      /* procedure ElfrReportEventAndSourceW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 128 /* 0x80 */ ,  /* Stack size */
        (NDR64_UINT32) 148 /* 0x94 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 16 /* 0x10 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Time */      /* parameter Time */
        &__midl_frag210,
        { 
        /* Time */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* EventType */      /* parameter EventType */
        &__midl_frag209,
        { 
        /* EventType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* EventCategory */      /* parameter EventCategory */
        &__midl_frag209,
        { 
        /* EventCategory */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* EventID */      /* parameter EventID */
        &__midl_frag210,
        { 
        /* EventID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* SourceName */      /* parameter SourceName */
        &__midl_frag5,
        { 
        /* SourceName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NumStrings */      /* parameter NumStrings */
        &__midl_frag212,
        { 
        /* NumStrings */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* DataSize */      /* parameter DataSize */
        &__midl_frag213,
        { 
        /* DataSize */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* ComputerName */      /* parameter ComputerName */
        &__midl_frag5,
        { 
        /* ComputerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* UserSID */      /* parameter UserSID */
        &__midl_frag215,
        { 
        /* UserSID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Strings */      /* parameter Strings */
        &__midl_frag216,
        { 
        /* Strings */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* Data */      /* parameter Data */
        &__midl_frag220,
        { 
        /* Data */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag257,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* RecordNumber */      /* parameter RecordNumber */
        &__midl_frag227,
        { 
        /* RecordNumber */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    },
    { 
    /* TimeWritten */      /* parameter TimeWritten */
        &__midl_frag227,
        { 
        /* TimeWritten */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        112 /* 0x70 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag258,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        120 /* 0x78 */,   /* Stack offset */
    }
};

static const __midl_frag204_t __midl_frag204 =
{ 
/* Opnum23NotUsedOnWire */
    { 
    /* Opnum23NotUsedOnWire */      /* procedure Opnum23NotUsedOnWire */
        (NDR64_UINT32) 16777280 /* 0x1000040 */,    /* explicit handle */ /* IsIntrepreted, HasExtensions */
        (NDR64_UINT32) 8 /* 0x8 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    }
};

static const __midl_frag201_t __midl_frag201 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag258
};

static const __midl_frag200_t __midl_frag200 =
{ 
/* long */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 1024 /* 0x400 */
};

static const __midl_frag198_t __midl_frag198 =
{ 
/*  */
    (NDR64_UINT32) 4 /* 0x4 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 1024 /* 0x400 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag197_t __midl_frag197 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag198
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag223
    }
};

static const __midl_frag196_t __midl_frag196 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag197
};

static const __midl_frag193_t __midl_frag193 =
{ 
/* ElfrGetLogInformation */
    { 
    /* ElfrGetLogInformation */      /* procedure ElfrGetLogInformation */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* InfoLevel */      /* parameter InfoLevel */
        &__midl_frag210,
        { 
        /* InfoLevel */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* lpBuffer */      /* parameter lpBuffer */
        &__midl_frag197,
        { 
        /* lpBuffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBufSize */      /* parameter cbBufSize */
        &__midl_frag200,
        { 
        /* cbBufSize */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pcbBytesNeeded */      /* parameter pcbBytesNeeded */
        &__midl_frag258,
        { 
        /* pcbBytesNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag258,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag182_t __midl_frag182 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 61440 /* 0xf000 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */  /* Offset */
    }
};

static const __midl_frag181_t __midl_frag181 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag182
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag223
    }
};

static const __midl_frag180_t __midl_frag180 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag181
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* *_RPC_STRING */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag178_t __midl_frag178 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 256 /* 0x100 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag177_t __midl_frag177 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag178
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_RPC_STRING */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag113
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag179
    }
};

static const __midl_frag176_t __midl_frag176 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag177
};

static const __midl_frag174_t __midl_frag174 =
{ 
/* *_RPC_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag166_t __midl_frag166 =
{ 
/* ElfrReportEventA */
    { 
    /* ElfrReportEventA */      /* procedure ElfrReportEventA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 120 /* 0x78 */ ,  /* Stack size */
        (NDR64_UINT32) 148 /* 0x94 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 15 /* 0xf */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Time */      /* parameter Time */
        &__midl_frag210,
        { 
        /* Time */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* EventType */      /* parameter EventType */
        &__midl_frag209,
        { 
        /* EventType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* EventCategory */      /* parameter EventCategory */
        &__midl_frag209,
        { 
        /* EventCategory */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* EventID */      /* parameter EventID */
        &__midl_frag210,
        { 
        /* EventID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NumStrings */      /* parameter NumStrings */
        &__midl_frag212,
        { 
        /* NumStrings */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DataSize */      /* parameter DataSize */
        &__midl_frag213,
        { 
        /* DataSize */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* ComputerName */      /* parameter ComputerName */
        &__midl_frag113,
        { 
        /* ComputerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* UserSID */      /* parameter UserSID */
        &__midl_frag215,
        { 
        /* UserSID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* Strings */      /* parameter Strings */
        &__midl_frag176,
        { 
        /* Strings */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Data */      /* parameter Data */
        &__midl_frag180,
        { 
        /* Data */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag257,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* RecordNumber */      /* parameter RecordNumber */
        &__midl_frag227,
        { 
        /* RecordNumber */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* TimeWritten */      /* parameter TimeWritten */
        &__midl_frag227,
        { 
        /* TimeWritten */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag258,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        112 /* 0x70 */,   /* Stack offset */
    }
};

static const __midl_frag159_t __midl_frag159 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 524287 /* 0x7ffff */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag158_t __midl_frag158 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag159
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag223
    }
};

static const __midl_frag157_t __midl_frag157 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag158
};

static const __midl_frag156_t __midl_frag156 =
{ 
/* RULONG */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 524287 /* 0x7ffff */
};

static const __midl_frag152_t __midl_frag152 =
{ 
/* ElfrReadELA */
    { 
    /* ElfrReadELA */      /* procedure ElfrReadELA */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ReadFlags */      /* parameter ReadFlags */
        &__midl_frag210,
        { 
        /* ReadFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* RecordOffset */      /* parameter RecordOffset */
        &__midl_frag210,
        { 
        /* RecordOffset */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* NumberOfBytesToRead */      /* parameter NumberOfBytesToRead */
        &__midl_frag156,
        { 
        /* NumberOfBytesToRead */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Buffer */      /* parameter Buffer */
        &__midl_frag158,
        { 
        /* Buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NumberOfBytesRead */      /* parameter NumberOfBytesRead */
        &__midl_frag258,
        { 
        /* NumberOfBytesRead */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* MinNumberOfBytesNeeded */      /* parameter MinNumberOfBytesNeeded */
        &__midl_frag258,
        { 
        /* MinNumberOfBytesNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag258,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag150_t __midl_frag150 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag149_t __midl_frag149 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag150
};

static const __midl_frag144_t __midl_frag144 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag223
};

static const __midl_frag143_t __midl_frag143 =
{ 
/* ElfrOpenBELA */
    { 
    /* ElfrOpenBELA */      /* procedure ElfrOpenBELA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 45 /* 0x2d */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* UNCServerName */      /* parameter UNCServerName */
        &__midl_frag144,
        { 
        /* UNCServerName */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BackupFileName */      /* parameter BackupFileName */
        &__midl_frag113,
        { 
        /* BackupFileName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* MajorVersion */      /* parameter MajorVersion */
        &__midl_frag258,
        { 
        /* MajorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* MinorVersion */      /* parameter MinorVersion */
        &__midl_frag258,
        { 
        /* MinorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag150,
        { 
        /* LogHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag258,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag137_t __midl_frag137 =
{ 
/* *_RPC_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag134_t __midl_frag134 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag270
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* ElfrRegisterEventSourceA */
    { 
    /* ElfrRegisterEventSourceA */      /* procedure ElfrRegisterEventSourceA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 45 /* 0x2d */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* UNCServerName */      /* parameter UNCServerName */
        &__midl_frag134,
        { 
        /* UNCServerName */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ModuleName */      /* parameter ModuleName */
        &__midl_frag113,
        { 
        /* ModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* RegModuleName */      /* parameter RegModuleName */
        &__midl_frag113,
        { 
        /* RegModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* MajorVersion */      /* parameter MajorVersion */
        &__midl_frag274,
        { 
        /* MajorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* MinorVersion */      /* parameter MinorVersion */
        &__midl_frag274,
        { 
        /* MinorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag150,
        { 
        /* LogHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag274,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag132_t __midl_frag132 =
0x5    /* FC64_INT32 */;

static const __midl_frag131_t __midl_frag131 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag130_t __midl_frag130 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag131
};

static const __midl_frag125_t __midl_frag125 =
0x10    /* FC64_CHAR */;

static const __midl_frag124_t __midl_frag124 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag125
};

static const __midl_frag123_t __midl_frag123 =
{ 
/* ElfrOpenELA */
    { 
    /* ElfrOpenELA */      /* procedure ElfrOpenELA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 45 /* 0x2d */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* UNCServerName */      /* parameter UNCServerName */
        &__midl_frag124,
        { 
        /* UNCServerName */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ModuleName */      /* parameter ModuleName */
        &__midl_frag113,
        { 
        /* ModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* RegModuleName */      /* parameter RegModuleName */
        &__midl_frag113,
        { 
        /* RegModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* MajorVersion */      /* parameter MajorVersion */
        &__midl_frag132,
        { 
        /* MajorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* MinorVersion */      /* parameter MinorVersion */
        &__midl_frag132,
        { 
        /* MinorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag131,
        { 
        /* LogHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag132,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag122_t __midl_frag122 =
0x5    /* FC64_INT32 */;

static const __midl_frag121_t __midl_frag121 =
{ 
/* *_RPC_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag120_t __midl_frag120 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag119_t __midl_frag119 =
{ 
/* ElfrBackupELFA */
    { 
    /* ElfrBackupELFA */      /* procedure ElfrBackupELFA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag120,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BackupFileName */      /* parameter BackupFileName */
        &__midl_frag113,
        { 
        /* BackupFileName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag122,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag117_t __midl_frag117 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag114
    }
};

static const __midl_frag116_t __midl_frag116 =
0x10    /* FC64_CHAR */;

static const __midl_frag115_t __midl_frag115 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    }
};

static const __midl_frag114_t __midl_frag114 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag115
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag116
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* _RPC_STRING */
    { 
    /* _RPC_STRING */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _RPC_STRING */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag117,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag112_t __midl_frag112 =
{ 
/* *_RPC_STRING */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* ElfrClearELFA */
    { 
    /* ElfrClearELFA */      /* procedure ElfrClearELFA */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag120,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BackupFileName */      /* parameter BackupFileName */
        &__midl_frag112,
        { 
        /* BackupFileName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag210,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag107_t __midl_frag107 =
{ 
/* *long */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag210
};

static const __midl_frag104_t __midl_frag104 =
0x4    /* FC64_INT16 */;

static const __midl_frag101_t __midl_frag101 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag182
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag116
    }
};

static const __midl_frag100_t __midl_frag100 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag101
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* *_RPC_UNICODE_STRING */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag97_t __midl_frag97 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag178
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_RPC_UNICODE_STRING */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag99
    }
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* struct _NDR64_POINTER_FORMAT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag97
};

static const __midl_frag94_t __midl_frag94 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x1,    /* FC64_UINT8 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag94
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag122
    }
};

static const __midl_frag92_t __midl_frag92 =
{ 
/* _RPC_SID */
    { 
    /* _RPC_SID */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _RPC_SID */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag93
    }
};

static const __midl_frag91_t __midl_frag91 =
{ 
/* *_RPC_SID */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag92
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* *_RPC_UNICODE_STRING */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* long */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 61440 /* 0xf000 */
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* short */
    0xa4,    /* FC64_RANGE */
    0x4,    /* FC64_INT16 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 256 /* 0x100 */
};

static const __midl_frag86_t __midl_frag86 =
0x4    /* FC64_INT16 */;

static const __midl_frag83_t __midl_frag83 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* ElfrReportEventW */
    { 
    /* ElfrReportEventW */      /* procedure ElfrReportEventW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 120 /* 0x78 */ ,  /* Stack size */
        (NDR64_UINT32) 148 /* 0x94 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 15 /* 0xf */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag83,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Time */      /* parameter Time */
        &__midl_frag132,
        { 
        /* Time */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* EventType */      /* parameter EventType */
        &__midl_frag86,
        { 
        /* EventType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* EventCategory */      /* parameter EventCategory */
        &__midl_frag86,
        { 
        /* EventCategory */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* EventID */      /* parameter EventID */
        &__midl_frag132,
        { 
        /* EventID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NumStrings */      /* parameter NumStrings */
        &__midl_frag88,
        { 
        /* NumStrings */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DataSize */      /* parameter DataSize */
        &__midl_frag89,
        { 
        /* DataSize */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* ComputerName */      /* parameter ComputerName */
        &__midl_frag5,
        { 
        /* ComputerName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* UserSID */      /* parameter UserSID */
        &__midl_frag91,
        { 
        /* UserSID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* Strings */      /* parameter Strings */
        &__midl_frag96,
        { 
        /* Strings */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* Data */      /* parameter Data */
        &__midl_frag100,
        { 
        /* Data */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag104,
        { 
        /* Flags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    },
    { 
    /* RecordNumber */      /* parameter RecordNumber */
        &__midl_frag107,
        { 
        /* RecordNumber */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        96 /* 0x60 */,   /* Stack offset */
    },
    { 
    /* TimeWritten */      /* parameter TimeWritten */
        &__midl_frag107,
        { 
        /* TimeWritten */
            0,
            1,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        104 /* 0x68 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag210,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        112 /* 0x70 */,   /* Stack offset */
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag122
};

static const __midl_frag75_t __midl_frag75 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 524287 /* 0x7ffff */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag74_t __midl_frag74 =
{ 
/* *char */
    { 
    /* *char */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *char */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag75
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag125
    }
};

static const __midl_frag73_t __midl_frag73 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag74
};

static const __midl_frag68_t __midl_frag68 =
{ 
/* ElfrReadELW */
    { 
    /* ElfrReadELW */      /* procedure ElfrReadELW */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag83,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ReadFlags */      /* parameter ReadFlags */
        &__midl_frag132,
        { 
        /* ReadFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* RecordOffset */      /* parameter RecordOffset */
        &__midl_frag132,
        { 
        /* RecordOffset */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* NumberOfBytesToRead */      /* parameter NumberOfBytesToRead */
        &__midl_frag156,
        { 
        /* NumberOfBytesToRead */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Buffer */      /* parameter Buffer */
        &__midl_frag74,
        { 
        /* Buffer */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NumberOfBytesRead */      /* parameter NumberOfBytesRead */
        &__midl_frag122,
        { 
        /* NumberOfBytesRead */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* MinNumberOfBytesNeeded */      /* parameter MinNumberOfBytesNeeded */
        &__midl_frag122,
        { 
        /* MinNumberOfBytesNeeded */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag122,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag61_t __midl_frag61 =
0x11    /* FC64_WCHAR */;

static const __midl_frag60_t __midl_frag60 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag61
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* ElfrOpenBELW */
    { 
    /* ElfrOpenBELW */      /* procedure ElfrOpenBELW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 46 /* 0x2e */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* UNCServerName */      /* parameter UNCServerName */
        &__midl_frag60,
        { 
        /* UNCServerName */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BackupFileName */      /* parameter BackupFileName */
        &__midl_frag5,
        { 
        /* BackupFileName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* MajorVersion */      /* parameter MajorVersion */
        &__midl_frag122,
        { 
        /* MajorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* MinorVersion */      /* parameter MinorVersion */
        &__midl_frag122,
        { 
        /* MinorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag150,
        { 
        /* LogHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag122,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* ElfrRegisterEventSourceW */
    { 
    /* ElfrRegisterEventSourceW */      /* procedure ElfrRegisterEventSourceW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 46 /* 0x2e */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* UNCServerName */      /* parameter UNCServerName */
        &__midl_frag60,
        { 
        /* UNCServerName */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ModuleName */      /* parameter ModuleName */
        &__midl_frag5,
        { 
        /* ModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* RegModuleName */      /* parameter RegModuleName */
        &__midl_frag5,
        { 
        /* RegModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* MajorVersion */      /* parameter MajorVersion */
        &__midl_frag210,
        { 
        /* MajorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* MinorVersion */      /* parameter MinorVersion */
        &__midl_frag210,
        { 
        /* MinorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag150,
        { 
        /* LogHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag210,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag41_t __midl_frag41 =
0x11    /* FC64_WCHAR */;

static const __midl_frag40_t __midl_frag40 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag41
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* ElfrOpenELW */
    { 
    /* ElfrOpenELW */      /* procedure ElfrOpenELW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 46 /* 0x2e */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* UNCServerName */      /* parameter UNCServerName */
        &__midl_frag40,
        { 
        /* UNCServerName */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ModuleName */      /* parameter ModuleName */
        &__midl_frag5,
        { 
        /* ModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* RegModuleName */      /* parameter RegModuleName */
        &__midl_frag5,
        { 
        /* RegModuleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* MajorVersion */      /* parameter MajorVersion */
        &__midl_frag132,
        { 
        /* MajorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* MinorVersion */      /* parameter MinorVersion */
        &__midl_frag132,
        { 
        /* MinorVersion */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag150,
        { 
        /* LogHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag132,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag36_t __midl_frag36 =
{ 
/* RPC_CLIENT_ID */
    { 
    /* RPC_CLIENT_ID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* RPC_CLIENT_ID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag34_t __midl_frag34 =
{ 
/* ElfrChangeNotify */
    { 
    /* ElfrChangeNotify */      /* procedure ElfrChangeNotify */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag83,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ClientId */      /* parameter ClientId */
        &__midl_frag36,
        { 
        /* ClientId */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Event */      /* parameter Event */
        &__midl_frag132,
        { 
        /* Event */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag132,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag31_t __midl_frag31 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag132
};

static const __midl_frag29_t __midl_frag29 =
{ 
/* ElfrOldestRecord */
    { 
    /* ElfrOldestRecord */      /* procedure ElfrOldestRecord */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag83,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* OldestRecordNumber */      /* parameter OldestRecordNumber */
        &__midl_frag132,
        { 
        /* OldestRecordNumber */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag132,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag22_t __midl_frag22 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag22
};

static const __midl_frag20_t __midl_frag20 =
{ 
/* ElfrDeregisterEventSource */
    { 
    /* ElfrDeregisterEventSource */      /* procedure ElfrDeregisterEventSource */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 224 /* 0xe0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag22,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag122,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* ElfrCloseEL */
    { 
    /* ElfrCloseEL */      /* procedure ElfrCloseEL */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 224 /* 0xe0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag22,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag210,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* ElfrBackupELFW */
    { 
    /* ElfrBackupELFW */      /* procedure ElfrBackupELFW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BackupFileName */      /* parameter BackupFileName */
        &__midl_frag5,
        { 
        /* BackupFileName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag258,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag10_t __midl_frag10 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag6
    }
};

static const __midl_frag9_t __midl_frag9 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_NOOP */
        0x5,    /* FC_EXPR_PAD */
        (NDR64_UINT8) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 0 /* 0x0 */
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x11,    /* OP_SLASH */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 2 /* 0x2 */
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x11,    /* OP_SLASH */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 2 /* 0x2 */
    }
};

static const __midl_frag6_t __midl_frag6 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x43,    /* FC64_CONFVAR_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag7,
        &__midl_frag8
    }
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* _RPC_UNICODE_STRING */
    { 
    /* _RPC_UNICODE_STRING */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _RPC_UNICODE_STRING */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag10,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* ElfrClearELFW */
    { 
    /* ElfrClearELFW */      /* procedure ElfrClearELFW */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* LogHandle */      /* parameter LogHandle */
        &__midl_frag254,
        { 
        /* LogHandle */
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BackupFileName */      /* parameter BackupFileName */
        &__midl_frag244,
        { 
        /* BackupFileName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NTSTATUS */      /* parameter NTSTATUS */
        &__midl_frag274,
        { 
        /* NTSTATUS */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


static const FormatInfoRef eventlog_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag12,
    &__midl_frag16,
    &__midl_frag20,
    &__midl_frag29,
    &__midl_frag29,
    &__midl_frag34,
    &__midl_frag39,
    &__midl_frag49,
    &__midl_frag59,
    &__midl_frag68,
    &__midl_frag82,
    &__midl_frag110,
    &__midl_frag119,
    &__midl_frag123,
    &__midl_frag133,
    &__midl_frag143,
    &__midl_frag152,
    &__midl_frag166,
    &__midl_frag204,
    &__midl_frag204,
    &__midl_frag204,
    &__midl_frag193,
    &__midl_frag204,
    &__midl_frag205,
    &__midl_frag230,
    &__midl_frag253
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC eventlog_StubDesc = 
    {
    (void *)& eventlog___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &eventlog__MIDL_AutoBindHandle,
    0,
    BindingRoutines,
    0,
    0,
    ms2Deven__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& eventlog_ProxyInfo,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const MIDL_SYNTAX_INFO eventlog_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ms2Deven__MIDL_ProcFormatString.Format,
    eventlog_FormatStringOffsetTable,
    ms2Deven__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) eventlog_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO eventlog_ProxyInfo =
    {
    &eventlog_StubDesc,
    ms2Deven__MIDL_ProcFormatString.Format,
    eventlog_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)eventlog_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

