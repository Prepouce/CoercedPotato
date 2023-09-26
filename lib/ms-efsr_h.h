/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for MS-EFSR_df1941c5-fe89-4e79-bf10-463657acf44d.idl:
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


#ifndef __MS2DEFSR_df1941c52Dfe892D4e792Dbf102D463657acf44d_h_h__
#define __MS2DEFSR_df1941c52Dfe892D4e792Dbf102D463657acf44d_h_h__

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


#ifndef __efsrpc_through_pipe_efsrpc_INTERFACE_DEFINED__
#define __efsrpc_through_pipe_efsrpc_INTERFACE_DEFINED__

/* interface efsrpc_through_pipe_efsrpc */
/* [version][uuid] */ 

typedef struct pipe_EFS_EXIM_PIPE
    {
    void (__RPC_USER * pull) (
        char * state,
        unsigned char * buf,
        unsigned long esize,
        unsigned long * ecount );
    void (__RPC_USER * push) (
        char * state,
        unsigned char * buf,
        unsigned long ecount );
    void (__RPC_USER * alloc) (
        char * state,
        unsigned long bsize,
        unsigned char * * buf,
        unsigned long * bcount );
    char * state;
    } 	EFS_EXIM_PIPE;

typedef unsigned long DWORD;

typedef unsigned long *PDWORD;

typedef unsigned long *LPDWORD;

typedef int BOOL;

typedef /* [context_handle] */ void* PEXIMPORT_CONTEXT_HANDLE;

typedef struct _RPC_SID_IDENTIFIER_AUTHORITY
    {
    byte Value[ 6 ];
    } 	RPC_SID_IDENTIFIER_AUTHORITY;

typedef struct _RPC_SID
    {
    unsigned char Revision;
    unsigned char SubAuthorityCount;
    RPC_SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* [size_is] */ unsigned long SubAuthority[ 1 ];
    } 	RPC_SID;

typedef struct _RPC_SID *PRPC_SID;

typedef struct _EFS_RPC_BLOB *PEFS_RPC_BLOB;

typedef struct Struct_68_t
    {
    unsigned char StructMember0[ 6 ];
    } 	Struct_68_t;

typedef struct Struct_100_t
    {
    unsigned char StructMember0;
    unsigned char StructMember1;
    struct Struct_68_t StructMember2;
    /* [size_is] */ long StructMember3[ 1 ];
    } 	Struct_100_t;

typedef struct Struct_136_t
    {
    long StructMember0;
    /* [size_is][unique] */ unsigned char *StructMember1;
    } 	Struct_136_t;

typedef struct Struct_152_t
    {
    long StructMember0;
    /* [unique] */ struct Struct_100_t *StructMember1;
    /* [unique] */ struct Struct_136_t *StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    } 	Struct_152_t;

typedef struct Struct_220_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_152_t **StructMember1;
    } 	Struct_220_t;

typedef struct Struct_266_t
    {
    long StructMember0;
    long StructMember1;
    /* [size_is][unique] */ unsigned char *StructMember2;
    } 	Struct_266_t;

typedef struct Struct_282_t
    {
    long StructMember0;
    /* [unique] */ struct Struct_100_t *StructMember1;
    /* [unique] */ struct Struct_266_t *StructMember2;
    } 	Struct_282_t;

typedef struct Struct_346_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_282_t **StructMember1;
    } 	Struct_346_t;

typedef struct Struct_392_t
    {
    long StructMember0;
    /* [size_is][unique] */ unsigned char *StructMember1;
    } 	Struct_392_t;

typedef struct Struct_462_t
    {
    /* [range] */ long StructMember0;
    /* [range] */ long StructMember1;
    /* [size_is][unique] */ unsigned char *StructMember2;
    } 	Struct_462_t;

typedef struct Struct_492_t
    {
    long StructMember0;
    /* [unique] */ struct Struct_220_t *StructMember1;
    /* [unique] */ struct Struct_282_t *StructMember2;
    /* [unique] */ struct Struct_392_t *StructMember3;
    } 	Struct_492_t;

typedef struct Struct_530_t
    {
    long StructMember0;
    /* [unique] */ struct Struct_100_t *StructMember1;
    /* [string][unique] */ wchar_t *StructMember2;
    } 	Struct_530_t;

typedef struct Struct_594_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_530_t **StructMember1;
    } 	Struct_594_t;

typedef struct Struct_762_t
    {
    unsigned char StructMember0[ 16 ];
    } 	Struct_762_t;

typedef struct Struct_836_t
    {
    long StructMember0;
    long StructMember1;
    } 	Struct_836_t;

typedef struct Struct_850_t
    {
    long StructMember0;
    short StructMember1;
    short StructMember2;
    byte StructMember3[ 8 ];
    } 	Struct_850_t;

typedef struct Struct_904_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_850_t *StructMember1;
    hyper StructMember2;
    /* [string][unique] */ wchar_t *StructMember3;
    struct Struct_836_t StructMember4;
    } 	Struct_904_t;

typedef struct Struct_972_t
    {
    long StructMember0;
    /* [size_is][unique] */ struct Struct_904_t **StructMember1;
    } 	Struct_972_t;

long EfsRpcOpenFileRaw( 
    /* [in] */ handle_t binding_h,
    /* [out] */ PEXIMPORT_CONTEXT_HANDLE *hContext,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ long Flags);

long EfsRpcReadFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [out] */ wchar_t *EfsOutPipe);

long EfsRpcWriteFileRaw( 
    /* [in] */ PEXIMPORT_CONTEXT_HANDLE hContext,
    /* [in] */ EFS_EXIM_PIPE *EfsInPipe);

void EfsRpcCloseRaw( 
    /* [out][in] */ PEXIMPORT_CONTEXT_HANDLE *hContext);

long EfsRpcEncryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName);

long EfsRpcDecryptFileSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ unsigned long OpenFlag);

DWORD EfsRpcQueryUsersOnFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **Users);

DWORD EfsRpcQueryRecoveryAgents( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ ENCRYPTION_CERTIFICATE_HASH_LIST **RecoveryAgents);

DWORD EfsRpcRemoveUsersFromFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_HASH_LIST *Users);

DWORD EfsRpcAddUsersToFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates);

long Proc10_EfsRpcSetFileEncryptionKey( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][in] */ struct Struct_282_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ long arg_3);

DWORD EfsRpcNotSupported( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *Reserved1,
    /* [string][in] */ wchar_t *Reserved2,
    /* [in] */ DWORD dwReserved1,
    /* [in] */ DWORD dwReserved2,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [in] */ BOOL bReserved);

DWORD EfsRpcFileKeyInfo( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo);

DWORD EfsRpcDuplicateEncryptionInfoFile( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *SrcFileName,
    /* [string][in] */ wchar_t *DestFileName,
    /* [in] */ DWORD dwCreationDisposition,
    /* [in] */ DWORD dwAttributes,
    /* [unique][in] */ EFS_RPC_BLOB *RelativeSD,
    /* [in] */ BOOL bInheritHandle);

long Proc14_EfsUsePinForEncryptedFiles( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ struct Struct_136_t *arg_1,
    /* [in] */ struct Struct_462_t *arg_2);

DWORD EfsRpcAddUsersToFileEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ ENCRYPTION_CERTIFICATE_LIST *EncryptionCertificates);

DWORD EfsRpcFileKeyInfoEx( 
    /* [in] */ handle_t binding_h,
    /* [in] */ DWORD dwFileKeyInfoFlags,
    /* [unique][in] */ EFS_RPC_BLOB *Reserved,
    /* [string][in] */ wchar_t *FileName,
    /* [in] */ DWORD InfoClass,
    /* [out] */ EFS_RPC_BLOB **KeyInfo);

long Proc17_EfsRpcFileKeyInfoEx( 
    /* [in] */ handle_t IDL_handle,
    /* [ref][out] */ struct Struct_392_t **arg_1);

DWORD EfsRpcGetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [ref][out] */ EFS_RPC_BLOB **EfsStreamBlob);

DWORD EfsRpcSetEncryptedFileMetadata( 
    /* [in] */ handle_t binding_h,
    /* [ref][string][in] */ wchar_t *FileName,
    /* [unique][in] */ EFS_RPC_BLOB *OldEfsStreamBlob,
    /* [ref][in] */ EFS_RPC_BLOB *NewEfsStreamBlob,
    /* [unique][in] */ ENCRYPTED_FILE_METADATA_SIGNATURE *NewEfsSignature);

DWORD EfsRpcFlushEfsCache( 
    /* [in] */ handle_t binding_h);

long EfsRpcEncryptFileExSrv( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [unique][string][in] */ wchar_t *ProtectorDescriptor,
    /* [in] */ unsigned long Flags);

DWORD EfsRpcQueryProtectors( 
    /* [in] */ handle_t binding_h,
    /* [string][in] */ wchar_t *FileName,
    /* [out] */ PENCRYPTION_PROTECTOR_LIST **ppProtectorList);

long Proc23_EfsRpcWriteFileWithHeaderRaw( 
    /* [context_handle][in] */ void *arg_0,
    /* [in] */ unsigned long *arg_1,
    /* [in] */ struct Struct_392_t *arg_2,
    /* [in] */ hyper arg_3,
    /* [in] */ long arg_4);

long Proc24_EdpRpcCredentialCreate( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [string][ref][out] */ wchar_t **arg_4);

long Proc25_EdpRpcCredentialQuery( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [string][ref][out] */ wchar_t **arg_4);

long Proc26_EdpRpcCredentialExists( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [out] */ long *arg_4);

long Proc27_EdpRpcCredentialDelete( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [string][full][in] */ wchar_t *arg_4,
    /* [string][full][in] */ wchar_t *arg_5);

long Proc28_EdpRpcQueryRevokedPolicyOwnerIds( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][ref][out] */ wchar_t **arg_3);

long Proc29_EdpRpcQueryDplEnforcedPolicyOwnerIds( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc30_EdpRpcGetLockSessionWrappedKey( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [size_is][full][in] */ unsigned char *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_4,
    /* [out] */ long *arg_5,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_6,
    /* [out] */ long *arg_7);

long Proc31_EdpRpcGetLockSessionUnwrappedKey( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [size_is][full][in] */ unsigned char *arg_2,
    /* [in] */ long arg_3,
    /* [size_is][full][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_6,
    /* [out] */ long *arg_7);

long Proc32_EdpRpcGetCredServiceState( 
    /* [in] */ handle_t IDL_handle,
    /* [out] */ long *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4,
    /* [out] */ long *arg_5,
    /* [out] */ long *arg_6,
    /* [out] */ long *arg_7,
    /* [out] */ long *arg_8,
    /* [out] */ long *arg_9);

long Proc33_EdpRpcDplUpgradePinInfo( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [out] */ long *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ long *arg_4);

long Proc34_EdpRpcDplUpgradeVerifyUser( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [out] */ long *arg_3,
    /* [out] */ unsigned __int3264 *arg_4);

long Proc35_EdpRpcDplUserCredentialsSet( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [in] */ short arg_3,
    /* [in] */ unsigned __int3264 arg_4);

long Proc36_EdpRpcDplUserUnlockStart( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [in] */ hyper arg_3,
    /* [out] */ unsigned __int3264 *arg_4);

long Proc37_EdpRpcDplUserUnlockComplete( 
    /* [in] */ handle_t IDL_handle,
    /* [string][full][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [in] */ unsigned __int3264 arg_3);

long Proc38_EdpRpcQueueFileForEncryption( 
    /* [in] */ handle_t IDL_handle,
    /* [unique][in] */ struct Struct_762_t *arg_1,
    /* [string][unique][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4);

long Proc39_EdpRpcServiceFileEncryptionQueue( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ unsigned char arg_1);

long Proc40_EdpRpcCredSvcControl( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ long arg_1,
    /* [string][full][in] */ wchar_t *arg_2,
    /* [string][full][in] */ wchar_t *arg_3,
    /* [size_is][full][in] */ unsigned char *arg_4,
    /* [in] */ long arg_5,
    /* [size_is][full][in] */ unsigned char *arg_6,
    /* [in] */ long arg_7,
    /* [size_is][size_is][ref][out] */ unsigned char **arg_8,
    /* [out] */ long *arg_9);

long Proc41_EdpRpcRmsClearKeys( 
    /* [in] */ handle_t IDL_handle);

long Proc42_EdpRpcRmsContainerizeFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][unique][in] */ wchar_t *arg_3,
    /* [string][in] */ wchar_t *arg_4,
    /* [string][ref][out] */ wchar_t **arg_5);

long Proc43_EdpRpcRmsGetContainerIdentity( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][ref][out] */ wchar_t **arg_2);

long Proc44_EdpRpcRmsDecontainerizeFile( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [string][in] */ wchar_t *arg_2,
    /* [string][ref][out] */ wchar_t **arg_3);

long Proc45_EdpRpcAllowFileAccessForProcess( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ wchar_t *arg_1,
    /* [in] */ long arg_2,
    /* [string][unique][in] */ wchar_t *arg_3);

long Proc46_EdpRpcGetTfaCache( 
    /* [in] */ handle_t IDL_handle,
    /* [ref][out] */ struct Struct_972_t **arg_1);



extern RPC_IF_HANDLE efsrpc_through_pipe_efsrpc_v1_0_c_ifspec;
extern RPC_IF_HANDLE efsrpc_through_pipe_efsrpc_v1_0_s_ifspec;
#endif /* __efsrpc_through_pipe_efsrpc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PEXIMPORT_CONTEXT_HANDLE_rundown( PEXIMPORT_CONTEXT_HANDLE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


