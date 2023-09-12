

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-par.idl:
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
#include "ms-rprn_h.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Dpar_h_h__
#define __ms2Dpar_h_h__

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


#ifndef __IRemoteWinspool_INTERFACE_DEFINED__
#define __IRemoteWinspool_INTERFACE_DEFINED__

/* interface IRemoteWinspool */
/* [version][uuid] */ 

typedef unsigned char BYTE;

typedef unsigned char *PBYTE;

typedef unsigned char *LPBYTE;

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef wchar_t WCHAR;

typedef wchar_t *PWCHAR;

typedef unsigned __int64 ULONGLONG;

typedef ULONGLONG DWORDLONG;

typedef ULONGLONG *PDWORDLONG;

typedef /* [custom] */ __int3264 LONG_PTR;

typedef unsigned short WORD;

typedef unsigned short *PWORD;

typedef unsigned short *LPWORD;

typedef unsigned short USHORT;

typedef unsigned char UCHAR;

typedef unsigned char *PUCHAR;

typedef long LONG;

typedef long *PLONG;

typedef long *LPLONG;

typedef __int64 LONGLONG;

typedef LONG HRESULT;

typedef struct _GUID UUID;

typedef struct _GUID *PGUID;

typedef struct _RPC_SID *PRPC_SID;

typedef struct _ACL *PACL;

typedef struct _FILETIME *PFILETIME;

typedef struct _FILETIME *LPFILETIME;

typedef struct _SYSTEMTIME *PSYSTEMTIME;

typedef /* [public][public][public][public][public][public] */ 
enum __MIDL_IRemoteWinspool_0002
    {
        kRpcPropertyTypeString	= 1,
        kRpcPropertyTypeInt32	= ( kRpcPropertyTypeString + 1 ) ,
        kRpcPropertyTypeInt64	= ( kRpcPropertyTypeInt32 + 1 ) ,
        kRpcPropertyTypeByte	= ( kRpcPropertyTypeInt64 + 1 ) ,
        kRpcPropertyTypeBuffer	= ( kRpcPropertyTypeByte + 1 ) 
    } 	RPC_EPrintPropertyType;

typedef unsigned short LANGID;

typedef /* [context_handle] */ void *GDI_HANDLE;

typedef /* [context_handle] */ void *PRINTER_HANDLE;

typedef /* [handle] */ wchar_t *STRING_HANDLE;

typedef struct _RPC_BINARY_CONTAINER
    {
    DWORD cbBuf;
    /* [unique][size_is] */ BYTE *pszString;
    } 	RPC_BINARY_CONTAINER;

typedef struct _RPC_BIDI_DATA
    {
    DWORD dwBidiType;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ int bData;
        /* [case()] */ long iData;
        /* [case()][unique][string] */ wchar_t *sData;
        /* [case()] */ float fData;
        /* [case()] */ RPC_BINARY_CONTAINER biData;
        } 	u;
    } 	RPC_BIDI_DATA;

typedef struct _RPC_BIDI_REQUEST_DATA
    {
    DWORD dwReqNumber;
    /* [unique][string] */ wchar_t *pSchema;
    RPC_BIDI_DATA data;
    } 	RPC_BIDI_REQUEST_DATA;

typedef struct _RPC_BIDI_RESPONSE_DATA
    {
    DWORD dwResult;
    DWORD dwReqNumber;
    /* [unique][string] */ wchar_t *pSchema;
    RPC_BIDI_DATA data;
    } 	RPC_BIDI_RESPONSE_DATA;

typedef struct _RPC_BIDI_REQUEST_CONTAINER
    {
    DWORD Version;
    DWORD Flags;
    DWORD Count;
    /* [unique][size_is] */ RPC_BIDI_REQUEST_DATA aData[ 1 ];
    } 	RPC_BIDI_REQUEST_CONTAINER;

typedef struct _RPC_BIDI_RESPONSE_CONTAINER
    {
    DWORD Version;
    DWORD Flags;
    DWORD Count;
    /* [unique][size_is] */ RPC_BIDI_RESPONSE_DATA aData[ 1 ];
    } 	RPC_BIDI_RESPONSE_CONTAINER;


typedef struct _RPC_V2_NOTIFY_INFO_DATA
    {
    unsigned short Type;
    unsigned short Field;
    DWORD Reserved;
    DWORD Id;
    /* [switch_is] */ long Data;
    } 	RPC_V2_NOTIFY_INFO_DATA;

typedef struct _RPC_V2_NOTIFY_INFO
    {
    DWORD Version;
    DWORD Flags;
    DWORD Count;
    /* [unique][size_is] */ RPC_V2_NOTIFY_INFO_DATA aData[ 1 ];
    } 	RPC_V2_NOTIFY_INFO;

typedef /* [switch_type] */ union _RPC_V2_UREPLY_PRINTER
    {
    /* [case()] */ RPC_V2_NOTIFY_INFO *pInfo;
    } 	RPC_V2_UREPLY_PRINTER;

typedef /* [context_handle] */ void *RMTNTFY_HANDLE;

typedef struct _NOTIFY_REPLY_CONTAINER
    {
    RPC_V2_NOTIFY_INFO *pInfo;
    } 	NOTIFY_REPLY_CONTAINER;

typedef struct _NOTIFY_OPTIONS_CONTAINER
    {
    RPC_V2_NOTIFY_OPTIONS *pOptions;
    } 	NOTIFY_OPTIONS_CONTAINER;

typedef /* [public][public][public][public][public] */ struct __MIDL_IRemoteWinspool_0024
    {
    EPrintPropertyType ePropertyType;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()][string] */ wchar_t *propertyString;
        /* [case()] */ long propertyInt32;
        /* [case()] */ __int64 propertyInt64;
        /* [case()] */ BYTE propertyByte;
        /* [case()] */ SYSTEMTIME_CONTAINER propertyTimeContainer;
        /* [case()] */ DEVMODE_CONTAINER propertyDevModeContainer;
        /* [case()] */ SECURITY_CONTAINER propertySDContainer;
        /* [case()] */ NOTIFY_REPLY_CONTAINER propertyReplyContainer;
        /* [case()] */ NOTIFY_OPTIONS_CONTAINER propertyOptionsContainer;
        } 	value;
    } 	RpcPrintPropertyValue;

typedef /* [public][public][public][public] */ struct __MIDL_IRemoteWinspool_0026
    {
    /* [string] */ wchar_t *propertyName;
    RpcPrintPropertyValue propertyValue;
    } 	RpcPrintNamedProperty;

typedef /* [public][public][public][public][public] */ struct __MIDL_IRemoteWinspool_0027
    {
    /* [range] */ unsigned long numberOfProperties;
    /* [unique][size_is] */ RpcPrintNamedProperty *propertiesCollection;
    } 	RpcPrintPropertiesCollection;

typedef /* [public][public][public][public][public] */ struct __MIDL_IRemoteWinspool_0028
    {
    RPC_EPrintPropertyType ePropertyType;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()][string] */ wchar_t *propertyString;
        /* [case()] */ LONG propertyInt32;
        /* [case()] */ LONGLONG propertyInt64;
        /* [case()] */ BYTE propertyByte;
        /* [case()] */ struct 
            {
            DWORD cbBuf;
            /* [size_is] */ BYTE *pBuf;
            } 	propertyBlob;
        } 	value;
    } 	RPC_PrintPropertyValue;

typedef /* [public][public][public] */ struct __MIDL_IRemoteWinspool_0031
    {
    /* [string] */ wchar_t *propertyName;
    RPC_PrintPropertyValue propertyValue;
    } 	RPC_PrintNamedProperty;

DWORD RpcAsyncOpenPrinter( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo);

DWORD RpcAsyncAddPrinter( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo,
    /* [out] */ PRINTER_HANDLE *pHandle);

DWORD RpcAsyncSetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [unique][in] */ JOB_CONTAINER *pJobContainer,
    /* [in] */ DWORD Command);

DWORD RpcAsyncGetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncEnumJobs( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD FirstJob,
    /* [in] */ DWORD NoJobs,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncAddJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pAddJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncScheduleJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId);

DWORD RpcAsyncDeletePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAsyncSetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ DWORD Command);

DWORD RpcAsyncGetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrinter,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId);

DWORD RpcAsyncStartPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAsyncWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ unsigned char *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten);

DWORD RpcAsyncEndPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAsyncEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAsyncAbortPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter);

DWORD RpcAsyncGetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncGetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncSetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ unsigned char *pData,
    /* [in] */ DWORD cbData);

DWORD RpcAsyncSetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ unsigned char *pData,
    /* [in] */ DWORD cbData);

DWORD RpcAsyncClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phPrinter);

DWORD RpcAsyncAddForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer);

DWORD RpcAsyncDeleteForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName);

DWORD RpcAsyncGetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncSetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer);

DWORD RpcAsyncEnumForms( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncGetPrinterDriver( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [in] */ DWORD dwClientMajorVersion,
    /* [in] */ DWORD dwClientMinorVersion,
    /* [out] */ DWORD *pdwServerMaxVersion,
    /* [out] */ DWORD *pdwServerMinVersion);

DWORD RpcAsyncEnumPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwIndex,
    /* [size_is][out] */ wchar_t *pValueName,
    /* [in] */ DWORD cbValueName,
    /* [out] */ DWORD *pcbValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD cbData,
    /* [out] */ DWORD *pcbData);

DWORD RpcAsyncEnumPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ unsigned char *pEnumValues,
    /* [in] */ DWORD cbEnumValues,
    /* [out] */ DWORD *pcbEnumValues,
    /* [out] */ DWORD *pnEnumValues);

DWORD RpcAsyncEnumPrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ wchar_t *pSubkey,
    /* [in] */ DWORD cbSubkey,
    /* [out] */ DWORD *pcbSubkey);

DWORD RpcAsyncDeletePrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName);

DWORD RpcAsyncDeletePrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName);

DWORD RpcAsyncDeletePrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName);

DWORD RpcAsyncXcvData( 
    /* [in] */ PRINTER_HANDLE hXcv,
    /* [string][in] */ const wchar_t *pszDataName,
    /* [size_is][in] */ unsigned char *pInputData,
    /* [in] */ DWORD cbInputData,
    /* [size_is][out] */ unsigned char *pOutputData,
    /* [in] */ DWORD cbOutputData,
    /* [out] */ DWORD *pcbOutputNeeded,
    /* [out][in] */ DWORD *pdwStatus);

DWORD RpcAsyncSendRecvBidiData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ const wchar_t *pAction,
    /* [in] */ RPC_BIDI_REQUEST_CONTAINER *pReqData,
    /* [out] */ RPC_BIDI_RESPONSE_CONTAINER **ppRespData);

DWORD RpcAsyncCreatePrinterIC( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [out] */ GDI_HANDLE *pHandle,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer);

DWORD RpcAsyncPlayGdiScriptOnPrinterIC( 
    /* [in] */ GDI_HANDLE hPrinterIC,
    /* [size_is][in] */ unsigned char *pIn,
    /* [in] */ DWORD cIn,
    /* [size_is][out] */ unsigned char *pOut,
    /* [in] */ DWORD cOut,
    /* [in] */ DWORD ul);

DWORD RpcAsyncDeletePrinterIC( 
    /* [out][in] */ GDI_HANDLE *phPrinterIC);

DWORD RpcAsyncEnumPrinters( 
    /* [in] */ handle_t hRemoteBinding,
    /* [in] */ DWORD Flags,
    /* [unique][string][in] */ wchar_t *Name,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncAddPrinterDriver( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags);

DWORD RpcAsyncEnumPrinterDrivers( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncGetPrinterDriverDirectory( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDriverDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncDeletePrinterDriver( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName);

DWORD RpcAsyncDeletePrinterDriverEx( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName,
    /* [in] */ DWORD dwDeleteFlag,
    /* [in] */ DWORD dwVersionNum);

DWORD RpcAsyncAddPrintProcessor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPathName,
    /* [string][in] */ wchar_t *pPrintProcessorName);

DWORD RpcAsyncEnumPrintProcessors( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrintProcessorInfo,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncGetPrintProcessorDirectory( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrintProcessorDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded);

DWORD RpcAsyncEnumPorts( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPort,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncEnumMonitors( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pMonitor,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncAddPort( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ PORT_CONTAINER *pPortContainer,
    /* [in] */ PORT_VAR_CONTAINER *pPortVarContainer,
    /* [string][in] */ wchar_t *pMonitorName);

DWORD RpcAsyncSetPort( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [unique][string][in] */ wchar_t *pPortName,
    /* [in] */ PORT_CONTAINER *pPortContainer);

DWORD RpcAsyncAddMonitor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [in] */ MONITOR_CONTAINER *pMonitorContainer);

DWORD RpcAsyncDeleteMonitor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pMonitorName);

DWORD RpcAsyncDeletePrintProcessor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPrintProcessorName);

DWORD RpcAsyncEnumPrintProcessorDatatypes( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pPrintProcessorName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDatatypes,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

DWORD RpcAsyncAddPerMachineConnection( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [string][in] */ const wchar_t *pPrinterName,
    /* [string][in] */ const wchar_t *pPrintServer,
    /* [string][in] */ const wchar_t *pProvider);

DWORD RpcAsyncDeletePerMachineConnection( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [string][in] */ const wchar_t *pPrinterName);

DWORD RpcAsyncEnumPerMachineConnections( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [size_is][unique][out][in] */ unsigned char *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned);

HRESULT RpcSyncRegisterForRemoteNotifications( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ RpcPrintPropertiesCollection *pNotifyFilter,
    /* [out] */ RMTNTFY_HANDLE *phRpcHandle);

HRESULT RpcSyncUnRegisterForRemoteNotifications( 
    /* [out][in] */ RMTNTFY_HANDLE *phRpcHandle);

HRESULT RpcSyncRefreshRemoteNotifications( 
    /* [in] */ RMTNTFY_HANDLE hRpcHandle,
    /* [in] */ RpcPrintPropertiesCollection *pNotifyFilter,
    /* [out] */ RpcPrintPropertiesCollection **ppNotifyData);

HRESULT RpcAsyncGetRemoteNotifications( 
    /* [in] */ RMTNTFY_HANDLE hRpcHandle,
    /* [out] */ RpcPrintPropertiesCollection **ppNotifyData);

HRESULT RpcAsyncInstallPrinterDriverFromPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [unique][string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszDriverName,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD dwFlags);

HRESULT RpcAsyncUploadPrinterDriverPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD dwFlags,
    /* [size_is][unique][out][in] */ wchar_t *pszDestInfPath,
    /* [out][in] */ DWORD *pcchDestInfPath);

HRESULT RpcAsyncGetCorePrinterDrivers( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD cchCoreDrivers,
    /* [size_is][in] */ const wchar_t *pszzCoreDriverDependencies,
    /* [in] */ DWORD cCorePrinterDrivers,
    /* [size_is][out] */ CORE_PRINTER_DRIVER *pCorePrinterDrivers);

HRESULT RpcAsyncCorePrinterDriverInstalled( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ GUID CoreDriverGUID,
    /* [in] */ FILETIME ftDriverDate,
    /* [in] */ DWORDLONG dwlDriverVersion,
    /* [out] */ int *pbDriverInstalled);

HRESULT RpcAsyncGetPrinterDriverPackagePath( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [unique][string][in] */ const wchar_t *pszLanguage,
    /* [string][in] */ const wchar_t *pszPackageID,
    /* [size_is][unique][out][in] */ wchar_t *pszDriverPackageCab,
    /* [in] */ DWORD cchDriverPackageCab,
    /* [out] */ DWORD *pcchRequiredSize);

HRESULT RpcAsyncDeletePrinterDriverPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszEnvironment);

DWORD RpcAsyncReadPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][out] */ unsigned char *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcNoBytesRead);

DWORD RpcAsyncResetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer);

DWORD RpcAsyncGetJobNamedPropertyValue( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName,
    /* [out] */ RPC_PrintPropertyValue *pValue);

DWORD RpcAsyncSetJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ RPC_PrintNamedProperty *pProperty);

DWORD RpcAsyncDeleteJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName);

DWORD RpcAsyncEnumJobNamedProperties( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [out] */ DWORD *pcProperties,
    /* [size_is][size_is][out] */ RPC_PrintNamedProperty **ppProperties);

DWORD RpcAsyncLogJobInfoForBranchOffice( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [ref][in] */ RPC_BranchOfficeJobDataContainer *pBranchOfficeJobDataContainer);



extern RPC_IF_HANDLE IRemoteWinspool_v1_0_c_ifspec;
extern RPC_IF_HANDLE IRemoteWinspool_v1_0_s_ifspec;
#endif /* __IRemoteWinspool_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PRINTER_HANDLE_rundown( PRINTER_HANDLE );
void __RPC_USER GDI_HANDLE_rundown( GDI_HANDLE );
void __RPC_USER RMTNTFY_HANDLE_rundown( RMTNTFY_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


