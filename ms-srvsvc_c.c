

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-srvsvc.idl:
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

#include "ms-srvsvc_h.h"

#define TYPE_FORMAT_STRING_SIZE   3795                              
#define PROC_FORMAT_STRING_SIZE   3305                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Dsrvsvc_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Dsrvsvc_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Dsrvsvc_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Dsrvsvc_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Dsrvsvc_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Dsrvsvc_MIDL_EXPR_FORMAT_STRING;


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



extern const ms2Dsrvsvc_MIDL_TYPE_FORMAT_STRING ms2Dsrvsvc__MIDL_TypeFormatString;
extern const ms2Dsrvsvc_MIDL_PROC_FORMAT_STRING ms2Dsrvsvc__MIDL_ProcFormatString;
extern const ms2Dsrvsvc_MIDL_EXPR_FORMAT_STRING ms2Dsrvsvc__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   1            


/* Standard interface: srvsvc, ver. 3.0,
   GUID={0x4B324FC8,0x1670,0x01D3,{0x12,0x78,0x5A,0x47,0xBF,0x6E,0xE1,0x88}} */

 extern const MIDL_STUBLESS_PROXY_INFO srvsvc_ProxyInfo;


static const RPC_CLIENT_INTERFACE srvsvc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x4B324FC8,0x1670,0x01D3,{0x12,0x78,0x5A,0x47,0xBF,0x6E,0xE1,0x88}},{3,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    &srvsvc_ProxyInfo,
    0x02000000
    };
RPC_IF_HANDLE srvsvc_v3_0_c_ifspec = (RPC_IF_HANDLE)& srvsvc___RpcClientInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC srvsvc_StubDesc;
#ifdef __cplusplus
}
#endif

static RPC_BINDING_HANDLE srvsvc__MIDL_AutoBindHandle;


void Opnum0NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  0,
                  0,
                  IDL_handle);
    
}


void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  1,
                  0,
                  IDL_handle);
    
}


void Opnum2NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  2,
                  0,
                  IDL_handle);
    
}


void Opnum3NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  3,
                  0,
                  IDL_handle);
    
}


void Opnum4NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  4,
                  0,
                  IDL_handle);
    
}


void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  5,
                  0,
                  IDL_handle);
    
}


void Opnum6NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  6,
                  0,
                  IDL_handle);
    
}


void Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  7,
                  0,
                  IDL_handle);
    
}


NET_API_STATUS NetrConnectionEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *Qualifier,
    /* [out][in] */ LPCONNECT_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  8,
                  0,
                  ServerName,
                  Qualifier,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrFileEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *BasePath,
    /* [unique][string][in] */ WCHAR *UserName,
    /* [out][in] */ PFILE_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  9,
                  0,
                  ServerName,
                  BasePath,
                  UserName,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrFileGetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD FileId,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPFILE_INFO InfoStruct)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  10,
                  0,
                  ServerName,
                  FileId,
                  Level,
                  InfoStruct);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrFileClose( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD FileId)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  11,
                  0,
                  ServerName,
                  FileId);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrSessionEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ClientName,
    /* [unique][string][in] */ WCHAR *UserName,
    /* [out][in] */ PSESSION_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  12,
                  0,
                  ServerName,
                  ClientName,
                  UserName,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrSessionDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ClientName,
    /* [unique][string][in] */ WCHAR *UserName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  13,
                  0,
                  ServerName,
                  ClientName,
                  UserName);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareAdd( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSHARE_INFO InfoStruct,
    /* [unique][out][in] */ DWORD *ParmErr)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  14,
                  0,
                  ServerName,
                  Level,
                  InfoStruct,
                  ParmErr);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSHARE_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  15,
                  0,
                  ServerName,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareGetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSHARE_INFO InfoStruct)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  16,
                  0,
                  ServerName,
                  NetName,
                  Level,
                  InfoStruct);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareSetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSHARE_INFO ShareInfo,
    /* [unique][out][in] */ DWORD *ParmErr)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  17,
                  0,
                  ServerName,
                  NetName,
                  Level,
                  ShareInfo,
                  ParmErr);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Reserved)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  18,
                  0,
                  ServerName,
                  NetName,
                  Reserved);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareDelSticky( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Reserved)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  19,
                  0,
                  ServerName,
                  NetName,
                  Reserved);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareCheck( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Device,
    /* [out] */ DWORD *Type)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  20,
                  0,
                  ServerName,
                  Device,
                  Type);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerGetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSERVER_INFO InfoStruct)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  21,
                  0,
                  ServerName,
                  Level,
                  InfoStruct);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerSetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSERVER_INFO ServerInfo,
    /* [unique][out][in] */ DWORD *ParmErr)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  22,
                  0,
                  ServerName,
                  Level,
                  ServerInfo,
                  ParmErr);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerDiskEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [out][in] */ DISK_ENUM_CONTAINER *DiskInfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  23,
                  0,
                  ServerName,
                  Level,
                  DiskInfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerStatisticsGet( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *Service,
    /* [in] */ DWORD Level,
    /* [in] */ DWORD Options,
    /* [out] */ LPSTAT_SERVER_0 *InfoStruct)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  24,
                  0,
                  ServerName,
                  Service,
                  Level,
                  Options,
                  InfoStruct);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerTransportAdd( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [in] */ LPSERVER_TRANSPORT_INFO_0 Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  25,
                  0,
                  ServerName,
                  Level,
                  Buffer);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerTransportEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSERVER_XPORT_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  26,
                  0,
                  ServerName,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerTransportDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [in] */ LPSERVER_TRANSPORT_INFO_0 Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  27,
                  0,
                  ServerName,
                  Level,
                  Buffer);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrRemoteTOD( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out] */ LPTIME_OF_DAY_INFO *BufferPtr)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  28,
                  0,
                  ServerName,
                  BufferPtr);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


void Opnum29NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  29,
                  0,
                  IDL_handle);
    
}


NET_API_STATUS NetprPathType( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *PathName,
    /* [out] */ DWORD *PathType,
    /* [in] */ DWORD Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  30,
                  0,
                  ServerName,
                  PathName,
                  PathType,
                  Flags);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetprPathCanonicalize( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *PathName,
    /* [size_is][out] */ unsigned char *Outbuf,
    /* [range][in] */ DWORD OutbufLen,
    /* [string][in] */ WCHAR *Prefix,
    /* [out][in] */ DWORD *PathType,
    /* [in] */ DWORD Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  31,
                  0,
                  ServerName,
                  PathName,
                  Outbuf,
                  OutbufLen,
                  Prefix,
                  PathType,
                  Flags);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


long NetprPathCompare( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *PathName1,
    /* [string][in] */ WCHAR *PathName2,
    /* [in] */ DWORD PathType,
    /* [in] */ DWORD Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  32,
                  0,
                  ServerName,
                  PathName1,
                  PathName2,
                  PathType,
                  Flags);
    return ( long  )_RetVal.Simple;
    
}


NET_API_STATUS NetprNameValidate( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Name,
    /* [in] */ DWORD NameType,
    /* [in] */ DWORD Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  33,
                  0,
                  ServerName,
                  Name,
                  NameType,
                  Flags);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetprNameCanonicalize( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Name,
    /* [size_is][out] */ WCHAR *Outbuf,
    /* [range][in] */ DWORD OutbufLen,
    /* [in] */ DWORD NameType,
    /* [in] */ DWORD Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  34,
                  0,
                  ServerName,
                  Name,
                  Outbuf,
                  OutbufLen,
                  NameType,
                  Flags);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


long NetprNameCompare( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Name1,
    /* [string][in] */ WCHAR *Name2,
    /* [in] */ DWORD NameType,
    /* [in] */ DWORD Flags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  35,
                  0,
                  ServerName,
                  Name1,
                  Name2,
                  NameType,
                  Flags);
    return ( long  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareEnumSticky( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSHARE_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  36,
                  0,
                  ServerName,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareDelStart( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Reserved,
    /* [out] */ PSHARE_DEL_HANDLE ContextHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  37,
                  0,
                  ServerName,
                  NetName,
                  Reserved,
                  ContextHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareDelCommit( 
    /* [out][in] */ PSHARE_DEL_HANDLE ContextHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  38,
                  0,
                  ContextHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


DWORD NetrpGetFileSecurity( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ShareName,
    /* [string][in] */ WCHAR *lpFileName,
    /* [in] */ SECURITY_INFORMATION RequestedInformation,
    /* [out] */ PADT_SECURITY_DESCRIPTOR *SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  39,
                  0,
                  ServerName,
                  ShareName,
                  lpFileName,
                  RequestedInformation,
                  SecurityDescriptor);
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD NetrpSetFileSecurity( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ShareName,
    /* [string][in] */ WCHAR *lpFileName,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PADT_SECURITY_DESCRIPTOR SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  40,
                  0,
                  ServerName,
                  ShareName,
                  lpFileName,
                  SecurityInformation,
                  SecurityDescriptor);
    return ( DWORD  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerTransportAddEx( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPTRANSPORT_INFO Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  41,
                  0,
                  ServerName,
                  Level,
                  Buffer);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


void Opnum42NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  42,
                  0,
                  IDL_handle);
    
}


NET_API_STATUS NetrDfsGetVersion( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out] */ DWORD *Version)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  43,
                  0,
                  ServerName,
                  Version);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsCreateLocalPartition( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *ShareName,
    /* [in] */ GUID *EntryUid,
    /* [string][in] */ WCHAR *EntryPrefix,
    /* [string][in] */ WCHAR *ShortName,
    /* [in] */ LPNET_DFS_ENTRY_ID_CONTAINER RelationInfo,
    /* [in] */ int Force)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  44,
                  0,
                  ServerName,
                  ShareName,
                  EntryUid,
                  EntryPrefix,
                  ShortName,
                  RelationInfo,
                  Force);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsDeleteLocalPartition( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  45,
                  0,
                  ServerName,
                  Uid,
                  Prefix);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsSetLocalVolumeState( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix,
    /* [in] */ unsigned long State)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  46,
                  0,
                  ServerName,
                  Uid,
                  Prefix,
                  State);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


void Opnum47NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle)
{

    NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  47,
                  0,
                  IDL_handle);
    
}


NET_API_STATUS NetrDfsCreateExitPoint( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix,
    /* [in] */ unsigned long Type,
    /* [range][in] */ DWORD ShortPrefixLen,
    /* [size_is][out] */ WCHAR *ShortPrefix)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  48,
                  0,
                  ServerName,
                  Uid,
                  Prefix,
                  Type,
                  ShortPrefixLen,
                  ShortPrefix);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsDeleteExitPoint( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix,
    /* [in] */ unsigned long Type)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  49,
                  0,
                  ServerName,
                  Uid,
                  Prefix,
                  Type);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsModifyPrefix( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  50,
                  0,
                  ServerName,
                  Uid,
                  Prefix);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsFixLocalVolume( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *VolumeName,
    /* [in] */ unsigned long EntryType,
    /* [in] */ unsigned long ServiceType,
    /* [string][in] */ WCHAR *StgId,
    /* [in] */ GUID *EntryUid,
    /* [string][in] */ WCHAR *EntryPrefix,
    /* [in] */ LPNET_DFS_ENTRY_ID_CONTAINER RelationInfo,
    /* [in] */ unsigned long CreateDisposition)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  51,
                  0,
                  ServerName,
                  VolumeName,
                  EntryType,
                  ServiceType,
                  StgId,
                  EntryUid,
                  EntryPrefix,
                  RelationInfo,
                  CreateDisposition);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrDfsManagerReportSiteInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][out][in] */ LPDFS_SITELIST_INFO *ppSiteInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  52,
                  0,
                  ServerName,
                  ppSiteInfo);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerTransportDelEx( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPTRANSPORT_INFO Buffer)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  53,
                  0,
                  ServerName,
                  Level,
                  Buffer);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerAliasAdd( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSERVER_ALIAS_INFO InfoStruct)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  54,
                  0,
                  ServerName,
                  Level,
                  InfoStruct);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerAliasEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSERVER_ALIAS_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ LPDWORD TotalEntries,
    /* [unique][out][in] */ LPDWORD ResumeHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  55,
                  0,
                  ServerName,
                  InfoStruct,
                  PreferedMaximumLength,
                  TotalEntries,
                  ResumeHandle);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrServerAliasDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSERVER_ALIAS_INFO InfoStruct)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  56,
                  0,
                  ServerName,
                  Level,
                  InfoStruct);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}


NET_API_STATUS NetrShareDelEx( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSHARE_INFO ShareInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&srvsvc_ProxyInfo,
                  57,
                  0,
                  ServerName,
                  Level,
                  ShareInfo);
    return ( NET_API_STATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ms2Dsrvsvc_MIDL_PROC_FORMAT_STRING ms2Dsrvsvc__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Opnum0NotUsedOnWire */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 10 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 20 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum1NotUsedOnWire */

/* 30 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 32 */	NdrFcLong( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 40 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 50 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum2NotUsedOnWire */

/* 60 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 70 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 80 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum3NotUsedOnWire */

/* 90 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x3 ),	/* 3 */
/* 98 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 100 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 110 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum4NotUsedOnWire */

/* 120 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x4 ),	/* 4 */
/* 128 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 140 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum5NotUsedOnWire */

/* 150 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x5 ),	/* 5 */
/* 158 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 160 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 170 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum6NotUsedOnWire */

/* 180 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x6 ),	/* 6 */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 200 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum7NotUsedOnWire */

/* 210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x7 ),	/* 7 */
/* 218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 220 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 230 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure NetrConnectionEnum */

/* 240 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 250 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 252 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 254 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 256 */	NdrFcShort( 0x24 ),	/* 36 */
/* 258 */	NdrFcShort( 0x40 ),	/* 64 */
/* 260 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 262 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 264 */	NdrFcShort( 0x1 ),	/* 1 */
/* 266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 272 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 276 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Qualifier */

/* 278 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 280 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 282 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 284 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 286 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 288 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter PreferedMaximumLength */

/* 290 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 292 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 298 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 302 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 304 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 306 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrFileEnum */

/* 314 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x9 ),	/* 9 */
/* 322 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 324 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 328 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 330 */	NdrFcShort( 0x24 ),	/* 36 */
/* 332 */	NdrFcShort( 0x40 ),	/* 64 */
/* 334 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 336 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 346 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 348 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 350 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BasePath */

/* 352 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 356 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter UserName */

/* 358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 362 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 364 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 366 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 368 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter PreferedMaximumLength */

/* 370 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 372 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 376 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 378 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 380 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 382 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 384 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 386 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 390 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrFileGetInfo */

/* 394 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0xa ),	/* 10 */
/* 402 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 404 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 406 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 408 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 414 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 416 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 428 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 430 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter FileId */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 438 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 440 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 444 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 446 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 448 */	NdrFcShort( 0x18c ),	/* Type Offset=396 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 452 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrFileClose */

/* 456 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0xb ),	/* 11 */
/* 464 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 466 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 468 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 470 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 478 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 488 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 490 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 492 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter FileId */

/* 494 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 496 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 502 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrSessionEnum */

/* 506 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0xc ),	/* 12 */
/* 514 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 516 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 518 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 520 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 522 */	NdrFcShort( 0x24 ),	/* 36 */
/* 524 */	NdrFcShort( 0x40 ),	/* 64 */
/* 526 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 528 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 530 */	NdrFcShort( 0x1 ),	/* 1 */
/* 532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 538 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 540 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 542 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ClientName */

/* 544 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 546 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 548 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter UserName */

/* 550 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 552 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 554 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 556 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 558 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 560 */	NdrFcShort( 0x3a6 ),	/* Type Offset=934 */

	/* Parameter PreferedMaximumLength */

/* 562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 564 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 568 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 570 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 574 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 576 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 578 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 582 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrSessionDel */

/* 586 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0xd ),	/* 13 */
/* 594 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 596 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 598 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 600 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 606 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 608 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 620 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 622 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ClientName */

/* 624 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 628 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter UserName */

/* 630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 634 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareAdd */

/* 642 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0xe ),	/* 14 */
/* 650 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 652 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 654 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 656 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 658 */	NdrFcShort( 0x24 ),	/* 36 */
/* 660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 664 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 674 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 676 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 678 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 682 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 686 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 688 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 690 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter ParmErr */

/* 692 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 694 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 696 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 700 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareEnum */

/* 704 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0xf ),	/* 15 */
/* 712 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 714 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 716 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 718 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 720 */	NdrFcShort( 0x24 ),	/* 36 */
/* 722 */	NdrFcShort( 0x40 ),	/* 64 */
/* 724 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 726 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 728 */	NdrFcShort( 0x1 ),	/* 1 */
/* 730 */	NdrFcShort( 0x1 ),	/* 1 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 736 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 738 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 740 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 742 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 744 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 746 */	NdrFcShort( 0x700 ),	/* Type Offset=1792 */

	/* Parameter PreferedMaximumLength */

/* 748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 750 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 756 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 760 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 762 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 764 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 768 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareGetInfo */

/* 772 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 780 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 782 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 784 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 786 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	NdrFcShort( 0x8 ),	/* 8 */
/* 792 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 794 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 796 */	NdrFcShort( 0x1 ),	/* 1 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 806 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 808 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NetName */

/* 810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 812 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 814 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Level */

/* 816 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 818 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 822 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 826 */	NdrFcShort( 0x718 ),	/* Type Offset=1816 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareSetInfo */

/* 834 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x11 ),	/* 17 */
/* 842 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 844 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 846 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 848 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 850 */	NdrFcShort( 0x24 ),	/* 36 */
/* 852 */	NdrFcShort( 0x24 ),	/* 36 */
/* 854 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 856 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 866 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 868 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 870 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NetName */

/* 872 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 874 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 876 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Level */

/* 878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 880 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ShareInfo */

/* 884 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 886 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 888 */	NdrFcShort( 0x730 ),	/* Type Offset=1840 */

	/* Parameter ParmErr */

/* 890 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 892 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 894 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 898 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareDel */

/* 902 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x12 ),	/* 18 */
/* 910 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 912 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 914 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 916 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 922 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 924 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 934 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 936 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 938 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NetName */

/* 940 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 942 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 944 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Reserved */

/* 946 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 948 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareDelSticky */

/* 958 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0x13 ),	/* 19 */
/* 966 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 968 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 972 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 978 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 980 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 990 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 992 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 994 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NetName */

/* 996 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1000 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Reserved */

/* 1002 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareCheck */

/* 1014 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1022 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1024 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1026 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1028 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1036 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1046 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1048 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1050 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Device */

/* 1052 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1056 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Type */

/* 1058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1060 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1066 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerGetInfo */

/* 1070 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1078 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1080 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1082 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1084 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1090 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1092 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1104 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1106 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1108 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 1114 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1118 */	NdrFcShort( 0x748 ),	/* Type Offset=1864 */

	/* Return value */

/* 1120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1122 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerSetInfo */

/* 1126 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1132 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1134 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1136 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1138 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1140 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1142 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1144 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1148 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1160 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1162 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ServerInfo */

/* 1170 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1172 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1174 */	NdrFcShort( 0x9d0 ),	/* Type Offset=2512 */

	/* Parameter ParmErr */

/* 1176 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1178 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1180 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1184 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerDiskEnum */

/* 1188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1196 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1198 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1202 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1204 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1206 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1210 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1224 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter DiskInfoStruct */

/* 1232 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1236 */	NdrFcShort( 0xa24 ),	/* Type Offset=2596 */

	/* Parameter PreferedMaximumLength */

/* 1238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 1244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 1250 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1252 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1254 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 1256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1258 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerStatisticsGet */

/* 1262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1270 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1272 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1276 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1280 */	NdrFcShort( 0x84 ),	/* 132 */
/* 1282 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1284 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1298 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Service */

/* 1300 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1304 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Options */

/* 1312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 1318 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1320 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1322 */	NdrFcShort( 0xa34 ),	/* Type Offset=2612 */

	/* Return value */

/* 1324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1326 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerTransportAdd */

/* 1330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1338 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1340 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1344 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1352 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1362 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1364 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1366 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1368 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 1374 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1376 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1378 */	NdrFcShort( 0xa6c ),	/* Type Offset=2668 */

	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerTransportEnum */

/* 1386 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1394 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1396 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1400 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1404 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1406 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1408 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1418 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1420 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1422 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 1424 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 1426 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1428 */	NdrFcShort( 0xc2a ),	/* Type Offset=3114 */

	/* Parameter PreferedMaximumLength */

/* 1430 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1432 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 1436 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1438 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 1442 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 1444 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1446 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 1448 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1450 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerTransportDel */

/* 1454 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1462 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1464 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1466 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1468 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1472 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1474 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1476 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1486 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1488 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1490 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1492 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1494 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 1498 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1500 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1502 */	NdrFcShort( 0xa6c ),	/* Type Offset=2668 */

	/* Return value */

/* 1504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1506 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrRemoteTOD */

/* 1510 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1518 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1520 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1522 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1524 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x70 ),	/* 112 */
/* 1530 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1532 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1542 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1544 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1546 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter BufferPtr */

/* 1548 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 1550 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1552 */	NdrFcShort( 0xc3a ),	/* Type Offset=3130 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1556 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum29NotUsedOnWire */

/* 1560 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1570 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1578 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 1580 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure NetprPathType */

/* 1590 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1598 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1600 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1602 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1604 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1612 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1622 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1624 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1626 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter PathName */

/* 1628 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1632 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter PathType */

/* 1634 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 1640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1648 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetprPathCanonicalize */

/* 1652 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1660 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1662 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1664 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1666 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1668 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1670 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1672 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1674 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1676 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1684 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1686 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1688 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter PathName */

/* 1690 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1692 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1694 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Outbuf */

/* 1696 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1698 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1700 */	NdrFcShort( 0xc58 ),	/* Type Offset=3160 */

	/* Parameter OutbufLen */

/* 1702 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1704 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1706 */	NdrFcShort( 0xc6e ),	/* 3182 */

	/* Parameter Prefix */

/* 1708 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1710 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1712 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter PathType */

/* 1714 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 1716 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 1720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1722 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1728 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetprPathCompare */

/* 1732 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1738 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1740 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1742 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1744 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1746 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1748 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1752 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1754 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1762 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1764 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1766 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1768 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter PathName1 */

/* 1770 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1774 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter PathName2 */

/* 1776 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1780 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter PathType */

/* 1782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1784 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 1788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1790 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1796 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetprNameValidate */

/* 1800 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1808 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1810 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1812 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1814 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1816 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1820 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1822 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1834 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1836 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Name */

/* 1838 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1840 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1842 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter NameType */

/* 1844 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1846 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1848 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 1850 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1852 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1858 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetprNameCanonicalize */

/* 1862 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1870 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1872 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1874 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1876 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1878 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1882 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1884 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1894 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1896 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1898 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Name */

/* 1900 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1904 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Outbuf */

/* 1906 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1910 */	NdrFcShort( 0xc80 ),	/* Type Offset=3200 */

	/* Parameter OutbufLen */

/* 1912 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 1914 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1916 */	NdrFcShort( 0xc96 ),	/* 3222 */

	/* Parameter NameType */

/* 1918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1920 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 1924 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1926 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1932 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetprNameCompare */

/* 1936 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x23 ),	/* 35 */
/* 1944 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1946 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1948 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1950 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1952 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1956 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1958 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 1968 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1970 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1972 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Name1 */

/* 1974 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1978 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Name2 */

/* 1980 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1984 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter NameType */

/* 1986 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1988 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Flags */

/* 1992 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1994 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2000 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareEnumSticky */

/* 2004 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2012 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2014 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2016 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2018 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2020 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2022 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2024 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2026 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2034 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2036 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2038 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2040 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 2042 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 2044 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2046 */	NdrFcShort( 0x700 ),	/* Type Offset=1792 */

	/* Parameter PreferedMaximumLength */

/* 2048 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2050 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 2054 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2056 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 2060 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 2062 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2064 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 2066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2068 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareDelStart */

/* 2072 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2078 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2080 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2082 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2084 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2086 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2092 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2094 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2102 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2104 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2106 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2108 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter NetName */

/* 2110 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2114 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Reserved */

/* 2116 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2118 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ContextHandle */

/* 2122 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2124 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2126 */	NdrFcShort( 0xca4 ),	/* Type Offset=3236 */

	/* Return value */

/* 2128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2130 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareDelCommit */

/* 2134 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2140 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2144 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2146 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2148 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2150 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2152 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2156 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ContextHandle */

/* 2166 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2168 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2170 */	NdrFcShort( 0xcac ),	/* Type Offset=3244 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrpGetFileSecurity */

/* 2178 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2186 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2188 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2190 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2192 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2198 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2200 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2212 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2214 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ShareName */

/* 2216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2220 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter lpFileName */

/* 2222 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2226 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter RequestedInformation */

/* 2228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2230 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecurityDescriptor */

/* 2234 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 2236 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2238 */	NdrFcShort( 0xcb0 ),	/* Type Offset=3248 */

	/* Return value */

/* 2240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2242 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrpSetFileSecurity */

/* 2246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2254 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2256 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2258 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2260 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2266 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2268 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2278 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2280 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2282 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ShareName */

/* 2284 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2286 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2288 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter lpFileName */

/* 2290 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2292 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2294 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter SecurityInformation */

/* 2296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2298 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter SecurityDescriptor */

/* 2302 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2304 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2306 */	NdrFcShort( 0xcb8 ),	/* Type Offset=3256 */

	/* Return value */

/* 2308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2310 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerTransportAddEx */

/* 2314 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2322 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2324 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2326 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2328 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2334 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2336 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2346 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2348 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2350 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2354 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 2358 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2360 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2362 */	NdrFcShort( 0xcd0 ),	/* Type Offset=3280 */

	/* Return value */

/* 2364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2366 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum42NotUsedOnWire */

/* 2370 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2380 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2382 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2390 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2398 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure NetrDfsGetVersion */

/* 2400 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2408 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2410 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2412 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2414 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2418 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2420 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2422 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2432 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2434 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2436 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Version */

/* 2438 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2440 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsCreateLocalPartition */

/* 2450 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2458 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2460 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2462 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2464 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2466 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2470 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2472 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2476 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2482 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2484 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2486 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ShareName */

/* 2488 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2492 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter EntryUid */

/* 2494 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2498 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter EntryPrefix */

/* 2500 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2502 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2504 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter ShortName */

/* 2506 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2508 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2510 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter RelationInfo */

/* 2512 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2514 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2516 */	NdrFcShort( 0xd58 ),	/* Type Offset=3416 */

	/* Parameter Force */

/* 2518 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2520 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2526 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsDeleteLocalPartition */

/* 2530 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2536 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2538 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2540 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2544 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2546 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2550 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2552 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2562 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2564 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2566 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Uid */

/* 2568 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2570 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2572 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter Prefix */

/* 2574 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2576 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2578 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Return value */

/* 2580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2582 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsSetLocalVolumeState */

/* 2586 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2592 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2594 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2596 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2598 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2600 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2602 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2604 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2606 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2608 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2620 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2622 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Uid */

/* 2624 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2628 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter Prefix */

/* 2630 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2634 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter State */

/* 2636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2644 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum47NotUsedOnWire */

/* 2648 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2656 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2658 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2660 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2666 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2668 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2676 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure NetrDfsCreateExitPoint */

/* 2678 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2686 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2688 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2690 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2692 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2694 */	NdrFcShort( 0x54 ),	/* 84 */
/* 2696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2698 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2700 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2702 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2710 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2712 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2714 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Uid */

/* 2716 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2718 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2720 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter Prefix */

/* 2722 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2724 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2726 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Type */

/* 2728 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2730 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ShortPrefixLen */

/* 2734 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 2736 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2738 */	NdrFcShort( 0xd68 ),	/* 3432 */

	/* Parameter ShortPrefix */

/* 2740 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2742 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2744 */	NdrFcShort( 0xd76 ),	/* Type Offset=3446 */

	/* Return value */

/* 2746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2748 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsDeleteExitPoint */

/* 2752 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2758 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2760 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2762 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2764 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2766 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2768 */	NdrFcShort( 0x4c ),	/* 76 */
/* 2770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2772 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 2774 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2784 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2786 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2788 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Uid */

/* 2790 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2792 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2794 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter Prefix */

/* 2796 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2798 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2800 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter Type */

/* 2802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2804 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2808 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2810 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsModifyPrefix */

/* 2814 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2820 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2822 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2824 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2826 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2828 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2830 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2836 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2848 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2850 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Uid */

/* 2852 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2854 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2856 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter Prefix */

/* 2858 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2860 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2862 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Return value */

/* 2864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2866 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsFixLocalVolume */

/* 2870 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2876 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2878 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 2880 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2882 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2884 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2886 */	NdrFcShort( 0x5c ),	/* 92 */
/* 2888 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 2892 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2902 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2904 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2906 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter VolumeName */

/* 2908 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2910 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2912 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter EntryType */

/* 2914 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2916 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ServiceType */

/* 2920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2922 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter StgId */

/* 2926 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2928 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2930 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter EntryUid */

/* 2932 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 2934 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2936 */	NdrFcShort( 0xd0c ),	/* Type Offset=3340 */

	/* Parameter EntryPrefix */

/* 2938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2940 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2942 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Parameter RelationInfo */

/* 2944 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2946 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2948 */	NdrFcShort( 0xd58 ),	/* Type Offset=3416 */

	/* Parameter CreateDisposition */

/* 2950 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2952 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2956 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2958 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 2960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrDfsManagerReportSiteInfo */

/* 2962 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2970 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2972 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2974 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2976 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2982 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2984 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2988 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 2994 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2996 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2998 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter ppSiteInfo */

/* 3000 */	NdrFcShort( 0x201b ),	/* Flags:  must size, must free, in, out, srv alloc size=8 */
/* 3002 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3004 */	NdrFcShort( 0xd8c ),	/* Type Offset=3468 */

	/* Return value */

/* 3006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3008 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerTransportDelEx */

/* 3012 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3018 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3020 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3022 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3024 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3026 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3032 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3034 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 3044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3046 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3048 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Buffer */

/* 3056 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3060 */	NdrFcShort( 0xdde ),	/* Type Offset=3550 */

	/* Return value */

/* 3062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3064 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerAliasAdd */

/* 3068 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3076 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3078 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3080 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3082 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3090 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3094 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 3100 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3104 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 3112 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3116 */	NdrFcShort( 0xdf6 ),	/* Type Offset=3574 */

	/* Return value */

/* 3118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerAliasEnum */

/* 3124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3130 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3132 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3134 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3136 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3138 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3140 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3142 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3144 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3146 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 3156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3158 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3160 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter InfoStruct */

/* 3162 */	NdrFcShort( 0x11b ),	/* Flags:  must size, must free, in, out, simple ref, */
/* 3164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3166 */	NdrFcShort( 0xe92 ),	/* Type Offset=3730 */

	/* Parameter PreferedMaximumLength */

/* 3168 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter TotalEntries */

/* 3174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ResumeHandle */

/* 3180 */	NdrFcShort( 0x1a ),	/* Flags:  must free, in, out, */
/* 3182 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3184 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */

	/* Return value */

/* 3186 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3188 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrServerAliasDel */

/* 3192 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3200 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3202 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3204 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3206 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3212 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3214 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 3224 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3226 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3228 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter InfoStruct */

/* 3236 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3240 */	NdrFcShort( 0xea6 ),	/* Type Offset=3750 */

	/* Return value */

/* 3242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NetrShareDelEx */

/* 3248 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3254 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3256 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3258 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3260 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3262 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3268 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3270 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ServerName */

/* 3280 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3282 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3284 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3288 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ShareInfo */

/* 3292 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3294 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3296 */	NdrFcShort( 0xebe ),	/* Type Offset=3774 */

	/* Return value */

/* 3298 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Dsrvsvc_MIDL_TYPE_FORMAT_STRING ms2Dsrvsvc__MIDL_TypeFormatString =
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
			0x11, 0x0,	/* FC_RP */
/*  8 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (204) */
/* 10 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 12 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 14 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 16 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 18 */	0x0 , 
			0x0,		/* 0 */
/* 20 */	NdrFcLong( 0x0 ),	/* 0 */
/* 24 */	NdrFcLong( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0xa ),	/* Offset= 10 (48) */
/* 40 */	NdrFcLong( 0x1 ),	/* 1 */
/* 44 */	NdrFcShort( 0x48 ),	/* Offset= 72 (116) */
/* 46 */	NdrFcShort( 0xffff ),	/* Offset= -1 (45) */
/* 48 */	
			0x12, 0x0,	/* FC_UP */
/* 50 */	NdrFcShort( 0x32 ),	/* Offset= 50 (100) */
/* 52 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 58 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 68 */	0x0 , 
			0x0,		/* 0 */
/* 70 */	NdrFcLong( 0x0 ),	/* 0 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 82 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 84 */	0x0 , 
			0x0,		/* 0 */
/* 86 */	NdrFcLong( 0x0 ),	/* 0 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 96 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (52) */
/* 98 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x6 ),	/* Offset= 6 (112) */
/* 108 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 110 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 112 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 114 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (58) */
/* 116 */	
			0x12, 0x0,	/* FC_UP */
/* 118 */	NdrFcShort( 0x46 ),	/* Offset= 70 (188) */
/* 120 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 122 */	NdrFcShort( 0x28 ),	/* 40 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0xc ),	/* Offset= 12 (138) */
/* 128 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 130 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 132 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 134 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 136 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 138 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 140 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 144 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 146 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 156 */	0x0 , 
			0x0,		/* 0 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 170 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 172 */	0x0 , 
			0x0,		/* 0 */
/* 174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 184 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (120) */
/* 186 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 188 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 190 */	NdrFcShort( 0x10 ),	/* 16 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x6 ),	/* Offset= 6 (200) */
/* 196 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 198 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 200 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 202 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (146) */
/* 204 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x0 ),	/* Offset= 0 (210) */
/* 212 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 214 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 216 */	NdrFcShort( 0xff32 ),	/* Offset= -206 (10) */
/* 218 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 220 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 222 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 224 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 226 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x11, 0x0,	/* FC_RP */
/* 230 */	NdrFcShort( 0x92 ),	/* Offset= 146 (376) */
/* 232 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 234 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 236 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 238 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 240 */	0x0 , 
			0x0,		/* 0 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcLong( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (252) */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 256 */	NdrFcLong( 0x2 ),	/* 2 */
/* 260 */	NdrFcShort( 0xa ),	/* Offset= 10 (270) */
/* 262 */	NdrFcLong( 0x3 ),	/* 3 */
/* 266 */	NdrFcShort( 0x18 ),	/* Offset= 24 (290) */
/* 268 */	NdrFcShort( 0xffff ),	/* Offset= -1 (267) */
/* 270 */	
			0x12, 0x0,	/* FC_UP */
/* 272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (274) */
/* 274 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 276 */	NdrFcShort( 0x10 ),	/* 16 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x6 ),	/* Offset= 6 (286) */
/* 282 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 284 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 286 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 288 */	NdrFcShort( 0xff1a ),	/* Offset= -230 (58) */
/* 290 */	
			0x12, 0x0,	/* FC_UP */
/* 292 */	NdrFcShort( 0x44 ),	/* Offset= 68 (360) */
/* 294 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 296 */	NdrFcShort( 0x20 ),	/* 32 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0xa ),	/* Offset= 10 (310) */
/* 302 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 304 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 306 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 308 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 310 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 312 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 314 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 316 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 318 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 328 */	0x0 , 
			0x0,		/* 0 */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 338 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 342 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 344 */	0x0 , 
			0x0,		/* 0 */
/* 346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 356 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (294) */
/* 358 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 360 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x6 ),	/* Offset= 6 (372) */
/* 368 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 370 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 372 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 374 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (318) */
/* 376 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 378 */	NdrFcShort( 0x10 ),	/* 16 */
/* 380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 382 */	NdrFcShort( 0x0 ),	/* Offset= 0 (382) */
/* 384 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 386 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 388 */	NdrFcShort( 0xff64 ),	/* Offset= -156 (232) */
/* 390 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 392 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 394 */	NdrFcShort( 0x2 ),	/* Offset= 2 (396) */
/* 396 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 398 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 400 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 402 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 404 */	0x0 , 
			0x0,		/* 0 */
/* 406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x2 ),	/* Offset= 2 (416) */
/* 416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 418 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 420 */	NdrFcLong( 0x2 ),	/* 2 */
/* 424 */	NdrFcShort( 0xa ),	/* Offset= 10 (434) */
/* 426 */	NdrFcLong( 0x3 ),	/* 3 */
/* 430 */	NdrFcShort( 0x8 ),	/* Offset= 8 (438) */
/* 432 */	NdrFcShort( 0xffff ),	/* Offset= -1 (431) */
/* 434 */	
			0x12, 0x0,	/* FC_UP */
/* 436 */	NdrFcShort( 0xfe80 ),	/* Offset= -384 (52) */
/* 438 */	
			0x12, 0x0,	/* FC_UP */
/* 440 */	NdrFcShort( 0xff6e ),	/* Offset= -146 (294) */
/* 442 */	
			0x11, 0x0,	/* FC_RP */
/* 444 */	NdrFcShort( 0x1ea ),	/* Offset= 490 (934) */
/* 446 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 448 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 450 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 452 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 454 */	0x0 , 
			0x0,		/* 0 */
/* 456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x2 ),	/* Offset= 2 (466) */
/* 466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 468 */	NdrFcShort( 0x3005 ),	/* 12293 */
/* 470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x1c ),	/* Offset= 28 (502) */
/* 476 */	NdrFcLong( 0x1 ),	/* 1 */
/* 480 */	NdrFcShort( 0x62 ),	/* Offset= 98 (578) */
/* 482 */	NdrFcLong( 0x2 ),	/* 2 */
/* 486 */	NdrFcShort( 0xb2 ),	/* Offset= 178 (664) */
/* 488 */	NdrFcLong( 0xa ),	/* 10 */
/* 492 */	NdrFcShort( 0x106 ),	/* Offset= 262 (754) */
/* 494 */	NdrFcLong( 0x1f6 ),	/* 502 */
/* 498 */	NdrFcShort( 0x154 ),	/* Offset= 340 (838) */
/* 500 */	NdrFcShort( 0xffff ),	/* Offset= -1 (499) */
/* 502 */	
			0x12, 0x0,	/* FC_UP */
/* 504 */	NdrFcShort( 0x3a ),	/* Offset= 58 (562) */
/* 506 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x4 ),	/* Offset= 4 (516) */
/* 514 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 516 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 518 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 530 */	0x0 , 
			0x0,		/* 0 */
/* 532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 544 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 546 */	0x0 , 
			0x0,		/* 0 */
/* 548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 556 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 558 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (506) */
/* 560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 562 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 564 */	NdrFcShort( 0x10 ),	/* 16 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x6 ),	/* Offset= 6 (574) */
/* 570 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 572 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 574 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 576 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (520) */
/* 578 */	
			0x12, 0x0,	/* FC_UP */
/* 580 */	NdrFcShort( 0x44 ),	/* Offset= 68 (648) */
/* 582 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 584 */	NdrFcShort( 0x20 ),	/* 32 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0xa ),	/* Offset= 10 (598) */
/* 590 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 592 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 594 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 596 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 598 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 600 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 602 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 604 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 606 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 616 */	0x0 , 
			0x0,		/* 0 */
/* 618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 626 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 630 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 632 */	0x0 , 
			0x0,		/* 0 */
/* 634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 642 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 644 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (582) */
/* 646 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 648 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 650 */	NdrFcShort( 0x10 ),	/* 16 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x6 ),	/* Offset= 6 (660) */
/* 656 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 658 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 660 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 662 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (606) */
/* 664 */	
			0x12, 0x0,	/* FC_UP */
/* 666 */	NdrFcShort( 0x48 ),	/* Offset= 72 (738) */
/* 668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x28 ),	/* 40 */
/* 672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0xa ),	/* Offset= 10 (684) */
/* 676 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 682 */	0x36,		/* FC_POINTER */
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
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 694 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 696 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 706 */	0x0 , 
			0x0,		/* 0 */
/* 708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 716 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 720 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 722 */	0x0 , 
			0x0,		/* 0 */
/* 724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 732 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 734 */	NdrFcShort( 0xffbe ),	/* Offset= -66 (668) */
/* 736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 738 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x6 ),	/* Offset= 6 (750) */
/* 746 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 748 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 750 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 752 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (696) */
/* 754 */	
			0x12, 0x0,	/* FC_UP */
/* 756 */	NdrFcShort( 0x42 ),	/* Offset= 66 (822) */
/* 758 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x18 ),	/* 24 */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x8 ),	/* Offset= 8 (772) */
/* 766 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 768 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 774 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 776 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 778 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 780 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 790 */	0x0 , 
			0x0,		/* 0 */
/* 792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 796 */	NdrFcLong( 0x0 ),	/* 0 */
/* 800 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 804 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 806 */	0x0 , 
			0x0,		/* 0 */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 818 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (758) */
/* 820 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 822 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 824 */	NdrFcShort( 0x10 ),	/* 16 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x6 ),	/* Offset= 6 (834) */
/* 830 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 832 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 834 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 836 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (780) */
/* 838 */	
			0x12, 0x0,	/* FC_UP */
/* 840 */	NdrFcShort( 0x4e ),	/* Offset= 78 (918) */
/* 842 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 844 */	NdrFcShort( 0x30 ),	/* 48 */
/* 846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 848 */	NdrFcShort( 0xc ),	/* Offset= 12 (860) */
/* 850 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 852 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 854 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 856 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 858 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 860 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 862 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 864 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 866 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 868 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 870 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 872 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 874 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 876 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 884 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 886 */	0x0 , 
			0x0,		/* 0 */
/* 888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 896 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 900 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 902 */	0x0 , 
			0x0,		/* 0 */
/* 904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 908 */	NdrFcLong( 0x0 ),	/* 0 */
/* 912 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 914 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (842) */
/* 916 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 918 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 920 */	NdrFcShort( 0x10 ),	/* 16 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x6 ),	/* Offset= 6 (930) */
/* 926 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 928 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 930 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 932 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (876) */
/* 934 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 936 */	NdrFcShort( 0x10 ),	/* 16 */
/* 938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 940 */	NdrFcShort( 0x0 ),	/* Offset= 0 (940) */
/* 942 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 944 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 946 */	NdrFcShort( 0xfe0c ),	/* Offset= -500 (446) */
/* 948 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 950 */	
			0x11, 0x0,	/* FC_RP */
/* 952 */	NdrFcShort( 0x2 ),	/* Offset= 2 (954) */
/* 954 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 956 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 958 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 960 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 962 */	0x0 , 
			0x0,		/* 0 */
/* 964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x2 ),	/* Offset= 2 (974) */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	NdrFcShort( 0x300a ),	/* 12298 */
/* 978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x3a ),	/* Offset= 58 (1040) */
/* 984 */	NdrFcLong( 0x1 ),	/* 1 */
/* 988 */	NdrFcShort( 0x46 ),	/* Offset= 70 (1058) */
/* 990 */	NdrFcLong( 0x2 ),	/* 2 */
/* 994 */	NdrFcShort( 0x5a ),	/* Offset= 90 (1084) */
/* 996 */	NdrFcLong( 0x1f6 ),	/* 502 */
/* 1000 */	NdrFcShort( 0x7c ),	/* Offset= 124 (1124) */
/* 1002 */	NdrFcLong( 0x3ec ),	/* 1004 */
/* 1006 */	NdrFcShort( 0xba ),	/* Offset= 186 (1192) */
/* 1008 */	NdrFcLong( 0x3ee ),	/* 1006 */
/* 1012 */	NdrFcShort( 0xfdbe ),	/* Offset= -578 (434) */
/* 1014 */	NdrFcLong( 0x5dd ),	/* 1501 */
/* 1018 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (1210) */
/* 1020 */	NdrFcLong( 0x3ed ),	/* 1005 */
/* 1024 */	NdrFcShort( 0xfdb2 ),	/* Offset= -590 (434) */
/* 1026 */	NdrFcLong( 0x1f5 ),	/* 501 */
/* 1030 */	NdrFcShort( 0xde ),	/* Offset= 222 (1252) */
/* 1032 */	NdrFcLong( 0x1f7 ),	/* 503 */
/* 1036 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (1280) */
/* 1038 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1038) */
/* 1040 */	
			0x12, 0x0,	/* FC_UP */
/* 1042 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1044) */
/* 1044 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1054) */
/* 1052 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1054 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1056 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1058 */	
			0x12, 0x0,	/* FC_UP */
/* 1060 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1062) */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1076) */
/* 1070 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1072 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1074 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
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
			0x12, 0x0,	/* FC_UP */
/* 1086 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1088) */
/* 1088 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1090 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	NdrFcShort( 0xe ),	/* Offset= 14 (1108) */
/* 1096 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1098 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1102 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1104 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1106 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1108 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1110 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1112 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1114 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1116 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1120 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1122 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1124 */	
			0x12, 0x0,	/* FC_UP */
/* 1126 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1150) */
/* 1128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1132 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1134 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1136 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1138 */	0x0 , 
			0x0,		/* 0 */
/* 1140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1148 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1150 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1152 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1156 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1172) */
/* 1158 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1160 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1164 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1166 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1168 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1170 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1172 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1174 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1176 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1178 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1180 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1182 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1184 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1188 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1190 */	NdrFcShort( 0xffc2 ),	/* Offset= -62 (1128) */
/* 1192 */	
			0x12, 0x0,	/* FC_UP */
/* 1194 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1196) */
/* 1196 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1198 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1206) */
/* 1204 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1206 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1208 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1210 */	
			0x12, 0x0,	/* FC_UP */
/* 1212 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1236) */
/* 1214 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1216 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1218 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1224 */	0x0 , 
			0x0,		/* 0 */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1234 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1236 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1248) */
/* 1244 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1246 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1248 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1250 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1214) */
/* 1252 */	
			0x12, 0x0,	/* FC_UP */
/* 1254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1256) */
/* 1256 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1258 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0xa ),	/* Offset= 10 (1272) */
/* 1264 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1266 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1268 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1272 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1274 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1276 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1278 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1280 */	
			0x12, 0x0,	/* FC_UP */
/* 1282 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1306) */
/* 1284 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1288 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1290 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1294 */	0x0 , 
			0x0,		/* 0 */
/* 1296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1304 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1306 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1308 */	NdrFcShort( 0x50 ),	/* 80 */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x12 ),	/* Offset= 18 (1330) */
/* 1314 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1316 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1320 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1322 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1324 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1326 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1328 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1330 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1332 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1334 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1336 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1338 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1340 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1342 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1344 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1346 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1348 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1350 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1352 */	NdrFcShort( 0xffbc ),	/* Offset= -68 (1284) */
/* 1354 */	
			0x11, 0x0,	/* FC_RP */
/* 1356 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (1792) */
/* 1358 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1360 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1362 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1364 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1366 */	0x0 , 
			0x0,		/* 0 */
/* 1368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1378) */
/* 1378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1380 */	NdrFcShort( 0x3006 ),	/* 12294 */
/* 1382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1420) */
/* 1388 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1392 */	NdrFcShort( 0x5a ),	/* Offset= 90 (1482) */
/* 1394 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1398 */	NdrFcShort( 0x92 ),	/* Offset= 146 (1544) */
/* 1400 */	NdrFcLong( 0x1f5 ),	/* 501 */
/* 1404 */	NdrFcShort( 0xca ),	/* Offset= 202 (1606) */
/* 1406 */	NdrFcLong( 0x1f6 ),	/* 502 */
/* 1410 */	NdrFcShort( 0x102 ),	/* Offset= 258 (1668) */
/* 1412 */	NdrFcLong( 0x1f7 ),	/* 503 */
/* 1416 */	NdrFcShort( 0x13a ),	/* Offset= 314 (1730) */
/* 1418 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1417) */
/* 1420 */	
			0x12, 0x0,	/* FC_UP */
/* 1422 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1466) */
/* 1424 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1428 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1434 */	0x0 , 
			0x0,		/* 0 */
/* 1436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1444 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1448 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1450 */	0x0 , 
			0x0,		/* 0 */
/* 1452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1462 */	NdrFcShort( 0xfe5e ),	/* Offset= -418 (1044) */
/* 1464 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1466 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1472 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1478) */
/* 1474 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1476 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1478 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1480 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1424) */
/* 1482 */	
			0x12, 0x0,	/* FC_UP */
/* 1484 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1528) */
/* 1486 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1496 */	0x0 , 
			0x0,		/* 0 */
/* 1498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1502 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1506 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1510 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1512 */	0x0 , 
			0x0,		/* 0 */
/* 1514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1522 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1524 */	NdrFcShort( 0xfe32 ),	/* Offset= -462 (1062) */
/* 1526 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1528 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1540) */
/* 1536 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1538 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1540 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1542 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1486) */
/* 1544 */	
			0x12, 0x0,	/* FC_UP */
/* 1546 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1590) */
/* 1548 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1558 */	0x0 , 
			0x0,		/* 0 */
/* 1560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1568 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1572 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1574 */	0x0 , 
			0x0,		/* 0 */
/* 1576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1580 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1584 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1586 */	NdrFcShort( 0xfe0e ),	/* Offset= -498 (1088) */
/* 1588 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1590 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1592 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1602) */
/* 1598 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1600 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1602 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1604 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1548) */
/* 1606 */	
			0x12, 0x0,	/* FC_UP */
/* 1608 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1652) */
/* 1610 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1620 */	0x0 , 
			0x0,		/* 0 */
/* 1622 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1630 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1634 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1636 */	0x0 , 
			0x0,		/* 0 */
/* 1638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1646 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1648 */	NdrFcShort( 0xfe78 ),	/* Offset= -392 (1256) */
/* 1650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1652 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1654 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1664) */
/* 1660 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1662 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1664 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1666 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1610) */
/* 1668 */	
			0x12, 0x0,	/* FC_UP */
/* 1670 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1714) */
/* 1672 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1680 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1682 */	0x0 , 
			0x0,		/* 0 */
/* 1684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1692 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1696 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1698 */	0x0 , 
			0x0,		/* 0 */
/* 1700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1708 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1710 */	NdrFcShort( 0xfdd0 ),	/* Offset= -560 (1150) */
/* 1712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1716 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1720 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1726) */
/* 1722 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1724 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1726 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1728 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1672) */
/* 1730 */	
			0x12, 0x0,	/* FC_UP */
/* 1732 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1776) */
/* 1734 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1738 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1744 */	0x0 , 
			0x0,		/* 0 */
/* 1746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1754 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1758 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1760 */	0x0 , 
			0x0,		/* 0 */
/* 1762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1772 */	NdrFcShort( 0xfe2e ),	/* Offset= -466 (1306) */
/* 1774 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1776 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1778 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1782 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1788) */
/* 1784 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1786 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1788 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1790 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1734) */
/* 1792 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1794 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1798) */
/* 1800 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1802 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1804 */	NdrFcShort( 0xfe42 ),	/* Offset= -446 (1358) */
/* 1806 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1808 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1810 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1812 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1814 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1816) */
/* 1816 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1818 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1820 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1822 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1824 */	0x0 , 
			0x0,		/* 0 */
/* 1826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1830 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0xfca4 ),	/* Offset= -860 (974) */
/* 1836 */	
			0x11, 0x0,	/* FC_RP */
/* 1838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1840) */
/* 1840 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1842 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1844 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1846 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1848 */	0x0 , 
			0x0,		/* 0 */
/* 1850 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0xfc8c ),	/* Offset= -884 (974) */
/* 1860 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1862 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1864) */
/* 1864 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1866 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1868 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1870 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1872 */	0x0 , 
			0x0,		/* 0 */
/* 1874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1884) */
/* 1884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1886 */	NdrFcShort( 0x3033 ),	/* 12339 */
/* 1888 */	NdrFcLong( 0x64 ),	/* 100 */
/* 1892 */	NdrFcShort( 0x130 ),	/* Offset= 304 (2196) */
/* 1894 */	NdrFcLong( 0x65 ),	/* 101 */
/* 1898 */	NdrFcShort( 0x13e ),	/* Offset= 318 (2216) */
/* 1900 */	NdrFcLong( 0x66 ),	/* 102 */
/* 1904 */	NdrFcShort( 0x156 ),	/* Offset= 342 (2246) */
/* 1906 */	NdrFcLong( 0x67 ),	/* 103 */
/* 1910 */	NdrFcShort( 0x178 ),	/* Offset= 376 (2286) */
/* 1912 */	NdrFcLong( 0x1f6 ),	/* 502 */
/* 1916 */	NdrFcShort( 0x19c ),	/* Offset= 412 (2328) */
/* 1918 */	NdrFcLong( 0x1f7 ),	/* 503 */
/* 1922 */	NdrFcShort( 0x1b2 ),	/* Offset= 434 (2356) */
/* 1924 */	NdrFcLong( 0x257 ),	/* 599 */
/* 1928 */	NdrFcShort( 0x1e8 ),	/* Offset= 488 (2416) */
/* 1930 */	NdrFcLong( 0x3ed ),	/* 1005 */
/* 1934 */	NdrFcShort( 0x22c ),	/* Offset= 556 (2490) */
/* 1936 */	NdrFcLong( 0x453 ),	/* 1107 */
/* 1940 */	NdrFcShort( 0xfa1e ),	/* Offset= -1506 (434) */
/* 1942 */	NdrFcLong( 0x3f2 ),	/* 1010 */
/* 1946 */	NdrFcShort( 0xfa18 ),	/* Offset= -1512 (434) */
/* 1948 */	NdrFcLong( 0x3f8 ),	/* 1016 */
/* 1952 */	NdrFcShort( 0xfa12 ),	/* Offset= -1518 (434) */
/* 1954 */	NdrFcLong( 0x3f9 ),	/* 1017 */
/* 1958 */	NdrFcShort( 0xfa0c ),	/* Offset= -1524 (434) */
/* 1960 */	NdrFcLong( 0x3fa ),	/* 1018 */
/* 1964 */	NdrFcShort( 0xfa06 ),	/* Offset= -1530 (434) */
/* 1966 */	NdrFcLong( 0x5dd ),	/* 1501 */
/* 1970 */	NdrFcShort( 0xfa00 ),	/* Offset= -1536 (434) */
/* 1972 */	NdrFcLong( 0x5de ),	/* 1502 */
/* 1976 */	NdrFcShort( 0xf9fa ),	/* Offset= -1542 (434) */
/* 1978 */	NdrFcLong( 0x5df ),	/* 1503 */
/* 1982 */	NdrFcShort( 0xf9f4 ),	/* Offset= -1548 (434) */
/* 1984 */	NdrFcLong( 0x5e2 ),	/* 1506 */
/* 1988 */	NdrFcShort( 0xf9ee ),	/* Offset= -1554 (434) */
/* 1990 */	NdrFcLong( 0x5e6 ),	/* 1510 */
/* 1994 */	NdrFcShort( 0xf9e8 ),	/* Offset= -1560 (434) */
/* 1996 */	NdrFcLong( 0x5e7 ),	/* 1511 */
/* 2000 */	NdrFcShort( 0xf9e2 ),	/* Offset= -1566 (434) */
/* 2002 */	NdrFcLong( 0x5e8 ),	/* 1512 */
/* 2006 */	NdrFcShort( 0xf9dc ),	/* Offset= -1572 (434) */
/* 2008 */	NdrFcLong( 0x5e9 ),	/* 1513 */
/* 2012 */	NdrFcShort( 0xf9d6 ),	/* Offset= -1578 (434) */
/* 2014 */	NdrFcLong( 0x5ea ),	/* 1514 */
/* 2018 */	NdrFcShort( 0xf9d0 ),	/* Offset= -1584 (434) */
/* 2020 */	NdrFcLong( 0x5eb ),	/* 1515 */
/* 2024 */	NdrFcShort( 0xf9ca ),	/* Offset= -1590 (434) */
/* 2026 */	NdrFcLong( 0x5ec ),	/* 1516 */
/* 2030 */	NdrFcShort( 0xf9c4 ),	/* Offset= -1596 (434) */
/* 2032 */	NdrFcLong( 0x5ee ),	/* 1518 */
/* 2036 */	NdrFcShort( 0xf9be ),	/* Offset= -1602 (434) */
/* 2038 */	NdrFcLong( 0x5f3 ),	/* 1523 */
/* 2042 */	NdrFcShort( 0xf9b8 ),	/* Offset= -1608 (434) */
/* 2044 */	NdrFcLong( 0x5f8 ),	/* 1528 */
/* 2048 */	NdrFcShort( 0xf9b2 ),	/* Offset= -1614 (434) */
/* 2050 */	NdrFcLong( 0x5f9 ),	/* 1529 */
/* 2054 */	NdrFcShort( 0xf9ac ),	/* Offset= -1620 (434) */
/* 2056 */	NdrFcLong( 0x5fa ),	/* 1530 */
/* 2060 */	NdrFcShort( 0xf9a6 ),	/* Offset= -1626 (434) */
/* 2062 */	NdrFcLong( 0x5fd ),	/* 1533 */
/* 2066 */	NdrFcShort( 0xf9a0 ),	/* Offset= -1632 (434) */
/* 2068 */	NdrFcLong( 0x5fe ),	/* 1534 */
/* 2072 */	NdrFcShort( 0xf99a ),	/* Offset= -1638 (434) */
/* 2074 */	NdrFcLong( 0x5ff ),	/* 1535 */
/* 2078 */	NdrFcShort( 0xf994 ),	/* Offset= -1644 (434) */
/* 2080 */	NdrFcLong( 0x600 ),	/* 1536 */
/* 2084 */	NdrFcShort( 0xf98e ),	/* Offset= -1650 (434) */
/* 2086 */	NdrFcLong( 0x602 ),	/* 1538 */
/* 2090 */	NdrFcShort( 0xf988 ),	/* Offset= -1656 (434) */
/* 2092 */	NdrFcLong( 0x603 ),	/* 1539 */
/* 2096 */	NdrFcShort( 0xf982 ),	/* Offset= -1662 (434) */
/* 2098 */	NdrFcLong( 0x604 ),	/* 1540 */
/* 2102 */	NdrFcShort( 0xf97c ),	/* Offset= -1668 (434) */
/* 2104 */	NdrFcLong( 0x605 ),	/* 1541 */
/* 2108 */	NdrFcShort( 0xf976 ),	/* Offset= -1674 (434) */
/* 2110 */	NdrFcLong( 0x606 ),	/* 1542 */
/* 2114 */	NdrFcShort( 0xf970 ),	/* Offset= -1680 (434) */
/* 2116 */	NdrFcLong( 0x607 ),	/* 1543 */
/* 2120 */	NdrFcShort( 0xf96a ),	/* Offset= -1686 (434) */
/* 2122 */	NdrFcLong( 0x608 ),	/* 1544 */
/* 2126 */	NdrFcShort( 0xf964 ),	/* Offset= -1692 (434) */
/* 2128 */	NdrFcLong( 0x609 ),	/* 1545 */
/* 2132 */	NdrFcShort( 0xf95e ),	/* Offset= -1698 (434) */
/* 2134 */	NdrFcLong( 0x60a ),	/* 1546 */
/* 2138 */	NdrFcShort( 0xf958 ),	/* Offset= -1704 (434) */
/* 2140 */	NdrFcLong( 0x60b ),	/* 1547 */
/* 2144 */	NdrFcShort( 0xf952 ),	/* Offset= -1710 (434) */
/* 2146 */	NdrFcLong( 0x60c ),	/* 1548 */
/* 2150 */	NdrFcShort( 0xf94c ),	/* Offset= -1716 (434) */
/* 2152 */	NdrFcLong( 0x60d ),	/* 1549 */
/* 2156 */	NdrFcShort( 0xf946 ),	/* Offset= -1722 (434) */
/* 2158 */	NdrFcLong( 0x60e ),	/* 1550 */
/* 2162 */	NdrFcShort( 0xf940 ),	/* Offset= -1728 (434) */
/* 2164 */	NdrFcLong( 0x610 ),	/* 1552 */
/* 2168 */	NdrFcShort( 0xf93a ),	/* Offset= -1734 (434) */
/* 2170 */	NdrFcLong( 0x611 ),	/* 1553 */
/* 2174 */	NdrFcShort( 0xf934 ),	/* Offset= -1740 (434) */
/* 2176 */	NdrFcLong( 0x612 ),	/* 1554 */
/* 2180 */	NdrFcShort( 0xf92e ),	/* Offset= -1746 (434) */
/* 2182 */	NdrFcLong( 0x613 ),	/* 1555 */
/* 2186 */	NdrFcShort( 0xf928 ),	/* Offset= -1752 (434) */
/* 2188 */	NdrFcLong( 0x614 ),	/* 1556 */
/* 2192 */	NdrFcShort( 0xf922 ),	/* Offset= -1758 (434) */
/* 2194 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2193) */
/* 2196 */	
			0x12, 0x0,	/* FC_UP */
/* 2198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2200) */
/* 2200 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2206 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2212) */
/* 2208 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2210 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2212 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2214 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2216 */	
			0x12, 0x0,	/* FC_UP */
/* 2218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2220) */
/* 2220 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2222 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0xc ),	/* Offset= 12 (2238) */
/* 2228 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2230 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2234 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2238 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2242 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2244 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2246 */	
			0x12, 0x0,	/* FC_UP */
/* 2248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2250) */
/* 2250 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2252 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x12 ),	/* Offset= 18 (2274) */
/* 2258 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2260 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2262 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2264 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2266 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2268 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2270 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2272 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2274 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2276 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2278 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2280 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2282 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2284 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2286 */	
			0x12, 0x0,	/* FC_UP */
/* 2288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2290) */
/* 2290 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2292 */	NdrFcShort( 0x50 ),	/* 80 */
/* 2294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2296 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2316) */
/* 2298 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2300 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2302 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2304 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2306 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2308 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2310 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2312 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2314 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2316 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2318 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2320 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2322 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2324 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2326 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2328 */	
			0x12, 0x0,	/* FC_UP */
/* 2330 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2332) */
/* 2332 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2334 */	NdrFcShort( 0x48 ),	/* 72 */
/* 2336 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2338 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2340 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2342 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2346 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2348 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2350 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2356 */	
			0x12, 0x0,	/* FC_UP */
/* 2358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2360) */
/* 2360 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2362 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x2e ),	/* Offset= 46 (2412) */
/* 2368 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2370 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2372 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2374 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2376 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2380 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2382 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2384 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2386 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2388 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2390 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2392 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2398 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2404 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2406 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2410 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2412 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2414 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2416 */	
			0x12, 0x0,	/* FC_UP */
/* 2418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2420) */
/* 2420 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2422 */	NdrFcShort( 0xe8 ),	/* 232 */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x3c ),	/* Offset= 60 (2486) */
/* 2428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2432 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2434 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2436 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2438 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2440 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2442 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2444 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2446 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2448 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2450 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2452 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2454 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2458 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2460 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2462 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2464 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2466 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2468 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2470 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2472 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2474 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2476 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2478 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2480 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2482 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2484 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2486 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2488 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2490 */	
			0x12, 0x0,	/* FC_UP */
/* 2492 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2494) */
/* 2494 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2500 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2504) */
/* 2502 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2504 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2506 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2508 */	
			0x11, 0x0,	/* FC_RP */
/* 2510 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2512) */
/* 2512 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2514 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2516 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2518 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2520 */	0x0 , 
			0x0,		/* 0 */
/* 2522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2530 */	NdrFcShort( 0xfd7a ),	/* Offset= -646 (1884) */
/* 2532 */	
			0x11, 0x0,	/* FC_RP */
/* 2534 */	NdrFcShort( 0x3e ),	/* Offset= 62 (2596) */
/* 2536 */	
			0x29,		/* FC_WSTRING */
			0x5c,		/* FC_PAD */
/* 2538 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2540 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 2542 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2546 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2546) */
/* 2548 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2550 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (2536) */
/* 2552 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2554 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x1,		/* 1 */
/* 2556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2558 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2562 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2564 */	0x0 , 
			0x0,		/* 0 */
/* 2566 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2574 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2580 */	0x0 , 
			0x0,		/* 0 */
/* 2582 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2590 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2592 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (2540) */
/* 2594 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2596 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2598 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2602 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2608) */
/* 2604 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2606 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2608 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2610 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2554) */
/* 2612 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 2614 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2616) */
/* 2616 */	
			0x12, 0x0,	/* FC_UP */
/* 2618 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2620) */
/* 2620 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2622 */	NdrFcShort( 0x44 ),	/* 68 */
/* 2624 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2626 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2628 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2630 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2632 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2634 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2636 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2638 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2640 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2642 */	
			0x11, 0x0,	/* FC_RP */
/* 2644 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2668) */
/* 2646 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2648 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2650 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2652 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2654 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2656 */	0x0 , 
			0x0,		/* 0 */
/* 2658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2666 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2670 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0xa ),	/* Offset= 10 (2684) */
/* 2676 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2678 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2680 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2682 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2684 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2686 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2688 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2690 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2646) */
/* 2692 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2694 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2696 */	
			0x11, 0x0,	/* FC_RP */
/* 2698 */	NdrFcShort( 0x1a0 ),	/* Offset= 416 (3114) */
/* 2700 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2702 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2704 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2706 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2708 */	0x0 , 
			0x0,		/* 0 */
/* 2710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2720) */
/* 2720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2722 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 2724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2728 */	NdrFcShort( 0x16 ),	/* Offset= 22 (2750) */
/* 2730 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2734 */	NdrFcShort( 0x4e ),	/* Offset= 78 (2812) */
/* 2736 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2740 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (2908) */
/* 2742 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2746 */	NdrFcShort( 0x104 ),	/* Offset= 260 (3006) */
/* 2748 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2747) */
/* 2750 */	
			0x12, 0x0,	/* FC_UP */
/* 2752 */	NdrFcShort( 0x2c ),	/* Offset= 44 (2796) */
/* 2754 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2758 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2762 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2764 */	0x0 , 
			0x0,		/* 0 */
/* 2766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2774 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2778 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2780 */	0x0 , 
			0x0,		/* 0 */
/* 2782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2790 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2792 */	NdrFcShort( 0xff84 ),	/* Offset= -124 (2668) */
/* 2794 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2796 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2802 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2808) */
/* 2804 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2806 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2808 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2810 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2754) */
/* 2812 */	
			0x12, 0x0,	/* FC_UP */
/* 2814 */	NdrFcShort( 0x4e ),	/* Offset= 78 (2892) */
/* 2816 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2818 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2822 */	NdrFcShort( 0xc ),	/* Offset= 12 (2834) */
/* 2824 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2826 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2828 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2830 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2832 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2834 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2836 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2838 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2840 */	NdrFcShort( 0xff3e ),	/* Offset= -194 (2646) */
/* 2842 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2844 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2846 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2848 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2850 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2860 */	0x0 , 
			0x0,		/* 0 */
/* 2862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2870 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2874 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2876 */	0x0 , 
			0x0,		/* 0 */
/* 2878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2886 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2888 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (2816) */
/* 2890 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2892 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2894 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2898 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2904) */
/* 2900 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2902 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2904 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2906 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2850) */
/* 2908 */	
			0x12, 0x0,	/* FC_UP */
/* 2910 */	NdrFcShort( 0x50 ),	/* Offset= 80 (2990) */
/* 2912 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2914 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2918 */	NdrFcShort( 0xe ),	/* Offset= 14 (2932) */
/* 2920 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2922 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2924 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2926 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2928 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2930 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2932 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2934 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2936 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2938 */	NdrFcShort( 0xfedc ),	/* Offset= -292 (2646) */
/* 2940 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2942 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2944 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2946 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2948 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2958 */	0x0 , 
			0x0,		/* 0 */
/* 2960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2964 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2968 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2972 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2974 */	0x0 , 
			0x0,		/* 0 */
/* 2976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2984 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2986 */	NdrFcShort( 0xffb6 ),	/* Offset= -74 (2912) */
/* 2988 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2990 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3002) */
/* 2998 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3000 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3002 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3004 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (2948) */
/* 3006 */	
			0x12, 0x0,	/* FC_UP */
/* 3008 */	NdrFcShort( 0x5a ),	/* Offset= 90 (3098) */
/* 3010 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 3012 */	NdrFcShort( 0x100 ),	/* 256 */
/* 3014 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3016 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3018 */	NdrFcShort( 0x138 ),	/* 312 */
/* 3020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3022 */	NdrFcShort( 0x12 ),	/* Offset= 18 (3040) */
/* 3024 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3026 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3028 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3030 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3032 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3034 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3036 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (3010) */
/* 3038 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3040 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3042 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3044 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3046 */	NdrFcShort( 0xfe70 ),	/* Offset= -400 (2646) */
/* 3048 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3050 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3052 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3054 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3056 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3064 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3066 */	0x0 , 
			0x0,		/* 0 */
/* 3068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3076 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3080 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3082 */	0x0 , 
			0x0,		/* 0 */
/* 3084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3092 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3094 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (3016) */
/* 3096 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3098 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3100 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3110) */
/* 3106 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3108 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3110 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3112 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3056) */
/* 3114 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3116 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3120) */
/* 3122 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3124 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3126 */	NdrFcShort( 0xfe56 ),	/* Offset= -426 (2700) */
/* 3128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3130 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3134) */
/* 3134 */	
			0x12, 0x0,	/* FC_UP */
/* 3136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3138) */
/* 3138 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3140 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3144 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3146 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3148 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3150 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3152 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 3154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3156 */	
			0x11, 0x0,	/* FC_RP */
/* 3158 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3160) */
/* 3160 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 3162 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3164 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3168 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 3170 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3176 */	NdrFcLong( 0xfa00 ),	/* 64000 */
/* 3180 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 3182 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3188 */	NdrFcLong( 0xfa00 ),	/* 64000 */
/* 3192 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 3194 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 3196 */	
			0x11, 0x0,	/* FC_RP */
/* 3198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3200) */
/* 3200 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3202 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3204 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3208 */	NdrFcShort( 0x10 ),	/* Corr flags:  */
/* 3210 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3216 */	NdrFcLong( 0xfa00 ),	/* 64000 */
/* 3220 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3222 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3228 */	NdrFcLong( 0xfa00 ),	/* 64000 */
/* 3232 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3234 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3236) */
/* 3236 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 3238 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3240 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 3242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3244) */
/* 3244 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 3246 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3248 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 3250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3252) */
/* 3252 */	
			0x12, 0x0,	/* FC_UP */
/* 3254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3256) */
/* 3256 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3258 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3268) */
/* 3264 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3266 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3268 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3270 */	NdrFcShort( 0xf7f8 ),	/* Offset= -2056 (1214) */
/* 3272 */	
			0x11, 0x0,	/* FC_RP */
/* 3274 */	NdrFcShort( 0xffee ),	/* Offset= -18 (3256) */
/* 3276 */	
			0x11, 0x0,	/* FC_RP */
/* 3278 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3280) */
/* 3280 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3282 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3284 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3286 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3288 */	0x0 , 
			0x0,		/* 0 */
/* 3290 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3300) */
/* 3300 */	NdrFcShort( 0x138 ),	/* 312 */
/* 3302 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 3304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3308 */	NdrFcShort( 0xfd80 ),	/* Offset= -640 (2668) */
/* 3310 */	NdrFcLong( 0x1 ),	/* 1 */
/* 3314 */	NdrFcShort( 0xfe0e ),	/* Offset= -498 (2816) */
/* 3316 */	NdrFcLong( 0x2 ),	/* 2 */
/* 3320 */	NdrFcShort( 0xfe68 ),	/* Offset= -408 (2912) */
/* 3322 */	NdrFcLong( 0x3 ),	/* 3 */
/* 3326 */	NdrFcShort( 0xfeca ),	/* Offset= -310 (3016) */
/* 3328 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3327) */
/* 3330 */	
			0x11, 0x0,	/* FC_RP */
/* 3332 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3340) */
/* 3334 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 3336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3338 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 3340 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 3342 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3344 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 3346 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 3348 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (3334) */
			0x5b,		/* FC_END */
/* 3352 */	
			0x11, 0x0,	/* FC_RP */
/* 3354 */	NdrFcShort( 0x3e ),	/* Offset= 62 (3416) */
/* 3356 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3358 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3362 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3370) */
/* 3364 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3366 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (3340) */
/* 3368 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3370 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3372 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3374 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3378 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3382 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3384 */	0x0 , 
			0x0,		/* 0 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3394 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3398 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3400 */	0x0 , 
			0x0,		/* 0 */
/* 3402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3410 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3412 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3356) */
/* 3414 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3416 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3422 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3428) */
/* 3424 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3426 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3428 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3430 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3374) */
/* 3432 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 3434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3438 */	NdrFcLong( 0x20 ),	/* 32 */
/* 3442 */	
			0x11, 0x0,	/* FC_RP */
/* 3444 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3446) */
/* 3446 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 3448 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3450 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3452 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3454 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 3456 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 3458 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3462 */	NdrFcLong( 0x20 ),	/* 32 */
/* 3466 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 3468 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] [pointer_deref] */
/* 3470 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3472) */
/* 3472 */	
			0x12, 0x0,	/* FC_UP */
/* 3474 */	NdrFcShort( 0x3c ),	/* Offset= 60 (3534) */
/* 3476 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3478 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3482 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3488) */
/* 3484 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3486 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3488 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3490 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3492 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3496 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 3498 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 3500 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3502 */	0x0 , 
			0x0,		/* 0 */
/* 3504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3512 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3516 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3518 */	0x0 , 
			0x0,		/* 0 */
/* 3520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3524 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3528 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3530 */	NdrFcShort( 0xffca ),	/* Offset= -54 (3476) */
/* 3532 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3534 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3538 */	NdrFcShort( 0xffd2 ),	/* Offset= -46 (3492) */
/* 3540 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3540) */
/* 3542 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3544 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3546 */	
			0x11, 0x0,	/* FC_RP */
/* 3548 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3550) */
/* 3550 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3552 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3554 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3556 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3558 */	0x0 , 
			0x0,		/* 0 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3568 */	NdrFcShort( 0xfef4 ),	/* Offset= -268 (3300) */
/* 3570 */	
			0x11, 0x0,	/* FC_RP */
/* 3572 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3574) */
/* 3574 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3576 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3578 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3580 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3582 */	0x0 , 
			0x0,		/* 0 */
/* 3584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3592 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3594) */
/* 3594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3596 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 3598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3602 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3606) */
/* 3604 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3603) */
/* 3606 */	
			0x12, 0x0,	/* FC_UP */
/* 3608 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3610) */
/* 3610 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3612 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3616 */	NdrFcShort( 0x8 ),	/* Offset= 8 (3624) */
/* 3618 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 3620 */	0x2,		/* FC_CHAR */
			0x3f,		/* FC_STRUCTPAD3 */
/* 3622 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 3624 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3626 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3628 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 3630 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 3632 */	
			0x11, 0x0,	/* FC_RP */
/* 3634 */	NdrFcShort( 0x60 ),	/* Offset= 96 (3730) */
/* 3636 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3638 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 3640 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 3642 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3644 */	0x0 , 
			0x0,		/* 0 */
/* 3646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3656) */
/* 3656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3658 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 3660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x4 ),	/* Offset= 4 (3668) */
/* 3666 */	NdrFcShort( 0xffff ),	/* Offset= -1 (3665) */
/* 3668 */	
			0x12, 0x0,	/* FC_UP */
/* 3670 */	NdrFcShort( 0x2c ),	/* Offset= 44 (3714) */
/* 3672 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 3678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3680 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3682 */	0x0 , 
			0x0,		/* 0 */
/* 3684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3692 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 3696 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 3698 */	0x0 , 
			0x0,		/* 0 */
/* 3700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3708 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3710 */	NdrFcShort( 0xff9c ),	/* Offset= -100 (3610) */
/* 3712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3716 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3720 */	NdrFcShort( 0x6 ),	/* Offset= 6 (3726) */
/* 3722 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3724 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 3726 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 3728 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (3672) */
/* 3730 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 3732 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3736 */	NdrFcShort( 0x0 ),	/* Offset= 0 (3736) */
/* 3738 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 3740 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 3742 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (3636) */
/* 3744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 3746 */	
			0x11, 0x0,	/* FC_RP */
/* 3748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3750) */
/* 3750 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3752 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3754 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3756 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3758 */	0x0 , 
			0x0,		/* 0 */
/* 3760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0xff52 ),	/* Offset= -174 (3594) */
/* 3770 */	
			0x11, 0x0,	/* FC_RP */
/* 3772 */	NdrFcShort( 0x2 ),	/* Offset= 2 (3774) */
/* 3774 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 3776 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 3778 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3780 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 3782 */	0x0 , 
			0x0,		/* 0 */
/* 3784 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0xf4fe ),	/* Offset= -2818 (974) */

			0x0
        }
    };

XFG_BIND_TRAMPOLINES(unsigned long long, SRVSVC_HANDLE)

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[ GENERIC_BINDING_TABLE_SIZE ] = 
        {
        {
            (GENERIC_BINDING_ROUTINE) XFG_TRAMPOLINE_FPTR(SRVSVC_HANDLE_bind),
            (GENERIC_UNBIND_ROUTINE) XFG_TRAMPOLINE_FPTR(SRVSVC_HANDLE_unbind)
         }
        
        };


static const unsigned short srvsvc_FormatStringOffsetTable[] =
    {
    0,
    30,
    60,
    90,
    120,
    150,
    180,
    210,
    240,
    314,
    394,
    456,
    506,
    586,
    642,
    704,
    772,
    834,
    902,
    958,
    1014,
    1070,
    1126,
    1188,
    1262,
    1330,
    1386,
    1454,
    1510,
    1560,
    1590,
    1652,
    1732,
    1800,
    1862,
    1936,
    2004,
    2072,
    2134,
    2178,
    2246,
    2314,
    2370,
    2400,
    2450,
    2530,
    2586,
    2648,
    2678,
    2752,
    2814,
    2870,
    2962,
    3012,
    3068,
    3124,
    3192,
    3248
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ms-srvsvc.idl:
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
__midl_frag928_t;
extern const __midl_frag928_t __midl_frag928;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag927_t;
extern const __midl_frag927_t __midl_frag927;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag926_t;
extern const __midl_frag926_t __midl_frag926;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag925_t;
extern const __midl_frag925_t __midl_frag925;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag924_t;
extern const __midl_frag924_t __midl_frag924;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag922_t;
extern const __midl_frag922_t __midl_frag922;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag921_t;
extern const __midl_frag921_t __midl_frag921;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag920_t;
extern const __midl_frag920_t __midl_frag920;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag919_t;
extern const __midl_frag919_t __midl_frag919;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag917_t;
extern const __midl_frag917_t __midl_frag917;

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
__midl_frag916_t;
extern const __midl_frag916_t __midl_frag916;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag915_t;
extern const __midl_frag915_t __midl_frag915;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag913_t;
extern const __midl_frag913_t __midl_frag913;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag912_t;
extern const __midl_frag912_t __midl_frag912;

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
__midl_frag911_t;
extern const __midl_frag911_t __midl_frag911;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag909_t;
extern const __midl_frag909_t __midl_frag909;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag907_t;
extern const __midl_frag907_t __midl_frag907;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag906_t;
extern const __midl_frag906_t __midl_frag906;

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
__midl_frag902_t;
extern const __midl_frag902_t __midl_frag902;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag899_t;
extern const __midl_frag899_t __midl_frag899;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag897_t;
extern const __midl_frag897_t __midl_frag897;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag895_t;
extern const __midl_frag895_t __midl_frag895;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag894_t;
extern const __midl_frag894_t __midl_frag894;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag893_t;
extern const __midl_frag893_t __midl_frag893;

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
__midl_frag892_t;
extern const __midl_frag892_t __midl_frag892;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag891_t;
extern const __midl_frag891_t __midl_frag891;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag889_t;
extern const __midl_frag889_t __midl_frag889;

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
__midl_frag888_t;
extern const __midl_frag888_t __midl_frag888;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag887_t;
extern const __midl_frag887_t __midl_frag887;

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
__midl_frag884_t;
extern const __midl_frag884_t __midl_frag884;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag882_t;
extern const __midl_frag882_t __midl_frag882;

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
__midl_frag879_t;
extern const __midl_frag879_t __midl_frag879;

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
__midl_frag868_t;
extern const __midl_frag868_t __midl_frag868;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag867_t;
extern const __midl_frag867_t __midl_frag867;

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
__midl_frag863_t;
extern const __midl_frag863_t __midl_frag863;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag861_t;
extern const __midl_frag861_t __midl_frag861;

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
__midl_frag859_t;
extern const __midl_frag859_t __midl_frag859;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag857_t;
extern const __midl_frag857_t __midl_frag857;

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
__midl_frag856_t;
extern const __midl_frag856_t __midl_frag856;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag855_t;
extern const __midl_frag855_t __midl_frag855;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag854_t;
extern const __midl_frag854_t __midl_frag854;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag851_t;
extern const __midl_frag851_t __midl_frag851;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag848_t;
extern const __midl_frag848_t __midl_frag848;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag846_t;
extern const __midl_frag846_t __midl_frag846;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag845_t;
extern const __midl_frag845_t __midl_frag845;

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
__midl_frag836_t;
extern const __midl_frag836_t __midl_frag836;

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
}
__midl_frag821_t;
extern const __midl_frag821_t __midl_frag821;

typedef 
NDR64_FORMAT_CHAR
__midl_frag819_t;
extern const __midl_frag819_t __midl_frag819;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag818_t;
extern const __midl_frag818_t __midl_frag818;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag817_t;
extern const __midl_frag817_t __midl_frag817;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag816_t;
extern const __midl_frag816_t __midl_frag816;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag815_t;
extern const __midl_frag815_t __midl_frag815;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag813_t;
extern const __midl_frag813_t __midl_frag813;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag812_t;
extern const __midl_frag812_t __midl_frag812;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag811_t;
extern const __midl_frag811_t __midl_frag811;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag809_t;
extern const __midl_frag809_t __midl_frag809;

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
__midl_frag808_t;
extern const __midl_frag808_t __midl_frag808;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag807_t;
extern const __midl_frag807_t __midl_frag807;

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
__midl_frag799_t;
extern const __midl_frag799_t __midl_frag799;

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
__midl_frag792_t;
extern const __midl_frag792_t __midl_frag792;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag789_t;
extern const __midl_frag789_t __midl_frag789;

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
__midl_frag787_t;
extern const __midl_frag787_t __midl_frag787;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag785_t;
extern const __midl_frag785_t __midl_frag785;

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
__midl_frag784_t;
extern const __midl_frag784_t __midl_frag784;

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
__midl_frag783_t;
extern const __midl_frag783_t __midl_frag783;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag782_t;
extern const __midl_frag782_t __midl_frag782;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag777_t;
extern const __midl_frag777_t __midl_frag777;

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
__midl_frag771_t;
extern const __midl_frag771_t __midl_frag771;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag768_t;
extern const __midl_frag768_t __midl_frag768;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag765_t;
extern const __midl_frag765_t __midl_frag765;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag762_t;
extern const __midl_frag762_t __midl_frag762;

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
__midl_frag761_t;
extern const __midl_frag761_t __midl_frag761;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag760_t;
extern const __midl_frag760_t __midl_frag760;

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
__midl_frag756_t;
extern const __midl_frag756_t __midl_frag756;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag754_t;
extern const __midl_frag754_t __midl_frag754;

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
__midl_frag746_t;
extern const __midl_frag746_t __midl_frag746;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag744_t;
extern const __midl_frag744_t __midl_frag744;

typedef 
NDR64_FORMAT_CHAR
__midl_frag743_t;
extern const __midl_frag743_t __midl_frag743;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag741_t;
extern const __midl_frag741_t __midl_frag741;

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
__midl_frag740_t;
extern const __midl_frag740_t __midl_frag740;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag739_t;
extern const __midl_frag739_t __midl_frag739;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag738_t;
extern const __midl_frag738_t __midl_frag738;

typedef 
NDR64_FORMAT_CHAR
__midl_frag737_t;
extern const __midl_frag737_t __midl_frag737;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag736_t;
extern const __midl_frag736_t __midl_frag736;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag735_t;
extern const __midl_frag735_t __midl_frag735;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag733_t;
extern const __midl_frag733_t __midl_frag733;

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
__midl_frag730_t;
extern const __midl_frag730_t __midl_frag730;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
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
}
__midl_frag726_t;
extern const __midl_frag726_t __midl_frag726;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag724_t;
extern const __midl_frag724_t __midl_frag724;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag723_t;
extern const __midl_frag723_t __midl_frag723;

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
__midl_frag717_t;
extern const __midl_frag717_t __midl_frag717;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag714_t;
extern const __midl_frag714_t __midl_frag714;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag710_t;
extern const __midl_frag710_t __midl_frag710;

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
__midl_frag707_t;
extern const __midl_frag707_t __midl_frag707;

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
__midl_frag697_t;
extern const __midl_frag697_t __midl_frag697;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag693_t;
extern const __midl_frag693_t __midl_frag693;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag691_t;
extern const __midl_frag691_t __midl_frag691;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag690_t;
extern const __midl_frag690_t __midl_frag690;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag689_t;
extern const __midl_frag689_t __midl_frag689;

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
__midl_frag684_t;
extern const __midl_frag684_t __midl_frag684;

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
__midl_frag676_t;
extern const __midl_frag676_t __midl_frag676;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag662_t;
extern const __midl_frag662_t __midl_frag662;

typedef 
NDR64_FORMAT_CHAR
__midl_frag658_t;
extern const __midl_frag658_t __midl_frag658;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag656_t;
extern const __midl_frag656_t __midl_frag656;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag655_t;
extern const __midl_frag655_t __midl_frag655;

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
__midl_frag650_t;
extern const __midl_frag650_t __midl_frag650;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag646_t;
extern const __midl_frag646_t __midl_frag646;

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
__midl_frag641_t;
extern const __midl_frag641_t __midl_frag641;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag640_t;
extern const __midl_frag640_t __midl_frag640;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag638_t;
extern const __midl_frag638_t __midl_frag638;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag637_t;
extern const __midl_frag637_t __midl_frag637;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag636_t;
extern const __midl_frag636_t __midl_frag636;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag633_t;
extern const __midl_frag633_t __midl_frag633;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag631_t;
extern const __midl_frag631_t __midl_frag631;

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
__midl_frag627_t;
extern const __midl_frag627_t __midl_frag627;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag624_t;
extern const __midl_frag624_t __midl_frag624;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag620_t;
extern const __midl_frag620_t __midl_frag620;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag619_t;
extern const __midl_frag619_t __midl_frag619;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag618_t;
extern const __midl_frag618_t __midl_frag618;

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
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag611_t;
extern const __midl_frag611_t __midl_frag611;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag610_t;
extern const __midl_frag610_t __midl_frag610;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag609_t;
extern const __midl_frag609_t __midl_frag609;

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
__midl_frag608_t;
extern const __midl_frag608_t __midl_frag608;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag607_t;
extern const __midl_frag607_t __midl_frag607;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag606_t;
extern const __midl_frag606_t __midl_frag606;

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
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_MEMPAD_FORMAT frag10;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
    } frag2;
}
__midl_frag598_t;
extern const __midl_frag598_t __midl_frag598;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag596_t;
extern const __midl_frag596_t __midl_frag596;

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
__midl_frag595_t;
extern const __midl_frag595_t __midl_frag595;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag594_t;
extern const __midl_frag594_t __midl_frag594;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag593_t;
extern const __midl_frag593_t __midl_frag593;

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
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag585_t;
extern const __midl_frag585_t __midl_frag585;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag583_t;
extern const __midl_frag583_t __midl_frag583;

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
__midl_frag582_t;
extern const __midl_frag582_t __midl_frag582;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag581_t;
extern const __midl_frag581_t __midl_frag581;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag580_t;
extern const __midl_frag580_t __midl_frag580;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag578_t;
extern const __midl_frag578_t __midl_frag578;

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
__midl_frag577_t;
extern const __midl_frag577_t __midl_frag577;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag576_t;
extern const __midl_frag576_t __midl_frag576;

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
__midl_frag574_t;
extern const __midl_frag574_t __midl_frag574;

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
__midl_frag573_t;
extern const __midl_frag573_t __midl_frag573;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag572_t;
extern const __midl_frag572_t __midl_frag572;

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
__midl_frag569_t;
extern const __midl_frag569_t __midl_frag569;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag567_t;
extern const __midl_frag567_t __midl_frag567;

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
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag561_t;
extern const __midl_frag561_t __midl_frag561;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag554_t;
extern const __midl_frag554_t __midl_frag554;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag553_t;
extern const __midl_frag553_t __midl_frag553;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag552_t;
extern const __midl_frag552_t __midl_frag552;

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
__midl_frag545_t;
extern const __midl_frag545_t __midl_frag545;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag538_t;
extern const __midl_frag538_t __midl_frag538;

typedef 
struct _NDR64_NON_CONFORMANT_STRING_FORMAT
__midl_frag537_t;
extern const __midl_frag537_t __midl_frag537;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
    } frag2;
}
__midl_frag536_t;
extern const __midl_frag536_t __midl_frag536;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_NOOP frag2;
    struct _NDR64_EXPR_CONST64 frag3;
}
__midl_frag535_t;
extern const __midl_frag535_t __midl_frag535;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag532_t;
extern const __midl_frag532_t __midl_frag532;

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
__midl_frag531_t;
extern const __midl_frag531_t __midl_frag531;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag530_t;
extern const __midl_frag530_t __midl_frag530;

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
__midl_frag526_t;
extern const __midl_frag526_t __midl_frag526;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag523_t;
extern const __midl_frag523_t __midl_frag523;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag522_t;
extern const __midl_frag522_t __midl_frag522;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag479_t;
extern const __midl_frag479_t __midl_frag479;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag478_t;
extern const __midl_frag478_t __midl_frag478;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag477_t;
extern const __midl_frag477_t __midl_frag477;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag476_t;
extern const __midl_frag476_t __midl_frag476;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag475_t;
extern const __midl_frag475_t __midl_frag475;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag474_t;
extern const __midl_frag474_t __midl_frag474;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag473_t;
extern const __midl_frag473_t __midl_frag473;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag472_t;
extern const __midl_frag472_t __midl_frag472;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag471_t;
extern const __midl_frag471_t __midl_frag471;

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
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    struct _NDR64_UNION_ARM frag22;
    struct _NDR64_UNION_ARM frag23;
    struct _NDR64_UNION_ARM frag24;
    struct _NDR64_UNION_ARM frag25;
    struct _NDR64_UNION_ARM frag26;
    struct _NDR64_UNION_ARM frag27;
    struct _NDR64_UNION_ARM frag28;
    struct _NDR64_UNION_ARM frag29;
    struct _NDR64_UNION_ARM frag30;
    struct _NDR64_UNION_ARM frag31;
    struct _NDR64_UNION_ARM frag32;
    struct _NDR64_UNION_ARM frag33;
    struct _NDR64_UNION_ARM frag34;
    struct _NDR64_UNION_ARM frag35;
    struct _NDR64_UNION_ARM frag36;
    struct _NDR64_UNION_ARM frag37;
    struct _NDR64_UNION_ARM frag38;
    struct _NDR64_UNION_ARM frag39;
    struct _NDR64_UNION_ARM frag40;
    struct _NDR64_UNION_ARM frag41;
    struct _NDR64_UNION_ARM frag42;
    struct _NDR64_UNION_ARM frag43;
    struct _NDR64_UNION_ARM frag44;
    struct _NDR64_UNION_ARM frag45;
    struct _NDR64_UNION_ARM frag46;
    struct _NDR64_UNION_ARM frag47;
    struct _NDR64_UNION_ARM frag48;
    struct _NDR64_UNION_ARM frag49;
    struct _NDR64_UNION_ARM frag50;
    struct _NDR64_UNION_ARM frag51;
    struct _NDR64_UNION_ARM frag52;
    struct _NDR64_UNION_ARM frag53;
    NDR64_UINT32 frag54;
}
__midl_frag470_t;
extern const __midl_frag470_t __midl_frag470;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag469_t;
extern const __midl_frag469_t __midl_frag469;

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
__midl_frag465_t;
extern const __midl_frag465_t __midl_frag465;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag463_t;
extern const __midl_frag463_t __midl_frag463;

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
__midl_frag376_t;
extern const __midl_frag376_t __midl_frag376;

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
__midl_frag373_t;
extern const __midl_frag373_t __midl_frag373;

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
__midl_frag370_t;
extern const __midl_frag370_t __midl_frag370;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag368_t;
extern const __midl_frag368_t __midl_frag368;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag366_t;
extern const __midl_frag366_t __midl_frag366;

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
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
        struct _NDR64_MEMPAD_FORMAT frag17;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag18;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag19;
    } frag2;
}
__midl_frag362_t;
extern const __midl_frag362_t __midl_frag362;

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
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag16;
    } frag2;
}
__midl_frag356_t;
extern const __midl_frag356_t __midl_frag356;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag354_t;
extern const __midl_frag354_t __midl_frag354;

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
        struct _NDR64_MEMPAD_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag351_t;
extern const __midl_frag351_t __midl_frag351;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag349_t;
extern const __midl_frag349_t __midl_frag349;

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
__midl_frag347_t;
extern const __midl_frag347_t __midl_frag347;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag343_t;
extern const __midl_frag343_t __midl_frag343;

typedef 
NDR64_FORMAT_CHAR
__midl_frag342_t;
extern const __midl_frag342_t __midl_frag342;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag341_t;
extern const __midl_frag341_t __midl_frag341;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag340_t;
extern const __midl_frag340_t __midl_frag340;

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
__midl_frag339_t;
extern const __midl_frag339_t __midl_frag339;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag336_t;
extern const __midl_frag336_t __midl_frag336;

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
__midl_frag331_t;
extern const __midl_frag331_t __midl_frag331;

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
__midl_frag324_t;
extern const __midl_frag324_t __midl_frag324;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag313_t;
extern const __midl_frag313_t __midl_frag313;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag312_t;
extern const __midl_frag312_t __midl_frag312;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag311_t;
extern const __midl_frag311_t __midl_frag311;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag310_t;
extern const __midl_frag310_t __midl_frag310;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag308_t;
extern const __midl_frag308_t __midl_frag308;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag307_t;
extern const __midl_frag307_t __midl_frag307;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag306_t;
extern const __midl_frag306_t __midl_frag306;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag305_t;
extern const __midl_frag305_t __midl_frag305;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag303_t;
extern const __midl_frag303_t __midl_frag303;

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
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag295_t;
extern const __midl_frag295_t __midl_frag295;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

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
__midl_frag275_t;
extern const __midl_frag275_t __midl_frag275;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag270_t;
extern const __midl_frag270_t __midl_frag270;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag268_t;
extern const __midl_frag268_t __midl_frag268;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

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
__midl_frag265_t;
extern const __midl_frag265_t __midl_frag265;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag264_t;
extern const __midl_frag264_t __midl_frag264;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag263_t;
extern const __midl_frag263_t __midl_frag263;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag261_t;
extern const __midl_frag261_t __midl_frag261;

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
__midl_frag260_t;
extern const __midl_frag260_t __midl_frag260;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag259_t;
extern const __midl_frag259_t __midl_frag259;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag258_t;
extern const __midl_frag258_t __midl_frag258;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag256_t;
extern const __midl_frag256_t __midl_frag256;

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
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag251_t;
extern const __midl_frag251_t __midl_frag251;

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
__midl_frag250_t;
extern const __midl_frag250_t __midl_frag250;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag249_t;
extern const __midl_frag249_t __midl_frag249;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag248_t;
extern const __midl_frag248_t __midl_frag248;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag246_t;
extern const __midl_frag246_t __midl_frag246;

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
__midl_frag245_t;
extern const __midl_frag245_t __midl_frag245;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag244_t;
extern const __midl_frag244_t __midl_frag244;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag243_t;
extern const __midl_frag243_t __midl_frag243;

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
__midl_frag240_t;
extern const __midl_frag240_t __midl_frag240;

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
__midl_frag239_t;
extern const __midl_frag239_t __midl_frag239;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag238_t;
extern const __midl_frag238_t __midl_frag238;

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
__midl_frag236_t;
extern const __midl_frag236_t __midl_frag236;

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
__midl_frag235_t;
extern const __midl_frag235_t __midl_frag235;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag234_t;
extern const __midl_frag234_t __midl_frag234;

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
__midl_frag231_t;
extern const __midl_frag231_t __midl_frag231;

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
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag225_t;
extern const __midl_frag225_t __midl_frag225;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag224_t;
extern const __midl_frag224_t __midl_frag224;

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
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_MEMPAD_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag12;
        struct _NDR64_MEMPAD_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag15;
    } frag2;
}
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

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
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag213_t;
extern const __midl_frag213_t __midl_frag213;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

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
__midl_frag205_t;
extern const __midl_frag205_t __midl_frag205;

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
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag196_t;
extern const __midl_frag196_t __midl_frag196;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag195_t;
extern const __midl_frag195_t __midl_frag195;

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
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_MEMPAD_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
        struct _NDR64_MEMPAD_FORMAT frag12;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag13;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag14;
    } frag2;
}
__midl_frag190_t;
extern const __midl_frag190_t __midl_frag190;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag188_t;
extern const __midl_frag188_t __midl_frag188;

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
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_MEMPAD_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag10;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag11;
    } frag2;
}
__midl_frag183_t;
extern const __midl_frag183_t __midl_frag183;

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
__midl_frag178_t;
extern const __midl_frag178_t __midl_frag178;

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
__midl_frag172_t;
extern const __midl_frag172_t __midl_frag172;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag171_t;
extern const __midl_frag171_t __midl_frag171;

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
__midl_frag167_t;
extern const __midl_frag167_t __midl_frag167;

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
__midl_frag159_t;
extern const __midl_frag159_t __midl_frag159;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag152_t;
extern const __midl_frag152_t __midl_frag152;

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
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

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
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag7;
            struct _NDR64_POINTER_FORMAT frag8;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag141_t;
extern const __midl_frag141_t __midl_frag141;

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
__midl_frag140_t;
extern const __midl_frag140_t __midl_frag140;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag139_t;
extern const __midl_frag139_t __midl_frag139;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag138_t;
extern const __midl_frag138_t __midl_frag138;

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
__midl_frag135_t;
extern const __midl_frag135_t __midl_frag135;

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
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag131_t;
extern const __midl_frag131_t __midl_frag131;

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
__midl_frag130_t;
extern const __midl_frag130_t __midl_frag130;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag128_t;
extern const __midl_frag128_t __midl_frag128;

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
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

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
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag119_t;
extern const __midl_frag119_t __midl_frag119;

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
}
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

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
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

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
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

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
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag106_t;
extern const __midl_frag106_t __midl_frag106;

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
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

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
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

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
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

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
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag95_t;
extern const __midl_frag95_t __midl_frag95;

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
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
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
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag72_t;
extern const __midl_frag72_t __midl_frag72;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag65_t;
extern const __midl_frag65_t __midl_frag65;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

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
    } frag2;
}
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

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
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag56_t;
extern const __midl_frag56_t __midl_frag56;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

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
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag51_t;
extern const __midl_frag51_t __midl_frag51;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
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
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_BUFFER_ALIGN_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
    } frag2;
}
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

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
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_MEMPAD_FORMAT frag6;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag9;
    } frag2;
}
__midl_frag29_t;
extern const __midl_frag29_t __midl_frag29;

typedef 
struct 
{
    struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

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
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag25_t;
extern const __midl_frag25_t __midl_frag25;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

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
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

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
__midl_frag10_t;
extern const __midl_frag10_t __midl_frag10;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag928_t __midl_frag928 =
0x5    /* FC64_INT32 */;

static const __midl_frag927_t __midl_frag927 =
{ 
/* *_SHARE_INFO_503_I */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag218
};

static const __midl_frag926_t __midl_frag926 =
{ 
/* *_SHARE_INFO_501 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag213
};

static const __midl_frag925_t __midl_frag925 =
{ 
/* *_SHARE_INFO_1005 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag211
};

static const __midl_frag924_t __midl_frag924 =
{ 
/* *_SHARE_INFO_1501_I */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag205
};

static const __midl_frag922_t __midl_frag922 =
{ 
/* *_SHARE_INFO_1004 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag200
};

static const __midl_frag921_t __midl_frag921 =
{ 
/* *_SHARE_INFO_502_I */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag190
};

static const __midl_frag920_t __midl_frag920 =
{ 
/* *_SHARE_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag183
};

static const __midl_frag919_t __midl_frag919 =
{ 
/* *_SHARE_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag178
};

static const __midl_frag917_t __midl_frag917 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag916_t __midl_frag916 =
{ 
/* _SHARE_INFO */
    { 
    /* _SHARE_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag917,
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
        &__midl_frag922,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag919,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag920,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 502 /* 0x1f6 */,
        &__midl_frag921,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1004 /* 0x3ec */,
        &__midl_frag922,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1006 /* 0x3ee */,
        &__midl_frag925,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1501 /* 0x5dd */,
        &__midl_frag924,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1005 /* 0x3ed */,
        &__midl_frag925,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 501 /* 0x1f5 */,
        &__midl_frag926,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 503 /* 0x1f7 */,
        &__midl_frag927,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 0 /* 0x0 */
};

static const __midl_frag915_t __midl_frag915 =
{ 
/* *_SHARE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag916
};

static const __midl_frag913_t __midl_frag913 =
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

static const __midl_frag912_t __midl_frag912 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag913
};

static const __midl_frag911_t __midl_frag911 =
{ 
/* NetrShareDelEx */
    { 
    /* NetrShareDelEx */      /* procedure NetrShareDelEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag928,
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
    /* ShareInfo */      /* parameter ShareInfo */
        &__midl_frag916,
        { 
        /* ShareInfo */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag909_t __midl_frag909 =
{ 
/* *_SERVER_ALIAS_INFO_0 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag879
};

static const __midl_frag907_t __midl_frag907 =
{ 
/* _SERVER_ALIAS_INFO */
    { 
    /* _SERVER_ALIAS_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag917,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag909,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag906_t __midl_frag906 =
{ 
/* *_SERVER_ALIAS_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag907
};

static const __midl_frag902_t __midl_frag902 =
{ 
/* NetrServerAliasDel */
    { 
    /* NetrServerAliasDel */      /* procedure NetrServerAliasDel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag928,
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag907,
        { 
        /* InfoStruct */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag899_t __midl_frag899 =
{ 
/* *long */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag897_t __midl_frag897 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag895_t __midl_frag895 =
{ 
/*  */
    { 
    /* *_SERVER_ALIAS_INFO_0 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag893
    }
};

static const __midl_frag894_t __midl_frag894 =
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

static const __midl_frag893_t __midl_frag893 =
{ 
/* *_SERVER_ALIAS_INFO_0 */
    { 
    /* *_SERVER_ALIAS_INFO_0 */
        { 
        /* *_SERVER_ALIAS_INFO_0 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_SERVER_ALIAS_INFO_0 */
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
            &__midl_frag879
        },
        &__midl_frag894,
        0,
        0
    }
};

static const __midl_frag892_t __midl_frag892 =
{ 
/* SERVER_ALIAS_INFO_0_CONTAINER */
    { 
    /* SERVER_ALIAS_INFO_0_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SERVER_ALIAS_INFO_0_CONTAINER */
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
        &__midl_frag895,
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

static const __midl_frag891_t __midl_frag891 =
{ 
/* *SERVER_ALIAS_INFO_0_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag892
};

static const __midl_frag889_t __midl_frag889 =
{ 
/* _SERVER_ALIAS_ENUM_UNION */
    { 
    /* _SERVER_ALIAS_ENUM_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag894,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag891,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag888_t __midl_frag888 =
{ 
/* _SERVER_ALIAS_ENUM_STRUCT */
    { 
    /* _SERVER_ALIAS_ENUM_STRUCT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_ALIAS_ENUM_STRUCT */
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
            &__midl_frag889
        },
        { 
        /* _SERVER_ALIAS_ENUM_STRUCT */
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

static const __midl_frag887_t __midl_frag887 =
{ 
/* *_SERVER_ALIAS_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag888
};

static const __midl_frag884_t __midl_frag884 =
{ 
/* NetrServerAliasEnum */
    { 
    /* NetrServerAliasEnum */      /* procedure NetrServerAliasEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag888,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag928,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag928,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag899,
        { 
        /* ResumeHandle */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag882_t __midl_frag882 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    }
};

static const __midl_frag879_t __midl_frag879 =
{ 
/* _SERVER_ALIAS_INFO_0 */
    { 
    /* _SERVER_ALIAS_INFO_0 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_ALIAS_INFO_0 */
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
        &__midl_frag882,
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
            0x14,    /* FC64_POINTER */
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
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 3 /* 0x3 */,
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

static const __midl_frag868_t __midl_frag868 =
{ 
/* _TRANSPORT_INFO */
    { 
    /* _TRANSPORT_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 312 /* 0x138 */,
        &__midl_frag917,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag561,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag585,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag598,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag611,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag867_t __midl_frag867 =
{ 
/* *_TRANSPORT_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag868
};

static const __midl_frag863_t __midl_frag863 =
{ 
/* NetrServerTransportDelEx */
    { 
    /* NetrServerTransportDelEx */      /* procedure NetrServerTransportDelEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag928,
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
    /* Buffer */      /* parameter Buffer */
        &__midl_frag868,
        { 
        /* Buffer */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag861_t __midl_frag861 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    }
};

static const __midl_frag859_t __midl_frag859 =
{ 
/* DFS_SITENAME_INFO */
    { 
    /* DFS_SITENAME_INFO */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DFS_SITENAME_INFO */
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
        &__midl_frag861,
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

static const __midl_frag857_t __midl_frag857 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
        { 
        /* struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
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
            &__midl_frag859
        },
        &__midl_frag894,
        0,
        0
    }
};

static const __midl_frag856_t __midl_frag856 =
{ 
/* _DFS_SITELIST_INFO */
    { 
    /* _DFS_SITELIST_INFO */
        0x37,    /* FC64_FORCED_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _DFS_SITELIST_INFO */
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
        &__midl_frag857,
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

static const __midl_frag855_t __midl_frag855 =
{ 
/* *_DFS_SITELIST_INFO */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag856
};

static const __midl_frag854_t __midl_frag854 =
{ 
/* **_DFS_SITELIST_INFO */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag855
};

static const __midl_frag851_t __midl_frag851 =
{ 
/* NetrDfsManagerReportSiteInfo */
    { 
    /* NetrDfsManagerReportSiteInfo */      /* procedure NetrDfsManagerReportSiteInfo */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ppSiteInfo */      /* parameter ppSiteInfo */
        &__midl_frag854,
        { 
        /* ppSiteInfo */
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
            1
        },    /* MustSize, MustFree, [in], [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag848_t __midl_frag848 =
{ 
/* *_NET_DFS_ENTRY_ID_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag783
};

static const __midl_frag846_t __midl_frag846 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag913
};

static const __midl_frag845_t __midl_frag845 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag777
};

static const __midl_frag836_t __midl_frag836 =
{ 
/* NetrDfsFixLocalVolume */
    { 
    /* NetrDfsFixLocalVolume */      /* procedure NetrDfsFixLocalVolume */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 80 /* 0x50 */ ,  /* Stack size */
        (NDR64_UINT32) 96 /* 0x60 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
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
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* VolumeName */      /* parameter VolumeName */
        &__midl_frag913,
        { 
        /* VolumeName */
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
    /* EntryType */      /* parameter EntryType */
        &__midl_frag928,
        { 
        /* EntryType */
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
    /* ServiceType */      /* parameter ServiceType */
        &__midl_frag928,
        { 
        /* ServiceType */
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
    /* StgId */      /* parameter StgId */
        &__midl_frag913,
        { 
        /* StgId */
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
    /* EntryUid */      /* parameter EntryUid */
        &__midl_frag777,
        { 
        /* EntryUid */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* EntryPrefix */      /* parameter EntryPrefix */
        &__midl_frag913,
        { 
        /* EntryPrefix */
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
    /* RelationInfo */      /* parameter RelationInfo */
        &__midl_frag783,
        { 
        /* RelationInfo */
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
    /* CreateDisposition */      /* parameter CreateDisposition */
        &__midl_frag928,
        { 
        /* CreateDisposition */
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
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag829_t __midl_frag829 =
{ 
/* NetrDfsModifyPrefix */
    { 
    /* NetrDfsModifyPrefix */      /* procedure NetrDfsModifyPrefix */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Uid */      /* parameter Uid */
        &__midl_frag777,
        { 
        /* Uid */
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
    /* Prefix */      /* parameter Prefix */
        &__midl_frag913,
        { 
        /* Prefix */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag821_t __midl_frag821 =
{ 
/* NetrDfsDeleteExitPoint */
    { 
    /* NetrDfsDeleteExitPoint */      /* procedure NetrDfsDeleteExitPoint */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Uid */      /* parameter Uid */
        &__midl_frag777,
        { 
        /* Uid */
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
    /* Prefix */      /* parameter Prefix */
        &__midl_frag913,
        { 
        /* Prefix */
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
        &__midl_frag928,
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag819_t __midl_frag819 =
0x11    /* FC64_WCHAR */;

static const __midl_frag818_t __midl_frag818 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 32 /* 0x20 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag817_t __midl_frag817 =
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
        &__midl_frag818
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag819
    }
};

static const __midl_frag816_t __midl_frag816 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag817
};

static const __midl_frag815_t __midl_frag815 =
{ 
/* DWORD */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 32 /* 0x20 */
};

static const __midl_frag813_t __midl_frag813 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
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
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag812_t __midl_frag812 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag813
};

static const __midl_frag811_t __midl_frag811 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag777
};

static const __midl_frag809_t __midl_frag809 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag813
};

static const __midl_frag808_t __midl_frag808 =
{ 
/* NetrDfsCreateExitPoint */
    { 
    /* NetrDfsCreateExitPoint */      /* procedure NetrDfsCreateExitPoint */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Uid */      /* parameter Uid */
        &__midl_frag777,
        { 
        /* Uid */
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
    /* Prefix */      /* parameter Prefix */
        &__midl_frag813,
        { 
        /* Prefix */
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
        &__midl_frag928,
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
    /* ShortPrefixLen */      /* parameter ShortPrefixLen */
        &__midl_frag815,
        { 
        /* ShortPrefixLen */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ShortPrefix */      /* parameter ShortPrefix */
        &__midl_frag817,
        { 
        /* ShortPrefix */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag807_t __midl_frag807 =
{ 
/* Opnum47NotUsedOnWire */
    { 
    /* Opnum47NotUsedOnWire */      /* procedure Opnum47NotUsedOnWire */
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

static const __midl_frag799_t __midl_frag799 =
{ 
/* NetrDfsSetLocalVolumeState */
    { 
    /* NetrDfsSetLocalVolumeState */      /* procedure NetrDfsSetLocalVolumeState */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Uid */      /* parameter Uid */
        &__midl_frag777,
        { 
        /* Uid */
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
    /* Prefix */      /* parameter Prefix */
        &__midl_frag813,
        { 
        /* Prefix */
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
    /* State */      /* parameter State */
        &__midl_frag928,
        { 
        /* State */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag792_t __midl_frag792 =
{ 
/* NetrDfsDeleteLocalPartition */
    { 
    /* NetrDfsDeleteLocalPartition */      /* procedure NetrDfsDeleteLocalPartition */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Uid */      /* parameter Uid */
        &__midl_frag777,
        { 
        /* Uid */
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
    /* Prefix */      /* parameter Prefix */
        &__midl_frag813,
        { 
        /* Prefix */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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
/*  */
    { 
    /* *_NET_DFS_ENTRY_ID */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag784
    }
};

static const __midl_frag787_t __midl_frag787 =
{ 
/* _NET_DFS_ENTRY_ID */
    { 
    /* _NET_DFS_ENTRY_ID */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _NET_DFS_ENTRY_ID */
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
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag813
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag785_t __midl_frag785 =
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

static const __midl_frag784_t __midl_frag784 =
{ 
/* *_NET_DFS_ENTRY_ID */
    { 
    /* *_NET_DFS_ENTRY_ID */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_NET_DFS_ENTRY_ID */
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
        &__midl_frag785
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
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag813
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag787
    }
};

static const __midl_frag783_t __midl_frag783 =
{ 
/* _NET_DFS_ENTRY_ID_CONTAINER */
    { 
    /* _NET_DFS_ENTRY_ID_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _NET_DFS_ENTRY_ID_CONTAINER */
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
        &__midl_frag789,
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

static const __midl_frag782_t __midl_frag782 =
{ 
/* *_NET_DFS_ENTRY_ID_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag783
};

static const __midl_frag777_t __midl_frag777 =
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

static const __midl_frag771_t __midl_frag771 =
{ 
/* NetrDfsCreateLocalPartition */
    { 
    /* NetrDfsCreateLocalPartition */      /* procedure NetrDfsCreateLocalPartition */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 80 /* 0x50 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
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
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ShareName */      /* parameter ShareName */
        &__midl_frag813,
        { 
        /* ShareName */
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
    /* EntryUid */      /* parameter EntryUid */
        &__midl_frag777,
        { 
        /* EntryUid */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* EntryPrefix */      /* parameter EntryPrefix */
        &__midl_frag813,
        { 
        /* EntryPrefix */
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
    /* ShortName */      /* parameter ShortName */
        &__midl_frag813,
        { 
        /* ShortName */
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
    /* RelationInfo */      /* parameter RelationInfo */
        &__midl_frag783,
        { 
        /* RelationInfo */
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
    /* Force */      /* parameter Force */
        &__midl_frag928,
        { 
        /* Force */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag768_t __midl_frag768 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag765_t __midl_frag765 =
{ 
/* NetrDfsGetVersion */
    { 
    /* NetrDfsGetVersion */      /* procedure NetrDfsGetVersion */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Version */      /* parameter Version */
        &__midl_frag928,
        { 
        /* Version */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag762_t __midl_frag762 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag761_t __midl_frag761 =
{ 
/* _TRANSPORT_INFO */
    { 
    /* _TRANSPORT_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 312 /* 0x138 */,
        &__midl_frag762,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag561,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag585,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag598,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag611,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag760_t __midl_frag760 =
{ 
/* *_TRANSPORT_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag761
};

static const __midl_frag756_t __midl_frag756 =
{ 
/* NetrServerTransportAddEx */
    { 
    /* NetrServerTransportAddEx */      /* procedure NetrServerTransportAddEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag928,
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
    /* Buffer */      /* parameter Buffer */
        &__midl_frag761,
        { 
        /* Buffer */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag754_t __midl_frag754 =
{ 
/* *_ADT_SECURITY_DESCRIPTOR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag740
};

static const __midl_frag746_t __midl_frag746 =
{ 
/* NetrpSetFileSecurity */
    { 
    /* NetrpSetFileSecurity */      /* procedure NetrpSetFileSecurity */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ShareName */      /* parameter ShareName */
        &__midl_frag809,
        { 
        /* ShareName */
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
    /* lpFileName */      /* parameter lpFileName */
        &__midl_frag813,
        { 
        /* lpFileName */
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
    /* SecurityInformation */      /* parameter SecurityInformation */
        &__midl_frag928,
        { 
        /* SecurityInformation */
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
    /* SecurityDescriptor */      /* parameter SecurityDescriptor */
        &__midl_frag740,
        { 
        /* SecurityDescriptor */
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
        &__midl_frag928,
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

static const __midl_frag744_t __midl_frag744 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag741
    }
};

static const __midl_frag743_t __midl_frag743 =
0x10    /* FC64_CHAR */;

static const __midl_frag741_t __midl_frag741 =
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
        &__midl_frag785
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag743
    }
};

static const __midl_frag740_t __midl_frag740 =
{ 
/* _ADT_SECURITY_DESCRIPTOR */
    { 
    /* _ADT_SECURITY_DESCRIPTOR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _ADT_SECURITY_DESCRIPTOR */
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
        &__midl_frag744,
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

static const __midl_frag739_t __midl_frag739 =
{ 
/* *_ADT_SECURITY_DESCRIPTOR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag740
};

static const __midl_frag738_t __midl_frag738 =
{ 
/* **_ADT_SECURITY_DESCRIPTOR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag739
};

static const __midl_frag737_t __midl_frag737 =
0x5    /* FC64_INT32 */;

static const __midl_frag736_t __midl_frag736 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
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
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag735_t __midl_frag735 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag736
};

static const __midl_frag733_t __midl_frag733 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag736
};

static const __midl_frag730_t __midl_frag730 =
{ 
/* NetrpGetFileSecurity */
    { 
    /* NetrpGetFileSecurity */      /* procedure NetrpGetFileSecurity */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ShareName */      /* parameter ShareName */
        &__midl_frag733,
        { 
        /* ShareName */
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
    /* lpFileName */      /* parameter lpFileName */
        &__midl_frag736,
        { 
        /* lpFileName */
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
    /* RequestedInformation */      /* parameter RequestedInformation */
        &__midl_frag737,
        { 
        /* RequestedInformation */
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
    /* SecurityDescriptor */      /* parameter SecurityDescriptor */
        &__midl_frag738,
        { 
        /* SecurityDescriptor */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag928,
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

static const __midl_frag728_t __midl_frag728 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag727_t __midl_frag727 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag728
};

static const __midl_frag726_t __midl_frag726 =
{ 
/* NetrShareDelCommit */
    { 
    /* NetrShareDelCommit */      /* procedure NetrShareDelCommit */
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
    /* ContextHandle */      /* parameter ContextHandle */
        &__midl_frag728,
        { 
        /* ContextHandle */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag724_t __midl_frag724 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 0 /* 0x0 */
};

static const __midl_frag723_t __midl_frag723 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag724
};

static const __midl_frag717_t __midl_frag717 =
{ 
/* NetrShareDelStart */
    { 
    /* NetrShareDelStart */      /* procedure NetrShareDelStart */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 68 /* 0x44 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
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
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* NetName */      /* parameter NetName */
        &__midl_frag813,
        { 
        /* NetName */
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
    /* Reserved */      /* parameter Reserved */
        &__midl_frag928,
        { 
        /* Reserved */
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
    /* ContextHandle */      /* parameter ContextHandle */
        &__midl_frag724,
        { 
        /* ContextHandle */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag714_t __midl_frag714 =
{ 
/* *DWORD */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag710_t __midl_frag710 =
{ 
/* *_SHARE_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag235
};

static const __midl_frag707_t __midl_frag707 =
{ 
/* NetrShareEnumSticky */
    { 
    /* NetrShareEnumSticky */      /* procedure NetrShareEnumSticky */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag235,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag928,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag928,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag714,
        { 
        /* ResumeHandle */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag697_t __midl_frag697 =
{ 
/* NetprNameCompare */
    { 
    /* NetprNameCompare */      /* procedure NetprNameCompare */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Name1 */      /* parameter Name1 */
        &__midl_frag913,
        { 
        /* Name1 */
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
    /* Name2 */      /* parameter Name2 */
        &__midl_frag913,
        { 
        /* Name2 */
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
    /* NameType */      /* parameter NameType */
        &__midl_frag928,
        { 
        /* NameType */
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
    /* Flags */      /* parameter Flags */
        &__midl_frag928,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* long */      /* parameter long */
        &__midl_frag928,
        { 
        /* long */
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

static const __midl_frag693_t __midl_frag693 =
{ 
/* DWORD */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 64000 /* 0xfa00 */
};

static const __midl_frag691_t __midl_frag691 =
{ 
/*  */
    (NDR64_UINT32) 4 /* 0x4 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 64000 /* 0xfa00 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */  /* Offset */
    }
};

static const __midl_frag690_t __midl_frag690 =
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
        &__midl_frag691
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag819
    }
};

static const __midl_frag689_t __midl_frag689 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag690
};

static const __midl_frag684_t __midl_frag684 =
{ 
/* NetprNameCanonicalize */
    { 
    /* NetprNameCanonicalize */      /* procedure NetprNameCanonicalize */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag913,
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
    /* Outbuf */      /* parameter Outbuf */
        &__midl_frag690,
        { 
        /* Outbuf */
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
    /* OutbufLen */      /* parameter OutbufLen */
        &__midl_frag693,
        { 
        /* OutbufLen */
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
    /* NameType */      /* parameter NameType */
        &__midl_frag928,
        { 
        /* NameType */
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
    /* Flags */      /* parameter Flags */
        &__midl_frag928,
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag676_t __midl_frag676 =
{ 
/* NetprNameValidate */
    { 
    /* NetprNameValidate */      /* procedure NetprNameValidate */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag913,
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
    /* NameType */      /* parameter NameType */
        &__midl_frag928,
        { 
        /* NameType */
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
    /* Flags */      /* parameter Flags */
        &__midl_frag928,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag662_t __midl_frag662 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag658_t __midl_frag658 =
0x10    /* FC64_CHAR */;

static const __midl_frag656_t __midl_frag656 =
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
        &__midl_frag691
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag658
    }
};

static const __midl_frag655_t __midl_frag655 =
{ 
/* *char */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag656
};

static const __midl_frag650_t __midl_frag650 =
{ 
/* NetprPathCanonicalize */
    { 
    /* NetprPathCanonicalize */      /* procedure NetprPathCanonicalize */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* PathName */      /* parameter PathName */
        &__midl_frag913,
        { 
        /* PathName */
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
    /* Outbuf */      /* parameter Outbuf */
        &__midl_frag656,
        { 
        /* Outbuf */
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
    /* OutbufLen */      /* parameter OutbufLen */
        &__midl_frag693,
        { 
        /* OutbufLen */
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
    /* Prefix */      /* parameter Prefix */
        &__midl_frag913,
        { 
        /* Prefix */
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
    /* PathType */      /* parameter PathType */
        &__midl_frag928,
        { 
        /* PathType */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag928,
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag646_t __midl_frag646 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag641_t __midl_frag641 =
{ 
/* NetprPathType */
    { 
    /* NetprPathType */      /* procedure NetprPathType */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* PathName */      /* parameter PathName */
        &__midl_frag913,
        { 
        /* PathName */
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
    /* PathType */      /* parameter PathType */
        &__midl_frag928,
        { 
        /* PathType */
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
    /* Flags */      /* parameter Flags */
        &__midl_frag928,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag640_t __midl_frag640 =
{ 
/* Opnum29NotUsedOnWire */
    { 
    /* Opnum29NotUsedOnWire */      /* procedure Opnum29NotUsedOnWire */
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

static const __midl_frag638_t __midl_frag638 =
{ 
/* _TIME_OF_DAY_INFO */
    { 
    /* _TIME_OF_DAY_INFO */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _TIME_OF_DAY_INFO */
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
        (NDR64_UINT32) 48 /* 0x30 */
    }
};

static const __midl_frag637_t __midl_frag637 =
{ 
/* *_TIME_OF_DAY_INFO */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag638
};

static const __midl_frag636_t __midl_frag636 =
{ 
/* **_TIME_OF_DAY_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag637
};

static const __midl_frag633_t __midl_frag633 =
{ 
/* NetrRemoteTOD */
    { 
    /* NetrRemoteTOD */      /* procedure NetrRemoteTOD */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 120 /* 0x78 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
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
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BufferPtr */      /* parameter BufferPtr */
        &__midl_frag636,
        { 
        /* BufferPtr */
            0,
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
        },    /* MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag631_t __midl_frag631 =
{ 
/* *SERVER_TRANSPORT_INFO_0 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag561
};

static const __midl_frag627_t __midl_frag627 =
{ 
/* NetrServerTransportDel */
    { 
    /* NetrServerTransportDel */      /* procedure NetrServerTransportDel */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag928,
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
    /* Buffer */      /* parameter Buffer */
        &__midl_frag561,
        { 
        /* Buffer */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag624_t __midl_frag624 =
{ 
/* *DWORD */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag928
};

static const __midl_frag620_t __midl_frag620 =
{ 
/*  */
    { 
    /* *SERVER_TRANSPORT_INFO_3 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag609
    }
};

static const __midl_frag619_t __midl_frag619 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
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
        (NDR64_UINT32) 256 /* 0x100 */
    }
};

static const __midl_frag618_t __midl_frag618 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag613
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    }
};

static const __midl_frag614_t __midl_frag614 =
{ 
/*  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag613_t __midl_frag613 =
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
        &__midl_frag614
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag658
    }
};

static const __midl_frag611_t __midl_frag611 =
{ 
/* SERVER_TRANSPORT_INFO_3 */
    { 
    /* SERVER_TRANSPORT_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SERVER_TRANSPORT_INFO_3 */
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
        (NDR64_UINT32) 312 /* 0x138 */,
        0,
        0,
        &__midl_frag618,
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
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag619
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

static const __midl_frag610_t __midl_frag610 =
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

static const __midl_frag609_t __midl_frag609 =
{ 
/* *SERVER_TRANSPORT_INFO_3 */
    { 
    /* *SERVER_TRANSPORT_INFO_3 */
        { 
        /* *SERVER_TRANSPORT_INFO_3 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *SERVER_TRANSPORT_INFO_3 */
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
            &__midl_frag611
        },
        &__midl_frag610,
        0,
        0
    }
};

static const __midl_frag608_t __midl_frag608 =
{ 
/* _SERVER_XPORT_INFO_3_CONTAINER */
    { 
    /* _SERVER_XPORT_INFO_3_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_XPORT_INFO_3_CONTAINER */
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
        &__midl_frag620,
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

static const __midl_frag607_t __midl_frag607 =
{ 
/* *_SERVER_XPORT_INFO_3_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag608
};

static const __midl_frag606_t __midl_frag606 =
{ 
/*  */
    { 
    /* *SERVER_TRANSPORT_INFO_2 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag596
    }
};

static const __midl_frag598_t __midl_frag598 =
{ 
/* SERVER_TRANSPORT_INFO_2 */
    { 
    /* SERVER_TRANSPORT_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SERVER_TRANSPORT_INFO_2 */
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
        &__midl_frag618,
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
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* SERVER_TRANSPORT_INFO_2 */
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

static const __midl_frag596_t __midl_frag596 =
{ 
/* *SERVER_TRANSPORT_INFO_2 */
    { 
    /* *SERVER_TRANSPORT_INFO_2 */
        { 
        /* *SERVER_TRANSPORT_INFO_2 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *SERVER_TRANSPORT_INFO_2 */
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
            &__midl_frag598
        },
        &__midl_frag610,
        0,
        0
    }
};

static const __midl_frag595_t __midl_frag595 =
{ 
/* _SERVER_XPORT_INFO_2_CONTAINER */
    { 
    /* _SERVER_XPORT_INFO_2_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_XPORT_INFO_2_CONTAINER */
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
        &__midl_frag606,
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

static const __midl_frag594_t __midl_frag594 =
{ 
/* *_SERVER_XPORT_INFO_2_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag595
};

static const __midl_frag593_t __midl_frag593 =
{ 
/*  */
    { 
    /* *SERVER_TRANSPORT_INFO_1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag583
    }
};

static const __midl_frag585_t __midl_frag585 =
{ 
/* SERVER_TRANSPORT_INFO_1 */
    { 
    /* SERVER_TRANSPORT_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SERVER_TRANSPORT_INFO_1 */
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
        &__midl_frag618,
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag583_t __midl_frag583 =
{ 
/* *SERVER_TRANSPORT_INFO_1 */
    { 
    /* *SERVER_TRANSPORT_INFO_1 */
        { 
        /* *SERVER_TRANSPORT_INFO_1 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *SERVER_TRANSPORT_INFO_1 */
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
            &__midl_frag585
        },
        &__midl_frag610,
        0,
        0
    }
};

static const __midl_frag582_t __midl_frag582 =
{ 
/* _SERVER_XPORT_INFO_1_CONTAINER */
    { 
    /* _SERVER_XPORT_INFO_1_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_XPORT_INFO_1_CONTAINER */
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
        &__midl_frag593,
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

static const __midl_frag581_t __midl_frag581 =
{ 
/* *_SERVER_XPORT_INFO_1_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag582
};

static const __midl_frag580_t __midl_frag580 =
{ 
/*  */
    { 
    /* *SERVER_TRANSPORT_INFO_0 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag578
    }
};

static const __midl_frag578_t __midl_frag578 =
{ 
/* *SERVER_TRANSPORT_INFO_0 */
    { 
    /* *SERVER_TRANSPORT_INFO_0 */
        { 
        /* *SERVER_TRANSPORT_INFO_0 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *SERVER_TRANSPORT_INFO_0 */
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
            &__midl_frag561
        },
        &__midl_frag610,
        0,
        0
    }
};

static const __midl_frag577_t __midl_frag577 =
{ 
/* _SERVER_XPORT_INFO_0_CONTAINER */
    { 
    /* _SERVER_XPORT_INFO_0_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_XPORT_INFO_0_CONTAINER */
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
        &__midl_frag580,
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

static const __midl_frag576_t __midl_frag576 =
{ 
/* *_SERVER_XPORT_INFO_0_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag577
};

static const __midl_frag574_t __midl_frag574 =
{ 
/* SERVER_XPORT_ENUM_UNION */
    { 
    /* SERVER_XPORT_ENUM_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag610,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag576,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag581,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag594,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag607,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag573_t __midl_frag573 =
{ 
/* _SERVER_XPORT_ENUM_STRUCT */
    { 
    /* _SERVER_XPORT_ENUM_STRUCT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_XPORT_ENUM_STRUCT */
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
            &__midl_frag574
        },
        { 
        /* _SERVER_XPORT_ENUM_STRUCT */
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

static const __midl_frag572_t __midl_frag572 =
{ 
/* *_SERVER_XPORT_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag573
};

static const __midl_frag569_t __midl_frag569 =
{ 
/* NetrServerTransportEnum */
    { 
    /* NetrServerTransportEnum */      /* procedure NetrServerTransportEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag912,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag573,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag928,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag928,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag624,
        { 
        /* ResumeHandle */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag567_t __midl_frag567 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag613
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag913
    }
};

static const __midl_frag561_t __midl_frag561 =
{ 
/* SERVER_TRANSPORT_INFO_0 */
    { 
    /* SERVER_TRANSPORT_INFO_0 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SERVER_TRANSPORT_INFO_0 */
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
        &__midl_frag567,
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

static const __midl_frag554_t __midl_frag554 =
{ 
/* _STAT_SERVER_0 */
    { 
    /* _STAT_SERVER_0 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _STAT_SERVER_0 */
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
        (NDR64_UINT32) 68 /* 0x44 */
    }
};

static const __midl_frag553_t __midl_frag553 =
{ 
/* *_STAT_SERVER_0 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag554
};

static const __midl_frag552_t __midl_frag552 =
{ 
/* **_STAT_SERVER_0 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag553
};

static const __midl_frag545_t __midl_frag545 =
{ 
/* NetrServerStatisticsGet */
    { 
    /* NetrServerStatisticsGet */      /* procedure NetrServerStatisticsGet */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 140 /* 0x8c */,
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
    /* ServerName */      /* parameter ServerName */
        &__midl_frag809,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Service */      /* parameter Service */
        &__midl_frag809,
        { 
        /* Service */
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
        &__midl_frag928,
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
    /* Options */      /* parameter Options */
        &__midl_frag928,
        { 
        /* Options */
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag552,
        { 
        /* InfoStruct */
            0,
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
        },    /* MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag538_t __midl_frag538 =
{ 
/*  */
    { 
    /* *_DISK_INFO */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag532
    }
};

static const __midl_frag537_t __midl_frag537 =
{ 
/* struct _NDR64_NON_CONFORMANT_STRING_FORMAT */
    { 
    /* struct _NDR64_NON_CONFORMANT_STRING_FORMAT */
        0x61,    /* FC64_WCHAR_STRING */
        { 
        /* struct _NDR64_NON_CONFORMANT_STRING_FORMAT */
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
    },
    (NDR64_UINT32) 6 /* 0x6 */
};

static const __midl_frag536_t __midl_frag536 =
{ 
/* _DISK_INFO */
    { 
    /* _DISK_INFO */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* _DISK_INFO */
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
        (NDR64_UINT32) 6 /* 0x6 */,
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
            &__midl_frag537
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

static const __midl_frag535_t __midl_frag535 =
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

static const __midl_frag532_t __midl_frag532 =
{ 
/* *_DISK_INFO */
    { 
    /* *_DISK_INFO */
        { 
        /* *_DISK_INFO */
            0x47,    /* FC64_BOGUS_ARRAY */
            (NDR64_UINT8) 1 /* 0x1 */,
            { 
            /* *_DISK_INFO */
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
            &__midl_frag536
        },
        &__midl_frag785,
        &__midl_frag785,
        &__midl_frag535
    }
};

static const __midl_frag531_t __midl_frag531 =
{ 
/* DISK_ENUM_CONTAINER */
    { 
    /* DISK_ENUM_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DISK_ENUM_CONTAINER */
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
        &__midl_frag538,
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

static const __midl_frag530_t __midl_frag530 =
{ 
/* *DISK_ENUM_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag531
};

static const __midl_frag526_t __midl_frag526 =
{ 
/* NetrServerDiskEnum */
    { 
    /* NetrServerDiskEnum */      /* procedure NetrServerDiskEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 48 /* 0x30 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag737,
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
    /* DiskInfoStruct */      /* parameter DiskInfoStruct */
        &__midl_frag531,
        { 
        /* DiskInfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag928,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag928,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag714,
        { 
        /* ResumeHandle */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag928,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag523_t __midl_frag523 =
{ 
/* *DWORD */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag737
};

static const __midl_frag522_t __midl_frag522 =
{ 
/* *_SERVER_INFO_1556 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag463
};

static const __midl_frag479_t __midl_frag479 =
{ 
/* *_SERVER_INFO_1005 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag376
};

static const __midl_frag478_t __midl_frag478 =
{ 
/* *_SERVER_INFO_599 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag373
};

static const __midl_frag477_t __midl_frag477 =
{ 
/* *_SERVER_INFO_503 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag370
};

static const __midl_frag476_t __midl_frag476 =
{ 
/* *_SERVER_INFO_502 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag368
};

static const __midl_frag475_t __midl_frag475 =
{ 
/* *_SERVER_INFO_103 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag362
};

static const __midl_frag474_t __midl_frag474 =
{ 
/* *_SERVER_INFO_102 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag356
};

static const __midl_frag473_t __midl_frag473 =
{ 
/* *_SERVER_INFO_101 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag351
};

static const __midl_frag472_t __midl_frag472 =
{ 
/* *_SERVER_INFO_100 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag347
};

static const __midl_frag471_t __midl_frag471 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */  /* Offset */
    }
};

static const __midl_frag470_t __midl_frag470 =
{ 
/* _SERVER_INFO */
    { 
    /* _SERVER_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag471,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 51 /* 0x33 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 100 /* 0x64 */,
        &__midl_frag472,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 101 /* 0x65 */,
        &__midl_frag473,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 102 /* 0x66 */,
        &__midl_frag474,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 103 /* 0x67 */,
        &__midl_frag475,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 502 /* 0x1f6 */,
        &__midl_frag476,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 503 /* 0x1f7 */,
        &__midl_frag477,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 599 /* 0x257 */,
        &__midl_frag478,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1005 /* 0x3ed */,
        &__midl_frag479,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1107 /* 0x453 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1010 /* 0x3f2 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1016 /* 0x3f8 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1017 /* 0x3f9 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1018 /* 0x3fa */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1501 /* 0x5dd */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1502 /* 0x5de */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1503 /* 0x5df */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1506 /* 0x5e2 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1510 /* 0x5e6 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1511 /* 0x5e7 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1512 /* 0x5e8 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1513 /* 0x5e9 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1514 /* 0x5ea */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1515 /* 0x5eb */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1516 /* 0x5ec */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1518 /* 0x5ee */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1523 /* 0x5f3 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1528 /* 0x5f8 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1529 /* 0x5f9 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1530 /* 0x5fa */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1533 /* 0x5fd */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1534 /* 0x5fe */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1535 /* 0x5ff */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1536 /* 0x600 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1538 /* 0x602 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1539 /* 0x603 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1540 /* 0x604 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1541 /* 0x605 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1542 /* 0x606 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1543 /* 0x607 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1544 /* 0x608 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1545 /* 0x609 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1546 /* 0x60a */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1547 /* 0x60b */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1548 /* 0x60c */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1549 /* 0x60d */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1550 /* 0x60e */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1552 /* 0x610 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1553 /* 0x611 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1554 /* 0x612 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1555 /* 0x613 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1556 /* 0x614 */,
        &__midl_frag522,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag469_t __midl_frag469 =
{ 
/* *_SERVER_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag470
};

static const __midl_frag465_t __midl_frag465 =
{ 
/* NetrServerSetInfo */
    { 
    /* NetrServerSetInfo */      /* procedure NetrServerSetInfo */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag737,
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
    /* ServerInfo */      /* parameter ServerInfo */
        &__midl_frag470,
        { 
        /* ServerInfo */
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
    /* ParmErr */      /* parameter ParmErr */
        &__midl_frag523,
        { 
        /* ParmErr */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag463_t __midl_frag463 =
{ 
/* _SERVER_INFO_1556 */
    { 
    /* _SERVER_INFO_1556 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _SERVER_INFO_1556 */
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

static const __midl_frag376_t __midl_frag376 =
{ 
/* _SERVER_INFO_1005 */
    { 
    /* _SERVER_INFO_1005 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_1005 */
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
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag373_t __midl_frag373 =
{ 
/* _SERVER_INFO_599 */
    { 
    /* _SERVER_INFO_599 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_599 */
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
        (NDR64_UINT32) 232 /* 0xe8 */
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
            (NDR64_UINT32) 72 /* 0x48 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag370_t __midl_frag370 =
{ 
/* _SERVER_INFO_503 */
    { 
    /* _SERVER_INFO_503 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_503 */
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
        (NDR64_UINT32) 176 /* 0xb0 */
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
            (NDR64_UINT32) 72 /* 0x48 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *wchar_t */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag368_t __midl_frag368 =
{ 
/* _SERVER_INFO_502 */
    { 
    /* _SERVER_INFO_502 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _SERVER_INFO_502 */
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
        (NDR64_UINT32) 72 /* 0x48 */
    }
};

static const __midl_frag366_t __midl_frag366 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    }
};

static const __midl_frag362_t __midl_frag362 =
{ 
/* _SERVER_INFO_103 */
    { 
    /* _SERVER_INFO_103 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_103 */
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
        (NDR64_UINT32) 80 /* 0x50 */,
        0,
        0,
        &__midl_frag366,
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
        /* _SERVER_INFO_103 */
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

static const __midl_frag356_t __midl_frag356 =
{ 
/* _SERVER_INFO_102 */
    { 
    /* _SERVER_INFO_102 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_102 */
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
        (NDR64_UINT32) 72 /* 0x48 */,
        0,
        0,
        &__midl_frag366,
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag354_t __midl_frag354 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    }
};

static const __midl_frag351_t __midl_frag351 =
{ 
/* _SERVER_INFO_101 */
    { 
    /* _SERVER_INFO_101 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_101 */
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
        &__midl_frag354,
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

static const __midl_frag349_t __midl_frag349 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    }
};

static const __midl_frag347_t __midl_frag347 =
{ 
/* _SERVER_INFO_100 */
    { 
    /* _SERVER_INFO_100 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SERVER_INFO_100 */
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
        &__midl_frag349,
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

static const __midl_frag343_t __midl_frag343 =
{ 
/* *_SERVER_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag470
};

static const __midl_frag342_t __midl_frag342 =
0x5    /* FC64_INT32 */;

static const __midl_frag341_t __midl_frag341 =
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

static const __midl_frag340_t __midl_frag340 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag341
};

static const __midl_frag339_t __midl_frag339 =
{ 
/* NetrServerGetInfo */
    { 
    /* NetrServerGetInfo */      /* procedure NetrServerGetInfo */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag340,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag342,
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag470,
        { 
        /* InfoStruct */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag336_t __midl_frag336 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag342
};

static const __midl_frag331_t __midl_frag331 =
{ 
/* NetrShareCheck */
    { 
    /* NetrShareCheck */      /* procedure NetrShareCheck */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Device */      /* parameter Device */
        &__midl_frag736,
        { 
        /* Device */
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
        &__midl_frag342,
        { 
        /* Type */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag342,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag324_t __midl_frag324 =
{ 
/* NetrShareDelSticky */
    { 
    /* NetrShareDelSticky */      /* procedure NetrShareDelSticky */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* NetName */      /* parameter NetName */
        &__midl_frag736,
        { 
        /* NetName */
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
    /* Reserved */      /* parameter Reserved */
        &__midl_frag737,
        { 
        /* Reserved */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag313_t __midl_frag313 =
{ 
/* *_SHARE_INFO_503_I */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag218
};

static const __midl_frag312_t __midl_frag312 =
{ 
/* *_SHARE_INFO_501 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag213
};

static const __midl_frag311_t __midl_frag311 =
{ 
/* *_SHARE_INFO_1005 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag211
};

static const __midl_frag310_t __midl_frag310 =
{ 
/* *_SHARE_INFO_1501_I */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag205
};

static const __midl_frag308_t __midl_frag308 =
{ 
/* *_SHARE_INFO_1004 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag200
};

static const __midl_frag307_t __midl_frag307 =
{ 
/* *_SHARE_INFO_502_I */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag190
};

static const __midl_frag306_t __midl_frag306 =
{ 
/* *_SHARE_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag183
};

static const __midl_frag305_t __midl_frag305 =
{ 
/* *_SHARE_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag178
};

static const __midl_frag303_t __midl_frag303 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag302_t __midl_frag302 =
{ 
/* _SHARE_INFO */
    { 
    /* _SHARE_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag303,
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
        &__midl_frag308,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag305,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag306,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 502 /* 0x1f6 */,
        &__midl_frag307,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1004 /* 0x3ec */,
        &__midl_frag308,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1006 /* 0x3ee */,
        &__midl_frag311,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1501 /* 0x5dd */,
        &__midl_frag310,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1005 /* 0x3ed */,
        &__midl_frag311,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 501 /* 0x1f5 */,
        &__midl_frag312,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 503 /* 0x1f7 */,
        &__midl_frag313,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 0 /* 0x0 */
};

static const __midl_frag301_t __midl_frag301 =
{ 
/* *_SHARE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag302
};

static const __midl_frag295_t __midl_frag295 =
{ 
/* NetrShareSetInfo */
    { 
    /* NetrShareSetInfo */      /* procedure NetrShareSetInfo */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* NetName */      /* parameter NetName */
        &__midl_frag736,
        { 
        /* NetName */
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
        &__midl_frag737,
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
    /* ShareInfo */      /* parameter ShareInfo */
        &__midl_frag302,
        { 
        /* ShareInfo */
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
    /* ParmErr */      /* parameter ParmErr */
        &__midl_frag523,
        { 
        /* ParmErr */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag281_t __midl_frag281 =
{ 
/* *_SHARE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag302
};

static const __midl_frag275_t __midl_frag275 =
{ 
/* NetrShareGetInfo */
    { 
    /* NetrShareGetInfo */      /* procedure NetrShareGetInfo */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* NetName */      /* parameter NetName */
        &__midl_frag736,
        { 
        /* NetName */
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
        &__midl_frag737,
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag302,
        { 
        /* InfoStruct */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag270_t __midl_frag270 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag737
};

static const __midl_frag268_t __midl_frag268 =
{ 
/*  */
    { 
    /* *_SHARE_INFO_503_I */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag266
    }
};

static const __midl_frag267_t __midl_frag267 =
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

static const __midl_frag266_t __midl_frag266 =
{ 
/* *_SHARE_INFO_503_I */
    { 
    /* *_SHARE_INFO_503_I */
        { 
        /* *_SHARE_INFO_503_I */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_SHARE_INFO_503_I */
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
            &__midl_frag218
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag265_t __midl_frag265 =
{ 
/* SHARE_INFO_503_CONTAINER */
    { 
    /* SHARE_INFO_503_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SHARE_INFO_503_CONTAINER */
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
        &__midl_frag268,
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

static const __midl_frag264_t __midl_frag264 =
{ 
/* *SHARE_INFO_503_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag265
};

static const __midl_frag263_t __midl_frag263 =
{ 
/*  */
    { 
    /* *_SHARE_INFO_502_I */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag261
    }
};

static const __midl_frag261_t __midl_frag261 =
{ 
/* *_SHARE_INFO_502_I */
    { 
    /* *_SHARE_INFO_502_I */
        { 
        /* *_SHARE_INFO_502_I */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_SHARE_INFO_502_I */
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
            &__midl_frag190
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag260_t __midl_frag260 =
{ 
/* SHARE_INFO_502_CONTAINER */
    { 
    /* SHARE_INFO_502_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SHARE_INFO_502_CONTAINER */
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
        &__midl_frag263,
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

static const __midl_frag259_t __midl_frag259 =
{ 
/* *SHARE_INFO_502_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag260
};

static const __midl_frag258_t __midl_frag258 =
{ 
/*  */
    { 
    /* *_SHARE_INFO_501 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag256
    }
};

static const __midl_frag256_t __midl_frag256 =
{ 
/* *_SHARE_INFO_501 */
    { 
    /* *_SHARE_INFO_501 */
        { 
        /* *_SHARE_INFO_501 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_SHARE_INFO_501 */
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
            &__midl_frag213
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag255_t __midl_frag255 =
{ 
/* SHARE_INFO_501_CONTAINER */
    { 
    /* SHARE_INFO_501_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SHARE_INFO_501_CONTAINER */
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
        &__midl_frag258,
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

static const __midl_frag254_t __midl_frag254 =
{ 
/* *SHARE_INFO_501_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag255
};

static const __midl_frag253_t __midl_frag253 =
{ 
/*  */
    { 
    /* *_SHARE_INFO_2 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag251
    }
};

static const __midl_frag251_t __midl_frag251 =
{ 
/* *_SHARE_INFO_2 */
    { 
    /* *_SHARE_INFO_2 */
        { 
        /* *_SHARE_INFO_2 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_SHARE_INFO_2 */
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
            &__midl_frag183
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag250_t __midl_frag250 =
{ 
/* SHARE_INFO_2_CONTAINER */
    { 
    /* SHARE_INFO_2_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SHARE_INFO_2_CONTAINER */
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
        &__midl_frag253,
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

static const __midl_frag249_t __midl_frag249 =
{ 
/* *SHARE_INFO_2_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag250
};

static const __midl_frag248_t __midl_frag248 =
{ 
/*  */
    { 
    /* *_SHARE_INFO_1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag246
    }
};

static const __midl_frag246_t __midl_frag246 =
{ 
/* *_SHARE_INFO_1 */
    { 
    /* *_SHARE_INFO_1 */
        { 
        /* *_SHARE_INFO_1 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_SHARE_INFO_1 */
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
            &__midl_frag178
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag245_t __midl_frag245 =
{ 
/* SHARE_INFO_1_CONTAINER */
    { 
    /* SHARE_INFO_1_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SHARE_INFO_1_CONTAINER */
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
        &__midl_frag248,
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

static const __midl_frag244_t __midl_frag244 =
{ 
/* *SHARE_INFO_1_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag245
};

static const __midl_frag243_t __midl_frag243 =
{ 
/*  */
    { 
    /* *_SHARE_INFO_0 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag240
    }
};

static const __midl_frag240_t __midl_frag240 =
{ 
/* *_SHARE_INFO_0 */
    { 
    /* *_SHARE_INFO_0 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_SHARE_INFO_0 */
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
        &__midl_frag267
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
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag736
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag200
    }
};

static const __midl_frag239_t __midl_frag239 =
{ 
/* SHARE_INFO_0_CONTAINER */
    { 
    /* SHARE_INFO_0_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SHARE_INFO_0_CONTAINER */
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
        &__midl_frag243,
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

static const __midl_frag238_t __midl_frag238 =
{ 
/* *SHARE_INFO_0_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag239
};

static const __midl_frag236_t __midl_frag236 =
{ 
/* SHARE_ENUM_UNION */
    { 
    /* SHARE_ENUM_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag267,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag238,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag244,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag249,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 501 /* 0x1f5 */,
        &__midl_frag254,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 502 /* 0x1f6 */,
        &__midl_frag259,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 503 /* 0x1f7 */,
        &__midl_frag264,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag235_t __midl_frag235 =
{ 
/* _SHARE_ENUM_STRUCT */
    { 
    /* _SHARE_ENUM_STRUCT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_ENUM_STRUCT */
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
            &__midl_frag236
        },
        { 
        /* _SHARE_ENUM_STRUCT */
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

static const __midl_frag234_t __midl_frag234 =
{ 
/* *_SHARE_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag235
};

static const __midl_frag231_t __midl_frag231 =
{ 
/* NetrShareEnum */
    { 
    /* NetrShareEnum */      /* procedure NetrShareEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag235,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag737,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag737,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag523,
        { 
        /* ResumeHandle */
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag227_t __midl_frag227 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag224
    }
};

static const __midl_frag225_t __midl_frag225 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 64 /* 0x40 */
    }
};

static const __midl_frag224_t __midl_frag224 =
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
        &__midl_frag225
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag743
    }
};

static const __midl_frag218_t __midl_frag218 =
{ 
/* _SHARE_INFO_503_I */
    { 
    /* _SHARE_INFO_503_I */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_503_I */
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
        (NDR64_UINT32) 80 /* 0x50 */,
        0,
        0,
        &__midl_frag227,
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

static const __midl_frag216_t __midl_frag216 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    }
};

static const __midl_frag213_t __midl_frag213 =
{ 
/* _SHARE_INFO_501 */
    { 
    /* _SHARE_INFO_501 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_501 */
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
        &__midl_frag216,
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
        /* _SHARE_INFO_501 */
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

static const __midl_frag211_t __midl_frag211 =
{ 
/* _SHARE_INFO_1005 */
    { 
    /* _SHARE_INFO_1005 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* _SHARE_INFO_1005 */
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

static const __midl_frag209_t __midl_frag209 =
{ 
/*  */
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag741
    }
};

static const __midl_frag205_t __midl_frag205 =
{ 
/* _SHARE_INFO_1501_I */
    { 
    /* _SHARE_INFO_1501_I */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_1501_I */
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
        &__midl_frag209,
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

static const __midl_frag200_t __midl_frag200 =
{ 
/* _SHARE_INFO_1004 */
    { 
    /* _SHARE_INFO_1004 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_1004 */
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
            &__midl_frag813
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag198_t __midl_frag198 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag195
    }
};

static const __midl_frag196_t __midl_frag196 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */
    }
};

static const __midl_frag195_t __midl_frag195 =
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
        &__midl_frag196
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag743
    }
};

static const __midl_frag190_t __midl_frag190 =
{ 
/* _SHARE_INFO_502_I */
    { 
    /* _SHARE_INFO_502_I */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_502_I */
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
        (NDR64_UINT32) 72 /* 0x48 */,
        0,
        0,
        &__midl_frag198,
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

static const __midl_frag188_t __midl_frag188 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag813
    }
};

static const __midl_frag183_t __midl_frag183 =
{ 
/* _SHARE_INFO_2 */
    { 
    /* _SHARE_INFO_2 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_2 */
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
        &__midl_frag188,
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag178_t __midl_frag178 =
{ 
/* _SHARE_INFO_1 */
    { 
    /* _SHARE_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SHARE_INFO_1 */
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
        &__midl_frag216,
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

static const __midl_frag172_t __midl_frag172 =
{ 
/* _SHARE_INFO */
    { 
    /* _SHARE_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag471,
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
        &__midl_frag308,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag305,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag306,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 502 /* 0x1f6 */,
        &__midl_frag307,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1004 /* 0x3ec */,
        &__midl_frag308,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1006 /* 0x3ee */,
        &__midl_frag311,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1501 /* 0x5dd */,
        &__midl_frag310,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1005 /* 0x3ed */,
        &__midl_frag311,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 501 /* 0x1f5 */,
        &__midl_frag312,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 503 /* 0x1f7 */,
        &__midl_frag313,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 0 /* 0x0 */
};

static const __midl_frag171_t __midl_frag171 =
{ 
/* *_SHARE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag172
};

static const __midl_frag167_t __midl_frag167 =
{ 
/* NetrShareAdd */
    { 
    /* NetrShareAdd */      /* procedure NetrShareAdd */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag737,
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag172,
        { 
        /* InfoStruct */
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
    /* ParmErr */      /* parameter ParmErr */
        &__midl_frag523,
        { 
        /* ParmErr */
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag159_t __midl_frag159 =
{ 
/* NetrSessionDel */
    { 
    /* NetrSessionDel */      /* procedure NetrSessionDel */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ClientName */      /* parameter ClientName */
        &__midl_frag733,
        { 
        /* ClientName */
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
    /* UserName */      /* parameter UserName */
        &__midl_frag733,
        { 
        /* UserName */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag152_t __midl_frag152 =
{ 
/*  */
    { 
    /* *_SESSION_INFO_502 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag141
    }
};

static const __midl_frag147_t __midl_frag147 =
{ 
/* _SESSION_INFO_502 */
    { 
    /* _SESSION_INFO_502 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SESSION_INFO_502 */
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
        (NDR64_UINT32) 48 /* 0x30 */
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
            &__midl_frag736
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
            &__midl_frag736
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
            &__midl_frag736
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
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag141_t __midl_frag141 =
{ 
/* *_SESSION_INFO_502 */
    { 
    /* *_SESSION_INFO_502 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_SESSION_INFO_502 */
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
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag267
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
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 4 /* 0x4 */
        },
        { 
        /*  */
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
                &__midl_frag736
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
                &__midl_frag736
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
                &__midl_frag736
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
                &__midl_frag736
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 48 /* 0x30 */,
        &__midl_frag147
    }
};

static const __midl_frag140_t __midl_frag140 =
{ 
/* SESSION_INFO_502_CONTAINER */
    { 
    /* SESSION_INFO_502_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SESSION_INFO_502_CONTAINER */
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
        &__midl_frag152,
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

static const __midl_frag139_t __midl_frag139 =
{ 
/* *SESSION_INFO_502_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag140
};

static const __midl_frag138_t __midl_frag138 =
{ 
/*  */
    { 
    /* *_SESSION_INFO_10 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag131
    }
};

static const __midl_frag135_t __midl_frag135 =
{ 
/* _SESSION_INFO_10 */
    { 
    /* _SESSION_INFO_10 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SESSION_INFO_10 */
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
            &__midl_frag736
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
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag131_t __midl_frag131 =
{ 
/* *_SESSION_INFO_10 */
    { 
    /* *_SESSION_INFO_10 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_SESSION_INFO_10 */
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
        &__midl_frag267
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
            (NDR64_UINT32) 2 /* 0x2 */
        },
        { 
        /*  */
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
                &__midl_frag736
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
                &__midl_frag736
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag135
    }
};

static const __midl_frag130_t __midl_frag130 =
{ 
/* SESSION_INFO_10_CONTAINER */
    { 
    /* SESSION_INFO_10_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SESSION_INFO_10_CONTAINER */
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
        &__midl_frag138,
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

static const __midl_frag129_t __midl_frag129 =
{ 
/* *SESSION_INFO_10_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag130
};

static const __midl_frag128_t __midl_frag128 =
{ 
/*  */
    { 
    /* *_SESSION_INFO_2 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag119
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* _SESSION_INFO_2 */
    { 
    /* _SESSION_INFO_2 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SESSION_INFO_2 */
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
        (NDR64_UINT32) 40 /* 0x28 */
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
            &__midl_frag736
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
            &__midl_frag736
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
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag119_t __midl_frag119 =
{ 
/* *_SESSION_INFO_2 */
    { 
    /* *_SESSION_INFO_2 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_SESSION_INFO_2 */
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
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag267
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
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 3 /* 0x3 */
        },
        { 
        /*  */
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
                &__midl_frag736
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
                &__midl_frag736
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
                &__midl_frag736
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 40 /* 0x28 */,
        &__midl_frag124
    }
};

static const __midl_frag118_t __midl_frag118 =
{ 
/* SESSION_INFO_2_CONTAINER */
    { 
    /* SESSION_INFO_2_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SESSION_INFO_2_CONTAINER */
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
        &__midl_frag128,
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

static const __midl_frag117_t __midl_frag117 =
{ 
/* *SESSION_INFO_2_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag118
};

static const __midl_frag116_t __midl_frag116 =
{ 
/*  */
    { 
    /* *_SESSION_INFO_1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag109
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* _SESSION_INFO_1 */
    { 
    /* _SESSION_INFO_1 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SESSION_INFO_1 */
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
            &__midl_frag736
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
            &__midl_frag736
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* *_SESSION_INFO_1 */
    { 
    /* *_SESSION_INFO_1 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_SESSION_INFO_1 */
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
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag267
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
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 2 /* 0x2 */
        },
        { 
        /*  */
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
                &__midl_frag736
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
                &__midl_frag736
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag113
    }
};

static const __midl_frag108_t __midl_frag108 =
{ 
/* SESSION_INFO_1_CONTAINER */
    { 
    /* SESSION_INFO_1_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SESSION_INFO_1_CONTAINER */
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag107_t __midl_frag107 =
{ 
/* *SESSION_INFO_1_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag108
};

static const __midl_frag106_t __midl_frag106 =
{ 
/*  */
    { 
    /* *_SESSION_INFO_0 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag101
    }
};

static const __midl_frag101_t __midl_frag101 =
{ 
/* *_SESSION_INFO_0 */
    { 
    /* *_SESSION_INFO_0 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *_SESSION_INFO_0 */
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
        &__midl_frag267
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
            /* *wchar_t */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag736
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag376
    }
};

static const __midl_frag100_t __midl_frag100 =
{ 
/* SESSION_INFO_0_CONTAINER */
    { 
    /* SESSION_INFO_0_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SESSION_INFO_0_CONTAINER */
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
        &__midl_frag106,
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

static const __midl_frag99_t __midl_frag99 =
{ 
/* *SESSION_INFO_0_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag100
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* SESSION_ENUM_UNION */
    { 
    /* SESSION_ENUM_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag267,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag99,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag107,
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
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag129,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 502 /* 0x1f6 */,
        &__midl_frag139,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* _SESSION_ENUM_STRUCT */
    { 
    /* _SESSION_ENUM_STRUCT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _SESSION_ENUM_STRUCT */
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
            &__midl_frag97
        },
        { 
        /* _SESSION_ENUM_STRUCT */
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

static const __midl_frag95_t __midl_frag95 =
{ 
/* *_SESSION_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag96
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* NetrSessionEnum */
    { 
    /* NetrSessionEnum */      /* procedure NetrSessionEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* ClientName */      /* parameter ClientName */
        &__midl_frag733,
        { 
        /* ClientName */
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
    /* UserName */      /* parameter UserName */
        &__midl_frag733,
        { 
        /* UserName */
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag96,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag737,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag737,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag523,
        { 
        /* ResumeHandle */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag83_t __midl_frag83 =
{ 
/* NetrFileClose */
    { 
    /* NetrFileClose */      /* procedure NetrFileClose */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* FileId */      /* parameter FileId */
        &__midl_frag737,
        { 
        /* FileId */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag81_t __midl_frag81 =
{ 
/* *_FILE_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag61
};

static const __midl_frag80_t __midl_frag80 =
{ 
/* *_FILE_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag463
};

static const __midl_frag78_t __midl_frag78 =
{ 
/* _FILE_INFO */
    { 
    /* _FILE_INFO */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag303,
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
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag80,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag81,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* *_FILE_INFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag78
};

static const __midl_frag72_t __midl_frag72 =
{ 
/* NetrFileGetInfo */
    { 
    /* NetrFileGetInfo */      /* procedure NetrFileGetInfo */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* FileId */      /* parameter FileId */
        &__midl_frag737,
        { 
        /* FileId */
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
        &__midl_frag737,
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag78,
        { 
        /* InfoStruct */
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
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag65_t __midl_frag65 =
{ 
/*  */
    { 
    /* *_FILE_INFO_3 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag59
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag736
    }
};

static const __midl_frag61_t __midl_frag61 =
{ 
/* _FILE_INFO_3 */
    { 
    /* _FILE_INFO_3 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _FILE_INFO_3 */
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
        &__midl_frag64,
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* *_FILE_INFO_3 */
    { 
    /* *_FILE_INFO_3 */
        { 
        /* *_FILE_INFO_3 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_FILE_INFO_3 */
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
            &__midl_frag61
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag58_t __midl_frag58 =
{ 
/* FILE_INFO_3_CONTAINER */
    { 
    /* FILE_INFO_3_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* FILE_INFO_3_CONTAINER */
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
        &__midl_frag65,
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

static const __midl_frag57_t __midl_frag57 =
{ 
/* *FILE_INFO_3_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag58
};

static const __midl_frag56_t __midl_frag56 =
{ 
/*  */
    { 
    /* *_FILE_INFO_2 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag53
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* *_FILE_INFO_2 */
    { 
    /* *_FILE_INFO_2 */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *_FILE_INFO_2 */
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
        &__midl_frag267
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag463
    }
};

static const __midl_frag52_t __midl_frag52 =
{ 
/* FILE_INFO_2_CONTAINER */
    { 
    /* FILE_INFO_2_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* FILE_INFO_2_CONTAINER */
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
        &__midl_frag56,
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

static const __midl_frag51_t __midl_frag51 =
{ 
/* *FILE_INFO_2_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag52
};

static const __midl_frag49_t __midl_frag49 =
{ 
/* FILE_ENUM_UNION */
    { 
    /* FILE_ENUM_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag267,
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
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag51,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag57,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* _FILE_ENUM_STRUCT */
    { 
    /* _FILE_ENUM_STRUCT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _FILE_ENUM_STRUCT */
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
            &__midl_frag49
        },
        { 
        /* _FILE_ENUM_STRUCT */
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

static const __midl_frag47_t __midl_frag47 =
{ 
/* *_FILE_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag48
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* NetrFileEnum */
    { 
    /* NetrFileEnum */      /* procedure NetrFileEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* BasePath */      /* parameter BasePath */
        &__midl_frag733,
        { 
        /* BasePath */
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
    /* UserName */      /* parameter UserName */
        &__midl_frag733,
        { 
        /* UserName */
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag48,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag737,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag737,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag523,
        { 
        /* ResumeHandle */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag33_t __midl_frag33 =
{ 
/*  */
    { 
    /* *_CONNECTION_INFO_1 */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag27
    }
};

static const __midl_frag29_t __midl_frag29 =
{ 
/* _CONNECTION_INFO_1 */
    { 
    /* _CONNECTION_INFO_1 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _CONNECTION_INFO_1 */
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
        &__midl_frag64,
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
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* *_CONNECTION_INFO_1 */
    { 
    /* *_CONNECTION_INFO_1 */
        { 
        /* *_CONNECTION_INFO_1 */
            0x46,    /* FC64_FORCED_BOGUS_ARRAY */
            (NDR64_UINT8) 7 /* 0x7 */,
            { 
            /* *_CONNECTION_INFO_1 */
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
            &__midl_frag29
        },
        &__midl_frag267,
        0,
        0
    }
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* CONNECT_INFO_1_CONTAINER */
    { 
    /* CONNECT_INFO_1_CONTAINER */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CONNECT_INFO_1_CONTAINER */
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
        &__midl_frag33,
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

static const __midl_frag25_t __midl_frag25 =
{ 
/* *CONNECT_INFO_1_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag26
};

static const __midl_frag17_t __midl_frag17 =
{ 
/* CONNECT_ENUM_UNION */
    { 
    /* CONNECT_ENUM_UNION */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag267,
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
        (NDR64_INT64) 0 /* 0x0 */,
        &__midl_frag51,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag25,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* _CONNECT_ENUM_STRUCT */
    { 
    /* _CONNECT_ENUM_STRUCT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _CONNECT_ENUM_STRUCT */
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
            &__midl_frag17
        },
        { 
        /* _CONNECT_ENUM_STRUCT */
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

static const __midl_frag15_t __midl_frag15 =
{ 
/* *_CONNECT_ENUM_STRUCT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag16
};

static const __midl_frag10_t __midl_frag10 =
{ 
/* NetrConnectionEnum */
    { 
    /* NetrConnectionEnum */      /* procedure NetrConnectionEnum */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ServerName */      /* parameter ServerName */
        &__midl_frag733,
        { 
        /* ServerName */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Qualifier */      /* parameter Qualifier */
        &__midl_frag733,
        { 
        /* Qualifier */
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
    /* InfoStruct */      /* parameter InfoStruct */
        &__midl_frag16,
        { 
        /* InfoStruct */
            1,
            1,
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
        },    /* MustSize, MustFree, [in], [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* PreferedMaximumLength */      /* parameter PreferedMaximumLength */
        &__midl_frag737,
        { 
        /* PreferedMaximumLength */
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
    /* TotalEntries */      /* parameter TotalEntries */
        &__midl_frag737,
        { 
        /* TotalEntries */
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
    /* ResumeHandle */      /* parameter ResumeHandle */
        &__midl_frag523,
        { 
        /* ResumeHandle */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* NET_API_STATUS */      /* parameter NET_API_STATUS */
        &__midl_frag737,
        { 
        /* NET_API_STATUS */
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

static const __midl_frag9_t __midl_frag9 =
{ 
/* Opnum7NotUsedOnWire */
    { 
    /* Opnum7NotUsedOnWire */      /* procedure Opnum7NotUsedOnWire */
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

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


static const FormatInfoRef srvsvc_Ndr64ProcTable[] =
    {
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag9,
    &__midl_frag10,
    &__midl_frag40,
    &__midl_frag72,
    &__midl_frag83,
    &__midl_frag88,
    &__midl_frag159,
    &__midl_frag167,
    &__midl_frag231,
    &__midl_frag275,
    &__midl_frag295,
    &__midl_frag324,
    &__midl_frag324,
    &__midl_frag331,
    &__midl_frag339,
    &__midl_frag465,
    &__midl_frag526,
    &__midl_frag545,
    &__midl_frag627,
    &__midl_frag569,
    &__midl_frag627,
    &__midl_frag633,
    &__midl_frag640,
    &__midl_frag641,
    &__midl_frag650,
    &__midl_frag697,
    &__midl_frag676,
    &__midl_frag684,
    &__midl_frag697,
    &__midl_frag707,
    &__midl_frag717,
    &__midl_frag726,
    &__midl_frag730,
    &__midl_frag746,
    &__midl_frag756,
    &__midl_frag807,
    &__midl_frag765,
    &__midl_frag771,
    &__midl_frag792,
    &__midl_frag799,
    &__midl_frag807,
    &__midl_frag808,
    &__midl_frag821,
    &__midl_frag829,
    &__midl_frag836,
    &__midl_frag851,
    &__midl_frag863,
    &__midl_frag902,
    &__midl_frag884,
    &__midl_frag902,
    &__midl_frag911
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC srvsvc_StubDesc = 
    {
    (void *)& srvsvc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &srvsvc__MIDL_AutoBindHandle,
    0,
    BindingRoutines,
    0,
    0,
    ms2Dsrvsvc__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& srvsvc_ProxyInfo,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

static const MIDL_SYNTAX_INFO srvsvc_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    ms2Dsrvsvc__MIDL_ProcFormatString.Format,
    srvsvc_FormatStringOffsetTable,
    ms2Dsrvsvc__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) srvsvc_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO srvsvc_ProxyInfo =
    {
    &srvsvc_StubDesc,
    ms2Dsrvsvc__MIDL_ProcFormatString.Format,
    srvsvc_FormatStringOffsetTable,
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)srvsvc_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

