

/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "ms-par_h.h"

#define TYPE_FORMAT_STRING_SIZE   3835                              
#define PROC_FORMAT_STRING_SIZE   4715                              
#define EXPR_FORMAT_STRING_SIZE   33                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Dpar_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Dpar_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dpar_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Dpar_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Dpar_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Dpar_MIDL_EXPR_FORMAT_STRING;


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



extern const ms2Dpar_MIDL_TYPE_FORMAT_STRING ms2Dpar__MIDL_TypeFormatString;
extern const ms2Dpar_MIDL_PROC_FORMAT_STRING ms2Dpar__MIDL_ProcFormatString;
extern const ms2Dpar_MIDL_EXPR_FORMAT_STRING ms2Dpar__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: IRemoteWinspool, ver. 1.0,
   GUID={0x76f03f96,0xcdfd,0x44fc,{0xa2,0x2c,0x64,0x95,0x0a,0x00,0x12,0x09}} */

 extern const MIDL_STUBLESS_PROXY_INFO IRemoteWinspool_ProxyInfo;


static const RPC_CLIENT_INTERFACE IRemoteWinspool___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x76f03f96,0xcdfd,0x44fc,{0xa2,0x2c,0x64,0x95,0x0a,0x00,0x12,0x09}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &IRemoteWinspool_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE IRemoteWinspool_v1_0_c_ifspec = (RPC_IF_HANDLE)& IRemoteWinspool___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC IRemoteWinspool_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE IRemoteWinspool__MIDL_AutoBindHandle;


DWORD RpcAsyncOpenPrinter( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pPrinterName,
    /* [out] */ PRINTER_HANDLE *pHandle,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ DWORD AccessRequired,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  0,
                  0,
                  hRemoteBinding,
                  pPrinterName,
                  pHandle,
                  pDatatype,
                  pDevModeContainer,
                  AccessRequired,
                  pClientInfo);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPrinter( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ SPLCLIENT_CONTAINER *pClientInfo,
    /* [out] */ PRINTER_HANDLE *pHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  1,
                  0,
                  hRemoteBinding,
                  pName,
                  pPrinterContainer,
                  pDevModeContainer,
                  pSecurityContainer,
                  pClientInfo,
                  pHandle);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [unique][in] */ JOB_CONTAINER *pJobContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  2,
                  0,
                  hPrinter,
                  JobId,
                  pJobContainer,
                  Command);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  3,
                  0,
                  hPrinter,
                  JobId,
                  Level,
                  pJob,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumJobs( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD FirstJob,
    /* [in] */ DWORD NoJobs,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  4,
                  0,
                  hPrinter,
                  FirstJob,
                  NoJobs,
                  Level,
                  pJob,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pAddJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  5,
                  0,
                  hPrinter,
                  Level,
                  pAddJob,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncScheduleJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  6,
                  0,
                  hPrinter,
                  JobId);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  7,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PRINTER_CONTAINER *pPrinterContainer,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer,
    /* [in] */ SECURITY_CONTAINER *pSecurityContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  8,
                  0,
                  hPrinter,
                  pPrinterContainer,
                  pDevModeContainer,
                  pSecurityContainer,
                  Command);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrinter,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  9,
                  0,
                  hPrinter,
                  Level,
                  pPrinter,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DOC_INFO_CONTAINER *pDocInfoContainer,
    /* [out] */ DWORD *pJobId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  10,
                  0,
                  hPrinter,
                  pDocInfoContainer,
                  pJobId);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncStartPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  11,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ unsigned char *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  12,
                  0,
                  hPrinter,
                  pBuf,
                  cbBuf,
                  pcWritten);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEndPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  13,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  14,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAbortPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  15,
                  0,
                  hPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  16,
                  0,
                  hPrinter,
                  pValueName,
                  pType,
                  pData,
                  nSize,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD nSize,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  17,
                  0,
                  hPrinter,
                  pKeyName,
                  pValueName,
                  pType,
                  pData,
                  nSize,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ unsigned char *pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  18,
                  0,
                  hPrinter,
                  pValueName,
                  Type,
                  pData,
                  cbData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ unsigned char *pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  19,
                  0,
                  hPrinter,
                  pKeyName,
                  pValueName,
                  Type,
                  pData,
                  cbData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE *phPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  20,
                  0,
                  phPrinter);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  21,
                  0,
                  hPrinter,
                  pFormInfoContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeleteForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  22,
                  0,
                  hPrinter,
                  pFormName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  23,
                  0,
                  hPrinter,
                  pFormName,
                  Level,
                  pForm,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pFormName,
    /* [in] */ FORM_CONTAINER *pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  24,
                  0,
                  hPrinter,
                  pFormName,
                  pFormInfoContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumForms( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  25,
                  0,
                  hPrinter,
                  Level,
                  pForm,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


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
    /* [out] */ DWORD *pdwServerMinVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  26,
                  0,
                  hPrinter,
                  pEnvironment,
                  Level,
                  pDriver,
                  cbBuf,
                  pcbNeeded,
                  dwClientMajorVersion,
                  dwClientMinorVersion,
                  pdwServerMaxVersion,
                  pdwServerMinVersion);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwIndex,
    /* [size_is][out] */ wchar_t *pValueName,
    /* [in] */ DWORD cbValueName,
    /* [out] */ DWORD *pcbValueName,
    /* [out] */ DWORD *pType,
    /* [size_is][out] */ unsigned char *pData,
    /* [in] */ DWORD cbData,
    /* [out] */ DWORD *pcbData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  27,
                  0,
                  hPrinter,
                  dwIndex,
                  pValueName,
                  cbValueName,
                  pcbValueName,
                  pType,
                  pData,
                  cbData,
                  pcbData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ unsigned char *pEnumValues,
    /* [in] */ DWORD cbEnumValues,
    /* [out] */ DWORD *pcbEnumValues,
    /* [out] */ DWORD *pnEnumValues)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  28,
                  0,
                  hPrinter,
                  pKeyName,
                  pEnumValues,
                  cbEnumValues,
                  pcbEnumValues,
                  pnEnumValues);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [size_is][out] */ wchar_t *pSubkey,
    /* [in] */ DWORD cbSubkey,
    /* [out] */ DWORD *pcbSubkey)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  29,
                  0,
                  hPrinter,
                  pKeyName,
                  pSubkey,
                  cbSubkey,
                  pcbSubkey);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  30,
                  0,
                  hPrinter,
                  pValueName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterDataEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName,
    /* [string][in] */ const wchar_t *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  31,
                  0,
                  hPrinter,
                  pKeyName,
                  pValueName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterKey( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ const wchar_t *pKeyName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  32,
                  0,
                  hPrinter,
                  pKeyName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncXcvData( 
    /* [in] */ PRINTER_HANDLE hXcv,
    /* [string][in] */ const wchar_t *pszDataName,
    /* [size_is][in] */ unsigned char *pInputData,
    /* [in] */ DWORD cbInputData,
    /* [size_is][out] */ unsigned char *pOutputData,
    /* [in] */ DWORD cbOutputData,
    /* [out] */ DWORD *pcbOutputNeeded,
    /* [out][in] */ DWORD *pdwStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  33,
                  0,
                  hXcv,
                  pszDataName,
                  pInputData,
                  cbInputData,
                  pOutputData,
                  cbOutputData,
                  pcbOutputNeeded,
                  pdwStatus);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSendRecvBidiData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ const wchar_t *pAction,
    /* [in] */ RPC_BIDI_REQUEST_CONTAINER *pReqData,
    /* [out] */ RPC_BIDI_RESPONSE_CONTAINER **ppRespData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  34,
                  0,
                  hPrinter,
                  pAction,
                  pReqData,
                  ppRespData);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncCreatePrinterIC( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [out] */ GDI_HANDLE *pHandle,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  35,
                  0,
                  hPrinter,
                  pHandle,
                  pDevModeContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncPlayGdiScriptOnPrinterIC( 
    /* [in] */ GDI_HANDLE hPrinterIC,
    /* [size_is][in] */ unsigned char *pIn,
    /* [in] */ DWORD cIn,
    /* [size_is][out] */ unsigned char *pOut,
    /* [in] */ DWORD cOut,
    /* [in] */ DWORD ul)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  36,
                  0,
                  hPrinterIC,
                  pIn,
                  cIn,
                  pOut,
                  cOut,
                  ul);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterIC( 
    /* [out][in] */ GDI_HANDLE *phPrinterIC)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  37,
                  0,
                  phPrinterIC);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinters( 
    /* [in] */ handle_t hRemoteBinding,
    /* [in] */ DWORD Flags,
    /* [unique][string][in] */ wchar_t *Name,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  38,
                  0,
                  hRemoteBinding,
                  Flags,
                  Name,
                  Level,
                  pPrinterEnum,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPrinterDriver( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DRIVER_CONTAINER *pDriverContainer,
    /* [in] */ DWORD dwFileCopyFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  39,
                  0,
                  hRemoteBinding,
                  pName,
                  pDriverContainer,
                  dwFileCopyFlags);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrinterDrivers( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  40,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pDrivers,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrinterDriverDirectory( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDriverDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  41,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pDriverDirectory,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterDriver( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  42,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  pDriverName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrinterDriverEx( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pDriverName,
    /* [in] */ DWORD dwDeleteFlag,
    /* [in] */ DWORD dwVersionNum)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  43,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  pDriverName,
                  dwDeleteFlag,
                  dwVersionNum);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPrintProcessor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPathName,
    /* [string][in] */ wchar_t *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  44,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  pPathName,
                  pPrintProcessorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrintProcessors( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrintProcessorInfo,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  45,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pPrintProcessorInfo,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetPrintProcessorDirectory( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPrintProcessorDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  46,
                  0,
                  hRemoteBinding,
                  pName,
                  pEnvironment,
                  Level,
                  pPrintProcessorDirectory,
                  cbBuf,
                  pcbNeeded);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPorts( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pPort,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  47,
                  0,
                  hRemoteBinding,
                  pName,
                  Level,
                  pPort,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumMonitors( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pMonitor,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  48,
                  0,
                  hRemoteBinding,
                  pName,
                  Level,
                  pMonitor,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPort( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [in] */ PORT_CONTAINER *pPortContainer,
    /* [in] */ PORT_VAR_CONTAINER *pPortVarContainer,
    /* [string][in] */ wchar_t *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  49,
                  0,
                  hRemoteBinding,
                  pName,
                  pPortContainer,
                  pPortVarContainer,
                  pMonitorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetPort( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [unique][string][in] */ wchar_t *pPortName,
    /* [in] */ PORT_CONTAINER *pPortContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  50,
                  0,
                  hRemoteBinding,
                  pName,
                  pPortName,
                  pPortContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddMonitor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [in] */ MONITOR_CONTAINER *pMonitorContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  51,
                  0,
                  hRemoteBinding,
                  Name,
                  pMonitorContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeleteMonitor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  52,
                  0,
                  hRemoteBinding,
                  Name,
                  pEnvironment,
                  pMonitorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePrintProcessor( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *Name,
    /* [string][unique][in] */ wchar_t *pEnvironment,
    /* [string][in] */ wchar_t *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  53,
                  0,
                  hRemoteBinding,
                  Name,
                  pEnvironment,
                  pPrintProcessorName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPrintProcessorDatatypes( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pName,
    /* [string][unique][in] */ wchar_t *pPrintProcessorName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ unsigned char *pDatatypes,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  54,
                  0,
                  hRemoteBinding,
                  pName,
                  pPrintProcessorName,
                  Level,
                  pDatatypes,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncAddPerMachineConnection( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [string][in] */ const wchar_t *pPrinterName,
    /* [string][in] */ const wchar_t *pPrintServer,
    /* [string][in] */ const wchar_t *pProvider)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  55,
                  0,
                  hRemoteBinding,
                  pServer,
                  pPrinterName,
                  pPrintServer,
                  pProvider);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeletePerMachineConnection( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [string][in] */ const wchar_t *pPrinterName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  56,
                  0,
                  hRemoteBinding,
                  pServer,
                  pPrinterName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumPerMachineConnections( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ wchar_t *pServer,
    /* [size_is][unique][out][in] */ unsigned char *pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcbNeeded,
    /* [out] */ DWORD *pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  57,
                  0,
                  hRemoteBinding,
                  pServer,
                  pPrinterEnum,
                  cbBuf,
                  pcbNeeded,
                  pcReturned);
    return ( DWORD  )_RetVal.Simple;
    
}


HRESULT RpcSyncRegisterForRemoteNotifications( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ RpcPrintPropertiesCollection *pNotifyFilter,
    /* [out] */ RMTNTFY_HANDLE *phRpcHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  58,
                  0,
                  hPrinter,
                  pNotifyFilter,
                  phRpcHandle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcSyncUnRegisterForRemoteNotifications( 
    /* [out][in] */ RMTNTFY_HANDLE *phRpcHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  59,
                  0,
                  phRpcHandle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcSyncRefreshRemoteNotifications( 
    /* [in] */ RMTNTFY_HANDLE hRpcHandle,
    /* [in] */ RpcPrintPropertiesCollection *pNotifyFilter,
    /* [out] */ RpcPrintPropertiesCollection **ppNotifyData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  60,
                  0,
                  hRpcHandle,
                  pNotifyFilter,
                  ppNotifyData);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncGetRemoteNotifications( 
    /* [in] */ RMTNTFY_HANDLE hRpcHandle,
    /* [out] */ RpcPrintPropertiesCollection **ppNotifyData)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  61,
                  0,
                  hRpcHandle,
                  ppNotifyData);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncInstallPrinterDriverFromPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [unique][string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszDriverName,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD dwFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  62,
                  0,
                  hRemoteBinding,
                  pszServer,
                  pszInfPath,
                  pszDriverName,
                  pszEnvironment,
                  dwFlags);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncUploadPrinterDriverPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD dwFlags,
    /* [size_is][unique][out][in] */ wchar_t *pszDestInfPath,
    /* [out][in] */ DWORD *pcchDestInfPath)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  63,
                  0,
                  hRemoteBinding,
                  pszServer,
                  pszInfPath,
                  pszEnvironment,
                  dwFlags,
                  pszDestInfPath,
                  pcchDestInfPath);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncGetCorePrinterDrivers( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ DWORD cchCoreDrivers,
    /* [size_is][in] */ const wchar_t *pszzCoreDriverDependencies,
    /* [in] */ DWORD cCorePrinterDrivers,
    /* [size_is][out] */ CORE_PRINTER_DRIVER *pCorePrinterDrivers)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  64,
                  0,
                  hRemoteBinding,
                  pszServer,
                  pszEnvironment,
                  cchCoreDrivers,
                  pszzCoreDriverDependencies,
                  cCorePrinterDrivers,
                  pCorePrinterDrivers);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncCorePrinterDriverInstalled( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [in] */ GUID CoreDriverGUID,
    /* [in] */ FILETIME ftDriverDate,
    /* [in] */ DWORDLONG dwlDriverVersion,
    /* [out] */ int *pbDriverInstalled)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  65,
                  0,
                  hRemoteBinding,
                  pszServer,
                  pszEnvironment,
                  CoreDriverGUID,
                  ftDriverDate,
                  dwlDriverVersion,
                  pbDriverInstalled);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncGetPrinterDriverPackagePath( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszEnvironment,
    /* [unique][string][in] */ const wchar_t *pszLanguage,
    /* [string][in] */ const wchar_t *pszPackageID,
    /* [size_is][unique][out][in] */ wchar_t *pszDriverPackageCab,
    /* [in] */ DWORD cchDriverPackageCab,
    /* [out] */ DWORD *pcchRequiredSize)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  66,
                  0,
                  hRemoteBinding,
                  pszServer,
                  pszEnvironment,
                  pszLanguage,
                  pszPackageID,
                  pszDriverPackageCab,
                  cchDriverPackageCab,
                  pcchRequiredSize);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT RpcAsyncDeletePrinterDriverPackage( 
    /* [in] */ handle_t hRemoteBinding,
    /* [unique][string][in] */ const wchar_t *pszServer,
    /* [string][in] */ const wchar_t *pszInfPath,
    /* [string][in] */ const wchar_t *pszEnvironment)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  67,
                  0,
                  hRemoteBinding,
                  pszServer,
                  pszInfPath,
                  pszEnvironment);
    return ( HRESULT  )_RetVal.Simple;
    
}


DWORD RpcAsyncReadPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][out] */ unsigned char *pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ DWORD *pcNoBytesRead)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  68,
                  0,
                  hPrinter,
                  pBuf,
                  cbBuf,
                  pcNoBytesRead);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncResetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t *pDatatype,
    /* [in] */ DEVMODE_CONTAINER *pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  69,
                  0,
                  hPrinter,
                  pDatatype,
                  pDevModeContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncGetJobNamedPropertyValue( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName,
    /* [out] */ RPC_PrintPropertyValue *pValue)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  70,
                  0,
                  hPrinter,
                  JobId,
                  pszName,
                  pValue);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncSetJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ RPC_PrintNamedProperty *pProperty)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  71,
                  0,
                  hPrinter,
                  JobId,
                  pProperty);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncDeleteJobNamedProperty( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [string][in] */ const wchar_t *pszName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  72,
                  0,
                  hPrinter,
                  JobId,
                  pszName);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncEnumJobNamedProperties( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [out] */ DWORD *pcProperties,
    /* [size_is][size_is][out] */ RPC_PrintNamedProperty **ppProperties)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  73,
                  0,
                  hPrinter,
                  JobId,
                  pcProperties,
                  ppProperties);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAsyncLogJobInfoForBranchOffice( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [ref][in] */ RPC_BranchOfficeJobDataContainer *pBranchOfficeJobDataContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IRemoteWinspool_ProxyInfo,
                  74,
                  0,
                  hPrinter,
                  pBranchOfficeJobDataContainer);
    return ( DWORD  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ms2Dpar_MIDL_PROC_FORMAT_STRING ms2Dpar__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcAsyncOpenPrinter */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	NdrFcShort( 0x40 ),	/* 64 */
/* 18 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 20 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 30 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 32 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 36 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 38 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 40 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pDatatype */

/* 42 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 44 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 48 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 50 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 52 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter AccessRequired */

/* 54 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 56 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pClientInfo */

/* 60 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 62 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 64 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPrinter */

/* 72 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 82 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x40 ),	/* 64 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 92 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterContainer */

/* 108 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x2f6 ),	/* Type Offset=758 */

	/* Parameter pDevModeContainer */

/* 114 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter pSecurityContainer */

/* 120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	NdrFcShort( 0x30a ),	/* Type Offset=778 */

	/* Parameter pClientInfo */

/* 126 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 128 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 130 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Parameter pHandle */

/* 132 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 134 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 136 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetJob */

/* 144 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x2 ),	/* 2 */
/* 152 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 154 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 156 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 158 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0x34 ),	/* 52 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 166 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 176 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 178 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 180 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJobContainer */

/* 188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 192 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */

	/* Parameter Command */

/* 194 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 196 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 202 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetJob */

/* 206 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x3 ),	/* 3 */
/* 214 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 216 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 218 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 220 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x3c ),	/* 60 */
/* 224 */	NdrFcShort( 0x24 ),	/* 36 */
/* 226 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 228 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x1 ),	/* 1 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 238 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 240 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 242 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 244 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 250 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 252 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 256 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 260 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Parameter cbBuf */

/* 262 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 264 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 276 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumJobs */

/* 280 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 288 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 290 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 292 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 294 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 296 */	NdrFcShort( 0x44 ),	/* 68 */
/* 298 */	NdrFcShort( 0x40 ),	/* 64 */
/* 300 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 302 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 304 */	NdrFcShort( 0x1 ),	/* 1 */
/* 306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 312 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 314 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 316 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter FirstJob */

/* 318 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 320 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NoJobs */

/* 324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 326 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 330 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 332 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 336 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 338 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 340 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 348 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 350 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddJob */

/* 366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x5 ),	/* 5 */
/* 374 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 376 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0x34 ),	/* 52 */
/* 384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 386 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 388 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 398 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 400 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 402 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter Level */

/* 404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 406 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddJob */

/* 410 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 412 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 414 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter cbBuf */

/* 416 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 418 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 422 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 424 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 430 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncScheduleJob */

/* 434 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x6 ),	/* 6 */
/* 442 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 444 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 446 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 448 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 450 */	NdrFcShort( 0x2c ),	/* 44 */
/* 452 */	NdrFcShort( 0x8 ),	/* 8 */
/* 454 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 456 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 466 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 468 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 470 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 472 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 474 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 478 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinter */

/* 484 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 486 */	NdrFcLong( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x7 ),	/* 7 */
/* 492 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 494 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 496 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 498 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 500 */	NdrFcShort( 0x24 ),	/* 36 */
/* 502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 506 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 516 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 518 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 520 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPrinter */

/* 528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 540 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 544 */	NdrFcShort( 0x2c ),	/* 44 */
/* 546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 550 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 560 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 562 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 564 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pPrinterContainer */

/* 566 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 570 */	NdrFcShort( 0x2f6 ),	/* Type Offset=758 */

	/* Parameter pDevModeContainer */

/* 572 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 576 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter pSecurityContainer */

/* 578 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 582 */	NdrFcShort( 0x30a ),	/* Type Offset=778 */

	/* Parameter Command */

/* 584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 586 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 592 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinter */

/* 596 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x9 ),	/* 9 */
/* 604 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 606 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 608 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 610 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 612 */	NdrFcShort( 0x34 ),	/* 52 */
/* 614 */	NdrFcShort( 0x24 ),	/* 36 */
/* 616 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 618 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 620 */	NdrFcShort( 0x1 ),	/* 1 */
/* 622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 628 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 630 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 632 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter Level */

/* 634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 636 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinter */

/* 640 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 642 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 644 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter cbBuf */

/* 646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 648 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 652 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 654 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 660 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncStartDocPrinter */

/* 664 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0xa ),	/* 10 */
/* 672 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 674 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 676 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 682 */	NdrFcShort( 0x24 ),	/* 36 */
/* 684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 686 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 696 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 698 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 700 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pDocInfoContainer */

/* 702 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 706 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Parameter pJobId */

/* 708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 716 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncStartPagePrinter */

/* 720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcShort( 0xb ),	/* 11 */
/* 728 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 730 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 732 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 734 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 742 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 752 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 754 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 756 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncWritePrinter */

/* 764 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0xc ),	/* 12 */
/* 772 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 774 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 776 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 778 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 780 */	NdrFcShort( 0x2c ),	/* 44 */
/* 782 */	NdrFcShort( 0x24 ),	/* 36 */
/* 784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 786 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 796 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 798 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 800 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pBuf */

/* 802 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 804 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 806 */	NdrFcShort( 0x502 ),	/* Type Offset=1282 */

	/* Parameter cbBuf */

/* 808 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 810 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 816 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 822 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEndPagePrinter */

/* 826 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0xd ),	/* 13 */
/* 834 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 836 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 838 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 840 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 842 */	NdrFcShort( 0x24 ),	/* 36 */
/* 844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 848 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 858 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 860 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 862 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 866 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEndDocPrinter */

/* 870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 876 */	NdrFcShort( 0xe ),	/* 14 */
/* 878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 880 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 882 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 884 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0x24 ),	/* 36 */
/* 888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 892 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 902 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 904 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 906 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 910 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAbortPrinter */

/* 914 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0xf ),	/* 15 */
/* 922 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 924 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 926 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 928 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0x24 ),	/* 36 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 936 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 946 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 948 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 950 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterData */

/* 958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x10 ),	/* 16 */
/* 966 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 968 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 972 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 974 */	NdrFcShort( 0x2c ),	/* 44 */
/* 976 */	NdrFcShort( 0x40 ),	/* 64 */
/* 978 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 980 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 990 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pValueName */

/* 996 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pType */

/* 1002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1008 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1012 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Parameter nSize */

/* 1014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1020 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1022 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1028 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDataEx */

/* 1032 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1040 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1042 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1044 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1046 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1048 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1050 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1054 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1064 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1066 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1068 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pKeyName */

/* 1070 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1072 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1074 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pValueName */

/* 1076 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1078 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1080 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pType */

/* 1082 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1084 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1088 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1090 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1092 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter nSize */

/* 1094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1096 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1100 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1102 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1106 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1108 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPrinterData */

/* 1112 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1120 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1122 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1124 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1126 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1128 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1134 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1144 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1148 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pValueName */

/* 1150 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1152 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1154 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter Type */

/* 1156 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1158 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1162 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1166 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Parameter cbData */

/* 1168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1170 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1176 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPrinterDataEx */

/* 1180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1188 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1190 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1194 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1196 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1200 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1202 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1212 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1214 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1216 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pKeyName */

/* 1218 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1220 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1222 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pValueName */

/* 1224 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1226 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1228 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter Type */

/* 1230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1238 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1240 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter cbData */

/* 1242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1244 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1250 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncClosePrinter */

/* 1254 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1260 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1262 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1264 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1266 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1268 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1270 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1272 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1274 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1276 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinter */

/* 1286 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1288 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1290 */	NdrFcShort( 0x528 ),	/* Type Offset=1320 */

	/* Return value */

/* 1292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1294 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddForm */

/* 1298 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1306 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1308 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1310 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1312 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1318 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1320 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1330 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1332 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1334 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pFormInfoContainer */

/* 1336 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1338 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1340 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Return value */

/* 1342 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1344 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeleteForm */

/* 1348 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1356 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1358 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1360 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1362 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1364 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1368 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1370 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1380 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1382 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1384 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pFormName */

/* 1386 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1388 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1390 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1394 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetForm */

/* 1398 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1406 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1408 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1410 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1412 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1414 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1416 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1418 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1420 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1424 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1430 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1432 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1434 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pFormName */

/* 1436 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1438 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1440 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter Level */

/* 1442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1444 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1448 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1450 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1452 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Parameter cbBuf */

/* 1454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1456 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1460 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1462 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1468 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetForm */

/* 1472 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1480 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1482 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1484 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1486 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1488 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1494 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1504 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1506 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1508 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pFormName */

/* 1510 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1512 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1514 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pFormInfoContainer */

/* 1516 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1518 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1520 */	NdrFcShort( 0x5b6 ),	/* Type Offset=1462 */

	/* Return value */

/* 1522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumForms */

/* 1528 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1536 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1540 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1544 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1546 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1550 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1560 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1562 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1564 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter Level */

/* 1566 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1572 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1576 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter cbBuf */

/* 1578 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1586 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1592 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1598 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDriver */

/* 1602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1610 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1614 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0x44 ),	/* 68 */
/* 1620 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1622 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 1624 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1628 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1634 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1636 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1638 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pEnvironment */

/* 1640 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1642 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1644 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1646 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1648 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 1652 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1654 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1656 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Parameter cbBuf */

/* 1658 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1660 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1664 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1666 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMajorVersion */

/* 1670 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1672 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMinorVersion */

/* 1676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1678 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMaxVersion */

/* 1682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1684 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMinVersion */

/* 1688 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1690 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1696 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterData */

/* 1700 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1706 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1708 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1710 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1712 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1714 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1716 */	NdrFcShort( 0x3c ),	/* 60 */
/* 1718 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1720 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 1722 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1732 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1734 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1736 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter dwIndex */

/* 1738 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1740 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueName */

/* 1744 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1746 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1748 */	NdrFcShort( 0x5ca ),	/* Type Offset=1482 */

	/* Parameter cbValueName */

/* 1750 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1752 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbValueName */

/* 1756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1758 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 1762 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1764 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1768 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1770 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1772 */	NdrFcShort( 0x5e4 ),	/* Type Offset=1508 */

	/* Parameter cbData */

/* 1774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1776 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 1780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1782 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1788 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterDataEx */

/* 1792 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1800 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1802 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1804 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1806 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1808 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1810 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1812 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1814 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1824 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1826 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1828 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pKeyName */

/* 1830 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1834 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pEnumValues */

/* 1836 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1838 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1840 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Parameter cbEnumValues */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbEnumValues */

/* 1848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1850 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnEnumValues */

/* 1854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterKey */

/* 1866 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1874 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1876 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1878 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1880 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1882 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1884 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1886 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1888 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1890 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1898 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1900 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1902 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pKeyName */

/* 1904 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1908 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pSubkey */

/* 1910 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1912 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1914 */	NdrFcShort( 0x5ca ),	/* Type Offset=1482 */

	/* Parameter cbSubkey */

/* 1916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1918 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbSubkey */

/* 1922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1924 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1926 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1930 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterData */

/* 1934 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1944 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1946 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1948 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1952 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1954 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1956 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1966 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1968 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1970 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pValueName */

/* 1972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1976 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 1978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDataEx */

/* 1984 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1992 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1994 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1996 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1998 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2000 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2006 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2016 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2018 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2020 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pKeyName */

/* 2022 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2026 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pValueName */

/* 2028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2032 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 2034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2036 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterKey */

/* 2040 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2048 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2050 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2052 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2054 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2056 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2060 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2062 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2072 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2074 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2076 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pKeyName */

/* 2078 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2082 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 2084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2086 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncXcvData */

/* 2090 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2096 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2098 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2100 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2104 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2106 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2108 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2110 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 2112 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2114 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2116 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hXcv */

/* 2122 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2124 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2126 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pszDataName */

/* 2128 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2132 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pInputData */

/* 2134 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2136 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2138 */	NdrFcShort( 0x498 ),	/* Type Offset=1176 */

	/* Parameter cbInputData */

/* 2140 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2142 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOutputData */

/* 2146 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2148 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2150 */	NdrFcShort( 0x47e ),	/* Type Offset=1150 */

	/* Parameter cbOutputData */

/* 2152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2154 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbOutputNeeded */

/* 2158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2160 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwStatus */

/* 2164 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 2166 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2172 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSendRecvBidiData */

/* 2176 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2184 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2186 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2188 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2190 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2192 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2198 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2208 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2210 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2212 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pAction */

/* 2214 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2216 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2218 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pReqData */

/* 2220 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2222 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2224 */	NdrFcShort( 0x6ae ),	/* Type Offset=1710 */

	/* Parameter ppRespData */

/* 2226 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2228 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2230 */	NdrFcShort( 0x6bc ),	/* Type Offset=1724 */

	/* Return value */

/* 2232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2234 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncCreatePrinterIC */

/* 2238 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2250 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2254 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2256 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2258 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2260 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2270 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2272 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2274 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pHandle */

/* 2276 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2278 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2280 */	NdrFcShort( 0x714 ),	/* Type Offset=1812 */

	/* Parameter pDevModeContainer */

/* 2282 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2284 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2286 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 2288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2290 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncPlayGdiScriptOnPrinterIC */

/* 2294 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2302 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2304 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2306 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2308 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2310 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2314 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2316 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2318 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinterIC */

/* 2326 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2328 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2330 */	NdrFcShort( 0x718 ),	/* Type Offset=1816 */

	/* Parameter pIn */

/* 2332 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2334 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2336 */	NdrFcShort( 0x502 ),	/* Type Offset=1282 */

	/* Parameter cIn */

/* 2338 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2340 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOut */

/* 2344 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2346 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2348 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */

	/* Parameter cOut */

/* 2350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2352 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ul */

/* 2356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2358 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2364 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterIC */

/* 2368 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2376 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2378 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2380 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2382 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2384 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2386 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2390 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinterIC */

/* 2400 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2402 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2404 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2408 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinters */

/* 2412 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2420 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2422 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2426 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2428 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2430 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2432 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 2442 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2444 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Name */

/* 2448 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2450 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2452 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinterEnum */

/* 2460 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2462 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2464 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 2466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2468 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2474 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2480 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPrinterDriver */

/* 2490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2498 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2500 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2508 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2510 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2520 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2522 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2524 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 2526 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2528 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2530 */	NdrFcShort( 0x95a ),	/* Type Offset=2394 */

	/* Parameter dwFileCopyFlags */

/* 2532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2534 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2540 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrinterDrivers */

/* 2544 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2550 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2552 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2554 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2558 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2560 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2562 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2564 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2568 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2574 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2576 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2578 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2580 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2582 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2584 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2588 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDrivers */

/* 2592 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2594 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2596 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 2598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2600 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2604 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2606 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2610 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2612 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2616 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2618 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDriverDirectory */

/* 2622 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2624 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2628 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2630 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2632 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2634 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2636 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2638 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2640 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2642 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2652 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2656 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2658 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2662 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2664 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2666 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriverDirectory */

/* 2670 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2672 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2674 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2684 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2690 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDriver */

/* 2694 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2700 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2702 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2704 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2706 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2712 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2714 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2724 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2726 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2728 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2730 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2732 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2734 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pDriverName */

/* 2736 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2738 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2740 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDriverEx */

/* 2748 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2756 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2758 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2760 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2762 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2766 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2768 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2778 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2780 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2782 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2784 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2786 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2788 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pDriverName */

/* 2790 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2792 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2794 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter dwDeleteFlag */

/* 2796 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2798 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2800 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwVersionNum */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPrintProcessor */

/* 2814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2822 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2824 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2826 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2832 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2834 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2844 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2846 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2848 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2850 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2852 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2854 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pPathName */

/* 2856 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2858 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2860 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pPrintProcessorName */

/* 2862 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2864 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2866 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 2868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2870 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrintProcessors */

/* 2874 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2882 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2884 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2886 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2888 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2890 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2892 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2894 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2904 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2908 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2910 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2912 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2914 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2916 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2918 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorInfo */

/* 2922 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2924 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2926 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 2928 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2930 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2934 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2936 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2940 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2942 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2944 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2948 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrintProcessorDirectory */

/* 2952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2960 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2962 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2964 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2966 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2970 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2972 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2974 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2982 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2984 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2986 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2988 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2990 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2992 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2996 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorDirectory */

/* 3000 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3002 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3004 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 3006 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3008 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3012 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3014 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3020 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPorts */

/* 3024 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3030 */	NdrFcShort( 0x2f ),	/* 47 */
/* 3032 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3034 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3038 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3040 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3042 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3044 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3048 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3052 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3054 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3056 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3058 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3060 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3062 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPort */

/* 3066 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3068 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3070 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Parameter cbBuf */

/* 3072 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3074 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3076 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3080 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumMonitors */

/* 3096 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3104 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3106 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3108 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3112 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3116 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3130 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMonitor */

/* 3138 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3140 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3142 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */

	/* Parameter cbBuf */

/* 3144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3146 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3152 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3158 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3164 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPort */

/* 3168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3174 */	NdrFcShort( 0x31 ),	/* 49 */
/* 3176 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3178 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3180 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3186 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3188 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3198 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3200 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3202 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3204 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3206 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3208 */	NdrFcShort( 0xa00 ),	/* Type Offset=2560 */

	/* Parameter pPortVarContainer */

/* 3210 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3212 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3214 */	NdrFcShort( 0xa14 ),	/* Type Offset=2580 */

	/* Parameter pMonitorName */

/* 3216 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3218 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3220 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 3222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3224 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetPort */

/* 3228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x32 ),	/* 50 */
/* 3236 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3238 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3240 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3246 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3248 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3258 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3262 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortName */

/* 3264 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3268 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3270 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3274 */	NdrFcShort( 0xa00 ),	/* Type Offset=2560 */

	/* Return value */

/* 3276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddMonitor */

/* 3282 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3288 */	NdrFcShort( 0x33 ),	/* 51 */
/* 3290 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3292 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3294 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3302 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3306 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3310 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3312 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3316 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorContainer */

/* 3318 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3320 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3322 */	NdrFcShort( 0xa7c ),	/* Type Offset=2684 */

	/* Return value */

/* 3324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeleteMonitor */

/* 3330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3338 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3340 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3350 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3358 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3360 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3362 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3364 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 3366 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3368 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3370 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorName */

/* 3372 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3374 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3376 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrintProcessor */

/* 3384 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3392 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3394 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3402 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3404 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 3414 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3418 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 3420 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3424 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 3426 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3428 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3430 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 3432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3434 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPrintProcessorDatatypes */

/* 3438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3444 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3446 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3448 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3454 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3456 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3458 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3470 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3472 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 3474 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3476 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3478 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3482 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDatatypes */

/* 3486 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3488 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3490 */	NdrFcShort( 0x47a ),	/* Type Offset=1146 */

	/* Parameter cbBuf */

/* 3492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3494 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3500 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3506 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3512 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncAddPerMachineConnection */

/* 3516 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3524 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3526 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3528 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3534 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3536 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 3546 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3550 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 3552 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3556 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pPrintServer */

/* 3558 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3560 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3562 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pProvider */

/* 3564 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3566 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3568 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 3570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3572 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePerMachineConnection */

/* 3576 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3582 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3584 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3586 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3588 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3594 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3596 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3604 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 3606 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3608 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3610 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 3612 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3614 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3616 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 3618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumPerMachineConnections */

/* 3624 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3630 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3632 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3634 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3636 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3640 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3642 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3644 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 3654 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3656 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3658 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterEnum */

/* 3660 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3662 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3664 */	NdrFcShort( 0x494 ),	/* Type Offset=1172 */

	/* Parameter cbBuf */

/* 3666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3668 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3672 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3674 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3680 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSyncRegisterForRemoteNotifications */

/* 3690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3698 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3700 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3706 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3708 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3712 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3716 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3722 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3724 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3726 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pNotifyFilter */

/* 3728 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3730 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3732 */	NdrFcShort( 0xc6c ),	/* Type Offset=3180 */

	/* Parameter phRpcHandle */

/* 3734 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3738 */	NdrFcShort( 0xc80 ),	/* Type Offset=3200 */

	/* Return value */

/* 3740 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3742 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSyncUnRegisterForRemoteNotifications */

/* 3746 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3748 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3754 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3756 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 3758 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3760 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3762 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3764 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3768 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3776 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phRpcHandle */

/* 3778 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 3780 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3782 */	NdrFcShort( 0xc88 ),	/* Type Offset=3208 */

	/* Return value */

/* 3784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3786 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSyncRefreshRemoteNotifications */

/* 3790 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3798 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3800 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3802 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3804 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3806 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3810 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3812 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3820 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hRpcHandle */

/* 3822 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3824 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3826 */	NdrFcShort( 0xc8c ),	/* Type Offset=3212 */

	/* Parameter pNotifyFilter */

/* 3828 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3830 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3832 */	NdrFcShort( 0xc6c ),	/* Type Offset=3180 */

	/* Parameter ppNotifyData */

/* 3834 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3836 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3838 */	NdrFcShort( 0xc90 ),	/* Type Offset=3216 */

	/* Return value */

/* 3840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3842 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetRemoteNotifications */

/* 3846 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3852 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3854 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3856 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3858 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3860 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3862 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3864 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3866 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3868 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3870 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hRpcHandle */

/* 3878 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3880 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3882 */	NdrFcShort( 0xc8c ),	/* Type Offset=3212 */

	/* Parameter ppNotifyData */

/* 3884 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3888 */	NdrFcShort( 0xc90 ),	/* Type Offset=3216 */

	/* Return value */

/* 3890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncInstallPrinterDriverFromPackage */

/* 3896 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3902 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3904 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3906 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3908 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3914 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3916 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 3926 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3930 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInfPath */

/* 3932 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3934 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3936 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszDriverName */

/* 3938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3940 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3942 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pszEnvironment */

/* 3944 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3946 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3948 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter dwFlags */

/* 3950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3952 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3958 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncUploadPrinterDriverPackage */

/* 3962 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3968 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3970 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3972 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3974 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3976 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3978 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3980 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3982 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 3992 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3994 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3996 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInfPath */

/* 3998 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4000 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4002 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pszEnvironment */

/* 4004 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4006 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4008 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter dwFlags */

/* 4010 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4012 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszDestInfPath */

/* 4016 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4018 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4020 */	NdrFcShort( 0xc98 ),	/* Type Offset=3224 */

	/* Parameter pcchDestInfPath */

/* 4022 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 4024 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4030 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetCorePrinterDrivers */

/* 4034 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4040 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4042 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4044 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4046 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4048 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4054 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4064 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4066 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4068 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 4070 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4072 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4074 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter cchCoreDrivers */

/* 4076 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4078 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszzCoreDriverDependencies */

/* 4082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4084 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4086 */	NdrFcShort( 0xcb6 ),	/* Type Offset=3254 */

	/* Parameter cCorePrinterDrivers */

/* 4088 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4090 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCorePrinterDrivers */

/* 4094 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4096 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4098 */	NdrFcShort( 0xcfa ),	/* Type Offset=3322 */

	/* Return value */

/* 4100 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4102 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncCorePrinterDriverInstalled */

/* 4106 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4112 */	NdrFcShort( 0x41 ),	/* 65 */
/* 4114 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4116 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4120 */	NdrFcShort( 0x6c ),	/* 108 */
/* 4122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4126 */	0xa,		/* 10 */
			0xc1,		/* Ext Flags:  new corr desc, has range on conformance has big byval param */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4134 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4136 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4138 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4140 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 4142 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4144 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4146 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter CoreDriverGUID */

/* 4148 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 4150 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4152 */	NdrFcShort( 0xcd6 ),	/* Type Offset=3286 */

	/* Parameter ftDriverDate */

/* 4154 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 4156 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4158 */	NdrFcShort( 0x55a ),	/* Type Offset=1370 */

	/* Parameter dwlDriverVersion */

/* 4160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4162 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4164 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pbDriverInstalled */

/* 4166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4168 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4174 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetPrinterDriverPackagePath */

/* 4178 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4184 */	NdrFcShort( 0x42 ),	/* 66 */
/* 4186 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 4188 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4190 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4194 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4198 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 4200 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4212 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 4214 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4218 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pszLanguage */

/* 4220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4224 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszPackageID */

/* 4226 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4228 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4230 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pszDriverPackageCab */

/* 4232 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 4234 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4236 */	NdrFcShort( 0xd28 ),	/* Type Offset=3368 */

	/* Parameter cchDriverPackageCab */

/* 4238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4240 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRequiredSize */

/* 4244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4246 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4250 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4252 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeletePrinterDriverPackage */

/* 4256 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4258 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4262 */	NdrFcShort( 0x43 ),	/* 67 */
/* 4264 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4266 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4274 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4276 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4284 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 4286 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4290 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszInfPath */

/* 4292 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4296 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pszEnvironment */

/* 4298 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4302 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 4304 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4306 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4308 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncReadPrinter */

/* 4310 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4316 */	NdrFcShort( 0x44 ),	/* 68 */
/* 4318 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4320 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4322 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4324 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4326 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4328 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4330 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4332 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4340 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4342 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4344 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4346 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pBuf */

/* 4348 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4352 */	NdrFcShort( 0x502 ),	/* Type Offset=1282 */

	/* Parameter cbBuf */

/* 4354 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNoBytesRead */

/* 4360 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4366 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4368 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncResetPrinter */

/* 4372 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4374 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x45 ),	/* 69 */
/* 4380 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4382 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4384 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4386 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4390 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4392 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4394 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4404 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4406 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4408 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pDatatype */

/* 4410 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4412 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4414 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 4416 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4418 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4420 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncGetJobNamedPropertyValue */

/* 4428 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4436 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4438 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4440 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4442 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4444 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4448 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4450 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4452 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4460 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4464 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 4466 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4468 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 4472 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4474 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4476 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Parameter pValue */

/* 4478 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4480 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4482 */	NdrFcShort( 0xd8e ),	/* Type Offset=3470 */

	/* Return value */

/* 4484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4486 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncSetJobNamedProperty */

/* 4490 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4498 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4500 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4502 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4504 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4506 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4510 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4512 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4522 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4524 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4526 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 4528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProperty */

/* 4534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4538 */	NdrFcShort( 0xda2 ),	/* Type Offset=3490 */

	/* Return value */

/* 4540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncDeleteJobNamedProperty */

/* 4546 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4552 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4556 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4558 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4560 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4562 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4566 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4568 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4578 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4580 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4582 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 4584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 4590 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4592 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4594 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */

	/* Return value */

/* 4596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4598 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncEnumJobNamedProperties */

/* 4602 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4610 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4614 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4618 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4620 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4622 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 4624 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4632 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4634 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4636 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4638 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter JobId */

/* 4640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4642 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcProperties */

/* 4646 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4648 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppProperties */

/* 4652 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4654 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4656 */	NdrFcShort( 0xdb4 ),	/* Type Offset=3508 */

	/* Return value */

/* 4658 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4660 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAsyncLogJobInfoForBranchOffice */

/* 4664 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4666 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4670 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4672 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4674 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4676 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4680 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4686 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4694 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4696 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4698 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4700 */	NdrFcShort( 0x31a ),	/* Type Offset=794 */

	/* Parameter pBranchOfficeJobDataContainer */

/* 4702 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4704 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4706 */	NdrFcShort( 0xeee ),	/* Type Offset=3822 */

	/* Return value */

/* 4708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4710 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Dpar_MIDL_TYPE_FORMAT_STRING ms2Dpar__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  4 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 12 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 14 */	
			0x11, 0x0,	/* FC_RP */
/* 16 */	NdrFcShort( 0x18 ),	/* Offset= 24 (40) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 28 */	0x0 , 
			0x0,		/* 0 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 40 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x10 ),	/* 16 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x6 ),	/* Offset= 6 (52) */
/* 48 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 50 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 52 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 54 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (18) */
/* 56 */	
			0x11, 0x0,	/* FC_RP */
/* 58 */	NdrFcShort( 0x7c ),	/* Offset= 124 (182) */
/* 60 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 62 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	0x0 , 
			0x0,		/* 0 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	NdrFcShort( 0x8 ),	/* 8 */
/* 82 */	NdrFcShort( 0x3 ),	/* 3 */
/* 84 */	NdrFcLong( 0x1 ),	/* 1 */
/* 88 */	NdrFcShort( 0x10 ),	/* Offset= 16 (104) */
/* 90 */	NdrFcLong( 0x2 ),	/* 2 */
/* 94 */	NdrFcShort( 0x28 ),	/* Offset= 40 (134) */
/* 96 */	NdrFcLong( 0x3 ),	/* 3 */
/* 100 */	NdrFcShort( 0x30 ),	/* Offset= 48 (148) */
/* 102 */	NdrFcShort( 0xffff ),	/* Offset= -1 (101) */
/* 104 */	
			0x12, 0x0,	/* FC_UP */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x28 ),	/* 40 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0xc ),	/* Offset= 12 (126) */
/* 116 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 118 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 120 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 122 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 124 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 126 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 128 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 130 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x12, 0x0,	/* FC_UP */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* Offset= 0 (144) */
/* 146 */	0xb8,		/* FC_INT3264 */
			0x5b,		/* FC_END */
/* 148 */	
			0x12, 0x0,	/* FC_UP */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 154 */	NdrFcShort( 0x38 ),	/* 56 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x10 ),	/* Offset= 16 (174) */
/* 160 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 162 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 164 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 166 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 168 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 170 */	0x3e,		/* FC_STRUCTPAD2 */
			0xb,		/* FC_HYPER */
/* 172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 174 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x0 ),	/* Offset= 0 (188) */
/* 190 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 192 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 194 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (60) */
/* 196 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 198 */	
			0x11, 0x0,	/* FC_RP */
/* 200 */	NdrFcShort( 0x22e ),	/* Offset= 558 (758) */
/* 202 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 204 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 206 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 208 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 210 */	0x0 , 
			0x0,		/* 0 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (222) */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0xa ),	/* 10 */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x3a ),	/* Offset= 58 (288) */
/* 232 */	NdrFcLong( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x78 ),	/* Offset= 120 (356) */
/* 238 */	NdrFcLong( 0x2 ),	/* 2 */
/* 242 */	NdrFcShort( 0x90 ),	/* Offset= 144 (386) */
/* 244 */	NdrFcLong( 0x3 ),	/* 3 */
/* 248 */	NdrFcShort( 0x174 ),	/* Offset= 372 (620) */
/* 250 */	NdrFcLong( 0x4 ),	/* 4 */
/* 254 */	NdrFcShort( 0x180 ),	/* Offset= 384 (638) */
/* 256 */	NdrFcLong( 0x5 ),	/* 5 */
/* 260 */	NdrFcShort( 0x194 ),	/* Offset= 404 (664) */
/* 262 */	NdrFcLong( 0x6 ),	/* 6 */
/* 266 */	NdrFcShort( 0x1aa ),	/* Offset= 426 (692) */
/* 268 */	NdrFcLong( 0x7 ),	/* 7 */
/* 272 */	NdrFcShort( 0x1ae ),	/* Offset= 430 (702) */
/* 274 */	NdrFcLong( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0x1bc ),	/* Offset= 444 (722) */
/* 280 */	NdrFcLong( 0x9 ),	/* 9 */
/* 284 */	NdrFcShort( 0x1c8 ),	/* Offset= 456 (740) */
/* 286 */	NdrFcShort( 0xffff ),	/* Offset= -1 (285) */
/* 288 */	
			0x12, 0x0,	/* FC_UP */
/* 290 */	NdrFcShort( 0x10 ),	/* Offset= 16 (306) */
/* 292 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 296 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 298 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 300 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 302 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 304 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x88 ),	/* 136 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x24 ),	/* Offset= 36 (348) */
/* 314 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 316 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 318 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 320 */	0x0,		/* 0 */
			NdrFcShort( 0xffe3 ),	/* Offset= -29 (292) */
			0x8,		/* FC_LONG */
/* 324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 326 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 338 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 340 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 342 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 346 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 348 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 352 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 354 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 356 */	
			0x12, 0x0,	/* FC_UP */
/* 358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (360) */
/* 360 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 362 */	NdrFcShort( 0x20 ),	/* 32 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* Offset= 8 (374) */
/* 368 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 370 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 372 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 374 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 376 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 378 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 380 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 382 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 384 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 386 */	
			0x12, 0x0,	/* FC_UP */
/* 388 */	NdrFcShort( 0x96 ),	/* Offset= 150 (538) */
/* 390 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 392 */	NdrFcShort( 0x40 ),	/* 64 */
/* 394 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 396 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 398 */	NdrFcShort( 0xdc ),	/* 220 */
/* 400 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 402 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (390) */
/* 404 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 406 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 408 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 410 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 412 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 414 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 416 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 418 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 420 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 422 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 424 */	NdrFcShort( 0xffde ),	/* Offset= -34 (390) */
/* 426 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 432 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 434 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 436 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 438 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 440 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 442 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 444 */	NdrFcShort( 0x6 ),	/* 6 */
/* 446 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 448 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 450 */	NdrFcShort( 0x6 ),	/* 6 */
/* 452 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 454 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (442) */
/* 456 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 458 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 460 */	NdrFcShort( 0x4 ),	/* 4 */
/* 462 */	0x4,		/* Corr desc: FC_USMALL */
			0x0,		/*  */
/* 464 */	NdrFcShort( 0xfff9 ),	/* -7 */
/* 466 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 468 */	0x0 , 
			0x0,		/* 0 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 478 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 480 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (458) */
/* 486 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 488 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 490 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (448) */
/* 492 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 494 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 500 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 502 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 504 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 506 */	NdrFcShort( 0x28 ),	/* 40 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0xc ),	/* Offset= 12 (522) */
/* 512 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 514 */	0x6,		/* FC_SHORT */
			0x40,		/* FC_STRUCTPAD4 */
/* 516 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 518 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 522 */	
			0x12, 0x0,	/* FC_UP */
/* 524 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (480) */
/* 526 */	
			0x12, 0x0,	/* FC_UP */
/* 528 */	NdrFcShort( 0xffd0 ),	/* Offset= -48 (480) */
/* 530 */	
			0x12, 0x0,	/* FC_UP */
/* 532 */	NdrFcShort( 0xffda ),	/* Offset= -38 (494) */
/* 534 */	
			0x12, 0x0,	/* FC_UP */
/* 536 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (494) */
/* 538 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 540 */	NdrFcShort( 0x88 ),	/* 136 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	NdrFcShort( 0x18 ),	/* Offset= 24 (568) */
/* 546 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 548 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 550 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 552 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 554 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 556 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 558 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 560 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 562 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 564 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 566 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 568 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 570 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 572 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 574 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 576 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 578 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 580 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 582 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 584 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 586 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 588 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 590 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 592 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 594 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 596 */	
			0x12, 0x0,	/* FC_UP */
/* 598 */	NdrFcShort( 0xff36 ),	/* Offset= -202 (396) */
/* 600 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 602 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 604 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 606 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 608 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 610 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 612 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 614 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 616 */	
			0x12, 0x0,	/* FC_UP */
/* 618 */	NdrFcShort( 0xff8e ),	/* Offset= -114 (504) */
/* 620 */	
			0x12, 0x0,	/* FC_UP */
/* 622 */	NdrFcShort( 0x2 ),	/* Offset= 2 (624) */
/* 624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x4 ),	/* Offset= 4 (634) */
/* 632 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 634 */	
			0x12, 0x0,	/* FC_UP */
/* 636 */	NdrFcShort( 0xff7c ),	/* Offset= -132 (504) */
/* 638 */	
			0x12, 0x0,	/* FC_UP */
/* 640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (642) */
/* 642 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 644 */	NdrFcShort( 0x18 ),	/* 24 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x8 ),	/* Offset= 8 (656) */
/* 650 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 652 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 656 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 658 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 660 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 662 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 664 */	
			0x12, 0x0,	/* FC_UP */
/* 666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (668) */
/* 668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x20 ),	/* 32 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0xa ),	/* Offset= 10 (684) */
/* 676 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 680 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 682 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 684 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 686 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 688 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 690 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 692 */	
			0x12, 0x0,	/* FC_UP */
/* 694 */	NdrFcShort( 0x2 ),	/* Offset= 2 (696) */
/* 696 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 698 */	NdrFcShort( 0x4 ),	/* 4 */
/* 700 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 702 */	
			0x12, 0x0,	/* FC_UP */
/* 704 */	NdrFcShort( 0x2 ),	/* Offset= 2 (706) */
/* 706 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x6 ),	/* Offset= 6 (718) */
/* 714 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 716 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 718 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 720 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 722 */	
			0x12, 0x0,	/* FC_UP */
/* 724 */	NdrFcShort( 0x2 ),	/* Offset= 2 (726) */
/* 726 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x4 ),	/* Offset= 4 (736) */
/* 734 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 736 */	
			0x12, 0x0,	/* FC_UP */
/* 738 */	NdrFcShort( 0xfeaa ),	/* Offset= -342 (396) */
/* 740 */	
			0x12, 0x0,	/* FC_UP */
/* 742 */	NdrFcShort( 0x2 ),	/* Offset= 2 (744) */
/* 744 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x4 ),	/* Offset= 4 (754) */
/* 752 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 754 */	
			0x12, 0x0,	/* FC_UP */
/* 756 */	NdrFcShort( 0xfe98 ),	/* Offset= -360 (396) */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x10 ),	/* 16 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* Offset= 0 (764) */
/* 766 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 768 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 770 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (202) */
/* 772 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 774 */	
			0x11, 0x0,	/* FC_RP */
/* 776 */	NdrFcShort( 0x2 ),	/* Offset= 2 (778) */
/* 778 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x10 ),	/* 16 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x6 ),	/* Offset= 6 (790) */
/* 786 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 788 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 790 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 792 */	NdrFcShort( 0xfcfa ),	/* Offset= -774 (18) */
/* 794 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 796 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 798 */	
			0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0x12c ),	/* Offset= 300 (1100) */
/* 802 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 804 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 806 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 808 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 810 */	0x0 , 
			0x0,		/* 0 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 820 */	NdrFcShort( 0x2 ),	/* Offset= 2 (822) */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	NdrFcLong( 0x1 ),	/* 1 */
/* 830 */	NdrFcShort( 0x16 ),	/* Offset= 22 (852) */
/* 832 */	NdrFcLong( 0x2 ),	/* 2 */
/* 836 */	NdrFcShort( 0x48 ),	/* Offset= 72 (908) */
/* 838 */	NdrFcLong( 0x3 ),	/* 3 */
/* 842 */	NdrFcShort( 0x9c ),	/* Offset= 156 (998) */
/* 844 */	NdrFcLong( 0x4 ),	/* 4 */
/* 848 */	NdrFcShort( 0xa2 ),	/* Offset= 162 (1010) */
/* 850 */	NdrFcShort( 0xffff ),	/* Offset= -1 (849) */
/* 852 */	
			0x12, 0x0,	/* FC_UP */
/* 854 */	NdrFcShort( 0x2 ),	/* Offset= 2 (856) */
/* 856 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x60 ),	/* 96 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x16 ),	/* Offset= 22 (884) */
/* 864 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 866 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 868 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 870 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 872 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 874 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 876 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 878 */	0x0,		/* 0 */
			NdrFcShort( 0xfdb5 ),	/* Offset= -587 (292) */
			0x40,		/* FC_STRUCTPAD4 */
/* 882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 884 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 886 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 888 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 890 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 894 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 896 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 898 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 902 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 904 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 906 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 908 */	
			0x12, 0x0,	/* FC_UP */
/* 910 */	NdrFcShort( 0x2 ),	/* Offset= 2 (912) */
/* 912 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x20 ),	/* Offset= 32 (950) */
/* 920 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 922 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 924 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 926 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 928 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 930 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 932 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 934 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 936 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 938 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 940 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 942 */	0x0,		/* 0 */
			NdrFcShort( 0xfd75 ),	/* Offset= -651 (292) */
			0x8,		/* FC_LONG */
/* 946 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 950 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 952 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 954 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 956 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 958 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 960 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 962 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 964 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 966 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 968 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 972 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 974 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 976 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 978 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 980 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 982 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 984 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x12, 0x0,	/* FC_UP */
/* 988 */	NdrFcShort( 0xfdb0 ),	/* Offset= -592 (396) */
/* 990 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 992 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x12, 0x0,	/* FC_UP */
/* 996 */	NdrFcShort( 0xfe14 ),	/* Offset= -492 (504) */
/* 998 */	
			0x12, 0x0,	/* FC_UP */
/* 1000 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1002) */
/* 1002 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1004 */	NdrFcShort( 0xc ),	/* 12 */
/* 1006 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1008 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1010 */	
			0x12, 0x0,	/* FC_UP */
/* 1012 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1014) */
/* 1014 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1016 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1052) */
/* 1022 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1024 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1026 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1028 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1030 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1032 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1034 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1036 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1038 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1040 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1042 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1044 */	0x0,		/* 0 */
			NdrFcShort( 0xfd0f ),	/* Offset= -753 (292) */
			0x8,		/* FC_LONG */
/* 1048 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1050 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1052 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1054 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1056 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1058 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1060 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1062 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1064 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1066 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1068 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1070 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1072 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1074 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1076 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1078 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1080 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1082 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1084 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1086 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x12, 0x0,	/* FC_UP */
/* 1090 */	NdrFcShort( 0xfd4a ),	/* Offset= -694 (396) */
/* 1092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1094 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x12, 0x0,	/* FC_UP */
/* 1098 */	NdrFcShort( 0xfdae ),	/* Offset= -594 (504) */
/* 1100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1106) */
/* 1108 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1110 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1112 */	NdrFcShort( 0xfeca ),	/* Offset= -310 (802) */
/* 1114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1116 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1118 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1120) */
/* 1120 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1124 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1128 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1130 */	0x0 , 
			0x0,		/* 0 */
/* 1132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1142 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1144 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1150) */
/* 1150 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1154 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1156 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1158 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1160 */	0x0 , 
			0x0,		/* 0 */
/* 1162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1172 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1176) */
/* 1176 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1178 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1180 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1184 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1186 */	0x0 , 
			0x0,		/* 0 */
/* 1188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1196 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1198 */	
			0x11, 0x0,	/* FC_RP */
/* 1200 */	NdrFcShort( 0x3e ),	/* Offset= 62 (1262) */
/* 1202 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1204 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1206 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1208 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1210 */	0x0 , 
			0x0,		/* 0 */
/* 1212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1222) */
/* 1222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1230 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1234) */
/* 1232 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1231) */
/* 1234 */	
			0x12, 0x0,	/* FC_UP */
/* 1236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1238) */
/* 1238 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1240 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1250) */
/* 1246 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1248 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1250 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1252 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1254 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1256 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1258 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1260 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1264 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1268) */
/* 1270 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1272 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1274 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1202) */
/* 1276 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1278 */	
			0x11, 0x0,	/* FC_RP */
/* 1280 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1282) */
/* 1282 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1284 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1286 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1288 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1290 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1292 */	0x0 , 
			0x0,		/* 0 */
/* 1294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1302 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1304 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1306 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1308 */	
			0x11, 0x0,	/* FC_RP */
/* 1310 */	NdrFcShort( 0xff42 ),	/* Offset= -190 (1120) */
/* 1312 */	
			0x11, 0x0,	/* FC_RP */
/* 1314 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (1150) */
/* 1316 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1318 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1320) */
/* 1320 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1322 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1324 */	
			0x11, 0x0,	/* FC_RP */
/* 1326 */	NdrFcShort( 0x88 ),	/* Offset= 136 (1462) */
/* 1328 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1330 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1332 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1334 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1336 */	0x0 , 
			0x0,		/* 0 */
/* 1338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1346 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1348) */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1352 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1356 */	NdrFcShort( 0xa ),	/* Offset= 10 (1366) */
/* 1358 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1362 */	NdrFcShort( 0x32 ),	/* Offset= 50 (1412) */
/* 1364 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1363) */
/* 1366 */	
			0x12, 0x0,	/* FC_UP */
/* 1368 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1388) */
/* 1370 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1376 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1378 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1380 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1382 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1384 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1386 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1388 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1390 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1394 */	NdrFcShort( 0xe ),	/* Offset= 14 (1408) */
/* 1396 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1398 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1400 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (1370) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1404 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (1378) */
			0x5b,		/* FC_END */
/* 1408 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1410 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1412 */	
			0x12, 0x0,	/* FC_UP */
/* 1414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1416) */
/* 1416 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1418 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1446) */
/* 1424 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1426 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1428 */	0x0,		/* 0 */
			NdrFcShort( 0xffc5 ),	/* Offset= -59 (1370) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1432 */	0x0,		/* 0 */
			NdrFcShort( 0xffc9 ),	/* Offset= -55 (1378) */
			0x36,		/* FC_POINTER */
/* 1436 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1438 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1440 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1442 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 1444 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1446 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1448 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1450 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1452 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1454 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1456 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1458 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1460 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1462 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1464 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1468 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1468) */
/* 1470 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1472 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1474 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (1328) */
/* 1476 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1478 */	
			0x11, 0x0,	/* FC_RP */
/* 1480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1482) */
/* 1482 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1484 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1486 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x55,		/* FC_DIV_2 */
/* 1488 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1490 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1492 */	0x0 , 
			0x0,		/* 0 */
/* 1494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1502 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1504 */	
			0x11, 0x0,	/* FC_RP */
/* 1506 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1508) */
/* 1508 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1510 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1512 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1514 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1516 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1518 */	0x0 , 
			0x0,		/* 0 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1528 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1530 */	
			0x11, 0x0,	/* FC_RP */
/* 1532 */	NdrFcShort( 0xfe9c ),	/* Offset= -356 (1176) */
/* 1534 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1536 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1538 */	
			0x11, 0x0,	/* FC_RP */
/* 1540 */	NdrFcShort( 0xaa ),	/* Offset= 170 (1710) */
/* 1542 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1544 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1546 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1548 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1550 */	0x0 , 
			0x0,		/* 0 */
/* 1552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1562) */
/* 1562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1570 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1572 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1576 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1578 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1582 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 1584 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1588 */	NdrFcShort( 0xf9ce ),	/* Offset= -1586 (2) */
/* 1590 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1594 */	NdrFcShort( 0xf9c8 ),	/* Offset= -1592 (2) */
/* 1596 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1600 */	NdrFcShort( 0xf9c2 ),	/* Offset= -1598 (2) */
/* 1602 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1606 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 1608 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1612 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1616) */
/* 1614 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1613) */
/* 1616 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1618 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1628) */
/* 1624 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1626 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1628 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1630 */	NdrFcShort( 0xf9b4 ),	/* Offset= -1612 (18) */
/* 1632 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1634 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1638 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1638) */
/* 1640 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1642 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1644 */	NdrFcShort( 0xff9a ),	/* Offset= -102 (1542) */
/* 1646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1648 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1650 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1654 */	NdrFcShort( 0xa ),	/* Offset= 10 (1664) */
/* 1656 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1658 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1660 */	0x0,		/* 0 */
			NdrFcShort( 0xffe3 ),	/* Offset= -29 (1632) */
			0x5b,		/* FC_END */
/* 1664 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1666 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1668 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1674 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1676 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1678 */	0x0 , 
			0x0,		/* 0 */
/* 1680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1688 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1692 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1694 */	0x0 , 
			0x0,		/* 0 */
/* 1696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1704 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1706 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1648) */
/* 1708 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1710 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1712 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1714 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1668) */
/* 1716 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1716) */
/* 1718 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1720 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1722 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1724 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1726 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1728) */
/* 1728 */	
			0x12, 0x0,	/* FC_UP */
/* 1730 */	NdrFcShort( 0x40 ),	/* Offset= 64 (1794) */
/* 1732 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1734 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0xa ),	/* Offset= 10 (1748) */
/* 1740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1742 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1744 */	0x0,		/* 0 */
			NdrFcShort( 0xff8f ),	/* Offset= -113 (1632) */
			0x5b,		/* FC_END */
/* 1748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1750 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1752 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1758 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1760 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1762 */	0x0 , 
			0x0,		/* 0 */
/* 1764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1772 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1776 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1778 */	0x0 , 
			0x0,		/* 0 */
/* 1780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1788 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1790 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1732) */
/* 1792 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1794 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1796 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1798 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (1752) */
/* 1800 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1800) */
/* 1802 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1804 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1806 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1808 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1810 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1812) */
/* 1812 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 1814 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1816 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 1818 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1820 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1822 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1824) */
/* 1824 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1826 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1828 */	
			0x11, 0x0,	/* FC_RP */
/* 1830 */	NdrFcShort( 0x234 ),	/* Offset= 564 (2394) */
/* 1832 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1834 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1836 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1838 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1840 */	0x0 , 
			0x0,		/* 0 */
/* 1842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1852) */
/* 1852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1854 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1856 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1860 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1894) */
/* 1862 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1866 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1912) */
/* 1868 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1872 */	NdrFcShort( 0x50 ),	/* Offset= 80 (1952) */
/* 1874 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1878 */	NdrFcShort( 0x9e ),	/* Offset= 158 (2036) */
/* 1880 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1884 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (2128) */
/* 1886 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1890 */	NdrFcShort( 0x14c ),	/* Offset= 332 (2222) */
/* 1892 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1891) */
/* 1894 */	
			0x12, 0x0,	/* FC_UP */
/* 1896 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1898) */
/* 1898 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1908) */
/* 1906 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1908 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1910 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1912 */	
			0x12, 0x0,	/* FC_UP */
/* 1914 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1916) */
/* 1916 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1918 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0xa ),	/* Offset= 10 (1932) */
/* 1924 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1926 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1928 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1930 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1932 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1934 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1936 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1938 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1940 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1942 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1944 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1946 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1948 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1950 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1952 */	
			0x12, 0x0,	/* FC_UP */
/* 1954 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1978) */
/* 1956 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1958 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1960 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1962 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1964 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1966 */	0x0 , 
			0x0,		/* 0 */
/* 1968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1976 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1978 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1980 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1984 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2000) */
/* 1986 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1988 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1990 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1992 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1994 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1996 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1998 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2000 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2002 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2004 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2006 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2008 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2010 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2012 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2014 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2016 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2018 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2020 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2022 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2024 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2026 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2028 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2030 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2032 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2034 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (1956) */
/* 2036 */	
			0x12, 0x0,	/* FC_UP */
/* 2038 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2062) */
/* 2040 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2042 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2044 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2046 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2048 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2050 */	0x0 , 
			0x0,		/* 0 */
/* 2052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2060 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2064 */	NdrFcShort( 0x68 ),	/* 104 */
/* 2066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2068 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2088) */
/* 2070 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2072 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2074 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2076 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2078 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2080 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2082 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2084 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2086 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2088 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2090 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2092 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2094 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2096 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2098 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2100 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2102 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2108 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2110 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2112 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2116 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2120 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2122 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (1956) */
/* 2124 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2126 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (2040) */
/* 2128 */	
			0x12, 0x0,	/* FC_UP */
/* 2130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2132) */
/* 2132 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2134 */	NdrFcShort( 0x98 ),	/* 152 */
/* 2136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2138 */	NdrFcShort( 0x1c ),	/* Offset= 28 (2166) */
/* 2140 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2142 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2144 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2146 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2148 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2150 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2152 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2154 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2156 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2158 */	NdrFcShort( 0xfcec ),	/* Offset= -788 (1370) */
/* 2160 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 2162 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2164 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2166 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2168 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2170 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2172 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2174 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2178 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2182 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2184 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2186 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2188 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2190 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2192 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2194 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2198 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2200 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (1956) */
/* 2202 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2204 */	NdrFcShort( 0xff5c ),	/* Offset= -164 (2040) */
/* 2206 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2208 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2214 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2216 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2218 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2222 */	
			0x12, 0x0,	/* FC_UP */
/* 2224 */	NdrFcShort( 0x2e ),	/* Offset= 46 (2270) */
/* 2226 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2228 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2230 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2232 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 2234 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2236 */	0x0 , 
			0x0,		/* 0 */
/* 2238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2246 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2248 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2250 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2252 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2254 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 2256 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2258 */	0x0 , 
			0x0,		/* 0 */
/* 2260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2270 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2272 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x2a ),	/* Offset= 42 (2318) */
/* 2278 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2280 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2282 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2284 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2286 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2288 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2290 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2292 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2294 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2296 */	NdrFcShort( 0xfc62 ),	/* Offset= -926 (1370) */
/* 2298 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 2300 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2302 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2304 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2306 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2308 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2310 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2314 */	NdrFcShort( 0xfc50 ),	/* Offset= -944 (1370) */
/* 2316 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2318 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2320 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2322 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2324 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2326 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2328 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2330 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2332 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2334 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2336 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2338 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2342 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2344 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2346 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2350 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2352 */	NdrFcShort( 0xfe74 ),	/* Offset= -396 (1956) */
/* 2354 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2356 */	NdrFcShort( 0xfec4 ),	/* Offset= -316 (2040) */
/* 2358 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2360 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2362 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2364 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2366 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2368 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2370 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2372 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2374 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2376 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2378 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2380 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2382 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2384 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (2226) */
/* 2386 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2388 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2390 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2392 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (2248) */
/* 2394 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2396 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2400) */
/* 2402 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2404 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2406 */	NdrFcShort( 0xfdc2 ),	/* Offset= -574 (1832) */
/* 2408 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2410 */	
			0x11, 0x0,	/* FC_RP */
/* 2412 */	NdrFcShort( 0x94 ),	/* Offset= 148 (2560) */
/* 2414 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 2416 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2422 */	0x0 , 
			0x0,		/* 0 */
/* 2424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2432 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2434) */
/* 2434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2436 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2438 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2442 */	NdrFcShort( 0x16 ),	/* Offset= 22 (2464) */
/* 2444 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2448 */	NdrFcShort( 0x22 ),	/* Offset= 34 (2482) */
/* 2450 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2454 */	NdrFcShort( 0x3a ),	/* Offset= 58 (2512) */
/* 2456 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 2460 */	NdrFcShort( 0x4a ),	/* Offset= 74 (2534) */
/* 2462 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2461) */
/* 2464 */	
			0x12, 0x0,	/* FC_UP */
/* 2466 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2468) */
/* 2468 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2474 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2478) */
/* 2476 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2478 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2480 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2482 */	
			0x12, 0x0,	/* FC_UP */
/* 2484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2486) */
/* 2486 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2488 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2492 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2500) */
/* 2494 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2496 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2498 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2500 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2502 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2504 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2508 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2510 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2512 */	
			0x12, 0x0,	/* FC_UP */
/* 2514 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2516) */
/* 2516 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2518 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2530) */
/* 2524 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2526 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2528 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2530 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2532 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2534 */	
			0x12, 0x0,	/* FC_UP */
/* 2536 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2538) */
/* 2538 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2540 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2552) */
/* 2546 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2548 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2552 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2554 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2556 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2558 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2566 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2566) */
/* 2568 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2570 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2572 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (2414) */
/* 2574 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2576 */	
			0x11, 0x0,	/* FC_RP */
/* 2578 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2580) */
/* 2580 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2582 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2586 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2592) */
/* 2588 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2590 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2592 */	
			0x12, 0x0,	/* FC_UP */
/* 2594 */	NdrFcShort( 0xf5f0 ),	/* Offset= -2576 (18) */
/* 2596 */	
			0x11, 0x0,	/* FC_RP */
/* 2598 */	NdrFcShort( 0x56 ),	/* Offset= 86 (2684) */
/* 2600 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2602 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2604 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2606 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2608 */	0x0 , 
			0x0,		/* 0 */
/* 2610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2620) */
/* 2620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2622 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2624 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2628 */	NdrFcShort( 0xa ),	/* Offset= 10 (2638) */
/* 2630 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2634 */	NdrFcShort( 0x16 ),	/* Offset= 22 (2656) */
/* 2636 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2635) */
/* 2638 */	
			0x12, 0x0,	/* FC_UP */
/* 2640 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2642) */
/* 2642 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2648 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2652) */
/* 2650 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2652 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2654 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2656 */	
			0x12, 0x0,	/* FC_UP */
/* 2658 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2660) */
/* 2660 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2662 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2672) */
/* 2668 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2670 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2672 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2674 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2676 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2678 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2680 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2682 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2684 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2686 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2690) */
/* 2692 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2694 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2696 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (2600) */
/* 2698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2700 */	
			0x11, 0x0,	/* FC_RP */
/* 2702 */	NdrFcShort( 0x1de ),	/* Offset= 478 (3180) */
/* 2704 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 2706 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 2708 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2710 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2712 */	0x0 , 
			0x0,		/* 0 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2724) */
/* 2724 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2726 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2728 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2732 */	NdrFcShort( 0xf556 ),	/* Offset= -2730 (2) */
/* 2734 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2738 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 2740 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2744 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 2746 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2750 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 2752 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2756 */	NdrFcShort( 0x1c ),	/* Offset= 28 (2784) */
/* 2758 */	NdrFcLong( 0x6 ),	/* 6 */
/* 2762 */	NdrFcShort( 0xf55e ),	/* Offset= -2722 (40) */
/* 2764 */	NdrFcLong( 0x7 ),	/* 7 */
/* 2768 */	NdrFcShort( 0xf83a ),	/* Offset= -1990 (778) */
/* 2770 */	NdrFcLong( 0x8 ),	/* 8 */
/* 2774 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (2974) */
/* 2776 */	NdrFcLong( 0x9 ),	/* 9 */
/* 2780 */	NdrFcShort( 0x136 ),	/* Offset= 310 (3090) */
/* 2782 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2781) */
/* 2784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2786 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2790 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2796) */
/* 2792 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2794 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2796 */	
			0x12, 0x0,	/* FC_UP */
/* 2798 */	NdrFcShort( 0xf636 ),	/* Offset= -2506 (292) */
/* 2800 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2802 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 2804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2806 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2808 */	0x0 , 
			0x0,		/* 0 */
/* 2810 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2818 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2820) */
/* 2820 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2822 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2824 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2828 */	NdrFcShort( 0x32 ),	/* Offset= 50 (2878) */
/* 2830 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2834 */	NdrFcShort( 0x3c ),	/* Offset= 60 (2894) */
/* 2836 */	NdrFcLong( 0x4 ),	/* 4 */
/* 2840 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2784) */
/* 2842 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2846 */	NdrFcShort( 0xf50a ),	/* Offset= -2806 (40) */
/* 2848 */	NdrFcLong( 0x5 ),	/* 5 */
/* 2852 */	NdrFcShort( 0xf7e6 ),	/* Offset= -2074 (778) */
/* 2854 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2853) */
/* 2856 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2858 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2860 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x55,		/* FC_DIV_2 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2866 */	0x0 , 
			0x0,		/* 0 */
/* 2868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2876 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2878 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2880 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2890) */
/* 2886 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2888 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2890 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2892 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (2856) */
/* 2894 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 2896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2898 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2900 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2902 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2906) */
/* 2908 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2910 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2912 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2914 */	0x0,		/* 0 */
			NdrFcShort( 0xff8d ),	/* Offset= -115 (2800) */
			0x5b,		/* FC_END */
/* 2918 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2924 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2926 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2928 */	0x0 , 
			0x0,		/* 0 */
/* 2930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2938 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2942 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2944 */	0x0 , 
			0x0,		/* 0 */
/* 2946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2954 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2956 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2900) */
/* 2958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2960 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2962 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2964 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (2918) */
/* 2966 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2966) */
/* 2968 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2970 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2972 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2974 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2980 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2984) */
/* 2982 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2984 */	
			0x12, 0x0,	/* FC_UP */
/* 2986 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (2960) */
/* 2988 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2990 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2992 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2994 */	NdrFcShort( 0xc ),	/* 12 */
/* 2996 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2998 */	0x0 , 
			0x0,		/* 0 */
/* 3000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3008 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 3010 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3012 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0xa ),	/* Offset= 10 (3026) */
/* 3018 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3020 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3022 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 3024 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3026 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3028 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2988) */
/* 3030 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3038 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3040 */	0x0 , 
			0x0,		/* 0 */
/* 3042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3050 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3054 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3056 */	0x0 , 
			0x0,		/* 0 */
/* 3058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3066 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3068 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (3010) */
/* 3070 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3072 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3074 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3078 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3086) */
/* 3080 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3082 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3084 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3086 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3088 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (3030) */
/* 3090 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3100) */
/* 3098 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3100 */	
			0x12, 0x0,	/* FC_UP */
/* 3102 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (3072) */
/* 3104 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3106 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3110) */
/* 3112 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 3114 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3116 */	NdrFcShort( 0xfe64 ),	/* Offset= -412 (2704) */
/* 3118 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3120 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3122 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3134) */
/* 3128 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3130 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (3104) */
			0x5b,		/* FC_END */
/* 3134 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3136 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3138 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3142 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3146 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3148 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3154 */	NdrFcLong( 0x32 ),	/* 50 */
/* 3158 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3162 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3164 */	0x0 , 
			0x0,		/* 0 */
/* 3166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3174 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3176 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3120) */
/* 3178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3180 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3182 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3192) */
/* 3188 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3190 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3192 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3194 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3138) */
/* 3196 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3200) */
/* 3200 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 3202 */	0x2,		/* 2 */
			0x1,		/* 1 */
/* 3204 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3208) */
/* 3208 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 3210 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3212 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 3214 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 3216 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3220) */
/* 3220 */	
			0x12, 0x0,	/* FC_UP */
/* 3222 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (3180) */
/* 3224 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3228) */
/* 3228 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3230 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3232 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3234 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3236 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3238 */	0x0 , 
			0x0,		/* 0 */
/* 3240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3248 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3250 */	
			0x11, 0x0,	/* FC_RP */
/* 3252 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3254) */
/* 3254 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3256 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3258 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3262 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3264 */	0x0 , 
			0x0,		/* 0 */
/* 3266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3274 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3276 */	
			0x11, 0x0,	/* FC_RP */
/* 3278 */	NdrFcShort( 0x2c ),	/* Offset= 44 (3322) */
/* 3280 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 3282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3284 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3286 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3290 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 3292 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3294 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (3280) */
			0x5b,		/* FC_END */
/* 3298 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 3300 */	NdrFcShort( 0x208 ),	/* 520 */
/* 3302 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3304 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 3306 */	NdrFcShort( 0x228 ),	/* 552 */
/* 3308 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3310 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (3286) */
/* 3312 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3314 */	NdrFcShort( 0xf868 ),	/* Offset= -1944 (1370) */
/* 3316 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3318 */	0x0,		/* 0 */
			NdrFcShort( 0xffeb ),	/* Offset= -21 (3298) */
			0x5b,		/* FC_END */
/* 3322 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3326 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3328 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3330 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3332 */	0x0 , 
			0x0,		/* 0 */
/* 3334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3342 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3346 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3348 */	0x0 , 
			0x0,		/* 0 */
/* 3350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3358 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3360 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3304) */
/* 3362 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3364 */	
			0x11, 0x0,	/* FC_RP */
/* 3366 */	NdrFcShort( 0xffb0 ),	/* Offset= -80 (3286) */
/* 3368 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3370 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3372) */
/* 3372 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3374 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3376 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3378 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3380 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3382 */	0x0 , 
			0x0,		/* 0 */
/* 3384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3392 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3394 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3396 */	NdrFcShort( 0x4a ),	/* Offset= 74 (3470) */
/* 3398 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3400 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 3402 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 3404 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3406 */	0x0 , 
			0x0,		/* 0 */
/* 3408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3416 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3418) */
/* 3418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3420 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3422 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3426 */	NdrFcShort( 0xf2a0 ),	/* Offset= -3424 (2) */
/* 3428 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3432 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 3434 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3438 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 3440 */	NdrFcLong( 0x4 ),	/* 4 */
/* 3444 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 3446 */	NdrFcLong( 0x5 ),	/* 5 */
/* 3450 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3454) */
/* 3452 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3451) */
/* 3454 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3456 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3460 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3466) */
/* 3462 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3464 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3466 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3468 */	NdrFcShort( 0xf286 ),	/* Offset= -3450 (18) */
/* 3470 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3472 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3476 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3476) */
/* 3478 */	0xd,		/* FC_ENUM16 */
			0x40,		/* FC_STRUCTPAD4 */
/* 3480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3482 */	NdrFcShort( 0xffac ),	/* Offset= -84 (3398) */
/* 3484 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3486 */	
			0x11, 0x0,	/* FC_RP */
/* 3488 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3490) */
/* 3490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3492 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3504) */
/* 3498 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3500 */	0x0,		/* 0 */
			NdrFcShort( 0xffe1 ),	/* Offset= -31 (3470) */
			0x5b,		/* FC_END */
/* 3504 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3508 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3510 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3512) */
/* 3512 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3514 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3516) */
/* 3516 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3520 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x54,		/* FC_DEREFERENCE */
/* 3522 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3524 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3526 */	0x0 , 
			0x0,		/* 0 */
/* 3528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3536 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3540 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3542 */	0x0 , 
			0x0,		/* 0 */
/* 3544 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3554 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (3490) */
/* 3556 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3558 */	
			0x11, 0x0,	/* FC_RP */
/* 3560 */	NdrFcShort( 0x106 ),	/* Offset= 262 (3822) */
/* 3562 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 3564 */	0x6,		/* Corr desc: FC_SHORT */
			0x0,		/*  */
/* 3566 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 3568 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3570 */	0x0 , 
			0x0,		/* 0 */
/* 3572 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3582) */
/* 3582 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3584 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3586 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3590 */	NdrFcShort( 0x1c ),	/* Offset= 28 (3618) */
/* 3592 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3596 */	NdrFcShort( 0x3e ),	/* Offset= 62 (3658) */
/* 3598 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3602 */	NdrFcShort( 0x4a ),	/* Offset= 74 (3676) */
/* 3604 */	NdrFcLong( 0x4 ),	/* 4 */
/* 3608 */	NdrFcShort( 0x76 ),	/* Offset= 118 (3726) */
/* 3610 */	NdrFcLong( 0x5 ),	/* 5 */
/* 3614 */	NdrFcShort( 0x88 ),	/* Offset= 136 (3750) */
/* 3616 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3615) */
/* 3618 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3620 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3624 */	NdrFcShort( 0xe ),	/* Offset= 14 (3638) */
/* 3626 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3628 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3630 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3632 */	0x36,		/* FC_POINTER */
			0xb,		/* FC_HYPER */
/* 3634 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3638 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3640 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3642 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3644 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3646 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3648 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3650 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3652 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3654 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3656 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3658 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3660 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3664) */
/* 3666 */	0xb,		/* FC_HYPER */
			0x8,		/* FC_LONG */
/* 3668 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3670 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 3672 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 3674 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3676 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3678 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x10 ),	/* Offset= 16 (3698) */
/* 3684 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3686 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3688 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3690 */	0xb,		/* FC_HYPER */
			0xb,		/* FC_HYPER */
/* 3692 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3694 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3696 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3698 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3700 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3702 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3704 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3706 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3708 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3710 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3712 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3714 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3716 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3718 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3720 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3722 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3724 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3726 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3728 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3732 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3738) */
/* 3734 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3736 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3738 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3740 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3742 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3744 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3746 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3748 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3750 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3756 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3760) */
/* 3758 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3760 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3762 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3764 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3766 */	NdrFcShort( 0x60 ),	/* 96 */
/* 3768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3770 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3770) */
/* 3772 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 3774 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3776 */	NdrFcShort( 0xff2a ),	/* Offset= -214 (3562) */
/* 3778 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3780 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 3782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3784 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 3786 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 3788 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3790 */	0x0 , 
			0x0,		/* 0 */
/* 3792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3800 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3804 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3806 */	0x0 , 
			0x0,		/* 0 */
/* 3808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3818 */	NdrFcShort( 0xffca ),	/* Offset= -54 (3764) */
/* 3820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3822 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 3824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3826 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3780) */
/* 3828 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3828) */
/* 3830 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3832 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const ms2Dpar_MIDL_EXPR_FORMAT_STRING ms2Dpar__MIDL_ExprFormatString =
    {
        0,
        {
			0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/*  2 */	0x0,		/*  */
			0x0,		/* 0 */
/*  4 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 12 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 14 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 16 */	0x4,		/* FC_EXPR_OPER */
			0x1b,		/* OP_AND */
/* 18 */	0x0,		/*  */
			0x0,		/* 0 */
/* 20 */	0x3,		/* FC_EXPR_VAR */
			0x9,		/* FC_ULONG */
/* 22 */	NdrFcShort( 0xfff4 ),	/* -12 */
/* 24 */	0x1,		/* FC_EXPR_CONST32 */
			0x8,		/* FC_LONG */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcLong( 0xffff ),	/* 65535 */

			0x0
        }
    };

static const unsigned short ms2Dpar__MIDL_ExprFormatStringOffsetTable[] =
{
0,
16,
};

static const NDR_EXPR_DESC  ms2Dpar_ExprDesc = 
 {
ms2Dpar__MIDL_ExprFormatStringOffsetTable,
ms2Dpar__MIDL_ExprFormatString.Format
};

static const unsigned short IRemoteWinspool_FormatStringOffsetTable[] =
    {
    0,
    72,
    144,
    206,
    280,
    366,
    434,
    484,
    528,
    596,
    664,
    720,
    764,
    826,
    870,
    914,
    958,
    1032,
    1112,
    1180,
    1254,
    1298,
    1348,
    1398,
    1472,
    1528,
    1602,
    1700,
    1792,
    1866,
    1934,
    1984,
    2040,
    2090,
    2176,
    2238,
    2294,
    2368,
    2412,
    2490,
    2544,
    2622,
    2694,
    2748,
    2814,
    2874,
    2952,
    3024,
    3096,
    3168,
    3228,
    3282,
    3330,
    3384,
    3438,
    3516,
    3576,
    3624,
    3690,
    3746,
    3790,
    3846,
    3896,
    3962,
    4034,
    4106,
    4178,
    4256,
    4310,
    4372,
    4428,
    4490,
    4546,
    4602,
    4664
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


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

#if defined(_M_AMD64)




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
__midl_frag1103_t;
extern const __midl_frag1103_t __midl_frag1103;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag1102_t;
extern const __midl_frag1102_t __midl_frag1102;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag1101_t;
extern const __midl_frag1101_t __midl_frag1101;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag1097_t;
extern const __midl_frag1097_t __midl_frag1097;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
}
__midl_frag1096_t;
extern const __midl_frag1096_t __midl_frag1096;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
    } frag2;
}
__midl_frag1088_t;
extern const __midl_frag1088_t __midl_frag1088;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag1087_t;
extern const __midl_frag1087_t __midl_frag1087;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag1086_t;
extern const __midl_frag1086_t __midl_frag1086;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag1080_t;
extern const __midl_frag1080_t __midl_frag1080;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1079_t;
extern const __midl_frag1079_t __midl_frag1079;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag1078_t;
extern const __midl_frag1078_t __midl_frag1078;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag1077_t;
extern const __midl_frag1077_t __midl_frag1077;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1076_t;
extern const __midl_frag1076_t __midl_frag1076;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag1075_t;
extern const __midl_frag1075_t __midl_frag1075;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag1074_t;
extern const __midl_frag1074_t __midl_frag1074;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1073_t;
extern const __midl_frag1073_t __midl_frag1073;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag1072_t;
extern const __midl_frag1072_t __midl_frag1072;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1071_t;
extern const __midl_frag1071_t __midl_frag1071;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag1069_t;
extern const __midl_frag1069_t __midl_frag1069;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag1068_t;
extern const __midl_frag1068_t __midl_frag1068;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1067_t;
extern const __midl_frag1067_t __midl_frag1067;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1066_t;
extern const __midl_frag1066_t __midl_frag1066;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1065_t;
extern const __midl_frag1065_t __midl_frag1065;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1064_t;
extern const __midl_frag1064_t __midl_frag1064;

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
}
__midl_frag1061_t;
extern const __midl_frag1061_t __midl_frag1061;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1058_t;
extern const __midl_frag1058_t __midl_frag1058;

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
__midl_frag1055_t;
extern const __midl_frag1055_t __midl_frag1055;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1053_t;
extern const __midl_frag1053_t __midl_frag1053;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag1052_t;
extern const __midl_frag1052_t __midl_frag1052;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag1050_t;
extern const __midl_frag1050_t __midl_frag1050;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag1049_t;
extern const __midl_frag1049_t __midl_frag1049;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1048_t;
extern const __midl_frag1048_t __midl_frag1048;

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
__midl_frag1045_t;
extern const __midl_frag1045_t __midl_frag1045;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag1043_t;
extern const __midl_frag1043_t __midl_frag1043;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1042_t;
extern const __midl_frag1042_t __midl_frag1042;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1040_t;
extern const __midl_frag1040_t __midl_frag1040;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag1039_t;
extern const __midl_frag1039_t __midl_frag1039;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1037_t;
extern const __midl_frag1037_t __midl_frag1037;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1034_t;
extern const __midl_frag1034_t __midl_frag1034;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag1032_t;
extern const __midl_frag1032_t __midl_frag1032;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag1031_t;
extern const __midl_frag1031_t __midl_frag1031;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1030_t;
extern const __midl_frag1030_t __midl_frag1030;

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
}
__midl_frag1025_t;
extern const __midl_frag1025_t __midl_frag1025;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1023_t;
extern const __midl_frag1023_t __midl_frag1023;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag1022_t;
extern const __midl_frag1022_t __midl_frag1022;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1021_t;
extern const __midl_frag1021_t __midl_frag1021;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag1020_t;
extern const __midl_frag1020_t __midl_frag1020;

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
__midl_frag1019_t;
extern const __midl_frag1019_t __midl_frag1019;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1018_t;
extern const __midl_frag1018_t __midl_frag1018;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1016_t;
extern const __midl_frag1016_t __midl_frag1016;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1014_t;
extern const __midl_frag1014_t __midl_frag1014;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1013_t;
extern const __midl_frag1013_t __midl_frag1013;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1012_t;
extern const __midl_frag1012_t __midl_frag1012;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1011_t;
extern const __midl_frag1011_t __midl_frag1011;

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
}
__midl_frag1009_t;
extern const __midl_frag1009_t __midl_frag1009;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1006_t;
extern const __midl_frag1006_t __midl_frag1006;

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
__midl_frag1001_t;
extern const __midl_frag1001_t __midl_frag1001;

typedef 
NDR64_FORMAT_CHAR
__midl_frag996_t;
extern const __midl_frag996_t __midl_frag996;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag995_t;
extern const __midl_frag995_t __midl_frag995;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag994_t;
extern const __midl_frag994_t __midl_frag994;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag993_t;
extern const __midl_frag993_t __midl_frag993;

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
__midl_frag984_t;
extern const __midl_frag984_t __midl_frag984;

typedef 
NDR64_FORMAT_CHAR
__midl_frag980_t;
extern const __midl_frag980_t __midl_frag980;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag979_t;
extern const __midl_frag979_t __midl_frag979;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag978_t;
extern const __midl_frag978_t __midl_frag978;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag977_t;
extern const __midl_frag977_t __midl_frag977;

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
__midl_frag972_t;
extern const __midl_frag972_t __midl_frag972;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag970_t;
extern const __midl_frag970_t __midl_frag970;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag969_t;
extern const __midl_frag969_t __midl_frag969;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag968_t;
extern const __midl_frag968_t __midl_frag968;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag967_t;
extern const __midl_frag967_t __midl_frag967;

typedef 
NDR64_FORMAT_CHAR
__midl_frag965_t;
extern const __midl_frag965_t __midl_frag965;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag964_t;
extern const __midl_frag964_t __midl_frag964;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag963_t;
extern const __midl_frag963_t __midl_frag963;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag962_t;
extern const __midl_frag962_t __midl_frag962;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag957_t;
extern const __midl_frag957_t __midl_frag957;

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
__midl_frag956_t;
extern const __midl_frag956_t __midl_frag956;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag953_t;
extern const __midl_frag953_t __midl_frag953;

typedef 
NDR64_FORMAT_CHAR
__midl_frag952_t;
extern const __midl_frag952_t __midl_frag952;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag951_t;
extern const __midl_frag951_t __midl_frag951;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag950_t;
extern const __midl_frag950_t __midl_frag950;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag949_t;
extern const __midl_frag949_t __midl_frag949;

typedef 
NDR64_FORMAT_CHAR
__midl_frag948_t;
extern const __midl_frag948_t __midl_frag948;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag947_t;
extern const __midl_frag947_t __midl_frag947;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag946_t;
extern const __midl_frag946_t __midl_frag946;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag942_t;
extern const __midl_frag942_t __midl_frag942;

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
__midl_frag941_t;
extern const __midl_frag941_t __midl_frag941;

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
__midl_frag930_t;
extern const __midl_frag930_t __midl_frag930;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag928_t;
extern const __midl_frag928_t __midl_frag928;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag927_t;
extern const __midl_frag927_t __midl_frag927;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag926_t;
extern const __midl_frag926_t __midl_frag926;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag925_t;
extern const __midl_frag925_t __midl_frag925;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag921_t;
extern const __midl_frag921_t __midl_frag921;

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
__midl_frag919_t;
extern const __midl_frag919_t __midl_frag919;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag917_t;
extern const __midl_frag917_t __midl_frag917;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag916_t;
extern const __midl_frag916_t __midl_frag916;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag915_t;
extern const __midl_frag915_t __midl_frag915;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag913_t;
extern const __midl_frag913_t __midl_frag913;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag912_t;
extern const __midl_frag912_t __midl_frag912;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag911_t;
extern const __midl_frag911_t __midl_frag911;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag910_t;
extern const __midl_frag910_t __midl_frag910;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag909_t;
extern const __midl_frag909_t __midl_frag909;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag908_t;
extern const __midl_frag908_t __midl_frag908;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag907_t;
extern const __midl_frag907_t __midl_frag907;

typedef 
NDR64_FORMAT_CHAR
__midl_frag906_t;
extern const __midl_frag906_t __midl_frag906;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag903_t;
extern const __midl_frag903_t __midl_frag903;

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
__midl_frag902_t;
extern const __midl_frag902_t __midl_frag902;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag901_t;
extern const __midl_frag901_t __midl_frag901;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag900_t;
extern const __midl_frag900_t __midl_frag900;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag899_t;
extern const __midl_frag899_t __midl_frag899;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag898_t;
extern const __midl_frag898_t __midl_frag898;

typedef 
NDR64_FORMAT_CHAR
__midl_frag897_t;
extern const __midl_frag897_t __midl_frag897;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag896_t;
extern const __midl_frag896_t __midl_frag896;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag895_t;
extern const __midl_frag895_t __midl_frag895;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag894_t;
extern const __midl_frag894_t __midl_frag894;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag893_t;
extern const __midl_frag893_t __midl_frag893;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    NDR64_UINT32 frag8;
}
__midl_frag892_t;
extern const __midl_frag892_t __midl_frag892;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag891_t;
extern const __midl_frag891_t __midl_frag891;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag889_t;
extern const __midl_frag889_t __midl_frag889;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag888_t;
extern const __midl_frag888_t __midl_frag888;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag887_t;
extern const __midl_frag887_t __midl_frag887;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag886_t;
extern const __midl_frag886_t __midl_frag886;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag885_t;
extern const __midl_frag885_t __midl_frag885;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag884_t;
extern const __midl_frag884_t __midl_frag884;

typedef 
NDR64_FORMAT_CHAR
__midl_frag883_t;
extern const __midl_frag883_t __midl_frag883;

typedef 
NDR64_FORMAT_CHAR
__midl_frag882_t;
extern const __midl_frag882_t __midl_frag882;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag878_t;
extern const __midl_frag878_t __midl_frag878;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    NDR64_UINT32 frag12;
}
__midl_frag877_t;
extern const __midl_frag877_t __midl_frag877;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag875_t;
extern const __midl_frag875_t __midl_frag875;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag874_t;
extern const __midl_frag874_t __midl_frag874;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag873_t;
extern const __midl_frag873_t __midl_frag873;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag872_t;
extern const __midl_frag872_t __midl_frag872;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag871_t;
extern const __midl_frag871_t __midl_frag871;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag869_t;
extern const __midl_frag869_t __midl_frag869;

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
__midl_frag868_t;
extern const __midl_frag868_t __midl_frag868;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag865_t;
extern const __midl_frag865_t __midl_frag865;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag860_t;
extern const __midl_frag860_t __midl_frag860;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag859_t;
extern const __midl_frag859_t __midl_frag859;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag858_t;
extern const __midl_frag858_t __midl_frag858;

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
__midl_frag855_t;
extern const __midl_frag855_t __midl_frag855;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag849_t;
extern const __midl_frag849_t __midl_frag849;

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
}
__midl_frag839_t;
extern const __midl_frag839_t __midl_frag839;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag831_t;
extern const __midl_frag831_t __midl_frag831;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag830_t;
extern const __midl_frag830_t __midl_frag830;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag829_t;
extern const __midl_frag829_t __midl_frag829;

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
__midl_frag823_t;
extern const __midl_frag823_t __midl_frag823;

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
__midl_frag815_t;
extern const __midl_frag815_t __midl_frag815;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag802_t;
extern const __midl_frag802_t __midl_frag802;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag801_t;
extern const __midl_frag801_t __midl_frag801;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag799_t;
extern const __midl_frag799_t __midl_frag799;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag798_t;
extern const __midl_frag798_t __midl_frag798;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag797_t;
extern const __midl_frag797_t __midl_frag797;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag796_t;
extern const __midl_frag796_t __midl_frag796;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag795_t;
extern const __midl_frag795_t __midl_frag795;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag794_t;
extern const __midl_frag794_t __midl_frag794;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag791_t;
extern const __midl_frag791_t __midl_frag791;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag789_t;
extern const __midl_frag789_t __midl_frag789;

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
__midl_frag784_t;
extern const __midl_frag784_t __midl_frag784;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag780_t;
extern const __midl_frag780_t __midl_frag780;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag777_t;
extern const __midl_frag777_t __midl_frag777;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag776_t;
extern const __midl_frag776_t __midl_frag776;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag775_t;
extern const __midl_frag775_t __midl_frag775;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag774_t;
extern const __midl_frag774_t __midl_frag774;

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
__midl_frag771_t;
extern const __midl_frag771_t __midl_frag771;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag770_t;
extern const __midl_frag770_t __midl_frag770;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag769_t;
extern const __midl_frag769_t __midl_frag769;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_MEMPAD_FORMAT frag5;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
    } frag2;
}
__midl_frag767_t;
extern const __midl_frag767_t __midl_frag767;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag766_t;
extern const __midl_frag766_t __midl_frag766;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag762_t;
extern const __midl_frag762_t __midl_frag762;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag761_t;
extern const __midl_frag761_t __midl_frag761;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag759_t;
extern const __midl_frag759_t __midl_frag759;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag758_t;
extern const __midl_frag758_t __midl_frag758;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_CONST64 frag3;
    struct _NDR64_EXPR_VAR frag4;
}
__midl_frag757_t;
extern const __midl_frag757_t __midl_frag757;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    NDR64_UINT32 frag7;
}
__midl_frag756_t;
extern const __midl_frag756_t __midl_frag756;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag755_t;
extern const __midl_frag755_t __midl_frag755;

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
}
__midl_frag751_t;
extern const __midl_frag751_t __midl_frag751;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag743_t;
extern const __midl_frag743_t __midl_frag743;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag742_t;
extern const __midl_frag742_t __midl_frag742;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag741_t;
extern const __midl_frag741_t __midl_frag741;

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
__midl_frag737_t;
extern const __midl_frag737_t __midl_frag737;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag728_t;
extern const __midl_frag728_t __midl_frag728;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag727_t;
extern const __midl_frag727_t __midl_frag727;

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
__midl_frag723_t;
extern const __midl_frag723_t __midl_frag723;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag720_t;
extern const __midl_frag720_t __midl_frag720;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag716_t;
extern const __midl_frag716_t __midl_frag716;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag715_t;
extern const __midl_frag715_t __midl_frag715;

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
__midl_frag709_t;
extern const __midl_frag709_t __midl_frag709;

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
__midl_frag693_t;
extern const __midl_frag693_t __midl_frag693;

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
__midl_frag673_t;
extern const __midl_frag673_t __midl_frag673;

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
__midl_frag665_t;
extern const __midl_frag665_t __midl_frag665;

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
__midl_frag651_t;
extern const __midl_frag651_t __midl_frag651;

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
__midl_frag635_t;
extern const __midl_frag635_t __midl_frag635;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
    struct _NDR64_POINTER_FORMAT frag13;
    struct _NDR64_POINTER_FORMAT frag14;
    struct _NDR64_POINTER_FORMAT frag15;
    struct _NDR64_POINTER_FORMAT frag16;
    struct _NDR64_POINTER_FORMAT frag17;
    struct _NDR64_POINTER_FORMAT frag18;
    struct _NDR64_POINTER_FORMAT frag19;
}
__midl_frag632_t;
extern const __midl_frag632_t __midl_frag632;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag630_t;
extern const __midl_frag630_t __midl_frag630;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag629_t;
extern const __midl_frag629_t __midl_frag629;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag626_t;
extern const __midl_frag626_t __midl_frag626;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag625_t;
extern const __midl_frag625_t __midl_frag625;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag617_t;
extern const __midl_frag617_t __midl_frag617;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag616_t;
extern const __midl_frag616_t __midl_frag616;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag614_t;
extern const __midl_frag614_t __midl_frag614;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag613_t;
extern const __midl_frag613_t __midl_frag613;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_MEMPAD_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag35;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag36;
    } frag2;
}
__midl_frag604_t;
extern const __midl_frag604_t __midl_frag604;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag603_t;
extern const __midl_frag603_t __midl_frag603;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
    struct _NDR64_POINTER_FORMAT frag13;
    struct _NDR64_POINTER_FORMAT frag14;
}
__midl_frag602_t;
extern const __midl_frag602_t __midl_frag602;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
    } frag2;
}
__midl_frag583_t;
extern const __midl_frag583_t __midl_frag583;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag582_t;
extern const __midl_frag582_t __midl_frag582;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
}
__midl_frag581_t;
extern const __midl_frag581_t __midl_frag581;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
    } frag2;
}
__midl_frag566_t;
extern const __midl_frag566_t __midl_frag566;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag565_t;
extern const __midl_frag565_t __midl_frag565;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
}
__midl_frag564_t;
extern const __midl_frag564_t __midl_frag564;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
    } frag2;
}
__midl_frag552_t;
extern const __midl_frag552_t __midl_frag552;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag551_t;
extern const __midl_frag551_t __midl_frag551;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag550_t;
extern const __midl_frag550_t __midl_frag550;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag544_t;
extern const __midl_frag544_t __midl_frag544;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag543_t;
extern const __midl_frag543_t __midl_frag543;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    NDR64_UINT32 frag9;
}
__midl_frag538_t;
extern const __midl_frag538_t __midl_frag538;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag537_t;
extern const __midl_frag537_t __midl_frag537;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag536_t;
extern const __midl_frag536_t __midl_frag536;

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
__midl_frag533_t;
extern const __midl_frag533_t __midl_frag533;

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
__midl_frag518_t;
extern const __midl_frag518_t __midl_frag518;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag516_t;
extern const __midl_frag516_t __midl_frag516;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag515_t;
extern const __midl_frag515_t __midl_frag515;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag514_t;
extern const __midl_frag514_t __midl_frag514;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag507_t;
extern const __midl_frag507_t __midl_frag507;

typedef 
NDR64_FORMAT_CHAR
__midl_frag505_t;
extern const __midl_frag505_t __midl_frag505;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag504_t;
extern const __midl_frag504_t __midl_frag504;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag503_t;
extern const __midl_frag503_t __midl_frag503;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag502_t;
extern const __midl_frag502_t __midl_frag502;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag501_t;
extern const __midl_frag501_t __midl_frag501;

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
__midl_frag500_t;
extern const __midl_frag500_t __midl_frag500;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag498_t;
extern const __midl_frag498_t __midl_frag498;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag497_t;
extern const __midl_frag497_t __midl_frag497;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag496_t;
extern const __midl_frag496_t __midl_frag496;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag495_t;
extern const __midl_frag495_t __midl_frag495;

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
__midl_frag494_t;
extern const __midl_frag494_t __midl_frag494;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag492_t;
extern const __midl_frag492_t __midl_frag492;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    NDR64_UINT32 frag11;
}
__midl_frag491_t;
extern const __midl_frag491_t __midl_frag491;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag489_t;
extern const __midl_frag489_t __midl_frag489;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag488_t;
extern const __midl_frag488_t __midl_frag488;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag487_t;
extern const __midl_frag487_t __midl_frag487;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag486_t;
extern const __midl_frag486_t __midl_frag486;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag485_t;
extern const __midl_frag485_t __midl_frag485;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag484_t;
extern const __midl_frag484_t __midl_frag484;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag483_t;
extern const __midl_frag483_t __midl_frag483;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag482_t;
extern const __midl_frag482_t __midl_frag482;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag480_t;
extern const __midl_frag480_t __midl_frag480;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag479_t;
extern const __midl_frag479_t __midl_frag479;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag478_t;
extern const __midl_frag478_t __midl_frag478;

typedef 
NDR64_FORMAT_CHAR
__midl_frag477_t;
extern const __midl_frag477_t __midl_frag477;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag470_t;
extern const __midl_frag470_t __midl_frag470;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag469_t;
extern const __midl_frag469_t __midl_frag469;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag468_t;
extern const __midl_frag468_t __midl_frag468;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag466_t;
extern const __midl_frag466_t __midl_frag466;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag465_t;
extern const __midl_frag465_t __midl_frag465;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag464_t;
extern const __midl_frag464_t __midl_frag464;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag462_t;
extern const __midl_frag462_t __midl_frag462;

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
}
__midl_frag460_t;
extern const __midl_frag460_t __midl_frag460;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag457_t;
extern const __midl_frag457_t __midl_frag457;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag455_t;
extern const __midl_frag455_t __midl_frag455;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag452_t;
extern const __midl_frag452_t __midl_frag452;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag451_t;
extern const __midl_frag451_t __midl_frag451;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag450_t;
extern const __midl_frag450_t __midl_frag450;

typedef 
NDR64_FORMAT_CHAR
__midl_frag449_t;
extern const __midl_frag449_t __midl_frag449;

typedef 
NDR64_FORMAT_CHAR
__midl_frag448_t;
extern const __midl_frag448_t __midl_frag448;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag447_t;
extern const __midl_frag447_t __midl_frag447;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag446_t;
extern const __midl_frag446_t __midl_frag446;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag445_t;
extern const __midl_frag445_t __midl_frag445;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag444_t;
extern const __midl_frag444_t __midl_frag444;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag443_t;
extern const __midl_frag443_t __midl_frag443;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag442_t;
extern const __midl_frag442_t __midl_frag442;

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
}
__midl_frag441_t;
extern const __midl_frag441_t __midl_frag441;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag436_t;
extern const __midl_frag436_t __midl_frag436;

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
__midl_frag429_t;
extern const __midl_frag429_t __midl_frag429;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag421_t;
extern const __midl_frag421_t __midl_frag421;

typedef 
NDR64_FORMAT_CHAR
__midl_frag419_t;
extern const __midl_frag419_t __midl_frag419;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag418_t;
extern const __midl_frag418_t __midl_frag418;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag417_t;
extern const __midl_frag417_t __midl_frag417;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag416_t;
extern const __midl_frag416_t __midl_frag416;

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
__midl_frag412_t;
extern const __midl_frag412_t __midl_frag412;

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
__midl_frag398_t;
extern const __midl_frag398_t __midl_frag398;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag392_t;
extern const __midl_frag392_t __midl_frag392;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag391_t;
extern const __midl_frag391_t __midl_frag391;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag390_t;
extern const __midl_frag390_t __midl_frag390;

typedef 
NDR64_FORMAT_CHAR
__midl_frag389_t;
extern const __midl_frag389_t __midl_frag389;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag388_t;
extern const __midl_frag388_t __midl_frag388;

typedef 
NDR64_FORMAT_CHAR
__midl_frag384_t;
extern const __midl_frag384_t __midl_frag384;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag383_t;
extern const __midl_frag383_t __midl_frag383;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag382_t;
extern const __midl_frag382_t __midl_frag382;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag381_t;
extern const __midl_frag381_t __midl_frag381;

typedef 
NDR64_FORMAT_CHAR
__midl_frag380_t;
extern const __midl_frag380_t __midl_frag380;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag379_t;
extern const __midl_frag379_t __midl_frag379;

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
}
__midl_frag378_t;
extern const __midl_frag378_t __midl_frag378;

typedef 
NDR64_FORMAT_CHAR
__midl_frag367_t;
extern const __midl_frag367_t __midl_frag367;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag366_t;
extern const __midl_frag366_t __midl_frag366;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag365_t;
extern const __midl_frag365_t __midl_frag365;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag364_t;
extern const __midl_frag364_t __midl_frag364;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag362_t;
extern const __midl_frag362_t __midl_frag362;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag361_t;
extern const __midl_frag361_t __midl_frag361;

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
}
__midl_frag359_t;
extern const __midl_frag359_t __midl_frag359;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag356_t;
extern const __midl_frag356_t __midl_frag356;

typedef 
NDR64_FORMAT_CHAR
__midl_frag352_t;
extern const __midl_frag352_t __midl_frag352;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag351_t;
extern const __midl_frag351_t __midl_frag351;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag350_t;
extern const __midl_frag350_t __midl_frag350;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag349_t;
extern const __midl_frag349_t __midl_frag349;

typedef 
NDR64_FORMAT_CHAR
__midl_frag348_t;
extern const __midl_frag348_t __midl_frag348;

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
__midl_frag346_t;
extern const __midl_frag346_t __midl_frag346;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag344_t;
extern const __midl_frag344_t __midl_frag344;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag343_t;
extern const __midl_frag343_t __midl_frag343;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag342_t;
extern const __midl_frag342_t __midl_frag342;

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
__midl_frag340_t;
extern const __midl_frag340_t __midl_frag340;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag329_t;
extern const __midl_frag329_t __midl_frag329;

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
__midl_frag327_t;
extern const __midl_frag327_t __midl_frag327;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag322_t;
extern const __midl_frag322_t __midl_frag322;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag320_t;
extern const __midl_frag320_t __midl_frag320;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag317_t;
extern const __midl_frag317_t __midl_frag317;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_MEMPAD_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_MEMPAD_FORMAT frag18;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
    } frag2;
}
__midl_frag315_t;
extern const __midl_frag315_t __midl_frag315;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag314_t;
extern const __midl_frag314_t __midl_frag314;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag313_t;
extern const __midl_frag313_t __midl_frag313;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
    } frag2;
}
__midl_frag311_t;
extern const __midl_frag311_t __midl_frag311;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag310_t;
extern const __midl_frag310_t __midl_frag310;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag309_t;
extern const __midl_frag309_t __midl_frag309;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag308_t;
extern const __midl_frag308_t __midl_frag308;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag307_t;
extern const __midl_frag307_t __midl_frag307;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag304_t;
extern const __midl_frag304_t __midl_frag304;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag302_t;
extern const __midl_frag302_t __midl_frag302;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag301_t;
extern const __midl_frag301_t __midl_frag301;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag300_t;
extern const __midl_frag300_t __midl_frag300;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag296_t;
extern const __midl_frag296_t __midl_frag296;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag294_t;
extern const __midl_frag294_t __midl_frag294;

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
__midl_frag287_t;
extern const __midl_frag287_t __midl_frag287;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag283_t;
extern const __midl_frag283_t __midl_frag283;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag277_t;
extern const __midl_frag277_t __midl_frag277;

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
__midl_frag276_t;
extern const __midl_frag276_t __midl_frag276;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag273_t;
extern const __midl_frag273_t __midl_frag273;

typedef 
NDR64_FORMAT_CHAR
__midl_frag271_t;
extern const __midl_frag271_t __midl_frag271;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag269_t;
extern const __midl_frag269_t __midl_frag269;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag268_t;
extern const __midl_frag268_t __midl_frag268;

typedef 
NDR64_FORMAT_CHAR
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

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
__midl_frag260_t;
extern const __midl_frag260_t __midl_frag260;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag252_t;
extern const __midl_frag252_t __midl_frag252;

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
__midl_frag246_t;
extern const __midl_frag246_t __midl_frag246;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag243_t;
extern const __midl_frag243_t __midl_frag243;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag240_t;
extern const __midl_frag240_t __midl_frag240;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag237_t;
extern const __midl_frag237_t __midl_frag237;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag231_t;
extern const __midl_frag231_t __midl_frag231;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag229_t;
extern const __midl_frag229_t __midl_frag229;

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
}
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag213_t;
extern const __midl_frag213_t __midl_frag213;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

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
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag203_t;
extern const __midl_frag203_t __midl_frag203;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag202_t;
extern const __midl_frag202_t __midl_frag202;

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
__midl_frag199_t;
extern const __midl_frag199_t __midl_frag199;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag196_t;
extern const __midl_frag196_t __midl_frag196;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag195_t;
extern const __midl_frag195_t __midl_frag195;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag194_t;
extern const __midl_frag194_t __midl_frag194;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

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
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag189_t;
extern const __midl_frag189_t __midl_frag189;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag185_t;
extern const __midl_frag185_t __midl_frag185;

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
}
__midl_frag159_t;
extern const __midl_frag159_t __midl_frag159;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag152_t;
extern const __midl_frag152_t __midl_frag152;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag151_t;
extern const __midl_frag151_t __midl_frag151;

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
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
    struct _NDR64_POINTER_FORMAT frag7;
    struct _NDR64_POINTER_FORMAT frag8;
    struct _NDR64_POINTER_FORMAT frag9;
    struct _NDR64_POINTER_FORMAT frag10;
    struct _NDR64_POINTER_FORMAT frag11;
    struct _NDR64_POINTER_FORMAT frag12;
}
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag32;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag33;
    } frag2;
}
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag132_t;
extern const __midl_frag132_t __midl_frag132;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag22;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag25;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag26;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag27;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag28;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag29;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag30;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag31;
        struct _NDR64_MEMPAD_FORMAT frag32;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag33;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag34;
    } frag2;
}
__midl_frag118_t;
extern const __midl_frag118_t __midl_frag118;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
    struct _NDR64_POINTER_FORMAT frag6;
}
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag17;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag20;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag21;
        struct _NDR64_MEMPAD_FORMAT frag22;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag23;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag24;
    } frag2;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    NDR64_UINT32 frag7;
}
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag105_t;
extern const __midl_frag105_t __midl_frag105;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

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
}
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

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
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag92_t;
extern const __midl_frag92_t __midl_frag92;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag84_t;
extern const __midl_frag84_t __midl_frag84;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag82_t;
extern const __midl_frag82_t __midl_frag82;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
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
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag71_t;
extern const __midl_frag71_t __midl_frag71;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag70_t;
extern const __midl_frag70_t __midl_frag70;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        struct _NDR64_NO_REPEAT_FORMAT frag19;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag20;
        struct _NDR64_POINTER_FORMAT frag21;
        struct _NDR64_NO_REPEAT_FORMAT frag22;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag23;
        struct _NDR64_POINTER_FORMAT frag24;
        struct _NDR64_NO_REPEAT_FORMAT frag25;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag26;
        struct _NDR64_POINTER_FORMAT frag27;
        struct _NDR64_NO_REPEAT_FORMAT frag28;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag29;
        struct _NDR64_POINTER_FORMAT frag30;
        struct _NDR64_NO_REPEAT_FORMAT frag31;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag32;
        struct _NDR64_POINTER_FORMAT frag33;
        struct _NDR64_NO_REPEAT_FORMAT frag34;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag35;
        struct _NDR64_POINTER_FORMAT frag36;
        struct _NDR64_NO_REPEAT_FORMAT frag37;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag38;
        struct _NDR64_POINTER_FORMAT frag39;
        NDR64_FORMAT_CHAR frag40;
    } frag2;
}
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag50_t;
extern const __midl_frag50_t __midl_frag50;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag44_t;
extern const __midl_frag44_t __midl_frag44;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag41_t;
extern const __midl_frag41_t __midl_frag41;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

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
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag31_t;
extern const __midl_frag31_t __midl_frag31;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_MEMPAD_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
    } frag2;
}
__midl_frag28_t;
extern const __midl_frag28_t __midl_frag28;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag25_t;
extern const __midl_frag25_t __midl_frag25;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_MEMPAD_FORMAT frag9;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
    } frag2;
}
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    NDR64_UINT32 frag6;
}
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag14_t;
extern const __midl_frag14_t __midl_frag14;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

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
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1103_t __midl_frag1103 =
0x5    /* FC64_INT32 */;

static const __midl_frag1102_t __midl_frag1102 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag1101_t __midl_frag1101 =
{ 
/* RPC_BranchOfficeLogOfflineFileFull */
    { 
    /* RPC_BranchOfficeLogOfflineFileFull */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeLogOfflineFileFull */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag1097_t __midl_frag1097 =
{ 
/* RPC_BranchOfficeJobDataPipelineFailed */
    { 
    /* RPC_BranchOfficeJobDataPipelineFailed */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeJobDataPipelineFailed */
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
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag1096_t __midl_frag1096 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    }
};

static const __midl_frag1088_t __midl_frag1088 =
{ 
/* RPC_BranchOfficeJobDataError */
    { 
    /* RPC_BranchOfficeJobDataError */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeJobDataError */
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
        (NDR64_UINT32) 88 /* 0x58 */,
        0,
        0,
        &__midl_frag1096,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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

static const __midl_frag1087_t __midl_frag1087 =
{ 
/* RPC_BranchOfficeJobDataRendered */
    { 
    /* RPC_BranchOfficeJobDataRendered */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeJobDataRendered */
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
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag1086_t __midl_frag1086 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    }
};

static const __midl_frag1080_t __midl_frag1080 =
{ 
/* RPC_BranchOfficeJobDataPrinted */
    { 
    /* RPC_BranchOfficeJobDataPrinted */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeJobDataPrinted */
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
        (NDR64_UINT32) 64 /* 0x40 */,
        0,
        0,
        &__midl_frag1086,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* RPC_BranchOfficeJobDataPrinted */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag1079_t __midl_frag1079 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag1078_t __midl_frag1078 =
{ 
/* __MIDL_IRemoteWinspool_0021 */
    { 
    /* __MIDL_IRemoteWinspool_0021 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 88 /* 0x58 */,
        &__midl_frag1079,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag1080,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag1087,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag1088,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag1097,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag1101,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag1077_t __midl_frag1077 =
{ 
/* RPC_BranchOfficeJobData */
    { 
    /* RPC_BranchOfficeJobData */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeJobData */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 96 /* 0x60 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1078
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

static const __midl_frag1076_t __midl_frag1076 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag1075_t __midl_frag1075 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag1077
        },
        &__midl_frag1076,
        0,
        0
    }
};

static const __midl_frag1074_t __midl_frag1074 =
{ 
/* RPC_BranchOfficeJobDataContainer */
    { 
    /* RPC_BranchOfficeJobDataContainer */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BranchOfficeJobDataContainer */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        0,
        0,
        0,
        &__midl_frag1075,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag1073_t __midl_frag1073 =
{ 
/* *RPC_BranchOfficeJobDataContainer */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1074
};

static const __midl_frag1072_t __midl_frag1072 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag1071_t __midl_frag1071 =
{ 
/* RpcAsyncLogJobInfoForBranchOffice */
    { 
    /* RpcAsyncLogJobInfoForBranchOffice */      /* procedure RpcAsyncLogJobInfoForBranchOffice */
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1072,
        { 
        /* hPrinter */
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
    /* pBranchOfficeJobDataContainer */      /* parameter pBranchOfficeJobDataContainer */
        &__midl_frag1074,
        { 
        /* pBranchOfficeJobDataContainer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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

static const __midl_frag1069_t __midl_frag1069 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag1068_t __midl_frag1068 =
{ 
/* *RPC_PrintNamedProperty */
    { 
    /* *RPC_PrintNamedProperty */
        { 
        /* *RPC_PrintNamedProperty */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *RPC_PrintNamedProperty */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag1049
        },
        &__midl_frag1069,
        0,
        0
    }
};

static const __midl_frag1067_t __midl_frag1067 =
{ 
/* *RPC_PrintNamedProperty */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1068
};

static const __midl_frag1066_t __midl_frag1066 =
{ 
/* **RPC_PrintNamedProperty */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1067
};

static const __midl_frag1065_t __midl_frag1065 =
0x5    /* FC64_INT32 */;

static const __midl_frag1064_t __midl_frag1064 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1065
};

static const __midl_frag1061_t __midl_frag1061 =
{ 
/* RpcAsyncEnumJobNamedProperties */
    { 
    /* RpcAsyncEnumJobNamedProperties */      /* procedure RpcAsyncEnumJobNamedProperties */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1072,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag1065,
        { 
        /* JobId */
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
    /* pcProperties */      /* parameter pcProperties */
        &__midl_frag1065,
        { 
        /* pcProperties */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppProperties */      /* parameter ppProperties */
        &__midl_frag1066,
        { 
        /* ppProperties */
            1,
            1,
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
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1058_t __midl_frag1058 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1102
};

static const __midl_frag1055_t __midl_frag1055 =
{ 
/* RpcAsyncDeleteJobNamedProperty */
    { 
    /* RpcAsyncDeleteJobNamedProperty */      /* procedure RpcAsyncDeleteJobNamedProperty */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1072,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag1065,
        { 
        /* JobId */
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
    /* pszName */      /* parameter pszName */
        &__midl_frag1102,
        { 
        /* pszName */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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

static const __midl_frag1053_t __midl_frag1053 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag1052_t __midl_frag1052 =
{ 
/* __MIDL_IRemoteWinspool_0029 */
    { 
    /* __MIDL_IRemoteWinspool_0029 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag1053,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag1034,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag1103,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag1037,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag1042,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag1039,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag1050_t __midl_frag1050 =
{ 
/* RPC_PrintNamedProperty */
    { 
    /* RPC_PrintNamedProperty */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_PrintNamedProperty */
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
        (NDR64_UINT32) 12 /* 0xc */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag1049_t __midl_frag1049 =
{ 
/* RPC_PrintNamedProperty */
    { 
    /* RPC_PrintNamedProperty */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_PrintNamedProperty */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1050
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1052
        },
        { 
        /* RPC_PrintPropertyValue */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag1048_t __midl_frag1048 =
{ 
/* *RPC_PrintNamedProperty */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1049
};

static const __midl_frag1045_t __midl_frag1045 =
{ 
/* RpcAsyncSetJobNamedProperty */
    { 
    /* RpcAsyncSetJobNamedProperty */      /* procedure RpcAsyncSetJobNamedProperty */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1072,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag1065,
        { 
        /* JobId */
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
    /* pProperty */      /* parameter pProperty */
        &__midl_frag1049,
        { 
        /* pProperty */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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

static const __midl_frag1043_t __midl_frag1043 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1040
    }
};

static const __midl_frag1042_t __midl_frag1042 =
0x10    /* FC64_CHAR */;

static const __midl_frag1040_t __midl_frag1040 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
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
        &__midl_frag1076
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1042
    }
};

static const __midl_frag1039_t __midl_frag1039 =
{ 
/* __MIDL_IRemoteWinspool_0030 */
    { 
    /* __MIDL_IRemoteWinspool_0030 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* __MIDL_IRemoteWinspool_0030 */
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
        &__midl_frag1043,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag1037_t __midl_frag1037 =
0x7    /* FC64_INT64 */;

static const __midl_frag1034_t __midl_frag1034 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1102
};

static const __midl_frag1032_t __midl_frag1032 =
{ 
/* __MIDL_IRemoteWinspool_0029 */
    { 
    /* __MIDL_IRemoteWinspool_0029 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag1079,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag1034,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag1103,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag1037,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag1042,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag1039,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag1031_t __midl_frag1031 =
{ 
/* RPC_PrintPropertyValue */
    { 
    /* RPC_PrintPropertyValue */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_PrintPropertyValue */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1032
        },
        { 
        /* RPC_PrintPropertyValue */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag1030_t __midl_frag1030 =
{ 
/* *RPC_PrintPropertyValue */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1031
};

static const __midl_frag1025_t __midl_frag1025 =
{ 
/* RpcAsyncGetJobNamedPropertyValue */
    { 
    /* RpcAsyncGetJobNamedPropertyValue */      /* procedure RpcAsyncGetJobNamedPropertyValue */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1072,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag1065,
        { 
        /* JobId */
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
    /* pszName */      /* parameter pszName */
        &__midl_frag1102,
        { 
        /* pszName */
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
    /* pValue */      /* parameter pValue */
        &__midl_frag1031,
        { 
        /* pValue */
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
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1023_t __midl_frag1023 =
{ 
/* *DEVMODE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag10
};

static const __midl_frag1022_t __midl_frag1022 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag1021_t __midl_frag1021 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1022
};

static const __midl_frag1020_t __midl_frag1020 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag1019_t __midl_frag1019 =
{ 
/* RpcAsyncResetPrinter */
    { 
    /* RpcAsyncResetPrinter */      /* procedure RpcAsyncResetPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1020,
        { 
        /* hPrinter */
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
    /* pDatatype */      /* parameter pDatatype */
        &__midl_frag1021,
        { 
        /* pDatatype */
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
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag10,
        { 
        /* pDevModeContainer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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

static const __midl_frag1018_t __midl_frag1018 =
0x5    /* FC64_INT32 */;

static const __midl_frag1016_t __midl_frag1016 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1018
};

static const __midl_frag1014_t __midl_frag1014 =
0x10    /* FC64_CHAR */;

static const __midl_frag1013_t __midl_frag1013 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag1012_t __midl_frag1012 =
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
        &__midl_frag1013
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1014
    }
};

static const __midl_frag1011_t __midl_frag1011 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1012
};

static const __midl_frag1009_t __midl_frag1009 =
{ 
/* RpcAsyncReadPrinter */
    { 
    /* RpcAsyncReadPrinter */      /* procedure RpcAsyncReadPrinter */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag1020,
        { 
        /* hPrinter */
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
    /* pBuf */      /* parameter pBuf */
        &__midl_frag1012,
        { 
        /* pBuf */
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1018,
        { 
        /* cbBuf */
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
    /* pcNoBytesRead */      /* parameter pcNoBytesRead */
        &__midl_frag1018,
        { 
        /* pcNoBytesRead */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1018,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1006_t __midl_frag1006 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1022
};

static const __midl_frag1001_t __midl_frag1001 =
{ 
/* RpcAsyncDeletePrinterDriverPackage */
    { 
    /* RpcAsyncDeletePrinterDriverPackage */      /* procedure RpcAsyncDeletePrinterDriverPackage */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag1021,
        { 
        /* pszServer */
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
    /* pszInfPath */      /* parameter pszInfPath */
        &__midl_frag1022,
        { 
        /* pszInfPath */
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
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag1022,
        { 
        /* pszEnvironment */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1018,
        { 
        /* HRESULT */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag996_t __midl_frag996 =
0x11    /* FC64_WCHAR */;

static const __midl_frag995_t __midl_frag995 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */  /* Offset */
    }
};

static const __midl_frag994_t __midl_frag994 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag995
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag996
    }
};

static const __midl_frag993_t __midl_frag993 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag994
};

static const __midl_frag984_t __midl_frag984 =
{ 
/* RpcAsyncGetPrinterDriverPackagePath */
    { 
    /* RpcAsyncGetPrinterDriverPackagePath */      /* procedure RpcAsyncGetPrinterDriverPackagePath */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
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
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag1021,
        { 
        /* pszServer */
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
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag1022,
        { 
        /* pszEnvironment */
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
    /* pszLanguage */      /* parameter pszLanguage */
        &__midl_frag1021,
        { 
        /* pszLanguage */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszPackageID */      /* parameter pszPackageID */
        &__midl_frag1022,
        { 
        /* pszPackageID */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pszDriverPackageCab */      /* parameter pszDriverPackageCab */
        &__midl_frag993,
        { 
        /* pszDriverPackageCab */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* cchDriverPackageCab */      /* parameter cchDriverPackageCab */
        &__midl_frag1018,
        { 
        /* cchDriverPackageCab */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pcchRequiredSize */      /* parameter pcchRequiredSize */
        &__midl_frag1018,
        { 
        /* pcchRequiredSize */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1018,
        { 
        /* HRESULT */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag980_t __midl_frag980 =
0x7    /* FC64_INT64 */;

static const __midl_frag979_t __midl_frag979 =
{ 
/* FILETIME */
    { 
    /* FILETIME */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* FILETIME */
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

static const __midl_frag978_t __midl_frag978 =
{ 
/* GUID */
    { 
    /* GUID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* GUID */
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
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag977_t __midl_frag977 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag978
};

static const __midl_frag972_t __midl_frag972 =
{ 
/* RpcAsyncCorePrinterDriverInstalled */
    { 
    /* RpcAsyncCorePrinterDriverInstalled */      /* procedure RpcAsyncCorePrinterDriverInstalled */
        (NDR64_UINT32) 51118144 /* 0x30c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions, actual guaranteed */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag1021,
        { 
        /* pszServer */
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
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag1022,
        { 
        /* pszEnvironment */
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
    /* CoreDriverGUID */      /* parameter CoreDriverGUID */
        &__midl_frag978,
        { 
        /* CoreDriverGUID */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ftDriverDate */      /* parameter ftDriverDate */
        &__midl_frag979,
        { 
        /* ftDriverDate */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwlDriverVersion */      /* parameter dwlDriverVersion */
        &__midl_frag980,
        { 
        /* dwlDriverVersion */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pbDriverInstalled */      /* parameter pbDriverInstalled */
        &__midl_frag1018,
        { 
        /* pbDriverInstalled */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1018,
        { 
        /* HRESULT */
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

static const __midl_frag970_t __midl_frag970 =
{ 
/* CORE_PRINTER_DRIVER */
    { 
    /* CORE_PRINTER_DRIVER */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CORE_PRINTER_DRIVER */
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
        (NDR64_UINT32) 552 /* 0x228 */
    }
};

static const __midl_frag969_t __midl_frag969 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag968_t __midl_frag968 =
{ 
/* *CORE_PRINTER_DRIVER */
    { 
    /* *CORE_PRINTER_DRIVER */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *CORE_PRINTER_DRIVER */
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
        (NDR64_UINT32) 552 /* 0x228 */,
        &__midl_frag969
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 552 /* 0x228 */,
        &__midl_frag970
    }
};

static const __midl_frag967_t __midl_frag967 =
{ 
/* *CORE_PRINTER_DRIVER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag968
};

static const __midl_frag965_t __midl_frag965 =
0x11    /* FC64_WCHAR */;

static const __midl_frag964_t __midl_frag964 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag963_t __midl_frag963 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag964
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag965
    }
};

static const __midl_frag962_t __midl_frag962 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag963
};

static const __midl_frag957_t __midl_frag957 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1102
};

static const __midl_frag956_t __midl_frag956 =
{ 
/* RpcAsyncGetCorePrinterDrivers */
    { 
    /* RpcAsyncGetCorePrinterDrivers */      /* procedure RpcAsyncGetCorePrinterDrivers */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag957,
        { 
        /* pszServer */
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
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag1102,
        { 
        /* pszEnvironment */
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
    /* cchCoreDrivers */      /* parameter cchCoreDrivers */
        &__midl_frag1065,
        { 
        /* cchCoreDrivers */
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
    /* pszzCoreDriverDependencies */      /* parameter pszzCoreDriverDependencies */
        &__midl_frag963,
        { 
        /* pszzCoreDriverDependencies */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cCorePrinterDrivers */      /* parameter cCorePrinterDrivers */
        &__midl_frag1103,
        { 
        /* cCorePrinterDrivers */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pCorePrinterDrivers */      /* parameter pCorePrinterDrivers */
        &__midl_frag968,
        { 
        /* pCorePrinterDrivers */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1018,
        { 
        /* HRESULT */
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

static const __midl_frag953_t __midl_frag953 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1065
};

static const __midl_frag952_t __midl_frag952 =
0x11    /* FC64_WCHAR */;

static const __midl_frag951_t __midl_frag951 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x5,    /* OP_UNARY_INDIRECTION */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x8,    /* FC64_UINT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */  /* Offset */
    }
};

static const __midl_frag950_t __midl_frag950 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag951
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag952
    }
};

static const __midl_frag949_t __midl_frag949 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag950
};

static const __midl_frag948_t __midl_frag948 =
0x5    /* FC64_INT32 */;

static const __midl_frag947_t __midl_frag947 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag946_t __midl_frag946 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag947
};

static const __midl_frag942_t __midl_frag942 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag947
};

static const __midl_frag941_t __midl_frag941 =
{ 
/* RpcAsyncUploadPrinterDriverPackage */
    { 
    /* RpcAsyncUploadPrinterDriverPackage */      /* procedure RpcAsyncUploadPrinterDriverPackage */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag942,
        { 
        /* pszServer */
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
    /* pszInfPath */      /* parameter pszInfPath */
        &__midl_frag947,
        { 
        /* pszInfPath */
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
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag947,
        { 
        /* pszEnvironment */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag948,
        { 
        /* dwFlags */
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
    /* pszDestInfPath */      /* parameter pszDestInfPath */
        &__midl_frag949,
        { 
        /* pszDestInfPath */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcchDestInfPath */      /* parameter pcchDestInfPath */
        &__midl_frag1065,
        { 
        /* pcchDestInfPath */
            0,
            0,
            0,
            1,
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
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1065,
        { 
        /* HRESULT */
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

static const __midl_frag930_t __midl_frag930 =
{ 
/* RpcAsyncInstallPrinterDriverFromPackage */
    { 
    /* RpcAsyncInstallPrinterDriverFromPackage */      /* procedure RpcAsyncInstallPrinterDriverFromPackage */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
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
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag942,
        { 
        /* pszServer */
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
    /* pszInfPath */      /* parameter pszInfPath */
        &__midl_frag942,
        { 
        /* pszInfPath */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszDriverName */      /* parameter pszDriverName */
        &__midl_frag947,
        { 
        /* pszDriverName */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag947,
        { 
        /* pszEnvironment */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag948,
        { 
        /* dwFlags */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag948,
        { 
        /* HRESULT */
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

static const __midl_frag928_t __midl_frag928 =
{ 
/* *RpcPrintPropertiesCollection */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag871
};

static const __midl_frag927_t __midl_frag927 =
{ 
/* **RpcPrintPropertiesCollection */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag926_t __midl_frag926 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 2 /* 0x2 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag925_t __midl_frag925 =
{ 
/* RpcAsyncGetRemoteNotifications */
    { 
    /* RpcAsyncGetRemoteNotifications */      /* procedure RpcAsyncGetRemoteNotifications */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
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
            (NDR64_UINT8) 2 /* 0x2 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hRpcHandle */      /* parameter hRpcHandle */
        &__midl_frag926,
        { 
        /* hRpcHandle */
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
    /* ppNotifyData */      /* parameter ppNotifyData */
        &__midl_frag927,
        { 
        /* ppNotifyData */
            1,
            1,
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
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag948,
        { 
        /* HRESULT */
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

static const __midl_frag921_t __midl_frag921 =
{ 
/* *RpcPrintPropertiesCollection */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag871
};

static const __midl_frag919_t __midl_frag919 =
{ 
/* RpcSyncRefreshRemoteNotifications */
    { 
    /* RpcSyncRefreshRemoteNotifications */      /* procedure RpcSyncRefreshRemoteNotifications */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
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
            (NDR64_UINT8) 2 /* 0x2 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hRpcHandle */      /* parameter hRpcHandle */
        &__midl_frag926,
        { 
        /* hRpcHandle */
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
    /* pNotifyFilter */      /* parameter pNotifyFilter */
        &__midl_frag871,
        { 
        /* pNotifyFilter */
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
    /* ppNotifyData */      /* parameter ppNotifyData */
        &__midl_frag927,
        { 
        /* ppNotifyData */
            1,
            1,
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
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1065,
        { 
        /* HRESULT */
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

static const __midl_frag917_t __midl_frag917 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 2 /* 0x2 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag916_t __midl_frag916 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag917
};

static const __midl_frag915_t __midl_frag915 =
{ 
/* RpcSyncUnRegisterForRemoteNotifications */
    { 
    /* RpcSyncUnRegisterForRemoteNotifications */      /* procedure RpcSyncUnRegisterForRemoteNotifications */
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
            (NDR64_UINT8) 2 /* 0x2 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* phRpcHandle */      /* parameter phRpcHandle */
        &__midl_frag917,
        { 
        /* phRpcHandle */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1103,
        { 
        /* HRESULT */
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

static const __midl_frag913_t __midl_frag913 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 2 /* 0x2 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag912_t __midl_frag912 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag913
};

static const __midl_frag911_t __midl_frag911 =
{ 
/*  */
    { 
    /* *RpcPrintNamedProperty */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag872
    }
};

static const __midl_frag910_t __midl_frag910 =
{ 
/*  */
    { 
    /* *RPC_V2_NOTIFY_OPTIONS_TYPE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag902
    }
};

static const __midl_frag909_t __midl_frag909 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag908_t __midl_frag908 =
{ 
/* *short */
    { 
    /* *short */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *short */
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
        &__midl_frag909
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag906
    }
};

static const __midl_frag907_t __midl_frag907 =
{ 
/* RPC_V2_NOTIFY_OPTIONS_TYPE */
    { 
    /* RPC_V2_NOTIFY_OPTIONS_TYPE */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_V2_NOTIFY_OPTIONS_TYPE */
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
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *short */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag908
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag906_t __midl_frag906 =
0x4    /* FC64_INT16 */;

static const __midl_frag903_t __midl_frag903 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag902_t __midl_frag902 =
{ 
/* *RPC_V2_NOTIFY_OPTIONS_TYPE */
    { 
    /* *RPC_V2_NOTIFY_OPTIONS_TYPE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *RPC_V2_NOTIFY_OPTIONS_TYPE */
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
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag903
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 16 /* 0x10 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *short */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 32 /* 0x20 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag908
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag907
    }
};

static const __midl_frag901_t __midl_frag901 =
{ 
/* RPC_V2_NOTIFY_OPTIONS */
    { 
    /* RPC_V2_NOTIFY_OPTIONS */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_V2_NOTIFY_OPTIONS */
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
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag910,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag900_t __midl_frag900 =
{ 
/* NOTIFY_OPTIONS_CONTAINER */
    { 
    /* NOTIFY_OPTIONS_CONTAINER */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* NOTIFY_OPTIONS_CONTAINER */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *RPC_V2_NOTIFY_OPTIONS */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag901
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag899_t __midl_frag899 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
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

static const __midl_frag898_t __midl_frag898 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag895
    }
};

static const __midl_frag897_t __midl_frag897 =
0x11    /* FC64_WCHAR */;

static const __midl_frag896_t __midl_frag896 =
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
        0x6,    /* FC64_UINT32 */
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

static const __midl_frag895_t __midl_frag895 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x41,    /* FC64_CONF_ARRAY */
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
        &__midl_frag896
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag897
    }
};

static const __midl_frag894_t __midl_frag894 =
{ 
/* STRING_CONTAINER */
    { 
    /* STRING_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* STRING_CONTAINER */
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
        &__midl_frag898,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag893_t __midl_frag893 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x1b,    /* OP_AND */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 65535 /* 0xffff */
    }
};

static const __midl_frag892_t __midl_frag892 =
{ 
/* RPC_V2_NOTIFY_INFO_DATA_DATA */
    { 
    /* RPC_V2_NOTIFY_INFO_DATA_DATA */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag893,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 5 /* 0x5 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag894,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag899,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag884,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag10,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag92,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag891_t __midl_frag891 =
{ 
/* RPC_V2_NOTIFY_INFO_DATA */
    { 
    /* RPC_V2_NOTIFY_INFO_DATA */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_V2_NOTIFY_INFO_DATA */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* RPC_V2_NOTIFY_INFO_DATA */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 12 /* 0xc */,
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag892
        },
        { 
        /* RPC_V2_NOTIFY_INFO_DATA */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag889_t __midl_frag889 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag891
        },
        &__midl_frag903,
        0,
        0
    }
};

static const __midl_frag888_t __midl_frag888 =
{ 
/* RPC_V2_NOTIFY_INFO */
    { 
    /* RPC_V2_NOTIFY_INFO */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_V2_NOTIFY_INFO */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
        &__midl_frag889,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag887_t __midl_frag887 =
{ 
/* NOTIFY_REPLY_CONTAINER */
    { 
    /* NOTIFY_REPLY_CONTAINER */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* NOTIFY_REPLY_CONTAINER */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *RPC_V2_NOTIFY_INFO */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag888
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag886_t __midl_frag886 =
{ 
/*  */
    { 
    /* *SYSTEMTIME */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag885
    }
};

static const __midl_frag885_t __midl_frag885 =
{ 
/* SYSTEMTIME */
    { 
    /* SYSTEMTIME */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* SYSTEMTIME */
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
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag884_t __midl_frag884 =
{ 
/* SYSTEMTIME_CONTAINER */
    { 
    /* SYSTEMTIME_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SYSTEMTIME_CONTAINER */
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
        &__midl_frag886,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag883_t __midl_frag883 =
0x10    /* FC64_CHAR */;

static const __midl_frag882_t __midl_frag882 =
0x7    /* FC64_INT64 */;

static const __midl_frag878_t __midl_frag878 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag877_t __midl_frag877 =
{ 
/* __MIDL_IRemoteWinspool_0025 */
    { 
    /* __MIDL_IRemoteWinspool_0025 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag878,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 9 /* 0x9 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag942,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag948,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag882,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag883,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag884,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag10,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag92,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag887,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag900,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag875_t __midl_frag875 =
{ 
/* RpcPrintNamedProperty */
    { 
    /* RpcPrintNamedProperty */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RpcPrintNamedProperty */
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
        (NDR64_UINT32) 12 /* 0xc */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag874_t __midl_frag874 =
{ 
/* RpcPrintNamedProperty */
    { 
    /* RpcPrintNamedProperty */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RpcPrintNamedProperty */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag875
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag877
        },
        { 
        /* RpcPrintPropertyValue */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag873_t __midl_frag873 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 50 /* 0x32 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag872_t __midl_frag872 =
{ 
/* *RpcPrintNamedProperty */
    { 
    /* *RpcPrintNamedProperty */
        { 
        /* *RpcPrintNamedProperty */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *RpcPrintNamedProperty */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag874
        },
        &__midl_frag873,
        0,
        0
    }
};

static const __midl_frag871_t __midl_frag871 =
{ 
/* RpcPrintPropertiesCollection */
    { 
    /* RpcPrintPropertiesCollection */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RpcPrintPropertiesCollection */
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
        &__midl_frag911,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag869_t __midl_frag869 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag868_t __midl_frag868 =
{ 
/* RpcSyncRegisterForRemoteNotifications */
    { 
    /* RpcSyncRegisterForRemoteNotifications */      /* procedure RpcSyncRegisterForRemoteNotifications */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 68 /* 0x44 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag869,
        { 
        /* hPrinter */
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
    /* pNotifyFilter */      /* parameter pNotifyFilter */
        &__midl_frag871,
        { 
        /* pNotifyFilter */
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
    /* phRpcHandle */      /* parameter phRpcHandle */
        &__midl_frag913,
        { 
        /* phRpcHandle */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1018,
        { 
        /* HRESULT */
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

static const __midl_frag865_t __midl_frag865 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag948
};

static const __midl_frag860_t __midl_frag860 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag859_t __midl_frag859 =
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
        &__midl_frag860
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag858_t __midl_frag858 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag859
};

static const __midl_frag855_t __midl_frag855 =
{ 
/* RpcAsyncEnumPerMachineConnections */
    { 
    /* RpcAsyncEnumPerMachineConnections */      /* procedure RpcAsyncEnumPerMachineConnections */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
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
    },
    { 
    /* pServer */      /* parameter pServer */
        &__midl_frag942,
        { 
        /* pServer */
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
    /* pPrinterEnum */      /* parameter pPrinterEnum */
        &__midl_frag858,
        { 
        /* pPrinterEnum */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag948,
        { 
        /* pcReturned */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag849_t __midl_frag849 =
{ 
/* RpcAsyncDeletePerMachineConnection */
    { 
    /* RpcAsyncDeletePerMachineConnection */      /* procedure RpcAsyncDeletePerMachineConnection */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pServer */      /* parameter pServer */
        &__midl_frag942,
        { 
        /* pServer */
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
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag947,
        { 
        /* pPrinterName */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag839_t __midl_frag839 =
{ 
/* RpcAsyncAddPerMachineConnection */
    { 
    /* RpcAsyncAddPerMachineConnection */      /* procedure RpcAsyncAddPerMachineConnection */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    },
    { 
    /* pServer */      /* parameter pServer */
        &__midl_frag942,
        { 
        /* pServer */
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
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag947,
        { 
        /* pPrinterName */
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
    /* pPrintServer */      /* parameter pPrintServer */
        &__midl_frag947,
        { 
        /* pPrintServer */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pProvider */      /* parameter pProvider */
        &__midl_frag947,
        { 
        /* pProvider */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag831_t __midl_frag831 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag830_t __midl_frag830 =
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
        &__midl_frag831
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag829_t __midl_frag829 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag830
};

static const __midl_frag823_t __midl_frag823 =
{ 
/* RpcAsyncEnumPrintProcessorDatatypes */
    { 
    /* RpcAsyncEnumPrintProcessorDatatypes */      /* procedure RpcAsyncEnumPrintProcessorDatatypes */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1021,
        { 
        /* pName */
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
    /* pPrintProcessorName */      /* parameter pPrintProcessorName */
        &__midl_frag1021,
        { 
        /* pPrintProcessorName */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag1018,
        { 
        /* Level */
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
    /* pDatatypes */      /* parameter pDatatypes */
        &__midl_frag829,
        { 
        /* pDatatypes */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag948,
        { 
        /* pcReturned */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag815_t __midl_frag815 =
{ 
/* RpcAsyncDeletePrintProcessor */
    { 
    /* RpcAsyncDeletePrintProcessor */      /* procedure RpcAsyncDeletePrintProcessor */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag1021,
        { 
        /* Name */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag1021,
        { 
        /* pEnvironment */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pPrintProcessorName */      /* parameter pPrintProcessorName */
        &__midl_frag1022,
        { 
        /* pPrintProcessorName */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1018,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag802_t __midl_frag802 =
{ 
/* MONITOR_INFO_2 */
    { 
    /* MONITOR_INFO_2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* MONITOR_INFO_2 */
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
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1022
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1022
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1022
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag801_t __midl_frag801 =
{ 
/* *MONITOR_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag802
};

static const __midl_frag799_t __midl_frag799 =
{ 
/* MONITOR_INFO_1 */
    { 
    /* MONITOR_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* MONITOR_INFO_1 */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1022
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag798_t __midl_frag798 =
{ 
/* *MONITOR_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag799
};

static const __midl_frag797_t __midl_frag797 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag796_t __midl_frag796 =
{ 
/* __MIDL_IRemoteWinspool_0010 */
    { 
    /* __MIDL_IRemoteWinspool_0010 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag797,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag798,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag801,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag795_t __midl_frag795 =
{ 
/* MONITOR_CONTAINER */
    { 
    /* MONITOR_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* MONITOR_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag796
        },
        { 
        /* MONITOR_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag794_t __midl_frag794 =
{ 
/* *MONITOR_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag795
};

static const __midl_frag791_t __midl_frag791 =
{ 
/* RpcAsyncAddMonitor */
    { 
    /* RpcAsyncAddMonitor */      /* procedure RpcAsyncAddMonitor */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag1021,
        { 
        /* Name */
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
    /* pMonitorContainer */      /* parameter pMonitorContainer */
        &__midl_frag795,
        { 
        /* pMonitorContainer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1018,
        { 
        /* DWORD */
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

static const __midl_frag789_t __midl_frag789 =
{ 
/* *PORT_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag755
};

static const __midl_frag784_t __midl_frag784 =
{ 
/* RpcAsyncSetPort */
    { 
    /* RpcAsyncSetPort */      /* procedure RpcAsyncSetPort */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pPortName */      /* parameter pPortName */
        &__midl_frag942,
        { 
        /* pPortName */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pPortContainer */      /* parameter pPortContainer */
        &__midl_frag755,
        { 
        /* pPortContainer */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1018,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag780_t __midl_frag780 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag777
    }
};

static const __midl_frag777_t __midl_frag777 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
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
        &__midl_frag797
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag776_t __midl_frag776 =
{ 
/* PORT_VAR_CONTAINER */
    { 
    /* PORT_VAR_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PORT_VAR_CONTAINER */
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
        &__midl_frag780,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag775_t __midl_frag775 =
{ 
/* *PORT_VAR_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag776
};

static const __midl_frag774_t __midl_frag774 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag883
    }
};

static const __midl_frag771_t __midl_frag771 =
{ 
/* PORT_INFO_FF */
    { 
    /* PORT_INFO_FF */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PORT_INFO_FF */
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
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag774,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag770_t __midl_frag770 =
{ 
/* *PORT_INFO_FF */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag771
};

static const __midl_frag769_t __midl_frag769 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    }
};

static const __midl_frag767_t __midl_frag767 =
{ 
/* PORT_INFO_3 */
    { 
    /* PORT_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PORT_INFO_3 */
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
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag769,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
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
        /* PORT_INFO_3 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag766_t __midl_frag766 =
{ 
/* *PORT_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag767
};

static const __midl_frag762_t __midl_frag762 =
{ 
/* PORT_INFO_2 */
    { 
    /* PORT_INFO_2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PORT_INFO_2 */
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
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag761_t __midl_frag761 =
{ 
/* *PORT_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag762
};

static const __midl_frag759_t __midl_frag759 =
{ 
/* PORT_INFO_1 */
    { 
    /* PORT_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PORT_INFO_1 */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag758_t __midl_frag758 =
{ 
/* *PORT_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag759
};

static const __midl_frag757_t __midl_frag757 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_OPERATOR */
        0x4,    /* FC_EXPR_OPER */
        0x1b,    /* OP_AND */
        0x0,    /* FC64_ZERO */
        (NDR64_UINT8) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 16777215 /* 0xffffff */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag756_t __midl_frag756 =
{ 
/* __MIDL_IRemoteWinspool_0011 */
    { 
    /* __MIDL_IRemoteWinspool_0011 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag757,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag758,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag761,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag766,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16777215 /* 0xffffff */,
        &__midl_frag770,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag755_t __midl_frag755 =
{ 
/* PORT_CONTAINER */
    { 
    /* PORT_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PORT_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag756
        },
        { 
        /* PORT_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag751_t __midl_frag751 =
{ 
/* RpcAsyncAddPort */
    { 
    /* RpcAsyncAddPort */      /* procedure RpcAsyncAddPort */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pPortContainer */      /* parameter pPortContainer */
        &__midl_frag755,
        { 
        /* pPortContainer */
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
    /* pPortVarContainer */      /* parameter pPortVarContainer */
        &__midl_frag776,
        { 
        /* pPortVarContainer */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pMonitorName */      /* parameter pMonitorName */
        &__midl_frag947,
        { 
        /* pMonitorName */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag743_t __midl_frag743 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag742_t __midl_frag742 =
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
        &__midl_frag743
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag741_t __midl_frag741 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag742
};

static const __midl_frag737_t __midl_frag737 =
{ 
/* RpcAsyncEnumMonitors */
    { 
    /* RpcAsyncEnumMonitors */      /* procedure RpcAsyncEnumMonitors */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1021,
        { 
        /* pName */
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
    /* Level */      /* parameter Level */
        &__midl_frag1018,
        { 
        /* Level */
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
    /* pMonitor */      /* parameter pMonitor */
        &__midl_frag741,
        { 
        /* pMonitor */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag948,
        { 
        /* pcReturned */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag728_t __midl_frag728 =
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
        &__midl_frag743
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1014
    }
};

static const __midl_frag727_t __midl_frag727 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag728
};

static const __midl_frag723_t __midl_frag723 =
{ 
/* RpcAsyncEnumPorts */
    { 
    /* RpcAsyncEnumPorts */      /* procedure RpcAsyncEnumPorts */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1034,
        { 
        /* pName */
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
    /* Level */      /* parameter Level */
        &__midl_frag1103,
        { 
        /* Level */
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
    /* pPort */      /* parameter pPort */
        &__midl_frag727,
        { 
        /* pPort */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1018,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag1018,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag1018,
        { 
        /* pcReturned */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1018,
        { 
        /* DWORD */
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

static const __midl_frag720_t __midl_frag720 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1103
};

static const __midl_frag716_t __midl_frag716 =
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
        &__midl_frag831
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag1042
    }
};

static const __midl_frag715_t __midl_frag715 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag716
};

static const __midl_frag709_t __midl_frag709 =
{ 
/* RpcAsyncGetPrintProcessorDirectory */
    { 
    /* RpcAsyncGetPrintProcessorDirectory */      /* procedure RpcAsyncGetPrintProcessorDirectory */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag957,
        { 
        /* pName */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag957,
        { 
        /* pEnvironment */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag1065,
        { 
        /* Level */
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
    /* pPrintProcessorDirectory */      /* parameter pPrintProcessorDirectory */
        &__midl_frag715,
        { 
        /* pPrintProcessorDirectory */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1103,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag1103,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1103,
        { 
        /* DWORD */
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

static const __midl_frag693_t __midl_frag693 =
{ 
/* RpcAsyncEnumPrintProcessors */
    { 
    /* RpcAsyncEnumPrintProcessors */      /* procedure RpcAsyncEnumPrintProcessors */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag942,
        { 
        /* pEnvironment */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pPrintProcessorInfo */      /* parameter pPrintProcessorInfo */
        &__midl_frag829,
        { 
        /* pPrintProcessorInfo */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1065,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag1065,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag1065,
        { 
        /* pcReturned */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1065,
        { 
        /* DWORD */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag673_t __midl_frag673 =
{ 
/* RpcAsyncDeletePrinterDriverEx */
    { 
    /* RpcAsyncDeletePrinterDriverEx */      /* procedure RpcAsyncDeletePrinterDriverEx */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
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
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag947,
        { 
        /* pEnvironment */
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
    /* pDriverName */      /* parameter pDriverName */
        &__midl_frag947,
        { 
        /* pDriverName */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwDeleteFlag */      /* parameter dwDeleteFlag */
        &__midl_frag948,
        { 
        /* dwDeleteFlag */
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
    /* dwVersionNum */      /* parameter dwVersionNum */
        &__midl_frag948,
        { 
        /* dwVersionNum */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag665_t __midl_frag665 =
{ 
/* RpcAsyncDeletePrinterDriver */
    { 
    /* RpcAsyncDeletePrinterDriver */      /* procedure RpcAsyncDeletePrinterDriver */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag947,
        { 
        /* pEnvironment */
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
    /* pDriverName */      /* parameter pDriverName */
        &__midl_frag947,
        { 
        /* pDriverName */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag651_t __midl_frag651 =
{ 
/* RpcAsyncGetPrinterDriverDirectory */
    { 
    /* RpcAsyncGetPrinterDriverDirectory */      /* procedure RpcAsyncGetPrinterDriverDirectory */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag942,
        { 
        /* pEnvironment */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pDriverDirectory */      /* parameter pDriverDirectory */
        &__midl_frag829,
        { 
        /* pDriverDirectory */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag635_t __midl_frag635 =
{ 
/* RpcAsyncEnumPrinterDrivers */
    { 
    /* RpcAsyncEnumPrinterDrivers */      /* procedure RpcAsyncEnumPrinterDrivers */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag942,
        { 
        /* pEnvironment */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pDrivers */      /* parameter pDrivers */
        &__midl_frag829,
        { 
        /* pDrivers */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag948,
        { 
        /* pcReturned */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag632_t __midl_frag632 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag613
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag616
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag625
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag629
    }
};

static const __midl_frag630_t __midl_frag630 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 196 /* 0xc4 */
    }
};

static const __midl_frag629_t __midl_frag629 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag630
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag897
    }
};

static const __midl_frag626_t __midl_frag626 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 168 /* 0xa8 */
    }
};

static const __midl_frag625_t __midl_frag625 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag626
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag897
    }
};

static const __midl_frag617_t __midl_frag617 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 88 /* 0x58 */
    }
};

static const __midl_frag616_t __midl_frag616 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag617
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag897
    }
};

static const __midl_frag614_t __midl_frag614 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 72 /* 0x48 */
    }
};

static const __midl_frag613_t __midl_frag613 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag614
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag897
    }
};

static const __midl_frag604_t __midl_frag604 =
{ 
/* RPC_DRIVER_INFO_8 */
    { 
    /* RPC_DRIVER_INFO_8 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_8 */
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
        (NDR64_UINT32) 224 /* 0xe0 */,
        0,
        0,
        &__midl_frag632,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
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

static const __midl_frag603_t __midl_frag603 =
{ 
/* *RPC_DRIVER_INFO_8 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag604
};

static const __midl_frag602_t __midl_frag602 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag613
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag616
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    }
};

static const __midl_frag583_t __midl_frag583 =
{ 
/* RPC_DRIVER_INFO_6 */
    { 
    /* RPC_DRIVER_INFO_6 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_6 */
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
        (NDR64_UINT32) 152 /* 0x98 */,
        0,
        0,
        &__midl_frag602,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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

static const __midl_frag582_t __midl_frag582 =
{ 
/* *RPC_DRIVER_INFO_6 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag583
};

static const __midl_frag581_t __midl_frag581 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag613
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag616
    }
};

static const __midl_frag566_t __midl_frag566 =
{ 
/* RPC_DRIVER_INFO_4 */
    { 
    /* RPC_DRIVER_INFO_4 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_4 */
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
        (NDR64_UINT32) 104 /* 0x68 */,
        0,
        0,
        &__midl_frag581,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
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

static const __midl_frag565_t __midl_frag565 =
{ 
/* *RPC_DRIVER_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag566
};

static const __midl_frag564_t __midl_frag564 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag613
    }
};

static const __midl_frag552_t __midl_frag552 =
{ 
/* RPC_DRIVER_INFO_3 */
    { 
    /* RPC_DRIVER_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_DRIVER_INFO_3 */
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
        (NDR64_UINT32) 88 /* 0x58 */,
        0,
        0,
        &__midl_frag564,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag551_t __midl_frag551 =
{ 
/* *RPC_DRIVER_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag552
};

static const __midl_frag550_t __midl_frag550 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    }
};

static const __midl_frag544_t __midl_frag544 =
{ 
/* DRIVER_INFO_2 */
    { 
    /* DRIVER_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_INFO_2 */
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
        (NDR64_UINT32) 48 /* 0x30 */,
        0,
        0,
        &__midl_frag550,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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

static const __midl_frag543_t __midl_frag543 =
{ 
/* *DRIVER_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag544
};

static const __midl_frag538_t __midl_frag538 =
{ 
/* __MIDL_IRemoteWinspool_0007 */
    { 
    /* __MIDL_IRemoteWinspool_0007 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag797,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 6 /* 0x6 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag758,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag543,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag551,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag565,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag582,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag603,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag537_t __midl_frag537 =
{ 
/* DRIVER_CONTAINER */
    { 
    /* DRIVER_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DRIVER_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag538
        },
        { 
        /* DRIVER_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag536_t __midl_frag536 =
{ 
/* *DRIVER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag537
};

static const __midl_frag533_t __midl_frag533 =
{ 
/* RpcAsyncAddPrinterDriver */
    { 
    /* RpcAsyncAddPrinterDriver */      /* procedure RpcAsyncAddPrinterDriver */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag942,
        { 
        /* pName */
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
    /* pDriverContainer */      /* parameter pDriverContainer */
        &__midl_frag537,
        { 
        /* pDriverContainer */
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
    /* dwFileCopyFlags */      /* parameter dwFileCopyFlags */
        &__midl_frag948,
        { 
        /* dwFileCopyFlags */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag518_t __midl_frag518 =
{ 
/* RpcAsyncEnumPrinters */
    { 
    /* RpcAsyncEnumPrinters */      /* procedure RpcAsyncEnumPrinters */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag948,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag942,
        { 
        /* Name */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pPrinterEnum */      /* parameter pPrinterEnum */
        &__midl_frag829,
        { 
        /* pPrinterEnum */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag948,
        { 
        /* pcReturned */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag516_t __midl_frag516 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag515_t __midl_frag515 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag516
};

static const __midl_frag514_t __midl_frag514 =
{ 
/* RpcAsyncDeletePrinterIC */
    { 
    /* RpcAsyncDeletePrinterIC */      /* procedure RpcAsyncDeletePrinterIC */
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
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* phPrinterIC */      /* parameter phPrinterIC */
        &__midl_frag516,
        { 
        /* phPrinterIC */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag507_t __midl_frag507 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag742
};

static const __midl_frag505_t __midl_frag505 =
0x10    /* FC64_CHAR */;

static const __midl_frag504_t __midl_frag504 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag503_t __midl_frag503 =
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
        &__midl_frag504
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag505
    }
};

static const __midl_frag502_t __midl_frag502 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag503
};

static const __midl_frag501_t __midl_frag501 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag500_t __midl_frag500 =
{ 
/* RpcAsyncPlayGdiScriptOnPrinterIC */
    { 
    /* RpcAsyncPlayGdiScriptOnPrinterIC */      /* procedure RpcAsyncPlayGdiScriptOnPrinterIC */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x70,    /* FC64_BIND_CONTEXT */
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinterIC */      /* parameter hPrinterIC */
        &__midl_frag501,
        { 
        /* hPrinterIC */
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
    /* pIn */      /* parameter pIn */
        &__midl_frag503,
        { 
        /* pIn */
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
    /* cIn */      /* parameter cIn */
        &__midl_frag948,
        { 
        /* cIn */
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
    /* pOut */      /* parameter pOut */
        &__midl_frag742,
        { 
        /* pOut */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cOut */      /* parameter cOut */
        &__midl_frag948,
        { 
        /* cOut */
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
    /* ul */      /* parameter ul */
        &__midl_frag948,
        { 
        /* ul */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag498_t __midl_frag498 =
{ 
/* *DEVMODE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag10
};

static const __midl_frag497_t __midl_frag497 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag496_t __midl_frag496 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag497
};

static const __midl_frag495_t __midl_frag495 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag494_t __midl_frag494 =
{ 
/* RpcAsyncCreatePrinterIC */
    { 
    /* RpcAsyncCreatePrinterIC */      /* procedure RpcAsyncCreatePrinterIC */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 68 /* 0x44 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag495,
        { 
        /* hPrinter */
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
    /* pHandle */      /* parameter pHandle */
        &__midl_frag497,
        { 
        /* pHandle */
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag10,
        { 
        /* pDevModeContainer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag492_t __midl_frag492 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag491_t __midl_frag491 =
{ 
/* __MIDL_IRemoteWinspool_0013 */
    { 
    /* __MIDL_IRemoteWinspool_0013 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag492,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag948,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag948,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag948,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag942,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag942,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag942,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag477,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag478,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag489_t __midl_frag489 =
{ 
/* RPC_BIDI_RESPONSE_DATA */
    { 
    /* RPC_BIDI_RESPONSE_DATA */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* RPC_BIDI_RESPONSE_DATA */
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
        (NDR64_UINT32) 20 /* 0x14 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag488_t __midl_frag488 =
{ 
/* RPC_BIDI_RESPONSE_DATA */
    { 
    /* RPC_BIDI_RESPONSE_DATA */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BIDI_RESPONSE_DATA */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag489
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag491
        },
        { 
        /* RPC_BIDI_DATA */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag487_t __midl_frag487 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag486_t __midl_frag486 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag488
        },
        &__midl_frag487,
        0,
        0
    }
};

static const __midl_frag485_t __midl_frag485 =
{ 
/* RPC_BIDI_RESPONSE_CONTAINER */
    { 
    /* RPC_BIDI_RESPONSE_CONTAINER */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BIDI_RESPONSE_CONTAINER */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
        &__midl_frag486,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag484_t __midl_frag484 =
{ 
/* *RPC_BIDI_RESPONSE_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag485
};

static const __midl_frag483_t __midl_frag483 =
{ 
/* **RPC_BIDI_RESPONSE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag484
};

static const __midl_frag482_t __midl_frag482 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag479
    }
};

static const __midl_frag480_t __midl_frag480 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag479_t __midl_frag479 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
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
        &__midl_frag480
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag478_t __midl_frag478 =
{ 
/* RPC_BINARY_CONTAINER */
    { 
    /* RPC_BINARY_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BINARY_CONTAINER */
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
        &__midl_frag482,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag477_t __midl_frag477 =
0xb    /* FC64_FLOAT32 */;

static const __midl_frag470_t __midl_frag470 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag469
    }
};

static const __midl_frag469_t __midl_frag469 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag468_t __midl_frag468 =
{ 
/* RPC_BIDI_REQUEST_DATA */
    { 
    /* RPC_BIDI_REQUEST_DATA */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BIDI_REQUEST_DATA */
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
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag470,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* RPC_BIDI_DATA */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag491
        },
        { 
        /* RPC_BIDI_DATA */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag466_t __midl_frag466 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0
            },
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            &__midl_frag468
        },
        &__midl_frag487,
        0,
        0
    }
};

static const __midl_frag465_t __midl_frag465 =
{ 
/* RPC_BIDI_REQUEST_CONTAINER */
    { 
    /* RPC_BIDI_REQUEST_CONTAINER */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_BIDI_REQUEST_CONTAINER */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        0,
        &__midl_frag466,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag464_t __midl_frag464 =
{ 
/* *RPC_BIDI_REQUEST_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag465
};

static const __midl_frag462_t __midl_frag462 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag469
};

static const __midl_frag460_t __midl_frag460 =
{ 
/* RpcAsyncSendRecvBidiData */
    { 
    /* RpcAsyncSendRecvBidiData */      /* procedure RpcAsyncSendRecvBidiData */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag495,
        { 
        /* hPrinter */
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
    /* pAction */      /* parameter pAction */
        &__midl_frag462,
        { 
        /* pAction */
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
    /* pReqData */      /* parameter pReqData */
        &__midl_frag465,
        { 
        /* pReqData */
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
    /* ppRespData */      /* parameter ppRespData */
        &__midl_frag483,
        { 
        /* ppRespData */
            1,
            1,
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
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag457_t __midl_frag457 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag948
};

static const __midl_frag455_t __midl_frag455 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag948
};

static const __midl_frag452_t __midl_frag452 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag451_t __midl_frag451 =
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
        &__midl_frag452
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag505
    }
};

static const __midl_frag450_t __midl_frag450 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag451
};

static const __midl_frag449_t __midl_frag449 =
0x5    /* FC64_INT32 */;

static const __midl_frag448_t __midl_frag448 =
0x10    /* FC64_CHAR */;

static const __midl_frag447_t __midl_frag447 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag446_t __midl_frag446 =
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
        &__midl_frag447
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag448
    }
};

static const __midl_frag445_t __midl_frag445 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag446
};

static const __midl_frag444_t __midl_frag444 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag443_t __midl_frag443 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag444
};

static const __midl_frag442_t __midl_frag442 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag441_t __midl_frag441 =
{ 
/* RpcAsyncXcvData */
    { 
    /* RpcAsyncXcvData */      /* procedure RpcAsyncXcvData */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 84 /* 0x54 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 9 /* 0x9 */,
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
    /* hXcv */      /* parameter hXcv */
        &__midl_frag442,
        { 
        /* hXcv */
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
    /* pszDataName */      /* parameter pszDataName */
        &__midl_frag444,
        { 
        /* pszDataName */
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
    /* pInputData */      /* parameter pInputData */
        &__midl_frag446,
        { 
        /* pInputData */
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
    /* cbInputData */      /* parameter cbInputData */
        &__midl_frag449,
        { 
        /* cbInputData */
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
    /* pOutputData */      /* parameter pOutputData */
        &__midl_frag451,
        { 
        /* pOutputData */
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
    /* cbOutputData */      /* parameter cbOutputData */
        &__midl_frag948,
        { 
        /* cbOutputData */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbOutputNeeded */      /* parameter pcbOutputNeeded */
        &__midl_frag948,
        { 
        /* pcbOutputNeeded */
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
    /* pdwStatus */      /* parameter pdwStatus */
        &__midl_frag948,
        { 
        /* pdwStatus */
            0,
            0,
            0,
            1,
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
            0
        },    /* [in], [out], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag436_t __midl_frag436 =
{ 
/* RpcAsyncDeletePrinterKey */
    { 
    /* RpcAsyncDeletePrinterKey */      /* procedure RpcAsyncDeletePrinterKey */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag442,
        { 
        /* hPrinter */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag444,
        { 
        /* pKeyName */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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

static const __midl_frag429_t __midl_frag429 =
{ 
/* RpcAsyncDeletePrinterDataEx */
    { 
    /* RpcAsyncDeletePrinterDataEx */      /* procedure RpcAsyncDeletePrinterDataEx */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag442,
        { 
        /* hPrinter */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag444,
        { 
        /* pKeyName */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag444,
        { 
        /* pValueName */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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

static const __midl_frag421_t __midl_frag421 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag449
};

static const __midl_frag419_t __midl_frag419 =
0x11    /* FC64_WCHAR */;

static const __midl_frag418_t __midl_frag418 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
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
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 2 /* 0x2 */
    }
};

static const __midl_frag417_t __midl_frag417 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag418
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag419
    }
};

static const __midl_frag416_t __midl_frag416 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag417
};

static const __midl_frag412_t __midl_frag412 =
{ 
/* RpcAsyncEnumPrinterKey */
    { 
    /* RpcAsyncEnumPrinterKey */      /* procedure RpcAsyncEnumPrinterKey */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag442,
        { 
        /* hPrinter */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag444,
        { 
        /* pKeyName */
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
    /* pSubkey */      /* parameter pSubkey */
        &__midl_frag417,
        { 
        /* pSubkey */
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
    /* cbSubkey */      /* parameter cbSubkey */
        &__midl_frag449,
        { 
        /* cbSubkey */
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
    /* pcbSubkey */      /* parameter pcbSubkey */
        &__midl_frag449,
        { 
        /* pcbSubkey */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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

static const __midl_frag398_t __midl_frag398 =
{ 
/* RpcAsyncEnumPrinterDataEx */
    { 
    /* RpcAsyncEnumPrinterDataEx */      /* procedure RpcAsyncEnumPrinterDataEx */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag442,
        { 
        /* hPrinter */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag444,
        { 
        /* pKeyName */
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
    /* pEnumValues */      /* parameter pEnumValues */
        &__midl_frag446,
        { 
        /* pEnumValues */
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
    /* cbEnumValues */      /* parameter cbEnumValues */
        &__midl_frag449,
        { 
        /* cbEnumValues */
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
    /* pcbEnumValues */      /* parameter pcbEnumValues */
        &__midl_frag449,
        { 
        /* pcbEnumValues */
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
    /* pnEnumValues */      /* parameter pnEnumValues */
        &__midl_frag449,
        { 
        /* pnEnumValues */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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

static const __midl_frag392_t __midl_frag392 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */  /* Offset */
    }
};

static const __midl_frag391_t __midl_frag391 =
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
        &__midl_frag392
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag448
    }
};

static const __midl_frag390_t __midl_frag390 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag391
};

static const __midl_frag389_t __midl_frag389 =
0x5    /* FC64_INT32 */;

static const __midl_frag388_t __midl_frag388 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag389
};

static const __midl_frag384_t __midl_frag384 =
0x11    /* FC64_WCHAR */;

static const __midl_frag383_t __midl_frag383 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
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
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    },
    { 
    /* struct _NDR64_EXPR_CONST64 */
        0x2,    /* FC_EXPR_CONST64 */
        0x7,    /* FC64_INT64 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT64) 2 /* 0x2 */
    }
};

static const __midl_frag382_t __midl_frag382 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *wchar_t */
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
        &__midl_frag383
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag384
    }
};

static const __midl_frag381_t __midl_frag381 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag382
};

static const __midl_frag380_t __midl_frag380 =
0x5    /* FC64_INT32 */;

static const __midl_frag379_t __midl_frag379 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag378_t __midl_frag378 =
{ 
/* RpcAsyncEnumPrinterData */
    { 
    /* RpcAsyncEnumPrinterData */      /* procedure RpcAsyncEnumPrinterData */
        (NDR64_UINT32) 21626944 /* 0x14a0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 80 /* 0x50 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 104 /* 0x68 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* dwIndex */      /* parameter dwIndex */
        &__midl_frag380,
        { 
        /* dwIndex */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag382,
        { 
        /* pValueName */
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
    /* cbValueName */      /* parameter cbValueName */
        &__midl_frag389,
        { 
        /* cbValueName */
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
    /* pcbValueName */      /* parameter pcbValueName */
        &__midl_frag389,
        { 
        /* pcbValueName */
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
    /* pType */      /* parameter pType */
        &__midl_frag389,
        { 
        /* pType */
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
    /* pData */      /* parameter pData */
        &__midl_frag391,
        { 
        /* pData */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* cbData */      /* parameter cbData */
        &__midl_frag449,
        { 
        /* cbData */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* pcbData */      /* parameter pcbData */
        &__midl_frag449,
        { 
        /* pcbData */
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
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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
        72 /* 0x48 */,   /* Stack offset */
    }
};

static const __midl_frag367_t __midl_frag367 =
0x10    /* FC64_CHAR */;

static const __midl_frag366_t __midl_frag366 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag365_t __midl_frag365 =
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
        &__midl_frag366
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag367
    }
};

static const __midl_frag364_t __midl_frag364 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag365
};

static const __midl_frag362_t __midl_frag362 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag361_t __midl_frag361 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag362
};

static const __midl_frag359_t __midl_frag359 =
{ 
/* RpcAsyncGetPrinterDriver */
    { 
    /* RpcAsyncGetPrinterDriver */      /* procedure RpcAsyncGetPrinterDriver */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 88 /* 0x58 */ ,  /* Stack size */
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT32) 104 /* 0x68 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 11 /* 0xb */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag361,
        { 
        /* pEnvironment */
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
    /* Level */      /* parameter Level */
        &__midl_frag380,
        { 
        /* Level */
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
    /* pDriver */      /* parameter pDriver */
        &__midl_frag364,
        { 
        /* pDriver */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag389,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag389,
        { 
        /* pcbNeeded */
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
    /* dwClientMajorVersion */      /* parameter dwClientMajorVersion */
        &__midl_frag389,
        { 
        /* dwClientMajorVersion */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* dwClientMinorVersion */      /* parameter dwClientMinorVersion */
        &__midl_frag389,
        { 
        /* dwClientMinorVersion */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* pdwServerMaxVersion */      /* parameter pdwServerMaxVersion */
        &__midl_frag389,
        { 
        /* pdwServerMaxVersion */
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
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* pdwServerMinVersion */      /* parameter pdwServerMinVersion */
        &__midl_frag389,
        { 
        /* pdwServerMinVersion */
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
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag389,
        { 
        /* DWORD */
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
        80 /* 0x50 */,   /* Stack offset */
    }
};

static const __midl_frag356_t __midl_frag356 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag380
};

static const __midl_frag352_t __midl_frag352 =
0x10    /* FC64_CHAR */;

static const __midl_frag351_t __midl_frag351 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag350_t __midl_frag350 =
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
        &__midl_frag351
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag352
    }
};

static const __midl_frag349_t __midl_frag349 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag350
};

static const __midl_frag348_t __midl_frag348 =
0x5    /* FC64_INT32 */;

static const __midl_frag346_t __midl_frag346 =
{ 
/* RpcAsyncEnumForms */
    { 
    /* RpcAsyncEnumForms */      /* procedure RpcAsyncEnumForms */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* Level */      /* parameter Level */
        &__midl_frag348,
        { 
        /* Level */
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
    /* pForm */      /* parameter pForm */
        &__midl_frag349,
        { 
        /* pForm */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag380,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag380,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag380,
        { 
        /* pcReturned */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag344_t __midl_frag344 =
{ 
/* *FORM_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag307
};

static const __midl_frag343_t __midl_frag343 =
{ 
/* *wchar_t */
    { 
    /* *wchar_t */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *wchar_t */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag342_t __midl_frag342 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag343
};

static const __midl_frag340_t __midl_frag340 =
{ 
/* RpcAsyncSetForm */
    { 
    /* RpcAsyncSetForm */      /* procedure RpcAsyncSetForm */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* pFormName */      /* parameter pFormName */
        &__midl_frag343,
        { 
        /* pFormName */
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
    /* pFormInfoContainer */      /* parameter pFormInfoContainer */
        &__midl_frag307,
        { 
        /* pFormInfoContainer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag329_t __midl_frag329 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag362
};

static const __midl_frag327_t __midl_frag327 =
{ 
/* RpcAsyncGetForm */
    { 
    /* RpcAsyncGetForm */      /* procedure RpcAsyncGetForm */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* pFormName */      /* parameter pFormName */
        &__midl_frag362,
        { 
        /* pFormName */
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
    /* Level */      /* parameter Level */
        &__midl_frag380,
        { 
        /* Level */
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
    /* pForm */      /* parameter pForm */
        &__midl_frag364,
        { 
        /* pForm */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag389,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag389,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag389,
        { 
        /* DWORD */
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

static const __midl_frag322_t __midl_frag322 =
{ 
/* RpcAsyncDeleteForm */
    { 
    /* RpcAsyncDeleteForm */      /* procedure RpcAsyncDeleteForm */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* pFormName */      /* parameter pFormName */
        &__midl_frag362,
        { 
        /* pFormName */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag320_t __midl_frag320 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag362
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag317
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag362
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag362
    }
};

static const __midl_frag317_t __midl_frag317 =
{ 
/* *char */
    { 
    /* *char */
        0x63,    /* FC64_CONF_CHAR_STRING */
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
        (NDR64_UINT16) 1 /* 0x1 */
    }
};

static const __midl_frag315_t __midl_frag315 =
{ 
/* RPC_FORM_INFO_2 */
    { 
    /* RPC_FORM_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* RPC_FORM_INFO_2 */
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
        (NDR64_UINT32) 88 /* 0x58 */,
        0,
        0,
        &__midl_frag320,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
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
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 6 /* 0x6 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* RPC_FORM_INFO_2 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag314_t __midl_frag314 =
{ 
/* *RPC_FORM_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag315
};

static const __midl_frag313_t __midl_frag313 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag362
    }
};

static const __midl_frag311_t __midl_frag311 =
{ 
/* FORM_INFO_1 */
    { 
    /* FORM_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* FORM_INFO_1 */
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
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag313,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag310_t __midl_frag310 =
{ 
/* *FORM_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag311
};

static const __midl_frag309_t __midl_frag309 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag308_t __midl_frag308 =
{ 
/* __MIDL_IRemoteWinspool_0008 */
    { 
    /* __MIDL_IRemoteWinspool_0008 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag309,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag310,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag314,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag307_t __midl_frag307 =
{ 
/* FORM_CONTAINER */
    { 
    /* FORM_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* FORM_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag308
        },
        { 
        /* FORM_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag304_t __midl_frag304 =
{ 
/* RpcAsyncAddForm */
    { 
    /* RpcAsyncAddForm */      /* procedure RpcAsyncAddForm */
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* pFormInfoContainer */      /* parameter pFormInfoContainer */
        &__midl_frag307,
        { 
        /* pFormInfoContainer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag302_t __midl_frag302 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag301_t __midl_frag301 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag302
};

static const __midl_frag300_t __midl_frag300 =
{ 
/* RpcAsyncClosePrinter */
    { 
    /* RpcAsyncClosePrinter */      /* procedure RpcAsyncClosePrinter */
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
    /* phPrinter */      /* parameter phPrinter */
        &__midl_frag302,
        { 
        /* phPrinter */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag296_t __midl_frag296 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag295_t __midl_frag295 =
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
        &__midl_frag296
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag367
    }
};

static const __midl_frag294_t __midl_frag294 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag295
};

static const __midl_frag287_t __midl_frag287 =
{ 
/* RpcAsyncSetPrinterDataEx */
    { 
    /* RpcAsyncSetPrinterDataEx */      /* procedure RpcAsyncSetPrinterDataEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag362,
        { 
        /* pKeyName */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag362,
        { 
        /* pValueName */
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
    /* Type */      /* parameter Type */
        &__midl_frag380,
        { 
        /* Type */
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
    /* pData */      /* parameter pData */
        &__midl_frag295,
        { 
        /* pData */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbData */      /* parameter cbData */
        &__midl_frag389,
        { 
        /* cbData */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag389,
        { 
        /* DWORD */
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

static const __midl_frag283_t __midl_frag283 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag282_t __midl_frag282 =
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
        &__midl_frag283
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag352
    }
};

static const __midl_frag281_t __midl_frag281 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag282
};

static const __midl_frag277_t __midl_frag277 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag276_t __midl_frag276 =
{ 
/* RpcAsyncSetPrinterData */
    { 
    /* RpcAsyncSetPrinterData */      /* procedure RpcAsyncSetPrinterData */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag277,
        { 
        /* hPrinter */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag343,
        { 
        /* pValueName */
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
    /* Type */      /* parameter Type */
        &__midl_frag348,
        { 
        /* Type */
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
    /* pData */      /* parameter pData */
        &__midl_frag282,
        { 
        /* pData */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbData */      /* parameter cbData */
        &__midl_frag380,
        { 
        /* cbData */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag273_t __midl_frag273 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag348
};

static const __midl_frag271_t __midl_frag271 =
0x10    /* FC64_CHAR */;

static const __midl_frag270_t __midl_frag270 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag269_t __midl_frag269 =
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
        &__midl_frag270
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag271
    }
};

static const __midl_frag268_t __midl_frag268 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag269
};

static const __midl_frag267_t __midl_frag267 =
0x5    /* FC64_INT32 */;

static const __midl_frag266_t __midl_frag266 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag267
};

static const __midl_frag260_t __midl_frag260 =
{ 
/* RpcAsyncGetPrinterDataEx */
    { 
    /* RpcAsyncGetPrinterDataEx */      /* procedure RpcAsyncGetPrinterDataEx */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag277,
        { 
        /* hPrinter */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag343,
        { 
        /* pKeyName */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag343,
        { 
        /* pValueName */
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
    /* pType */      /* parameter pType */
        &__midl_frag267,
        { 
        /* pType */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pData */      /* parameter pData */
        &__midl_frag269,
        { 
        /* pData */
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
    /* nSize */      /* parameter nSize */
        &__midl_frag348,
        { 
        /* nSize */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag348,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag348,
        { 
        /* DWORD */
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

static const __midl_frag254_t __midl_frag254 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag253_t __midl_frag253 =
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
        &__midl_frag254
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag271
    }
};

static const __midl_frag252_t __midl_frag252 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag253
};

static const __midl_frag246_t __midl_frag246 =
{ 
/* RpcAsyncGetPrinterData */
    { 
    /* RpcAsyncGetPrinterData */      /* procedure RpcAsyncGetPrinterData */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag277,
        { 
        /* hPrinter */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag343,
        { 
        /* pValueName */
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
    /* pType */      /* parameter pType */
        &__midl_frag267,
        { 
        /* pType */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pData */      /* parameter pData */
        &__midl_frag253,
        { 
        /* pData */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nSize */      /* parameter nSize */
        &__midl_frag348,
        { 
        /* nSize */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag348,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag348,
        { 
        /* DWORD */
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

static const __midl_frag243_t __midl_frag243 =
{ 
/* RpcAsyncAbortPrinter */
    { 
    /* RpcAsyncAbortPrinter */      /* procedure RpcAsyncAbortPrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag348,
        { 
        /* DWORD */
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

static const __midl_frag240_t __midl_frag240 =
{ 
/* RpcAsyncEndDocPrinter */
    { 
    /* RpcAsyncEndDocPrinter */      /* procedure RpcAsyncEndDocPrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag379,
        { 
        /* hPrinter */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag380,
        { 
        /* DWORD */
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

static const __midl_frag237_t __midl_frag237 =
{ 
/* RpcAsyncEndPagePrinter */
    { 
    /* RpcAsyncEndPagePrinter */      /* procedure RpcAsyncEndPagePrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag442,
        { 
        /* hPrinter */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag389,
        { 
        /* DWORD */
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

static const __midl_frag231_t __midl_frag231 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag230_t __midl_frag230 =
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
        &__midl_frag231
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag448
    }
};

static const __midl_frag229_t __midl_frag229 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag230
};

static const __midl_frag227_t __midl_frag227 =
{ 
/* RpcAsyncWritePrinter */
    { 
    /* RpcAsyncWritePrinter */      /* procedure RpcAsyncWritePrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag442,
        { 
        /* hPrinter */
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
    /* pBuf */      /* parameter pBuf */
        &__midl_frag230,
        { 
        /* pBuf */
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
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag449,
        { 
        /* cbBuf */
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
    /* pcWritten */      /* parameter pcWritten */
        &__midl_frag449,
        { 
        /* pcWritten */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag224_t __midl_frag224 =
{ 
/* RpcAsyncStartPagePrinter */
    { 
    /* RpcAsyncStartPagePrinter */      /* procedure RpcAsyncStartPagePrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag495,
        { 
        /* hPrinter */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag449,
        { 
        /* DWORD */
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

static const __midl_frag217_t __midl_frag217 =
{ 
/* DOC_INFO_1 */
    { 
    /* DOC_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DOC_INFO_1 */
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
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag947
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* *DOC_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag217
};

static const __midl_frag214_t __midl_frag214 =
{ 
/* __MIDL_IRemoteWinspool_0006 */
    { 
    /* __MIDL_IRemoteWinspool_0006 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag480,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag213_t __midl_frag213 =
{ 
/* DOC_INFO_CONTAINER */
    { 
    /* DOC_INFO_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DOC_INFO_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag214
        },
        { 
        /* DOC_INFO_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag212_t __midl_frag212 =
{ 
/* *DOC_INFO_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag213
};

static const __midl_frag210_t __midl_frag210 =
{ 
/* RpcAsyncStartDocPrinter */
    { 
    /* RpcAsyncStartDocPrinter */      /* procedure RpcAsyncStartDocPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 40 /* 0x28 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag495,
        { 
        /* hPrinter */
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
    /* pDocInfoContainer */      /* parameter pDocInfoContainer */
        &__midl_frag213,
        { 
        /* pDocInfoContainer */
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
    /* pJobId */      /* parameter pJobId */
        &__midl_frag948,
        { 
        /* pJobId */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag207_t __midl_frag207 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag948
};

static const __midl_frag204_t __midl_frag204 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag203_t __midl_frag203 =
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
        &__midl_frag204
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag202_t __midl_frag202 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag203
};

static const __midl_frag199_t __midl_frag199 =
{ 
/* RpcAsyncGetPrinter */
    { 
    /* RpcAsyncGetPrinter */      /* procedure RpcAsyncGetPrinter */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag495,
        { 
        /* hPrinter */
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
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pPrinter */      /* parameter pPrinter */
        &__midl_frag202,
        { 
        /* pPrinter */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag196_t __midl_frag196 =
{ 
/* *SECURITY_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag92
};

static const __midl_frag195_t __midl_frag195 =
{ 
/* *DEVMODE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag10
};

static const __midl_frag194_t __midl_frag194 =
{ 
/* *PRINTER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag37
};

static const __midl_frag193_t __midl_frag193 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag192_t __midl_frag192 =
{ 
/* RpcAsyncSetPrinter */
    { 
    /* RpcAsyncSetPrinter */      /* procedure RpcAsyncSetPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* pPrinterContainer */      /* parameter pPrinterContainer */
        &__midl_frag37,
        { 
        /* pPrinterContainer */
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
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag10,
        { 
        /* pDevModeContainer */
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
    /* pSecurityContainer */      /* parameter pSecurityContainer */
        &__midl_frag92,
        { 
        /* pSecurityContainer */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* Command */      /* parameter Command */
        &__midl_frag948,
        { 
        /* Command */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag189_t __midl_frag189 =
{ 
/* RpcAsyncDeletePrinter */
    { 
    /* RpcAsyncDeletePrinter */      /* procedure RpcAsyncDeletePrinter */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 8 /* 0x8 */,
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
            (NDR64_UINT8) 64 /* 0x40 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag185_t __midl_frag185 =
{ 
/* RpcAsyncScheduleJob */
    { 
    /* RpcAsyncScheduleJob */      /* procedure RpcAsyncScheduleJob */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag948,
        { 
        /* JobId */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag174_t __midl_frag174 =
{ 
/* RpcAsyncAddJob */
    { 
    /* RpcAsyncAddJob */      /* procedure RpcAsyncAddJob */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pAddJob */      /* parameter pAddJob */
        &__midl_frag202,
        { 
        /* pAddJob */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag159_t __midl_frag159 =
{ 
/* RpcAsyncEnumJobs */
    { 
    /* RpcAsyncEnumJobs */      /* procedure RpcAsyncEnumJobs */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 9 /* 0x9 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* FirstJob */      /* parameter FirstJob */
        &__midl_frag948,
        { 
        /* FirstJob */
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
    /* NoJobs */      /* parameter NoJobs */
        &__midl_frag948,
        { 
        /* NoJobs */
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
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pJob */      /* parameter pJob */
        &__midl_frag829,
        { 
        /* pJob */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag948,
        { 
        /* pcReturned */
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
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag152_t __midl_frag152 =
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
        &__midl_frag254
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag151_t __midl_frag151 =
{ 
/* *char */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag152
};

static const __midl_frag147_t __midl_frag147 =
{ 
/* RpcAsyncGetJob */
    { 
    /* RpcAsyncGetJob */      /* procedure RpcAsyncGetJob */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 60 /* 0x3c */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag948,
        { 
        /* JobId */
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
    /* Level */      /* parameter Level */
        &__midl_frag948,
        { 
        /* Level */
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
    /* pJob */      /* parameter pJob */
        &__midl_frag151,
        { 
        /* pJob */
            1,
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
        },    /* MustSize, MustFree, [in], [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag948,
        { 
        /* cbBuf */
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag948,
        { 
        /* pcbNeeded */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag144_t __midl_frag144 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *DEVMODE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag59
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *SECURITY_DESCRIPTOR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag64
    }
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* JOB_INFO_4 */
    { 
    /* JOB_INFO_4 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* JOB_INFO_4 */
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
        (NDR64_UINT32) 160 /* 0xa0 */,
        0,
        0,
        &__midl_frag144,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag132_t __midl_frag132 =
{ 
/* *JOB_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag133
};

static const __midl_frag131_t __midl_frag131 =
{ 
/* JOB_INFO_3 */
    { 
    /* JOB_INFO_3 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* JOB_INFO_3 */
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
        (NDR64_UINT32) 12 /* 0xc */
    }
};

static const __midl_frag130_t __midl_frag130 =
{ 
/* *JOB_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag131
};

static const __midl_frag118_t __midl_frag118 =
{ 
/* JOB_INFO_2 */
    { 
    /* JOB_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* JOB_INFO_2 */
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
        (NDR64_UINT32) 160 /* 0xa0 */,
        0,
        0,
        &__midl_frag144,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* JOB_INFO_2 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag117_t __midl_frag117 =
{ 
/* *JOB_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag118
};

static const __midl_frag116_t __midl_frag116 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag947
    }
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* JOB_INFO_1 */
    { 
    /* JOB_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* JOB_INFO_1 */
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
        (NDR64_UINT32) 96 /* 0x60 */,
        0,
        0,
        &__midl_frag116,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* JOB_INFO_1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag108_t __midl_frag108 =
{ 
/* *JOB_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag109
};

static const __midl_frag107_t __midl_frag107 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag106_t __midl_frag106 =
{ 
/* __MIDL_IRemoteWinspool_0009 */
    { 
    /* __MIDL_IRemoteWinspool_0009 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag107,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag108,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag117,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag130,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag132,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag105_t __midl_frag105 =
{ 
/* JOB_CONTAINER */
    { 
    /* JOB_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* JOB_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag106
        },
        { 
        /* JOB_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag104_t __midl_frag104 =
{ 
/* *JOB_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag105
};

static const __midl_frag101_t __midl_frag101 =
{ 
/* RpcAsyncSetJob */
    { 
    /* RpcAsyncSetJob */      /* procedure RpcAsyncSetJob */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* hPrinter */      /* parameter hPrinter */
        &__midl_frag193,
        { 
        /* hPrinter */
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
    /* JobId */      /* parameter JobId */
        &__midl_frag948,
        { 
        /* JobId */
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
    /* pJobContainer */      /* parameter pJobContainer */
        &__midl_frag104,
        { 
        /* pJobContainer */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* Command */      /* parameter Command */
        &__midl_frag948,
        { 
        /* Command */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag98_t __midl_frag98 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag99
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* *SPLCLIENT_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag17
};

static const __midl_frag96_t __midl_frag96 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag93
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
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
        &__midl_frag107
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag92_t __midl_frag92 =
{ 
/* SECURITY_CONTAINER */
    { 
    /* SECURITY_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SECURITY_CONTAINER */
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
        &__midl_frag96,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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

static const __midl_frag89_t __midl_frag89 =
{ 
/* PRINTER_INFO_9 */
    { 
    /* PRINTER_INFO_9 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_9 */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DEVMODE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag59
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* *PRINTER_INFO_9 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag89
};

static const __midl_frag84_t __midl_frag84 =
{ 
/* PRINTER_INFO_7 */
    { 
    /* PRINTER_INFO_7 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_7 */
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
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag83_t __midl_frag83 =
{ 
/* *PRINTER_INFO_7 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag84
};

static const __midl_frag82_t __midl_frag82 =
{ 
/* PRINTER_INFO_6 */
    { 
    /* PRINTER_INFO_6 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* PRINTER_INFO_6 */
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
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* *PRINTER_INFO_6 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag82
};

static const __midl_frag78_t __midl_frag78 =
{ 
/* PRINTER_INFO_5 */
    { 
    /* PRINTER_INFO_5 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_5 */
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
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* *PRINTER_INFO_5 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag78
};

static const __midl_frag74_t __midl_frag74 =
{ 
/* PRINTER_INFO_4 */
    { 
    /* PRINTER_INFO_4 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_4 */
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
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag73_t __midl_frag73 =
{ 
/* *PRINTER_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag74
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* PRINTER_INFO_3 */
    { 
    /* PRINTER_INFO_3 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_3 */
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
        (NDR64_UINT32) 8 /* 0x8 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *SECURITY_DESCRIPTOR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag64
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag71_t __midl_frag71 =
{ 
/* *PRINTER_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag72
};

static const __midl_frag70_t __midl_frag70 =
{ 
/*  */
    { 
    /* *_RPC_SID */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag65
    },
    { 
    /* *_RPC_SID */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag65
    },
    { 
    /* *_ACL */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag69
    },
    { 
    /* *_ACL */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag69
    }
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* _ACL */
    { 
    /* _ACL */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* _ACL */
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

static const __midl_frag67_t __midl_frag67 =
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

static const __midl_frag66_t __midl_frag66 =
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
        &__midl_frag67
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1065
    }
};

static const __midl_frag65_t __midl_frag65 =
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
        &__midl_frag66
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* SECURITY_DESCRIPTOR */
    { 
    /* SECURITY_DESCRIPTOR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SECURITY_DESCRIPTOR */
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
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag70,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x10,    /* FC64_CHAR */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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

static const __midl_frag59_t __midl_frag59 =
{ 
/* DEVMODE */
    { 
    /* DEVMODE */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* DEVMODE */
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
        (NDR64_UINT32) 220 /* 0xdc */
    }
};

static const __midl_frag51_t __midl_frag51 =
{ 
/* PRINTER_INFO_2 */
    { 
    /* PRINTER_INFO_2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_2 */
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
        (NDR64_UINT32) 136 /* 0x88 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DEVMODE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag59
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 72 /* 0x48 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 80 /* 0x50 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 88 /* 0x58 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 96 /* 0x60 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *SECURITY_DESCRIPTOR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag64
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag50_t __midl_frag50 =
{ 
/* *PRINTER_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag51
};

static const __midl_frag49_t __midl_frag49 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    }
};

static const __midl_frag45_t __midl_frag45 =
{ 
/* PRINTER_INFO_1 */
    { 
    /* PRINTER_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_1 */
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
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag49,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
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

static const __midl_frag44_t __midl_frag44 =
{ 
/* *PRINTER_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag45
};

static const __midl_frag41_t __midl_frag41 =
{ 
/* PRINTER_INFO_STRESS */
    { 
    /* PRINTER_INFO_STRESS */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_STRESS */
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
        (NDR64_UINT32) 136 /* 0x88 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag1102
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* *PRINTER_INFO_STRESS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag41
};

static const __midl_frag39_t __midl_frag39 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* __MIDL_IRemoteWinspool_0012 */
    { 
    /* __MIDL_IRemoteWinspool_0012 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag39,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag40,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag44,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag50,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag71,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag73,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag77,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag81,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag83,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag88,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag88,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* PRINTER_CONTAINER */
    { 
    /* PRINTER_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag38
        },
        { 
        /* PRINTER_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag33_t __midl_frag33 =
{ 
/* RpcAsyncAddPrinter */
    { 
    /* RpcAsyncAddPrinter */      /* procedure RpcAsyncAddPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag957,
        { 
        /* pName */
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
    /* pPrinterContainer */      /* parameter pPrinterContainer */
        &__midl_frag37,
        { 
        /* pPrinterContainer */
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
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag10,
        { 
        /* pDevModeContainer */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pSecurityContainer */      /* parameter pSecurityContainer */
        &__midl_frag92,
        { 
        /* pSecurityContainer */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pClientInfo */      /* parameter pClientInfo */
        &__midl_frag17,
        { 
        /* pClientInfo */
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
    /* pHandle */      /* parameter pHandle */
        &__midl_frag99,
        { 
        /* pHandle */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag948,
        { 
        /* DWORD */
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

static const __midl_frag31_t __midl_frag31 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1102
    }
};

static const __midl_frag28_t __midl_frag28 =
{ 
/* SPLCLIENT_INFO_3 */
    { 
    /* SPLCLIENT_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SPLCLIENT_INFO_3 */
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
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        &__midl_frag31,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            (NDR64_UINT16) 2 /* 0x2 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x7,    /* FC64_INT64 */
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

static const __midl_frag27_t __midl_frag27 =
{ 
/* *SPLCLIENT_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag28
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* SPLCLIENT_INFO_2 */
    { 
    /* SPLCLIENT_INFO_2 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SPLCLIENT_INFO_2 */
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

static const __midl_frag25_t __midl_frag25 =
{ 
/* *SPLCLIENT_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag26
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* SPLCLIENT_INFO_1 */
    { 
    /* SPLCLIENT_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SPLCLIENT_INFO_1 */
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
        (NDR64_UINT32) 40 /* 0x28 */,
        0,
        0,
        &__midl_frag31,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
            (NDR64_UINT16) 2 /* 0x2 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SPLCLIENT_INFO_1 */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag20_t __midl_frag20 =
{ 
/* *SPLCLIENT_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag21
};

static const __midl_frag18_t __midl_frag18 =
{ 
/* __MIDL_IRemoteWinspool_0014 */
    { 
    /* __MIDL_IRemoteWinspool_0014 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag107,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 3 /* 0x3 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag20,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag25,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag27,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* SPLCLIENT_CONTAINER */
    { 
    /* SPLCLIENT_CONTAINER */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SPLCLIENT_CONTAINER */
            0,
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
        0,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag18
        },
        { 
        /* SPLCLIENT_CONTAINER */
            0x92,    /* FC64_BUFFER_ALIGN */
            (NDR64_UINT8) 7 /* 0x7 */,
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

static const __midl_frag14_t __midl_frag14 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag11
    }
};

static const __midl_frag11_t __midl_frag11 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
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
        &__midl_frag107
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag883
    }
};

static const __midl_frag10_t __midl_frag10 =
{ 
/* DEVMODE_CONTAINER */
    { 
    /* DEVMODE_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DEVMODE_CONTAINER */
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
        &__midl_frag14,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
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
/* RpcAsyncOpenPrinter */
    { 
    /* RpcAsyncOpenPrinter */      /* procedure RpcAsyncOpenPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag942,
        { 
        /* pPrinterName */
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
    /* pHandle */      /* parameter pHandle */
        &__midl_frag99,
        { 
        /* pHandle */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pDatatype */      /* parameter pDatatype */
        &__midl_frag942,
        { 
        /* pDatatype */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag10,
        { 
        /* pDevModeContainer */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* AccessRequired */      /* parameter AccessRequired */
        &__midl_frag948,
        { 
        /* AccessRequired */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pClientInfo */      /* parameter pClientInfo */
        &__midl_frag17,
        { 
        /* pClientInfo */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1065,
        { 
        /* DWORD */
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

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


static const FormatInfoRef IRemoteWinspool_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag33,
    &__midl_frag101,
    &__midl_frag147,
    &__midl_frag159,
    &__midl_frag174,
    &__midl_frag185,
    &__midl_frag189,
    &__midl_frag192,
    &__midl_frag199,
    &__midl_frag210,
    &__midl_frag224,
    &__midl_frag227,
    &__midl_frag237,
    &__midl_frag240,
    &__midl_frag243,
    &__midl_frag246,
    &__midl_frag260,
    &__midl_frag276,
    &__midl_frag287,
    &__midl_frag300,
    &__midl_frag304,
    &__midl_frag322,
    &__midl_frag327,
    &__midl_frag340,
    &__midl_frag346,
    &__midl_frag359,
    &__midl_frag378,
    &__midl_frag398,
    &__midl_frag412,
    &__midl_frag436,
    &__midl_frag429,
    &__midl_frag436,
    &__midl_frag441,
    &__midl_frag460,
    &__midl_frag494,
    &__midl_frag500,
    &__midl_frag514,
    &__midl_frag518,
    &__midl_frag533,
    &__midl_frag635,
    &__midl_frag651,
    &__midl_frag665,
    &__midl_frag673,
    &__midl_frag839,
    &__midl_frag693,
    &__midl_frag709,
    &__midl_frag723,
    &__midl_frag737,
    &__midl_frag751,
    &__midl_frag784,
    &__midl_frag791,
    &__midl_frag815,
    &__midl_frag815,
    &__midl_frag823,
    &__midl_frag839,
    &__midl_frag849,
    &__midl_frag855,
    &__midl_frag868,
    &__midl_frag915,
    &__midl_frag919,
    &__midl_frag925,
    &__midl_frag930,
    &__midl_frag941,
    &__midl_frag956,
    &__midl_frag972,
    &__midl_frag984,
    &__midl_frag1001,
    &__midl_frag1009,
    &__midl_frag1019,
    &__midl_frag1025,
    &__midl_frag1045,
    &__midl_frag1055,
    &__midl_frag1061,
    &__midl_frag1071
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC IRemoteWinspool_StubDesc = 
    {
    (void *)& IRemoteWinspool___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &IRemoteWinspool__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    ms2Dpar__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& IRemoteWinspool_ProxyInfo,   /* proxy/server info */
    &ms2Dpar_ExprDesc
    };
#ifdef __cplusplus
}
#endif

static const MIDL_SYNTAX_INFO IRemoteWinspool_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ms2Dpar__MIDL_ProcFormatString.Format,
    IRemoteWinspool_FormatStringOffsetTable,
    ms2Dpar__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) IRemoteWinspool_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IRemoteWinspool_ProxyInfo =
    {
    &IRemoteWinspool_StubDesc,
    ms2Dpar__MIDL_ProcFormatString.Format,
    IRemoteWinspool_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IRemoteWinspool_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

