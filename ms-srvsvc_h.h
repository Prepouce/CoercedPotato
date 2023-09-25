

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ms2Dsrvsvc_h_h__
#define __ms2Dsrvsvc_h_h__

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


#ifndef __srvsvc_INTERFACE_DEFINED__
#define __srvsvc_INTERFACE_DEFINED__

/* interface srvsvc */
/* [unique][ms_union][version][uuid] */ 

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

typedef wchar_t *LPWSTR;

typedef wchar_t *PWSTR;

typedef DWORD NET_API_STATUS;

typedef long NTSTATUS;

typedef /* [context_handle] */ void *PCONTEXT_HANDLE;

typedef /* [ref] */ PCONTEXT_HANDLE *PPCONTEXT_HANDLE;

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

typedef DWORD SECURITY_INFORMATION;

typedef DWORD *PSECURITY_INFORMATION;



typedef struct _GUID UUID;

typedef struct _GUID *PGUID;

typedef /* [string][handle] */ wchar_t *SRVSVC_HANDLE;

typedef struct _CONNECTION_INFO_0
    {
    DWORD coni0_id;
    } 	CONNECTION_INFO_0;

typedef struct _CONNECTION_INFO_0 *PCONNECTION_INFO_0;

typedef struct _CONNECTION_INFO_0 *LPCONNECTION_INFO_0;

typedef struct _CONNECT_INFO_0_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPCONNECTION_INFO_0 Buffer;
    } 	CONNECT_INFO_0_CONTAINER;

typedef struct _CONNECT_INFO_0_CONTAINER *PCONNECT_INFO_0_CONTAINER;

typedef struct _CONNECT_INFO_0_CONTAINER *LPCONNECT_INFO_0_CONTAINER;

typedef struct _CONNECTION_INFO_1
    {
    DWORD coni1_id;
    DWORD coni1_type;
    DWORD coni1_num_opens;
    DWORD coni1_num_users;
    DWORD coni1_time;
    /* [string] */ wchar_t *coni1_username;
    /* [string] */ wchar_t *coni1_netname;
    } 	CONNECTION_INFO_1;

typedef struct _CONNECTION_INFO_1 *PCONNECTION_INFO_1;

typedef struct _CONNECTION_INFO_1 *LPCONNECTION_INFO_1;

typedef struct _CONNECT_INFO_1_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPCONNECTION_INFO_1 Buffer;
    } 	CONNECT_INFO_1_CONTAINER;

typedef struct _CONNECT_INFO_1_CONTAINER *PCONNECT_INFO_1_CONTAINER;

typedef struct _CONNECT_INFO_1_CONTAINER *LPCONNECT_INFO_1_CONTAINER;

typedef /* [switch_type] */ union _CONNECT_ENUM_UNION
    {
    /* [case()] */ CONNECT_INFO_0_CONTAINER *Level0;
    /* [case()] */ CONNECT_INFO_1_CONTAINER *Level1;
    } 	CONNECT_ENUM_UNION;

typedef struct _CONNECT_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ CONNECT_ENUM_UNION ConnectInfo;
    } 	CONNECT_ENUM_STRUCT;

typedef struct _CONNECT_ENUM_STRUCT *PCONNECT_ENUM_STRUCT;

typedef struct _CONNECT_ENUM_STRUCT *LPCONNECT_ENUM_STRUCT;

typedef struct _FILE_INFO_2
    {
    DWORD fi2_id;
    } 	FILE_INFO_2;

typedef struct _FILE_INFO_2 *PFILE_INFO_2;

typedef struct _FILE_INFO_2 *LPFILE_INFO_2;

typedef struct _FILE_INFO_2_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPFILE_INFO_2 Buffer;
    } 	FILE_INFO_2_CONTAINER;

typedef struct _FILE_INFO_2_CONTAINER *PFILE_INFO_2_CONTAINER;

typedef struct _FILE_INFO_2_CONTAINER *LPFILE_INFO_2_CONTAINER;

typedef struct _FILE_INFO_3
    {
    DWORD fi3_id;
    DWORD fi3_permissions;
    DWORD fi3_num_locks;
    /* [string] */ wchar_t *fi3_pathname;
    /* [string] */ wchar_t *fi3_username;
    } 	FILE_INFO_3;

typedef struct _FILE_INFO_3 *PFILE_INFO_3;

typedef struct _FILE_INFO_3 *LPFILE_INFO_3;

typedef struct _FILE_INFO_3_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPFILE_INFO_3 Buffer;
    } 	FILE_INFO_3_CONTAINER;

typedef struct _FILE_INFO_3_CONTAINER *PFILE_INFO_3_CONTAINER;

typedef struct _FILE_INFO_3_CONTAINER *LPFILE_INFO_3_CONTAINER;

typedef /* [switch_type] */ union _FILE_ENUM_UNION
    {
    /* [case()] */ FILE_INFO_2_CONTAINER *Level2;
    /* [case()] */ FILE_INFO_3_CONTAINER *Level3;
    } 	FILE_ENUM_UNION;

typedef struct _FILE_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ FILE_ENUM_UNION FileInfo;
    } 	FILE_ENUM_STRUCT;

typedef struct _FILE_ENUM_STRUCT *PFILE_ENUM_STRUCT;

typedef struct _FILE_ENUM_STRUCT *LPFILE_ENUM_STRUCT;

typedef /* [switch_type] */ union _FILE_INFO
    {
    /* [case()] */ LPFILE_INFO_2 FileInfo2;
    /* [case()] */ LPFILE_INFO_3 FileInfo3;
    } 	FILE_INFO;

typedef /* [switch_type] */ union _FILE_INFO *PFILE_INFO;

typedef /* [switch_type] */ union _FILE_INFO *LPFILE_INFO;

typedef struct _SESSION_INFO_0
    {
    /* [string] */ wchar_t *sesi0_cname;
    } 	SESSION_INFO_0;

typedef struct _SESSION_INFO_0 *PSESSION_INFO_0;

typedef struct _SESSION_INFO_0 *LPSESSION_INFO_0;

typedef struct _SESSION_INFO_0_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSESSION_INFO_0 Buffer;
    } 	SESSION_INFO_0_CONTAINER;

typedef struct _SESSION_INFO_0_CONTAINER *PSESSION_INFO_0_CONTAINER;

typedef struct _SESSION_INFO_0_CONTAINER *LPSESSION_INFO_0_CONTAINER;

typedef struct _SESSION_INFO_1
    {
    /* [string] */ wchar_t *sesi1_cname;
    /* [string] */ wchar_t *sesi1_username;
    DWORD sesi1_num_opens;
    DWORD sesi1_time;
    DWORD sesi1_idle_time;
    DWORD sesi1_user_flags;
    } 	SESSION_INFO_1;

typedef struct _SESSION_INFO_1 *PSESSION_INFO_1;

typedef struct _SESSION_INFO_1 *LPSESSION_INFO_1;

typedef struct _SESSION_INFO_1_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSESSION_INFO_1 Buffer;
    } 	SESSION_INFO_1_CONTAINER;

typedef struct _SESSION_INFO_1_CONTAINER *PSESSION_INFO_1_CONTAINER;

typedef struct _SESSION_INFO_1_CONTAINER *LPSESSION_INFO_1_CONTAINER;

typedef struct _SESSION_INFO_2
    {
    /* [string] */ wchar_t *sesi2_cname;
    /* [string] */ wchar_t *sesi2_username;
    DWORD sesi2_num_opens;
    DWORD sesi2_time;
    DWORD sesi2_idle_time;
    DWORD sesi2_user_flags;
    /* [string] */ wchar_t *sesi2_cltype_name;
    } 	SESSION_INFO_2;

typedef struct _SESSION_INFO_2 *PSESSION_INFO_2;

typedef struct _SESSION_INFO_2 *LPSESSION_INFO_2;

typedef struct _SESSION_INFO_2_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSESSION_INFO_2 Buffer;
    } 	SESSION_INFO_2_CONTAINER;

typedef struct _SESSION_INFO_2_CONTAINER *PSESSION_INFO_2_CONTAINER;

typedef struct _SESSION_INFO_2_CONTAINER *LPSESSION_INFO_2_CONTAINER;

typedef struct _SESSION_INFO_10
    {
    /* [string] */ wchar_t *sesi10_cname;
    /* [string] */ wchar_t *sesi10_username;
    DWORD sesi10_time;
    DWORD sesi10_idle_time;
    } 	SESSION_INFO_10;

typedef struct _SESSION_INFO_10 *PSESSION_INFO_10;

typedef struct _SESSION_INFO_10 *LPSESSION_INFO_10;

typedef struct _SESSION_INFO_10_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSESSION_INFO_10 Buffer;
    } 	SESSION_INFO_10_CONTAINER;

typedef struct _SESSION_INFO_10_CONTAINER *PSESSION_INFO_10_CONTAINER;

typedef struct _SESSION_INFO_10_CONTAINER *LPSESSION_INFO_10_CONTAINER;

typedef struct _SESSION_INFO_502
    {
    /* [string] */ wchar_t *sesi502_cname;
    /* [string] */ wchar_t *sesi502_username;
    DWORD sesi502_num_opens;
    DWORD sesi502_time;
    DWORD sesi502_idle_time;
    DWORD sesi502_user_flags;
    /* [string] */ wchar_t *sesi502_cltype_name;
    /* [string] */ wchar_t *sesi502_transport;
    } 	SESSION_INFO_502;

typedef struct _SESSION_INFO_502 *PSESSION_INFO_502;

typedef struct _SESSION_INFO_502 *LPSESSION_INFO_502;

typedef struct _SESSION_INFO_502_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSESSION_INFO_502 Buffer;
    } 	SESSION_INFO_502_CONTAINER;

typedef struct _SESSION_INFO_502_CONTAINER *PSESSION_INFO_502_CONTAINER;

typedef struct _SESSION_INFO_502_CONTAINER *LPSESSION_INFO_502_CONTAINER;

typedef /* [switch_type] */ union _SESSION_ENUM_UNION
    {
    /* [case()] */ SESSION_INFO_0_CONTAINER *Level0;
    /* [case()] */ SESSION_INFO_1_CONTAINER *Level1;
    /* [case()] */ SESSION_INFO_2_CONTAINER *Level2;
    /* [case()] */ SESSION_INFO_10_CONTAINER *Level10;
    /* [case()] */ SESSION_INFO_502_CONTAINER *Level502;
    } 	SESSION_ENUM_UNION;

typedef struct _SESSION_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ SESSION_ENUM_UNION SessionInfo;
    } 	SESSION_ENUM_STRUCT;

typedef struct _SESSION_ENUM_STRUCT *PSESSION_ENUM_STRUCT;

typedef struct _SESSION_ENUM_STRUCT *LPSESSION_ENUM_STRUCT;

typedef struct _SHARE_INFO_502_I
    {
    /* [string] */ WCHAR *shi502_netname;
    DWORD shi502_type;
    /* [string] */ WCHAR *shi502_remark;
    DWORD shi502_permissions;
    DWORD shi502_max_uses;
    DWORD shi502_current_uses;
    /* [string] */ WCHAR *shi502_path;
    /* [string] */ WCHAR *shi502_passwd;
    DWORD shi502_reserved;
    /* [size_is] */ unsigned char *shi502_security_descriptor;
    } 	SHARE_INFO_502_I;

typedef struct _SHARE_INFO_502_I *PSHARE_INFO_502_I;

typedef struct _SHARE_INFO_502_I *LPSHARE_INFO_502_I;

typedef struct _SHARE_INFO_503_I
    {
    /* [string] */ WCHAR *shi503_netname;
    DWORD shi503_type;
    /* [string] */ WCHAR *shi503_remark;
    DWORD shi503_permissions;
    DWORD shi503_max_uses;
    DWORD shi503_current_uses;
    /* [string] */ WCHAR *shi503_path;
    /* [string] */ WCHAR *shi503_passwd;
    /* [string] */ WCHAR *shi503_servername;
    DWORD shi503_reserved;
    /* [size_is] */ PUCHAR shi503_security_descriptor;
    } 	SHARE_INFO_503_I;

typedef struct _SHARE_INFO_503_I *PSHARE_INFO_503_I;

typedef struct _SHARE_INFO_503_I *LPSHARE_INFO_503_I;

typedef struct _SHARE_INFO_503_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSHARE_INFO_503_I Buffer;
    } 	SHARE_INFO_503_CONTAINER;

typedef struct _SHARE_INFO_503_CONTAINER *PSHARE_INFO_503_CONTAINER;

typedef struct _SHARE_INFO_503_CONTAINER *LPSHARE_INFO_503_CONTAINER;

typedef struct _SHARE_INFO_1501_I
    {
    DWORD shi1501_reserved;
    /* [size_is] */ unsigned char *shi1501_security_descriptor;
    } 	SHARE_INFO_1501_I;

typedef struct _SHARE_INFO_1501_I *PSHARE_INFO_1501_I;

typedef struct _SHARE_INFO_1501_I *LPSHARE_INFO_1501_I;

typedef struct _SHARE_INFO_0
    {
    /* [string] */ wchar_t *shi0_netname;
    } 	SHARE_INFO_0;

typedef struct _SHARE_INFO_0 *PSHARE_INFO_0;

typedef struct _SHARE_INFO_0 *LPSHARE_INFO_0;

typedef struct _SHARE_INFO_0_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSHARE_INFO_0 Buffer;
    } 	SHARE_INFO_0_CONTAINER;

typedef struct _SHARE_INFO_1
    {
    /* [string] */ wchar_t *shi1_netname;
    DWORD shi1_type;
    /* [string] */ wchar_t *shi1_remark;
    } 	SHARE_INFO_1;

typedef struct _SHARE_INFO_1 *PSHARE_INFO_1;

typedef struct _SHARE_INFO_1 *LPSHARE_INFO_1;

typedef struct _SHARE_INFO_1_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSHARE_INFO_1 Buffer;
    } 	SHARE_INFO_1_CONTAINER;

typedef struct _SHARE_INFO_2
    {
    /* [string] */ wchar_t *shi2_netname;
    DWORD shi2_type;
    /* [string] */ wchar_t *shi2_remark;
    DWORD shi2_permissions;
    DWORD shi2_max_uses;
    DWORD shi2_current_uses;
    /* [string] */ wchar_t *shi2_path;
    /* [string] */ wchar_t *shi2_passwd;
    } 	SHARE_INFO_2;

typedef struct _SHARE_INFO_2 *PSHARE_INFO_2;

typedef struct _SHARE_INFO_2 *LPSHARE_INFO_2;

typedef struct _SHARE_INFO_2_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSHARE_INFO_2 Buffer;
    } 	SHARE_INFO_2_CONTAINER;

typedef struct _SHARE_INFO_2_CONTAINER *PSHARE_INFO_2_CONTAINER;

typedef struct _SHARE_INFO_2_CONTAINER *LPSHARE_INFO_2_CONTAINER;

typedef struct _SHARE_INFO_501
    {
    /* [string] */ wchar_t *shi501_netname;
    DWORD shi501_type;
    /* [string] */ wchar_t *shi501_remark;
    DWORD shi501_flags;
    } 	SHARE_INFO_501;

typedef struct _SHARE_INFO_501 *PSHARE_INFO_501;

typedef struct _SHARE_INFO_501 *LPSHARE_INFO_501;

typedef struct _SHARE_INFO_501_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSHARE_INFO_501 Buffer;
    } 	SHARE_INFO_501_CONTAINER;

typedef struct _SHARE_INFO_501_CONTAINER *PSHARE_INFO_501_CONTAINER;

typedef struct _SHARE_INFO_501_CONTAINER *LPSHARE_INFO_501_CONTAINER;

typedef struct _SHARE_INFO_502_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSHARE_INFO_502_I Buffer;
    } 	SHARE_INFO_502_CONTAINER;

typedef struct _SHARE_INFO_502_CONTAINER *PSHARE_INFO_502_CONTAINER;

typedef struct _SHARE_INFO_502_CONTAINER *LPSHARE_INFO_502_CONTAINER;

typedef /* [switch_type] */ union _SHARE_ENUM_UNION
    {
    /* [case()] */ SHARE_INFO_0_CONTAINER *Level0;
    /* [case()] */ SHARE_INFO_1_CONTAINER *Level1;
    /* [case()] */ SHARE_INFO_2_CONTAINER *Level2;
    /* [case()] */ SHARE_INFO_501_CONTAINER *Level501;
    /* [case()] */ SHARE_INFO_502_CONTAINER *Level502;
    /* [case()] */ SHARE_INFO_503_CONTAINER *Level503;
    } 	SHARE_ENUM_UNION;

typedef struct _SHARE_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ SHARE_ENUM_UNION ShareInfo;
    } 	SHARE_ENUM_STRUCT;

typedef struct _SHARE_ENUM_STRUCT *PSHARE_ENUM_STRUCT;

typedef struct _SHARE_ENUM_STRUCT *LPSHARE_ENUM_STRUCT;

typedef struct _SHARE_INFO_1004
    {
    /* [string] */ wchar_t *shi1004_remark;
    } 	SHARE_INFO_1004;

typedef struct _SHARE_INFO_1004 *PSHARE_INFO_1004;

typedef struct _SHARE_INFO_1004 *LPSHARE_INFO_1004;

typedef struct _SHARE_INFO_1006
    {
    DWORD shi1006_max_uses;
    } 	SHARE_INFO_1006;

typedef struct _SHARE_INFO_1006 *PSHARE_INFO_1006;

typedef struct _SHARE_INFO_1006 *LPSHARE_INFO_1006;

typedef struct _SHARE_INFO_1005
    {
    DWORD shi1005_flags;
    } 	SHARE_INFO_1005;

typedef struct _SHARE_INFO_1005 *PSHARE_INFO_1005;

typedef struct _SHARE_INFO_1005 *LPSHARE_INFO_1005;

typedef /* [switch_type] */ union _SHARE_INFO
    {
    /* [case()] */ LPSHARE_INFO_0 ShareInfo0;
    /* [case()] */ LPSHARE_INFO_1 ShareInfo1;
    /* [case()] */ LPSHARE_INFO_2 ShareInfo2;
    /* [case()] */ LPSHARE_INFO_502_I ShareInfo502;
    /* [case()] */ LPSHARE_INFO_1004 ShareInfo1004;
    /* [case()] */ LPSHARE_INFO_1006 ShareInfo1006;
    /* [case()] */ LPSHARE_INFO_1501_I ShareInfo1501;
    /* [default] */  /* Empty union arm */ 
    /* [case()] */ LPSHARE_INFO_1005 ShareInfo1005;
    /* [case()] */ LPSHARE_INFO_501 ShareInfo501;
    /* [case()] */ LPSHARE_INFO_503_I ShareInfo503;
    } 	SHARE_INFO;

typedef /* [switch_type] */ union _SHARE_INFO *PSHARE_INFO;

typedef /* [switch_type] */ union _SHARE_INFO *LPSHARE_INFO;

typedef struct _SERVER_INFO_100
    {
    DWORD sv100_platform_id;
    /* [string] */ wchar_t *sv100_name;
    } 	SERVER_INFO_100;

typedef struct _SERVER_INFO_100 *PSERVER_INFO_100;

typedef struct _SERVER_INFO_100 *LPSERVER_INFO_100;

typedef struct _SERVER_INFO_101
    {
    DWORD sv101_platform_id;
    /* [string] */ wchar_t *sv101_name;
    DWORD sv101_version_major;
    DWORD sv101_version_minor;
    DWORD sv101_type;
    /* [string] */ wchar_t *sv101_comment;
    } 	SERVER_INFO_101;

typedef struct _SERVER_INFO_101 *PSERVER_INFO_101;

typedef struct _SERVER_INFO_101 *LPSERVER_INFO_101;

typedef struct _SERVER_INFO_102
    {
    DWORD sv102_platform_id;
    /* [string] */ wchar_t *sv102_name;
    DWORD sv102_version_major;
    DWORD sv102_version_minor;
    DWORD sv102_type;
    /* [string] */ wchar_t *sv102_comment;
    DWORD sv102_users;
    long sv102_disc;
    int sv102_hidden;
    DWORD sv102_announce;
    DWORD sv102_anndelta;
    DWORD sv102_licenses;
    /* [string] */ wchar_t *sv102_userpath;
    } 	SERVER_INFO_102;

typedef struct _SERVER_INFO_102 *PSERVER_INFO_102;

typedef struct _SERVER_INFO_102 *LPSERVER_INFO_102;

typedef struct _SERVER_INFO_103
    {
    DWORD sv103_platform_id;
    /* [string] */ wchar_t *sv103_name;
    DWORD sv103_version_major;
    DWORD sv103_version_minor;
    DWORD sv103_type;
    /* [string] */ wchar_t *sv103_comment;
    DWORD sv103_users;
    LONG sv103_disc;
    BOOL sv103_hidden;
    DWORD sv103_announce;
    DWORD sv103_anndelta;
    DWORD sv103_licenses;
    /* [string] */ wchar_t *sv103_userpath;
    DWORD sv103_capabilities;
    } 	SERVER_INFO_103;

typedef struct _SERVER_INFO_103 *PSERVER_INFO_103;

typedef struct _SERVER_INFO_103 *LPSERVER_INFO_103;

typedef struct _SERVER_INFO_502
    {
    DWORD sv502_sessopens;
    DWORD sv502_sessvcs;
    DWORD sv502_opensearch;
    DWORD sv502_sizreqbuf;
    DWORD sv502_initworkitems;
    DWORD sv502_maxworkitems;
    DWORD sv502_rawworkitems;
    DWORD sv502_irpstacksize;
    DWORD sv502_maxrawbuflen;
    DWORD sv502_sessusers;
    DWORD sv502_sessconns;
    DWORD sv502_maxpagedmemoryusage;
    DWORD sv502_maxnonpagedmemoryusage;
    int sv502_enablesoftcompat;
    int sv502_enableforcedlogoff;
    int sv502_timesource;
    int sv502_acceptdownlevelapis;
    int sv502_lmannounce;
    } 	SERVER_INFO_502;

typedef struct _SERVER_INFO_502 *PSERVER_INFO_502;

typedef struct _SERVER_INFO_502 *LPSERVER_INFO_502;

typedef struct _SERVER_INFO_503
    {
    DWORD sv503_sessopens;
    DWORD sv503_sessvcs;
    DWORD sv503_opensearch;
    DWORD sv503_sizreqbuf;
    DWORD sv503_initworkitems;
    DWORD sv503_maxworkitems;
    DWORD sv503_rawworkitems;
    DWORD sv503_irpstacksize;
    DWORD sv503_maxrawbuflen;
    DWORD sv503_sessusers;
    DWORD sv503_sessconns;
    DWORD sv503_maxpagedmemoryusage;
    DWORD sv503_maxnonpagedmemoryusage;
    int sv503_enablesoftcompat;
    int sv503_enableforcedlogoff;
    int sv503_timesource;
    int sv503_acceptdownlevelapis;
    int sv503_lmannounce;
    /* [string] */ wchar_t *sv503_domain;
    DWORD sv503_maxcopyreadlen;
    DWORD sv503_maxcopywritelen;
    DWORD sv503_minkeepsearch;
    DWORD sv503_maxkeepsearch;
    DWORD sv503_minkeepcomplsearch;
    DWORD sv503_maxkeepcomplsearch;
    DWORD sv503_threadcountadd;
    DWORD sv503_numblockthreads;
    DWORD sv503_scavtimeout;
    DWORD sv503_minrcvqueue;
    DWORD sv503_minfreeworkitems;
    DWORD sv503_xactmemsize;
    DWORD sv503_threadpriority;
    DWORD sv503_maxmpxct;
    DWORD sv503_oplockbreakwait;
    DWORD sv503_oplockbreakresponsewait;
    int sv503_enableoplocks;
    int sv503_enableoplockforceclose;
    int sv503_enablefcbopens;
    int sv503_enableraw;
    int sv503_enablesharednetdrives;
    DWORD sv503_minfreeconnections;
    DWORD sv503_maxfreeconnections;
    } 	SERVER_INFO_503;

typedef struct _SERVER_INFO_503 *PSERVER_INFO_503;

typedef struct _SERVER_INFO_503 *LPSERVER_INFO_503;

typedef struct _SERVER_INFO_599
    {
    DWORD sv599_sessopens;
    DWORD sv599_sessvcs;
    DWORD sv599_opensearch;
    DWORD sv599_sizreqbuf;
    DWORD sv599_initworkitems;
    DWORD sv599_maxworkitems;
    DWORD sv599_rawworkitems;
    DWORD sv599_irpstacksize;
    DWORD sv599_maxrawbuflen;
    DWORD sv599_sessusers;
    DWORD sv599_sessconns;
    DWORD sv599_maxpagedmemoryusage;
    DWORD sv599_maxnonpagedmemoryusage;
    int sv599_enablesoftcompat;
    int sv599_enableforcedlogoff;
    int sv599_timesource;
    int sv599_acceptdownlevelapis;
    int sv599_lmannounce;
    /* [string] */ wchar_t *sv599_domain;
    DWORD sv599_maxcopyreadlen;
    DWORD sv599_maxcopywritelen;
    DWORD sv599_minkeepsearch;
    DWORD sv599_maxkeepsearch;
    DWORD sv599_minkeepcomplsearch;
    DWORD sv599_maxkeepcomplsearch;
    DWORD sv599_threadcountadd;
    DWORD sv599_numblockthreads;
    DWORD sv599_scavtimeout;
    DWORD sv599_minrcvqueue;
    DWORD sv599_minfreeworkitems;
    DWORD sv599_xactmemsize;
    DWORD sv599_threadpriority;
    DWORD sv599_maxmpxct;
    DWORD sv599_oplockbreakwait;
    DWORD sv599_oplockbreakresponsewait;
    int sv599_enableoplocks;
    int sv599_enableoplockforceclose;
    int sv599_enablefcbopens;
    int sv599_enableraw;
    int sv599_enablesharednetdrives;
    DWORD sv599_minfreeconnections;
    DWORD sv599_maxfreeconnections;
    DWORD sv599_initsesstable;
    DWORD sv599_initconntable;
    DWORD sv599_initfiletable;
    DWORD sv599_initsearchtable;
    DWORD sv599_alertschedule;
    DWORD sv599_errorthreshold;
    DWORD sv599_networkerrorthreshold;
    DWORD sv599_diskspacethreshold;
    DWORD sv599_reserved;
    DWORD sv599_maxlinkdelay;
    DWORD sv599_minlinkthroughput;
    DWORD sv599_linkinfovalidtime;
    DWORD sv599_scavqosinfoupdatetime;
    DWORD sv599_maxworkitemidletime;
    } 	SERVER_INFO_599;

typedef struct _SERVER_INFO_599 *PSERVER_INFO_599;

typedef struct _SERVER_INFO_599 *LPSERVER_INFO_599;

typedef struct _SERVER_INFO_1005
    {
    /* [string] */ wchar_t *sv1005_comment;
    } 	SERVER_INFO_1005;

typedef struct _SERVER_INFO_1005 *PSERVER_INFO_1005;

typedef struct _SERVER_INFO_1005 *LPSERVER_INFO_1005;

typedef struct _SERVER_INFO_1107
    {
    DWORD sv1107_users;
    } 	SERVER_INFO_1107;

typedef struct _SERVER_INFO_1107 *PSERVER_INFO_1107;

typedef struct _SERVER_INFO_1107 *LPSERVER_INFO_1107;

typedef struct _SERVER_INFO_1010
    {
    long sv1010_disc;
    } 	SERVER_INFO_1010;

typedef struct _SERVER_INFO_1010 *PSERVER_INFO_1010;

typedef struct _SERVER_INFO_1010 *LPSERVER_INFO_1010;

typedef struct _SERVER_INFO_1016
    {
    int sv1016_hidden;
    } 	SERVER_INFO_1016;

typedef struct _SERVER_INFO_1016 *PSERVER_INFO_1016;

typedef struct _SERVER_INFO_1016 *LPSERVER_INFO_1016;

typedef struct _SERVER_INFO_1017
    {
    DWORD sv1017_announce;
    } 	SERVER_INFO_1017;

typedef struct _SERVER_INFO_1017 *PSERVER_INFO_1017;

typedef struct _SERVER_INFO_1017 *LPSERVER_INFO_1017;

typedef struct _SERVER_INFO_1018
    {
    DWORD sv1018_anndelta;
    } 	SERVER_INFO_1018;

typedef struct _SERVER_INFO_1018 *PSERVER_INFO_1018;

typedef struct _SERVER_INFO_1018 *LPSERVER_INFO_1018;

typedef struct _SERVER_INFO_1501
    {
    DWORD sv1501_sessopens;
    } 	SERVER_INFO_1501;

typedef struct _SERVER_INFO_1501 *PSERVER_INFO_1501;

typedef struct _SERVER_INFO_1501 *LPSERVER_INFO_1501;

typedef struct _SERVER_INFO_1502
    {
    DWORD sv1502_sessvcs;
    } 	SERVER_INFO_1502;

typedef struct _SERVER_INFO_1502 *PSERVER_INFO_1502;

typedef struct _SERVER_INFO_1502 *LPSERVER_INFO_1502;

typedef struct _SERVER_INFO_1503
    {
    DWORD sv1503_opensearch;
    } 	SERVER_INFO_1503;

typedef struct _SERVER_INFO_1503 *PSERVER_INFO_1503;

typedef struct _SERVER_INFO_1503 *LPSERVER_INFO_1503;

typedef struct _SERVER_INFO_1506
    {
    DWORD sv1506_maxworkitems;
    } 	SERVER_INFO_1506;

typedef struct _SERVER_INFO_1506 *PSERVER_INFO_1506;

typedef struct _SERVER_INFO_1506 *LPSERVER_INFO_1506;

typedef struct _SERVER_INFO_1510
    {
    DWORD sv1510_sessusers;
    } 	SERVER_INFO_1510;

typedef struct _SERVER_INFO_1510 *PSERVER_INFO_1510;

typedef struct _SERVER_INFO_1510 *LPSERVER_INFO_1510;

typedef struct _SERVER_INFO_1511
    {
    DWORD sv1511_sessconns;
    } 	SERVER_INFO_1511;

typedef struct _SERVER_INFO_1511 *PSERVER_INFO_1511;

typedef struct _SERVER_INFO_1511 *LPSERVER_INFO_1511;

typedef struct _SERVER_INFO_1512
    {
    DWORD sv1512_maxnonpagedmemoryusage;
    } 	SERVER_INFO_1512;

typedef struct _SERVER_INFO_1512 *PSERVER_INFO_1512;

typedef struct _SERVER_INFO_1512 *LPSERVER_INFO_1512;

typedef struct _SERVER_INFO_1513
    {
    DWORD sv1513_maxpagedmemoryusage;
    } 	SERVER_INFO_1513;

typedef struct _SERVER_INFO_1513 *PSERVER_INFO_1513;

typedef struct _SERVER_INFO_1513 *LPSERVER_INFO_1513;

typedef struct _SERVER_INFO_1514
    {
    int sv1514_enablesoftcompat;
    } 	SERVER_INFO_1514;

typedef struct _SERVER_INFO_1514 *PSERVER_INFO_1514;

typedef struct _SERVER_INFO_1514 *LPSERVER_INFO_1514;

typedef struct _SERVER_INFO_1515
    {
    int sv1515_enableforcedlogoff;
    } 	SERVER_INFO_1515;

typedef struct _SERVER_INFO_1515 *PSERVER_INFO_1515;

typedef struct _SERVER_INFO_1515 *LPSERVER_INFO_1515;

typedef struct _SERVER_INFO_1516
    {
    int sv1516_timesource;
    } 	SERVER_INFO_1516;

typedef struct _SERVER_INFO_1516 *PSERVER_INFO_1516;

typedef struct _SERVER_INFO_1516 *LPSERVER_INFO_1516;

typedef struct _SERVER_INFO_1518
    {
    int sv1518_lmannounce;
    } 	SERVER_INFO_1518;

typedef struct _SERVER_INFO_1518 *PSERVER_INFO_1518;

typedef struct _SERVER_INFO_1518 *LPSERVER_INFO_1518;

typedef struct _SERVER_INFO_1523
    {
    DWORD sv1523_maxkeepsearch;
    } 	SERVER_INFO_1523;

typedef struct _SERVER_INFO_1523 *PSERVER_INFO_1523;

typedef struct _SERVER_INFO_1523 *LPSERVER_INFO_1523;

typedef struct _SERVER_INFO_1528
    {
    DWORD sv1528_scavtimeout;
    } 	SERVER_INFO_1528;

typedef struct _SERVER_INFO_1528 *PSERVER_INFO_1528;

typedef struct _SERVER_INFO_1528 *LPSERVER_INFO_1528;

typedef struct _SERVER_INFO_1529
    {
    DWORD sv1529_minrcvqueue;
    } 	SERVER_INFO_1529;

typedef struct _SERVER_INFO_1529 *PSERVER_INFO_1529;

typedef struct _SERVER_INFO_1529 *LPSERVER_INFO_1529;

typedef struct _SERVER_INFO_1530
    {
    DWORD sv1530_minfreeworkitems;
    } 	SERVER_INFO_1530;

typedef struct _SERVER_INFO_1530 *PSERVER_INFO_1530;

typedef struct _SERVER_INFO_1530 *LPSERVER_INFO_1530;

typedef struct _SERVER_INFO_1533
    {
    DWORD sv1533_maxmpxct;
    } 	SERVER_INFO_1533;

typedef struct _SERVER_INFO_1533 *PSERVER_INFO_1533;

typedef struct _SERVER_INFO_1533 *LPSERVER_INFO_1533;

typedef struct _SERVER_INFO_1534
    {
    DWORD sv1534_oplockbreakwait;
    } 	SERVER_INFO_1534;

typedef struct _SERVER_INFO_1534 *PSERVER_INFO_1534;

typedef struct _SERVER_INFO_1534 *LPSERVER_INFO_1534;

typedef struct _SERVER_INFO_1535
    {
    DWORD sv1535_oplockbreakresponsewait;
    } 	SERVER_INFO_1535;

typedef struct _SERVER_INFO_1535 *PSERVER_INFO_1535;

typedef struct _SERVER_INFO_1535 *LPSERVER_INFO_1535;

typedef struct _SERVER_INFO_1536
    {
    int sv1536_enableoplocks;
    } 	SERVER_INFO_1536;

typedef struct _SERVER_INFO_1536 *PSERVER_INFO_1536;

typedef struct _SERVER_INFO_1536 *LPSERVER_INFO_1536;

typedef struct _SERVER_INFO_1538
    {
    int sv1538_enablefcbopens;
    } 	SERVER_INFO_1538;

typedef struct _SERVER_INFO_1538 *PSERVER_INFO_1538;

typedef struct _SERVER_INFO_1538 *LPSERVER_INFO_1538;

typedef struct _SERVER_INFO_1539
    {
    int sv1539_enableraw;
    } 	SERVER_INFO_1539;

typedef struct _SERVER_INFO_1539 *PSERVER_INFO_1539;

typedef struct _SERVER_INFO_1539 *LPSERVER_INFO_1539;

typedef struct _SERVER_INFO_1540
    {
    int sv1540_enablesharednetdrives;
    } 	SERVER_INFO_1540;

typedef struct _SERVER_INFO_1540 *PSERVER_INFO_1540;

typedef struct _SERVER_INFO_1540 *LPSERVER_INFO_1540;

typedef struct _SERVER_INFO_1541
    {
    int sv1541_minfreeconnections;
    } 	SERVER_INFO_1541;

typedef struct _SERVER_INFO_1541 *PSERVER_INFO_1541;

typedef struct _SERVER_INFO_1541 *LPSERVER_INFO_1541;

typedef struct _SERVER_INFO_1542
    {
    int sv1542_maxfreeconnections;
    } 	SERVER_INFO_1542;

typedef struct _SERVER_INFO_1542 *PSERVER_INFO_1542;

typedef struct _SERVER_INFO_1542 *LPSERVER_INFO_1542;

typedef struct _SERVER_INFO_1543
    {
    DWORD sv1543_initsesstable;
    } 	SERVER_INFO_1543;

typedef struct _SERVER_INFO_1543 *PSERVER_INFO_1543;

typedef struct _SERVER_INFO_1543 *LPSERVER_INFO_1543;

typedef struct _SERVER_INFO_1544
    {
    DWORD sv1544_initconntable;
    } 	SERVER_INFO_1544;

typedef struct _SERVER_INFO_1544 *PSERVER_INFO_1544;

typedef struct _SERVER_INFO_1544 *LPSERVER_INFO_1544;

typedef struct _SERVER_INFO_1545
    {
    DWORD sv1545_initfiletable;
    } 	SERVER_INFO_1545;

typedef struct _SERVER_INFO_1545 *PSERVER_INFO_1545;

typedef struct _SERVER_INFO_1545 *LPSERVER_INFO_1545;

typedef struct _SERVER_INFO_1546
    {
    DWORD sv1546_initsearchtable;
    } 	SERVER_INFO_1546;

typedef struct _SERVER_INFO_1546 *PSERVER_INFO_1546;

typedef struct _SERVER_INFO_1546 *LPSERVER_INFO_1546;

typedef struct _SERVER_INFO_1547
    {
    DWORD sv1547_alertschedule;
    } 	SERVER_INFO_1547;

typedef struct _SERVER_INFO_1547 *PSERVER_INFO_1547;

typedef struct _SERVER_INFO_1547 *LPSERVER_INFO_1547;

typedef struct _SERVER_INFO_1548
    {
    DWORD sv1548_errorthreshold;
    } 	SERVER_INFO_1548;

typedef struct _SERVER_INFO_1548 *PSERVER_INFO_1548;

typedef struct _SERVER_INFO_1548 *LPSERVER_INFO_1548;

typedef struct _SERVER_INFO_1549
    {
    DWORD sv1549_networkerrorthreshold;
    } 	SERVER_INFO_1549;

typedef struct _SERVER_INFO_1549 *PSERVER_INFO_1549;

typedef struct _SERVER_INFO_1549 *LPSERVER_INFO_1549;

typedef struct _SERVER_INFO_1550
    {
    DWORD sv1550_diskspacethreshold;
    } 	SERVER_INFO_1550;

typedef struct _SERVER_INFO_1550 *PSERVER_INFO_1550;

typedef struct _SERVER_INFO_1550 *LPSERVER_INFO_1550;

typedef struct _SERVER_INFO_1552
    {
    DWORD sv1552_maxlinkdelay;
    } 	SERVER_INFO_1552;

typedef struct _SERVER_INFO_1552 *PSERVER_INFO_1552;

typedef struct _SERVER_INFO_1552 *LPSERVER_INFO_1552;

typedef struct _SERVER_INFO_1553
    {
    DWORD sv1553_minlinkthroughput;
    } 	SERVER_INFO_1553;

typedef struct _SERVER_INFO_1553 *PSERVER_INFO_1553;

typedef struct _SERVER_INFO_1553 *LPSERVER_INFO_1553;

typedef struct _SERVER_INFO_1554
    {
    DWORD sv1554_linkinfovalidtime;
    } 	SERVER_INFO_1554;

typedef struct _SERVER_INFO_1554 *PSERVER_INFO_1554;

typedef struct _SERVER_INFO_1554 *LPSERVER_INFO_1554;

typedef struct _SERVER_INFO_1555
    {
    DWORD sv1555_scavqosinfoupdatetime;
    } 	SERVER_INFO_1555;

typedef struct _SERVER_INFO_1555 *PSERVER_INFO_1555;

typedef struct _SERVER_INFO_1555 *LPSERVER_INFO_1555;

typedef struct _SERVER_INFO_1556
    {
    DWORD sv1556_maxworkitemidletime;
    } 	SERVER_INFO_1556;

typedef struct _SERVER_INFO_1556 *PSERVER_INFO_1556;

typedef struct _SERVER_INFO_1556 *LPSERVER_INFO_1556;

typedef /* [switch_type] */ union _SERVER_INFO
    {
    /* [case()] */ LPSERVER_INFO_100 ServerInfo100;
    /* [case()] */ LPSERVER_INFO_101 ServerInfo101;
    /* [case()] */ LPSERVER_INFO_102 ServerInfo102;
    /* [case()] */ LPSERVER_INFO_103 ServerInfo103;
    /* [case()] */ LPSERVER_INFO_502 ServerInfo502;
    /* [case()] */ LPSERVER_INFO_503 ServerInfo503;
    /* [case()] */ LPSERVER_INFO_599 ServerInfo599;
    /* [case()] */ LPSERVER_INFO_1005 ServerInfo1005;
    /* [case()] */ LPSERVER_INFO_1107 ServerInfo1107;
    /* [case()] */ LPSERVER_INFO_1010 ServerInfo1010;
    /* [case()] */ LPSERVER_INFO_1016 ServerInfo1016;
    /* [case()] */ LPSERVER_INFO_1017 ServerInfo1017;
    /* [case()] */ LPSERVER_INFO_1018 ServerInfo1018;
    /* [case()] */ LPSERVER_INFO_1501 ServerInfo1501;
    /* [case()] */ LPSERVER_INFO_1502 ServerInfo1502;
    /* [case()] */ LPSERVER_INFO_1503 ServerInfo1503;
    /* [case()] */ LPSERVER_INFO_1506 ServerInfo1506;
    /* [case()] */ LPSERVER_INFO_1510 ServerInfo1510;
    /* [case()] */ LPSERVER_INFO_1511 ServerInfo1511;
    /* [case()] */ LPSERVER_INFO_1512 ServerInfo1512;
    /* [case()] */ LPSERVER_INFO_1513 ServerInfo1513;
    /* [case()] */ LPSERVER_INFO_1514 ServerInfo1514;
    /* [case()] */ LPSERVER_INFO_1515 ServerInfo1515;
    /* [case()] */ LPSERVER_INFO_1516 ServerInfo1516;
    /* [case()] */ LPSERVER_INFO_1518 ServerInfo1518;
    /* [case()] */ LPSERVER_INFO_1523 ServerInfo1523;
    /* [case()] */ LPSERVER_INFO_1528 ServerInfo1528;
    /* [case()] */ LPSERVER_INFO_1529 ServerInfo1529;
    /* [case()] */ LPSERVER_INFO_1530 ServerInfo1530;
    /* [case()] */ LPSERVER_INFO_1533 ServerInfo1533;
    /* [case()] */ LPSERVER_INFO_1534 ServerInfo1534;
    /* [case()] */ LPSERVER_INFO_1535 ServerInfo1535;
    /* [case()] */ LPSERVER_INFO_1536 ServerInfo1536;
    /* [case()] */ LPSERVER_INFO_1538 ServerInfo1538;
    /* [case()] */ LPSERVER_INFO_1539 ServerInfo1539;
    /* [case()] */ LPSERVER_INFO_1540 ServerInfo1540;
    /* [case()] */ LPSERVER_INFO_1541 ServerInfo1541;
    /* [case()] */ LPSERVER_INFO_1542 ServerInfo1542;
    /* [case()] */ LPSERVER_INFO_1543 ServerInfo1543;
    /* [case()] */ LPSERVER_INFO_1544 ServerInfo1544;
    /* [case()] */ LPSERVER_INFO_1545 ServerInfo1545;
    /* [case()] */ LPSERVER_INFO_1546 ServerInfo1546;
    /* [case()] */ LPSERVER_INFO_1547 ServerInfo1547;
    /* [case()] */ LPSERVER_INFO_1548 ServerInfo1548;
    /* [case()] */ LPSERVER_INFO_1549 ServerInfo1549;
    /* [case()] */ LPSERVER_INFO_1550 ServerInfo1550;
    /* [case()] */ LPSERVER_INFO_1552 ServerInfo1552;
    /* [case()] */ LPSERVER_INFO_1553 ServerInfo1553;
    /* [case()] */ LPSERVER_INFO_1554 ServerInfo1554;
    /* [case()] */ LPSERVER_INFO_1555 ServerInfo1555;
    /* [case()] */ LPSERVER_INFO_1556 ServerInfo1556;
    } 	SERVER_INFO;

typedef /* [switch_type] */ union _SERVER_INFO *PSERVER_INFO;

typedef /* [switch_type] */ union _SERVER_INFO *LPSERVER_INFO;

typedef struct _DISK_INFO
    {
    /* [string] */ WCHAR Disk[ 3 ];
    } 	DISK_INFO;

typedef struct _DISK_INFO *PDISK_INFO;

typedef struct _DISK_INFO *LPDISK_INFO;

typedef struct _DISK_ENUM_CONTAINER
    {
    DWORD EntriesRead;
    /* [length_is][size_is] */ LPDISK_INFO Buffer;
    } 	DISK_ENUM_CONTAINER;

typedef struct _SERVER_TRANSPORT_INFO_0
    {
    DWORD svti0_numberofvcs;
    /* [string] */ wchar_t *svti0_transportname;
    /* [size_is] */ unsigned char *svti0_transportaddress;
    DWORD svti0_transportaddresslength;
    /* [string] */ wchar_t *svti0_networkaddress;
    } 	SERVER_TRANSPORT_INFO_0;

typedef struct _SERVER_TRANSPORT_INFO_0 *PSERVER_TRANSPORT_INFO_0;

typedef struct _SERVER_TRANSPORT_INFO_0 *LPSERVER_TRANSPORT_INFO_0;

typedef struct _SERVER_XPORT_INFO_0_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSERVER_TRANSPORT_INFO_0 Buffer;
    } 	SERVER_XPORT_INFO_0_CONTAINER;

typedef struct _SERVER_XPORT_INFO_0_CONTAINER *PSERVER_XPORT_INFO_0_CONTAINER;

typedef struct _SERVER_TRANSPORT_INFO_1
    {
    DWORD svti1_numberofvcs;
    /* [string] */ wchar_t *svti1_transportname;
    /* [size_is] */ unsigned char *svti1_transportaddress;
    DWORD svti1_transportaddresslength;
    /* [string] */ wchar_t *svti1_networkaddress;
    /* [string] */ wchar_t *svti1_domain;
    } 	SERVER_TRANSPORT_INFO_1;

typedef struct _SERVER_TRANSPORT_INFO_1 *PSERVER_TRANSPORT_INFO_1;

typedef struct _SERVER_TRANSPORT_INFO_1 *LPSERVER_TRANSPORT_INFO_1;

typedef struct _SERVER_XPORT_INFO_1_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSERVER_TRANSPORT_INFO_1 Buffer;
    } 	SERVER_XPORT_INFO_1_CONTAINER;

typedef struct _SERVER_XPORT_INFO_1_CONTAINER *PSERVER_XPORT_INFO_1_CONTAINER;

typedef struct _SERVER_TRANSPORT_INFO_2
    {
    DWORD svti2_numberofvcs;
    /* [string] */ wchar_t *svti2_transportname;
    /* [size_is] */ unsigned char *svti2_transportaddress;
    DWORD svti2_transportaddresslength;
    /* [string] */ wchar_t *svti2_networkaddress;
    /* [string] */ wchar_t *svti2_domain;
    unsigned long svti2_flags;
    } 	SERVER_TRANSPORT_INFO_2;

typedef struct _SERVER_TRANSPORT_INFO_2 *PSERVER_TRANSPORT_INFO_2;

typedef struct _SERVER_TRANSPORT_INFO_2 *LPSERVER_TRANSPORT_INFO_2;

typedef struct _SERVER_XPORT_INFO_2_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSERVER_TRANSPORT_INFO_2 Buffer;
    } 	SERVER_XPORT_INFO_2_CONTAINER;

typedef struct _SERVER_XPORT_INFO_2_CONTAINER *PSERVER_XPORT_INFO_2_CONTAINER;

typedef struct _SERVER_TRANSPORT_INFO_3
    {
    DWORD svti3_numberofvcs;
    /* [string] */ wchar_t *svti3_transportname;
    /* [size_is] */ unsigned char *svti3_transportaddress;
    DWORD svti3_transportaddresslength;
    /* [string] */ wchar_t *svti3_networkaddress;
    /* [string] */ wchar_t *svti3_domain;
    unsigned long svti3_flags;
    DWORD svti3_passwordlength;
    unsigned char svti3_password[ 256 ];
    } 	SERVER_TRANSPORT_INFO_3;

typedef struct _SERVER_TRANSPORT_INFO_3 *PSERVER_TRANSPORT_INFO_3;

typedef struct _SERVER_TRANSPORT_INFO_3 *LPSERVER_TRANSPORT_INFO_3;

typedef struct _SERVER_XPORT_INFO_3_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSERVER_TRANSPORT_INFO_3 Buffer;
    } 	SERVER_XPORT_INFO_3_CONTAINER;

typedef struct _SERVER_XPORT_INFO_3_CONTAINER *PSERVER_XPORT_INFO_3_CONTAINER;

typedef /* [switch_type] */ union _TRANSPORT_INFO
    {
    /* [case()] */ SERVER_TRANSPORT_INFO_0 Transport0;
    /* [case()] */ SERVER_TRANSPORT_INFO_1 Transport1;
    /* [case()] */ SERVER_TRANSPORT_INFO_2 Transport2;
    /* [case()] */ SERVER_TRANSPORT_INFO_3 Transport3;
    } 	TRANSPORT_INFO;

typedef /* [switch_type] */ union _TRANSPORT_INFO *PTRANSPORT_INFO;

typedef /* [switch_type] */ union _TRANSPORT_INFO *LPTRANSPORT_INFO;

typedef /* [switch_type] */ union _SERVER_XPORT_ENUM_UNION
    {
    /* [case()] */ PSERVER_XPORT_INFO_0_CONTAINER Level0;
    /* [case()] */ PSERVER_XPORT_INFO_1_CONTAINER Level1;
    /* [case()] */ PSERVER_XPORT_INFO_2_CONTAINER Level2;
    /* [case()] */ PSERVER_XPORT_INFO_3_CONTAINER Level3;
    } 	SERVER_XPORT_ENUM_UNION;

typedef struct _SERVER_XPORT_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ SERVER_XPORT_ENUM_UNION XportInfo;
    } 	SERVER_XPORT_ENUM_STRUCT;

typedef struct _SERVER_XPORT_ENUM_STRUCT *PSERVER_XPORT_ENUM_STRUCT;

typedef struct _SERVER_XPORT_ENUM_STRUCT *LPSERVER_XPORT_ENUM_STRUCT;

typedef /* [context_handle] */ void *SHARE_DEL_HANDLE;

typedef SHARE_DEL_HANDLE *PSHARE_DEL_HANDLE;

typedef struct _ADT_SECURITY_DESCRIPTOR
    {
    DWORD Length;
    /* [size_is] */ unsigned char *Buffer;
    } 	ADT_SECURITY_DESCRIPTOR;

typedef struct _ADT_SECURITY_DESCRIPTOR *PADT_SECURITY_DESCRIPTOR;

typedef struct _STAT_SERVER_0
    {
    DWORD sts0_start;
    DWORD sts0_fopens;
    DWORD sts0_devopens;
    DWORD sts0_jobsqueued;
    DWORD sts0_sopens;
    DWORD sts0_stimedout;
    DWORD sts0_serrorout;
    DWORD sts0_pwerrors;
    DWORD sts0_permerrors;
    DWORD sts0_syserrors;
    DWORD sts0_bytessent_low;
    DWORD sts0_bytessent_high;
    DWORD sts0_bytesrcvd_low;
    DWORD sts0_bytesrcvd_high;
    DWORD sts0_avresponse;
    DWORD sts0_reqbufneed;
    DWORD sts0_bigbufneed;
    } 	STAT_SERVER_0;

typedef struct _STAT_SERVER_0 *PSTAT_SERVER_0;

typedef struct _STAT_SERVER_0 *LPSTAT_SERVER_0;

typedef struct _TIME_OF_DAY_INFO
    {
    DWORD tod_elapsedt;
    DWORD tod_msecs;
    DWORD tod_hours;
    DWORD tod_mins;
    DWORD tod_secs;
    DWORD tod_hunds;
    long tod_timezone;
    DWORD tod_tinterval;
    DWORD tod_day;
    DWORD tod_month;
    DWORD tod_year;
    DWORD tod_weekday;
    } 	TIME_OF_DAY_INFO;

typedef struct _TIME_OF_DAY_INFO *PTIME_OF_DAY_INFO;

typedef struct _TIME_OF_DAY_INFO *LPTIME_OF_DAY_INFO;

typedef struct _NET_DFS_ENTRY_ID
    {
    GUID Uid;
    /* [string] */ WCHAR *Prefix;
    } 	NET_DFS_ENTRY_ID;

typedef struct _NET_DFS_ENTRY_ID *LPNET_DFS_ENTRY_ID;

typedef struct _NET_DFS_ENTRY_ID_CONTAINER
    {
    unsigned long Count;
    /* [size_is] */ LPNET_DFS_ENTRY_ID Buffer;
    } 	NET_DFS_ENTRY_ID_CONTAINER;

typedef struct _NET_DFS_ENTRY_ID_CONTAINER *LPNET_DFS_ENTRY_ID_CONTAINER;

typedef struct _DFS_SITENAME_INFO
    {
    unsigned long SiteFlags;
    /* [unique][string] */ WCHAR *SiteName;
    } 	DFS_SITENAME_INFO;

typedef struct _DFS_SITENAME_INFO *PDFS_SITENAME_INFO;

typedef struct _DFS_SITENAME_INFO *LPDFS_SITENAME_INFO;

typedef struct _DFS_SITELIST_INFO
    {
    unsigned long cSites;
    /* [size_is] */ DFS_SITENAME_INFO Site[ 1 ];
    } 	DFS_SITELIST_INFO;

typedef struct _DFS_SITELIST_INFO *PDFS_SITELIST_INFO;

typedef struct _DFS_SITELIST_INFO *LPDFS_SITELIST_INFO;

typedef struct _SERVER_ALIAS_INFO_0
    {
    /* [string] */ LMSTR srvai0_alias;
    /* [string] */ LMSTR srvai0_target;
    BOOLEAN srvai0_default;
    ULONG srvai0_reserved;
    } 	SERVER_ALIAS_INFO_0;

typedef struct _SERVER_ALIAS_INFO_0 *PSERVER_ALIAS_INFO_0;

typedef struct _SERVER_ALIAS_INFO_0 *LPSERVER_ALIAS_INFO_0;

typedef struct _SERVER_ALIAS_INFO_0_CONTAINER
    {
    DWORD EntriesRead;
    /* [size_is] */ LPSERVER_ALIAS_INFO_0 Buffer;
    } 	SERVER_ALIAS_INFO_0_CONTAINER;

typedef struct _SERVER_ALIAS_ENUM_STRUCT
    {
    DWORD Level;
    /* [switch_is] */ /* [switch_type] */ union _SERVER_ALIAS_ENUM_UNION
        {
        /* [case()] */ SERVER_ALIAS_INFO_0_CONTAINER *Level0;
        } 	ServerAliasInfo;
    } 	SERVER_ALIAS_ENUM_STRUCT;

typedef struct _SERVER_ALIAS_ENUM_STRUCT *PSERVER_ALIAS_ENUM_STRUCT;

typedef struct _SERVER_ALIAS_ENUM_STRUCT *LPSERVER_ALIAS_ENUM_STRUCT;

typedef /* [switch_type] */ union _SERVER_ALIAS_INFO
    {
    /* [case()] */ LPSERVER_ALIAS_INFO_0 ServerAliasInfo0;
    } 	SERVER_ALIAS_INFO;

typedef /* [switch_type] */ union _SERVER_ALIAS_INFO *PSERVER_ALIAS_INFO;

typedef /* [switch_type] */ union _SERVER_ALIAS_INFO *LPSERVER_ALIAS_INFO;

void Opnum0NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum1NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum2NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum3NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum4NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum5NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum6NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

void Opnum7NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NET_API_STATUS NetrConnectionEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *Qualifier,
    /* [out][in] */ LPCONNECT_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrFileEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *BasePath,
    /* [unique][string][in] */ WCHAR *UserName,
    /* [out][in] */ PFILE_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrFileGetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD FileId,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPFILE_INFO InfoStruct);

NET_API_STATUS NetrFileClose( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD FileId);

NET_API_STATUS NetrSessionEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ClientName,
    /* [unique][string][in] */ WCHAR *UserName,
    /* [out][in] */ PSESSION_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrSessionDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ClientName,
    /* [unique][string][in] */ WCHAR *UserName);

NET_API_STATUS NetrShareAdd( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSHARE_INFO InfoStruct,
    /* [unique][out][in] */ DWORD *ParmErr);

NET_API_STATUS NetrShareEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSHARE_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrShareGetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSHARE_INFO InfoStruct);

NET_API_STATUS NetrShareSetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSHARE_INFO ShareInfo,
    /* [unique][out][in] */ DWORD *ParmErr);

NET_API_STATUS NetrShareDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Reserved);

NET_API_STATUS NetrShareDelSticky( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Reserved);

NET_API_STATUS NetrShareCheck( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Device,
    /* [out] */ DWORD *Type);

NET_API_STATUS NetrServerGetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][out] */ LPSERVER_INFO InfoStruct);

NET_API_STATUS NetrServerSetInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSERVER_INFO ServerInfo,
    /* [unique][out][in] */ DWORD *ParmErr);

NET_API_STATUS NetrServerDiskEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [out][in] */ DISK_ENUM_CONTAINER *DiskInfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrServerStatisticsGet( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *Service,
    /* [in] */ DWORD Level,
    /* [in] */ DWORD Options,
    /* [out] */ LPSTAT_SERVER_0 *InfoStruct);

NET_API_STATUS NetrServerTransportAdd( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [in] */ LPSERVER_TRANSPORT_INFO_0 Buffer);

NET_API_STATUS NetrServerTransportEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSERVER_XPORT_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrServerTransportDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [in] */ LPSERVER_TRANSPORT_INFO_0 Buffer);

NET_API_STATUS NetrRemoteTOD( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out] */ LPTIME_OF_DAY_INFO *BufferPtr);

void Opnum29NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NET_API_STATUS NetprPathType( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *PathName,
    /* [out] */ DWORD *PathType,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetprPathCanonicalize( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *PathName,
    /* [size_is][out] */ unsigned char *Outbuf,
    /* [range][in] */ DWORD OutbufLen,
    /* [string][in] */ WCHAR *Prefix,
    /* [out][in] */ DWORD *PathType,
    /* [in] */ DWORD Flags);

long NetprPathCompare( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *PathName1,
    /* [string][in] */ WCHAR *PathName2,
    /* [in] */ DWORD PathType,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetprNameValidate( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Name,
    /* [in] */ DWORD NameType,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetprNameCanonicalize( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Name,
    /* [size_is][out] */ WCHAR *Outbuf,
    /* [range][in] */ DWORD OutbufLen,
    /* [in] */ DWORD NameType,
    /* [in] */ DWORD Flags);

long NetprNameCompare( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *Name1,
    /* [string][in] */ WCHAR *Name2,
    /* [in] */ DWORD NameType,
    /* [in] */ DWORD Flags);

NET_API_STATUS NetrShareEnumSticky( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSHARE_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ DWORD *TotalEntries,
    /* [unique][out][in] */ DWORD *ResumeHandle);

NET_API_STATUS NetrShareDelStart( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *NetName,
    /* [in] */ DWORD Reserved,
    /* [out] */ PSHARE_DEL_HANDLE ContextHandle);

NET_API_STATUS NetrShareDelCommit( 
    /* [out][in] */ PSHARE_DEL_HANDLE ContextHandle);

DWORD NetrpGetFileSecurity( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ShareName,
    /* [string][in] */ WCHAR *lpFileName,
    /* [in] */ SECURITY_INFORMATION RequestedInformation,
    /* [out] */ PADT_SECURITY_DESCRIPTOR *SecurityDescriptor);

DWORD NetrpSetFileSecurity( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][string][in] */ WCHAR *ShareName,
    /* [string][in] */ WCHAR *lpFileName,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PADT_SECURITY_DESCRIPTOR SecurityDescriptor);

NET_API_STATUS NetrServerTransportAddEx( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPTRANSPORT_INFO Buffer);

void Opnum42NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NET_API_STATUS NetrDfsGetVersion( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out] */ DWORD *Version);

NET_API_STATUS NetrDfsCreateLocalPartition( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *ShareName,
    /* [in] */ GUID *EntryUid,
    /* [string][in] */ WCHAR *EntryPrefix,
    /* [string][in] */ WCHAR *ShortName,
    /* [in] */ LPNET_DFS_ENTRY_ID_CONTAINER RelationInfo,
    /* [in] */ int Force);

NET_API_STATUS NetrDfsDeleteLocalPartition( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix);

NET_API_STATUS NetrDfsSetLocalVolumeState( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix,
    /* [in] */ unsigned long State);

void Opnum47NotUsedOnWire( 
    /* [in] */ handle_t IDL_handle);

NET_API_STATUS NetrDfsCreateExitPoint( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix,
    /* [in] */ unsigned long Type,
    /* [range][in] */ DWORD ShortPrefixLen,
    /* [size_is][out] */ WCHAR *ShortPrefix);

NET_API_STATUS NetrDfsDeleteExitPoint( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix,
    /* [in] */ unsigned long Type);

NET_API_STATUS NetrDfsModifyPrefix( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ GUID *Uid,
    /* [string][in] */ WCHAR *Prefix);

NET_API_STATUS NetrDfsFixLocalVolume( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [string][in] */ WCHAR *VolumeName,
    /* [in] */ unsigned long EntryType,
    /* [in] */ unsigned long ServiceType,
    /* [string][in] */ WCHAR *StgId,
    /* [in] */ GUID *EntryUid,
    /* [string][in] */ WCHAR *EntryPrefix,
    /* [in] */ LPNET_DFS_ENTRY_ID_CONTAINER RelationInfo,
    /* [in] */ unsigned long CreateDisposition);

NET_API_STATUS NetrDfsManagerReportSiteInfo( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [unique][out][in] */ LPDFS_SITELIST_INFO *ppSiteInfo);

NET_API_STATUS NetrServerTransportDelEx( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPTRANSPORT_INFO Buffer);

NET_API_STATUS NetrServerAliasAdd( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSERVER_ALIAS_INFO InfoStruct);

NET_API_STATUS NetrServerAliasEnum( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [out][in] */ LPSERVER_ALIAS_ENUM_STRUCT InfoStruct,
    /* [in] */ DWORD PreferedMaximumLength,
    /* [out] */ LPDWORD TotalEntries,
    /* [unique][out][in] */ LPDWORD ResumeHandle);

NET_API_STATUS NetrServerAliasDel( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSERVER_ALIAS_INFO InfoStruct);

NET_API_STATUS NetrShareDelEx( 
    /* [unique][string][in] */ SRVSVC_HANDLE ServerName,
    /* [in] */ DWORD Level,
    /* [switch_is][in] */ LPSHARE_INFO ShareInfo);



extern RPC_IF_HANDLE srvsvc_v3_0_c_ifspec;
extern RPC_IF_HANDLE srvsvc_v3_0_s_ifspec;
#endif /* __srvsvc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER SRVSVC_HANDLE_bind ( SRVSVC_HANDLE );
void     __RPC_USER SRVSVC_HANDLE_unbind( SRVSVC_HANDLE,  handle_t );

void __RPC_USER SHARE_DEL_HANDLE_rundown( SHARE_DEL_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


