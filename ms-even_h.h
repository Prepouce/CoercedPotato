

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Deven_h_h__
#define __ms2Deven_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __eventlog_INTERFACE_DEFINED__
#define __eventlog_INTERFACE_DEFINED__

/* interface eventlog */
/* [unique][ms_union][version][uuid] */ 

typedef long NTSTATUS;

typedef void *ADCONNECTION_HANDLE;

typedef int BOOL;

typedef int *PBOOL;

typedef int *LPBOOL;

typedef unsigned char BYTE;

typedef unsigned char *PBYTE;

typedef unsigned char *LPBYTE;

typedef BYTE BOOLEAN;

typedef BYTE *PBOOLEAN;

typedef wchar_t WCHAR;

typedef wchar_t *PWCHAR;

typedef WCHAR *BSTR;

typedef double DOUBLE;

typedef unsigned long ULONG;

typedef unsigned long *PULONG;

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef unsigned int DWORD32;

typedef unsigned __int64 DWORD64;

typedef unsigned __int64 *PDWORD64;

typedef unsigned __int64 ULONGLONG;

typedef ULONGLONG DWORDLONG;

typedef ULONGLONG *PDWORDLONG;

typedef unsigned long error_status_t;

typedef float FLOAT;

typedef unsigned char UCHAR;

typedef unsigned char *PUCHAR;

typedef short SHORT;

typedef struct _RPC_UNICODE_STRING
    {
    unsigned short Length;
    unsigned short MaximumLength;
    /* [length_is][size_is] */ WCHAR *Buffer;
    } 	RPC_UNICODE_STRING;

typedef struct _RPC_UNICODE_STRING *PRPC_UNICODE_STRING;

typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;

typedef struct _RPC_SID *PRPC_SID;

typedef struct _RPC_STRING
    {
    unsigned short Length;
    unsigned short MaximumLength;
    /* [size_is] */ unsigned char *Buffer;
    } 	RPC_STRING;

typedef struct _RPC_STRING *PRPC_STRING;

typedef struct _RPC_CLIENT_ID
    {
    unsigned long UniqueProcess;
    unsigned long UniqueThread;
    } 	RPC_CLIENT_ID;

typedef struct _RPC_CLIENT_ID *PRPC_CLIENT_ID;

typedef /* [unique][handle] */ wchar_t *EVENTLOG_HANDLE_W;

typedef /* [unique][handle] */ unsigned char *EVENTLOG_HANDLE_A;

typedef /* [context_handle] */ void *IELF_HANDLE;

typedef /* [context_handle] */ void **PIELF_HANDLE;

typedef /* [range] */ unsigned long RULONG;

NTSTATUS ElfrClearELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING BackupFileName);

NTSTATUS ElfrBackupELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName);

NTSTATUS ElfrCloseEL( 
    /* [out][in] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrDeregisterEventSource( 
    /* [out][in] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrNumberOfRecords( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ unsigned long *NumberOfRecords);

NTSTATUS ElfrOldestRecord( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ unsigned long *OldestRecordNumber);

NTSTATUS ElfrChangeNotify( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ RPC_CLIENT_ID ClientId,
    /* [in] */ ULONG Event);

NTSTATUS ElfrOpenELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrRegisterEventSourceW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrOpenBELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrReadELW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long ReadFlags,
    /* [in] */ unsigned long RecordOffset,
    /* [in] */ RULONG NumberOfBytesToRead,
    /* [size_is][out] */ unsigned char *Buffer,
    /* [out] */ unsigned long *NumberOfBytesRead,
    /* [out] */ unsigned long *MinNumberOfBytesNeeded);

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
    /* [unique][out][in] */ unsigned long *TimeWritten);

NTSTATUS ElfrClearELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_STRING BackupFileName);

NTSTATUS ElfrBackupELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_STRING BackupFileName);

NTSTATUS ElfrOpenELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrRegisterEventSourceA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrOpenBELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING BackupFileName,
    /* [in] */ unsigned long MajorVersion,
    /* [in] */ unsigned long MinorVersion,
    /* [out] */ IELF_HANDLE *LogHandle);

NTSTATUS ElfrReadELA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long ReadFlags,
    /* [in] */ unsigned long RecordOffset,
    /* [in] */ RULONG NumberOfBytesToRead,
    /* [size_is][out] */ unsigned char *Buffer,
    /* [out] */ unsigned long *NumberOfBytesRead,
    /* [out] */ unsigned long *MinNumberOfBytesNeeded);

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
    /* [unique][out][in] */ unsigned long *TimeWritten);

void Opnum19NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum20NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum21NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NTSTATUS ElfrGetLogInformation( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ unsigned long InfoLevel,
    /* [size_is][out] */ unsigned char *lpBuffer,
    /* [range][in] */ unsigned long cbBufSize,
    /* [out] */ unsigned long *pcbBytesNeeded);

void Opnum23NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

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
    /* [unique][out][in] */ unsigned long *TimeWritten);

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
    /* [unique][out][in] */ unsigned long *RecordNumber);

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
    /* [unique][out][in] */ unsigned long *RecordNumber);



extern RPC_IF_HANDLE eventlog_v0_0_c_ifspec;
extern RPC_IF_HANDLE eventlog_v0_0_s_ifspec;
#endif /* __eventlog_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER EVENTLOG_HANDLE_W_bind ( EVENTLOG_HANDLE_W );
void     __RPC_USER EVENTLOG_HANDLE_W_unbind( EVENTLOG_HANDLE_W,  handle_t );
handle_t __RPC_USER EVENTLOG_HANDLE_A_bind ( EVENTLOG_HANDLE_A );
void     __RPC_USER EVENTLOG_HANDLE_A_unbind( EVENTLOG_HANDLE_A,  handle_t );

void __RPC_USER IELF_HANDLE_rundown( IELF_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


