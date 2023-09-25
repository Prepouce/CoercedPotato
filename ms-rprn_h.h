

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for IDL_FILES\ms-rprn.idl:
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


#ifndef __ms2Drprn_h_h__
#define __ms2Drprn_h_h__

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


#ifndef __winspool_INTERFACE_DEFINED__
#define __winspool_INTERFACE_DEFINED__

/* interface winspool */
/* [version][uuid] */ 

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

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef unsigned int DWORD32;

typedef unsigned __int64 DWORD64;

typedef unsigned __int64 *PDWORD64;

typedef unsigned __int64 ULONGLONG;

typedef ULONGLONG DWORDLONG;

typedef ULONGLONG *PDWORDLONG;

typedef unsigned char UCHAR;

typedef unsigned char *PUCHAR;

typedef void *HANDLE;

typedef DWORD HCALL;

typedef int INT;

typedef int *LPINT;

typedef signed char INT8;

typedef short INT16;

typedef int INT32;

typedef __int64 INT64;

typedef void *LDAP_UDP_HANDLE;

typedef const wchar_t *LMCSTR;

typedef WCHAR *LMSTR;

typedef long LONG;

typedef long *PLONG;

typedef long *LPLONG;

typedef __int64 LONGLONG;

typedef LONG HRESULT;

typedef /* [custom] */ __int3264 LONG_PTR;

typedef /* [custom] */ unsigned __int3264 ULONG_PTR;

typedef int LONG32;

typedef __int64 LONG64;

typedef __int64 *PLONG64;

typedef const void *LPCVOID;

typedef const wchar_t *LPCWSTR;

typedef unsigned int UINT;

typedef unsigned char UINT8;

typedef unsigned short UINT16;

typedef unsigned int UINT32;

typedef unsigned __int64 UINT64;

typedef unsigned long ULONG;

typedef unsigned long *PULONG;

typedef unsigned __int64 QWORD;

typedef void *RPC_BINDING_HANDLE;

typedef UCHAR *STRING;

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef unsigned int ULONG32;

typedef unsigned __int64 ULONG64;

typedef unsigned short USHORT;

typedef void *PVOID;

typedef void *LPVOID;

typedef unsigned short WORD;

typedef unsigned short *PWORD;

typedef unsigned short *LPWORD;


typedef struct _GUID UUID;

typedef struct _GUID *PGUID;

typedef unsigned short LANGID;

typedef /* [context_handle] */ void *GDI_HANDLE;

typedef /* [context_handle] */ void *PRINTER_HANDLE;

typedef /* [handle] */ wchar_t *STRING_HANDLE;


typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;


typedef struct _SYSTEMTIME *PSYSTEMTIME;

typedef struct _RPC_DRIVER_INFO_3
    {
    DWORD cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    DWORD cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    } 	RPC_DRIVER_INFO_3;

typedef struct _RPC_DRIVER_INFO_4
    {
    DWORD cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    DWORD cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    DWORD cchPreviousNames;
    /* [unique][size_is] */ wchar_t *pszzPreviousNames;
    } 	RPC_DRIVER_INFO_4;

typedef struct _RPC_DRIVER_INFO_6
    {
    DWORD cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    DWORD cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    DWORD cchPreviousNames;
    /* [unique][size_is] */ wchar_t *pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    /* [string] */ wchar_t *pMfgName;
    /* [string] */ wchar_t *pOEMUrl;
    /* [string] */ wchar_t *pHardwareID;
    /* [string] */ wchar_t *pProvider;
    } 	RPC_DRIVER_INFO_6;

typedef struct _RPC_DRIVER_INFO_8
    {
    DWORD cVersion;
    /* [string] */ wchar_t *pName;
    /* [string] */ wchar_t *pEnvironment;
    /* [string] */ wchar_t *pDriverPath;
    /* [string] */ wchar_t *pDataFile;
    /* [string] */ wchar_t *pConfigFile;
    /* [string] */ wchar_t *pHelpFile;
    /* [string] */ wchar_t *pMonitorName;
    /* [string] */ wchar_t *pDefaultDataType;
    DWORD cchDependentFiles;
    /* [unique][size_is] */ wchar_t *pDependentFiles;
    DWORD cchPreviousNames;
    /* [unique][size_is] */ wchar_t *pszzPreviousNames;
    FILETIME ftDriverDate;
    DWORDLONG dwlDriverVersion;
    /* [string] */ wchar_t *pMfgName;
    /* [string] */ wchar_t *pOEMUrl;
    /* [string] */ wchar_t *pHardwareID;
    /* [string] */ wchar_t *pProvider;
    /* [string] */ wchar_t *pPrintProcessor;
    /* [string] */ wchar_t *pVendorSetup;
    DWORD cchColorProfiles;
    /* [unique][size_is] */ wchar_t *pszzColorProfiles;
    /* [string] */ wchar_t *pInfPath;
    DWORD dwPrinterDriverAttributes;
    DWORD cchCoreDependencies;
    /* [unique][size_is] */ wchar_t *pszzCoreDriverDependencies;
    FILETIME ftMinInboxDriverVerDate;
    DWORDLONG dwlMinInboxDriverVerVersion;
    } 	RPC_DRIVER_INFO_8;

typedef struct _RPC_FORM_INFO_2
    {
    DWORD Flags;
    /* [unique][string] */ const wchar_t *pName;
    SIZE Size;
    RECTL ImageableArea;
    /* [unique][string] */ const unsigned char *pKeyword;
    DWORD StringType;
    /* [unique][string] */ const wchar_t *pMuiDll;
    DWORD dwResourceId;
    /* [unique][string] */ const wchar_t *pDisplayName;
    LANGID wLangID;
    } 	RPC_FORM_INFO_2;

typedef struct _PORT_INFO_FF
    {
    /* [string] */ wchar_t *pPortName;
    DWORD cbMonitorData;
    BYTE *pMonitorData;
    } 	PORT_INFO_FF;

typedef struct _PRINTER_INFO_STRESS
    {
    /* [string] */ wchar_t *pPrinterName;
    /* [string] */ wchar_t *pServerName;
    DWORD cJobs;
    DWORD cTotalJobs;
    DWORD cTotalBytes;
    SYSTEMTIME stUpTime;
    DWORD MaxcRef;
    DWORD cTotalPagesPrinted;
    DWORD dwGetVersion;
    DWORD fFreeBuild;
    DWORD cSpooling;
    DWORD cMaxSpooling;
    DWORD cRef;
    DWORD cErrorOutOfPaper;
    DWORD cErrorNotReady;
    DWORD cJobError;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwHighPartTotalBytes;
    DWORD cChangeID;
    DWORD dwLastError;
    DWORD Status;
    DWORD cEnumerateNetworkPrinters;
    DWORD cAddNetPrinters;
    unsigned short wProcessorArchitecture;
    unsigned short wProcessorLevel;
    DWORD cRefIC;
    DWORD dwReserved2;
    DWORD dwReserved3;
    } 	PRINTER_INFO_STRESS;


typedef struct _SPLCLIENT_INFO_1
    {
    DWORD dwSize;
    /* [string] */ wchar_t *pMachineName;
    /* [string] */ wchar_t *pUserName;
    DWORD dwBuildNum;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    unsigned short wProcessorArchitecture;
    } 	SPLCLIENT_INFO_1;

typedef struct _SPLCLIENT_INFO_2
    {
    LONG_PTR notUsed;
    } 	SPLCLIENT_INFO_2;

typedef struct _SPLCLIENT_INFO_3
    {
    unsigned int cbSize;
    DWORD dwFlags;
    DWORD dwSize;
    /* [string] */ wchar_t *pMachineName;
    /* [string] */ wchar_t *pUserName;
    DWORD dwBuildNum;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    unsigned short wProcessorArchitecture;
    unsigned __int64 hSplPrinter;
    } 	SPLCLIENT_INFO_3;

typedef struct _DEVMODE_CONTAINER
    {
    DWORD cbBuf;
    /* [unique][size_is] */ BYTE *pDevMode;
    } 	DEVMODE_CONTAINER;

typedef struct _DOC_INFO_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ DOC_INFO_1 *pDocInfo1;
        } 	DocInfo;
    } 	DOC_INFO_CONTAINER;

typedef struct _DRIVER_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ DRIVER_INFO_1 *pNotUsed;
        /* [case()] */ DRIVER_INFO_2 *Level2;
        /* [case()] */ RPC_DRIVER_INFO_3 *Level3;
        /* [case()] */ RPC_DRIVER_INFO_4 *Level4;
        /* [case()] */ RPC_DRIVER_INFO_6 *Level6;
        /* [case()] */ RPC_DRIVER_INFO_8 *Level8;
        } 	DriverInfo;
    } 	DRIVER_CONTAINER;

typedef struct _FORM_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ FORM_INFO_1 *pFormInfo1;
        /* [case()] */ RPC_FORM_INFO_2 *pFormInfo2;
        } 	FormInfo;
    } 	FORM_CONTAINER;

typedef struct _JOB_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ JOB_INFO_1 *Level1;
        /* [case()] */ JOB_INFO_2 *Level2;
        /* [case()] */ JOB_INFO_3 *Level3;
        /* [case()] */ JOB_INFO_4 *Level4;
        } 	JobInfo;
    } 	JOB_CONTAINER;

typedef struct _MONITOR_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ MONITOR_INFO_1 *pMonitorInfo1;
        /* [case()] */ MONITOR_INFO_2 *pMonitorInfo2;
        } 	MonitorInfo;
    } 	MONITOR_CONTAINER;

typedef struct _PORT_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ PORT_INFO_1 *pPortInfo1;
        /* [case()] */ PORT_INFO_2 *pPortInfo2;
        /* [case()] */ PORT_INFO_3 *pPortInfo3;
        /* [case()] */ PORT_INFO_FF *pPortInfoFF;
        } 	PortInfo;
    } 	PORT_CONTAINER;

typedef struct _PORT_VAR_CONTAINER
    {
    DWORD cbMonitorData;
    /* [disable_consistency_check][unique][size_is] */ BYTE *pMonitorData;
    } 	PORT_VAR_CONTAINER;

typedef struct _PRINTER_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ PRINTER_INFO_STRESS *pPrinterInfoStress;
        /* [case()] */ PRINTER_INFO_1 *pPrinterInfo1;
        /* [case()] */ PRINTER_INFO_2 *pPrinterInfo2;
        /* [case()] */ PRINTER_INFO_3 *pPrinterInfo3;
        /* [case()] */ PRINTER_INFO_4 *pPrinterInfo4;
        /* [case()] */ PRINTER_INFO_5 *pPrinterInfo5;
        /* [case()] */ PRINTER_INFO_6 *pPrinterInfo6;
        /* [case()] */ PRINTER_INFO_7 *pPrinterInfo7;
        /* [case()] */ PRINTER_INFO_8 *pPrinterInfo8;
        /* [case()] */ PRINTER_INFO_9 *pPrinterInfo9;
        } 	PrinterInfo;
    } 	PRINTER_CONTAINER;

typedef struct SECURITY_CONTAINER
    {
    DWORD cbBuf;
    /* [unique][size_is] */ BYTE *pSecurity;
    } 	SECURITY_CONTAINER;

typedef struct _SPLCLIENT_CONTAINER
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ SPLCLIENT_INFO_1 *pClientInfo1;
        /* [case()] */ SPLCLIENT_INFO_2 *pNotUsed1;
        /* [case()] */ SPLCLIENT_INFO_3 *pNotUsed2;
        } 	ClientInfo;
    } 	SPLCLIENT_CONTAINER;

typedef struct _STRING_CONTAINER
    {
    DWORD cbBuf;
    /* [unique][size_is] */ WCHAR *pszString;
    } 	STRING_CONTAINER;

typedef struct _SYSTEMTIME_CONTAINER
    {
    DWORD cbBuf;
    SYSTEMTIME *pSystemTime;
    } 	SYSTEMTIME_CONTAINER;

typedef struct _RPC_V2_NOTIFY_OPTIONS_TYPE
    {
    unsigned short Type;
    unsigned short Reserved0;
    DWORD Reserved1;
    DWORD Reserved2;
    DWORD Count;
    /* [unique][size_is] */ unsigned short *pFields;
    } 	RPC_V2_NOTIFY_OPTIONS_TYPE;

typedef struct _RPC_V2_NOTIFY_OPTIONS
    {
    DWORD Version;
    DWORD Reserved;
    DWORD Count;
    /* [unique][size_is] */ RPC_V2_NOTIFY_OPTIONS_TYPE *pTypes;
    } 	RPC_V2_NOTIFY_OPTIONS;

typedef /* [public][public][public] */ 
enum __MIDL_winspool_0011
    {
        kInvalidJobState	= 0,
        kLogJobPrinted	= ( kInvalidJobState + 1 ) ,
        kLogJobRendered	= ( kLogJobPrinted + 1 ) ,
        kLogJobError	= ( kLogJobRendered + 1 ) ,
        kLogJobPipelineError	= ( kLogJobError + 1 ) ,
        kLogOfflineFileFull	= ( kLogJobPipelineError + 1 ) 
    } 	EBranchOfficeJobEventType;

typedef /* [public][public][public] */ struct __MIDL_winspool_0012
    {
    DWORD Status;
    /* [string] */ wchar_t *pDocumentName;
    /* [string] */ wchar_t *pUserName;
    /* [string] */ wchar_t *pMachineName;
    /* [string] */ wchar_t *pPrinterName;
    /* [string] */ wchar_t *pPortName;
    LONGLONG Size;
    DWORD TotalPages;
    } 	RPC_BranchOfficeJobDataPrinted;

typedef /* [public][public][public] */ struct __MIDL_winspool_0013
    {
    LONGLONG Size;
    DWORD ICMMethod;
    short Color;
    short PrintQuality;
    short YResolution;
    short Copies;
    short TTOption;
    } 	RPC_BranchOfficeJobDataRendered;

typedef /* [public][public][public] */ struct __MIDL_winspool_0014
    {
    DWORD LastError;
    /* [string] */ wchar_t *pDocumentName;
    /* [string] */ wchar_t *pUserName;
    /* [string] */ wchar_t *pPrinterName;
    /* [string] */ wchar_t *pDataType;
    LONGLONG TotalSize;
    LONGLONG PrintedSize;
    DWORD TotalPages;
    DWORD PrintedPages;
    /* [string] */ wchar_t *pMachineName;
    /* [string] */ wchar_t *pJobError;
    /* [string] */ wchar_t *pErrorDescription;
    } 	RPC_BranchOfficeJobDataError;

typedef /* [public][public][public] */ struct __MIDL_winspool_0015
    {
    /* [string] */ wchar_t *pDocumentName;
    /* [string] */ wchar_t *pPrinterName;
    /* [string] */ wchar_t *pExtraErrorInfo;
    } 	RPC_BranchOfficeJobDataPipelineFailed;

typedef /* [public][public][public] */ struct __MIDL_winspool_0016
    {
    /* [string] */ wchar_t *pMachineName;
    } 	RPC_BranchOfficeLogOfflineFileFull;

typedef /* [public][public] */ struct __MIDL_winspool_0017
    {
    EBranchOfficeJobEventType eEventType;
    DWORD JobId;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */ RPC_BranchOfficeJobDataPrinted LogJobPrinted;
        /* [case()] */ RPC_BranchOfficeJobDataRendered LogJobRendered;
        /* [case()] */ RPC_BranchOfficeJobDataError LogJobError;
        /* [case()] */ RPC_BranchOfficeJobDataPipelineFailed LogPipelineFailed;
        /* [case()] */ RPC_BranchOfficeLogOfflineFileFull LogOfflineFileFull;
        } 	JobInfo;
    } 	RPC_BranchOfficeJobData;

typedef /* [public] */ struct __MIDL_winspool_0019
    {
    DWORD cJobDataEntries;
    /* [unique][size_is] */ RPC_BranchOfficeJobData JobData[ 1 ];
    } 	RPC_BranchOfficeJobDataContainer;

DWORD RpcEnumPrinters( 
    /* [in] */ DWORD Flags,
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcOpenPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired);

DWORD RpcSetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [unique][in] */ JOB_CONTAINER *pJobContainer,
    /* [in] */ DWORD Command);

DWORD RpcGetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcEnumJobs( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD FirstJob,
    /* [in] */ DWORD NoJobs,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAddPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [out] */ PRINTER_HANDLE *pHandle);

DWORD RpcDeletePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcSetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ DWORD Command);

DWORD RpcGetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrinter,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAddPrinterDriver( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer);

DWORD RpcEnumPrinterDrivers( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcGetPrinterDriver( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcGetPrinterDriverDirectory( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDriverDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcDeletePrinterDriver( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName);

DWORD RpcAddPrintProcessor( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPathName,
    /* [string][in] */ wchar_t *pPrintProcessorName);

DWORD RpcEnumPrintProcessors( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrintProcessorInfo,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcGetPrintProcessorDirectory( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrintProcessorDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId);

DWORD RpcStartPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten);

DWORD RpcEndPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAbortPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcReadPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][out] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcNoBytesRead);

DWORD RpcEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAddJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pAddJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcScheduleJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId);

DWORD RpcGetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ BYTE *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcSetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ BYTE *pData,
    /* [in] */ DWORD cbData);

DWORD RpcWaitForPrinterChange( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Flags,
    /* [out] */ DWORD *pFlags);

DWORD RpcClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phPrinter);

DWORD RpcAddForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer);

DWORD RpcDeleteForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName);

DWORD RpcGetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcSetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer);

DWORD RpcEnumForms( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcEnumPorts( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPort,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcEnumMonitors( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pMonitor,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

void Opnum37NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum38NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ ULONG_PTR hWnd,
    /* [string][in] */ wchar_t *pPortName);

DWORD RpcCreatePrinterIC( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [out] */ GDI_HANDLE *pHandle,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer);

DWORD RpcPlayGdiScriptOnPrinterIC( 
    /* [in] */ GDI_HANDLE hPrinterIC,
    /* [size_is][in] */ BYTE *pIn,
    /* [in] */ DWORD cIn,
    /* [size_is][out] */ BYTE *pOut,
    /* [in] */ DWORD cOut,
    /* [in] */ DWORD ul);

DWORD RpcDeletePrinterIC( 
    /* [out][in] */ GDI_HANDLE *phPrinterIC);

void Opnum43NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum44NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum45NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcAddMonitor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ MONITOR_CONTAINER *pMonitorContainer);

DWORD RpcDeleteMonitor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pMonitorName);

DWORD RpcDeletePrintProcessor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPrintProcessorName);

void Opnum49NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum50NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcEnumPrintProcessorDatatypes( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pPrintProcessorName,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDatatypes,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcResetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer);

DWORD RpcGetPrinterDriver2( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [in] */ DWORD dwClientMajorVersion,
    /* [in] */ DWORD dwClientMinorVersion,
    /* [out] */ DWORD *pdwServerMaxVersion,
    /* [out] */ DWORD *pdwServerMinVersion);

void Opnum54NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum55NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcFindClosePrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter);

void Opnum57NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcReplyOpenPrinter( 
    /* [string][in] */ STRING_HANDLE pMachine,
    /* [out] */ PRINTER_HANDLE *phPrinterNotify,
    /* [in] */ DWORD dwPrinterRemote,
    /* [in] */ DWORD dwType,
    /* [range][in] */ DWORD cbBuffer,
    /* [disable_consistency_check][size_is][unique][in] */ BYTE *pBuffer);

DWORD RpcRouterReplyPrinter( 
    /* [in] */ PRINTER_HANDLE hNotify,
    /* [in] */ DWORD fdwFlags,
    /* [range][in] */ DWORD cbBuffer,
    /* [disable_consistency_check][size_is][unique][in] */ BYTE *pBuffer);

DWORD RpcReplyClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phNotify);

DWORD RpcAddPortEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PORT_CONTAINER *pPortContainer,
    /* [in] */ PORT_VAR_CONTAINER *pPortVarContainer,
    /* [string][in] */ wchar_t *pMonitorName);

DWORD RpcRemoteFindFirstPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal,
    /* [range][in] */ DWORD cbBuffer,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pBuffer);

void Opnum63NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum64NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal,
    /* [unique][in] */ RPC_V2_NOTIFY_OPTIONS *pOptions);

DWORD RpcRouterReplyPrinterEx( 
    /* [in] */ PRINTER_HANDLE hNotify,
    /* [in] */ DWORD dwColor,
    /* [in] */ DWORD fdwFlags,
    /* [out] */ DWORD *pdwResult,
    /* [in] */ DWORD dwReplyType,
    /* [in] */ long Reply);

DWORD RpcRouterRefreshPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwColor,
    /* [unique][in] */ RPC_V2_NOTIFY_OPTIONS *pOptions,
    /* [out] */ long *ppInfo);

void Opnum68NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcOpenPrinterEx( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo);

DWORD RpcAddPrinterEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo,
    /* [out] */ PRINTER_HANDLE *pHandle);

DWORD RpcSetPort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t *pPortName,
    /* [in] */ PORT_CONTAINER *pPortContainer);

DWORD RpcEnumPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwIndex,
    /* [size_is][out] */ wchar_t *pValueName,
    /* [in] */ DWORD cbValueName,
    /* [out] */ DWORD *pcbValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ BYTE *pData,
    /* [in] */ DWORD cbData,
    /* [out] */ DWORD *pcbData);

DWORD RpcDeletePrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName);

void Opnum74NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum75NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum76NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcSetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ BYTE *pData,
    /* [in] */ DWORD cbData);

DWORD RpcGetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ BYTE *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcEnumPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ BYTE *pEnumValues,
    /* [in] */ DWORD cbEnumValues,
    /* [out] */ DWORD *pcbEnumValues,
    /* [out] */ DWORD *pnEnumValues);

DWORD RpcEnumPrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ wchar_t *pSubkey,
    /* [in] */ DWORD cbSubkey,
    /* [out] */ DWORD *pcbSubkey);

DWORD RpcDeletePrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName);

DWORD RpcDeletePrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName);

void Opnum83NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcDeletePrinterDriverEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName,
    /* [in] */ DWORD dwDeleteFlag,
    /* [in] */ DWORD dwVersionNum);

DWORD RpcAddPerMachineConnection( 
    /* [unique][string][in] */ STRING_HANDLE pServer,
    /* [string][in] */ const wchar_t *pPrinterName,
    /* [string][in] */ const wchar_t *pPrintServer,
    /* [string][in] */ const wchar_t *pProvider);

DWORD RpcDeletePerMachineConnection( 
    /* [unique][string][in] */ STRING_HANDLE pServer,
    /* [string][in] */ const wchar_t *pPrinterName);

DWORD RpcEnumPerMachineConnections( 
    /* [unique][string][in] */ STRING_HANDLE pServer,
    /* [disable_consistency_check][size_is][unique][out][in] */ BYTE *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcXcvData( 
    /* [in] */ PRINTER_HANDLE hXcv,
    /* [string][in] */ const wchar_t *pszDataName,
    /* [size_is][in] */ BYTE *pInputData,
    /* [in] */ DWORD cbInputData,
    /* [size_is][out] */ BYTE *pOutputData,
    /* [in] */ DWORD cbOutputData,
    /* [out] */ DWORD *pcbOutputNeeded,
    /* [out][in] */ DWORD *pdwStatus);

DWORD RpcAddPrinterDriverEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags);

void Opnum90NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum91NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum92NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum93NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum94NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum95NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcFlushPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ BYTE *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten,
    /* [in] */ DWORD cSleep);

DWORD RpcSendRecvBidiData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ const wchar_t *pAction,
    /* [in] */ long pReqData,
    /* [out] */ long *ppRespData);

void Opnum98NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum99NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum100NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum101NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetCorePrinterDrivers( 
    /* [unique][string][in] */ STRING_HANDLE pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD cchCoreDrivers,
    /* [size_is][in] */ const wchar_t *pszzCoreDriverDependencies,
    /* [in] */ DWORD cCorePrinterDrivers,
    /* [out] */ long *pCorePrinterDrivers);

void Opnum103NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

HRESULT RpcGetPrinterDriverPackagePath( 
    /* [unique][string][in] */ STRING_HANDLE pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [unique][string][in] */ const wchar_t *pszLanguage,
    /* [string][in] */ const wchar_t *pszPackageID,
    /* [size_is][unique][out][in] */ wchar_t *pszDriverPackageCab,
    /* [in] */ DWORD cchDriverPackageCab,
    /* [out] */ LPDWORD pcchRequiredSize);

void Opnum105NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum106NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum107NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum108NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum109NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

DWORD RpcGetJobNamedPropertyValue( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName,
    /* [out] */ long *pValue);

DWORD RpcSetJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ long pProperty);

DWORD RpcDeleteJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName);

DWORD RpcEnumJobNamedProperties( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [out] */ DWORD *pcProperties,
    /* [out] */ long *ppProperties);

long Proc114( 
    /* [in] */ handle_t IDL_handle,
    /* [string][unique][in] */ wchar_t *arg_0);

long Proc115( 
    /* [context_handle][in] */ void *arg_0,
    /* [out] */ unsigned __int3264 *arg_1);

long Proc116( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ long arg_1);



extern RPC_IF_HANDLE winspool_v1_0_c_ifspec;
extern RPC_IF_HANDLE winspool_v1_0_s_ifspec;
#endif /* __winspool_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER STRING_HANDLE_bind ( STRING_HANDLE );
void     __RPC_USER STRING_HANDLE_unbind( STRING_HANDLE,  handle_t );

void __RPC_USER PRINTER_HANDLE_rundown( PRINTER_HANDLE );
void __RPC_USER GDI_HANDLE_rundown( GDI_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


