

/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>
#include "ms-rprn_h.h"

#define TYPE_FORMAT_STRING_SIZE   2497                              
#define PROC_FORMAT_STRING_SIZE   6329                              
#define EXPR_FORMAT_STRING_SIZE   17                                
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _ms2Drprn_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_TYPE_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_PROC_FORMAT_STRING;

typedef struct _ms2Drprn_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ms2Drprn_MIDL_EXPR_FORMAT_STRING;


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


extern const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString;
extern const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString;
extern const ms2Drprn_MIDL_EXPR_FORMAT_STRING ms2Drprn__MIDL_ExprFormatString;

/* Standard interface: winspool, ver. 1.0,
   GUID={0x12345678,0x1234,0xabcd,{0xef,0x00,0x01,0x23,0x45,0x67,0x89,0xab}} */


extern const MIDL_SERVER_INFO winspool_ServerInfo;

extern const RPC_DISPATCH_TABLE winspool_v1_0_DispatchTable;

static const RPC_SERVER_INTERFACE winspool___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345678,0x1234,0xabcd,{0xef,0x00,0x01,0x23,0x45,0x67,0x89,0xab}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&winspool_v1_0_DispatchTable,
    0,
    0,
    0,
    &winspool_ServerInfo,
    0x06000000
    };
RPC_IF_HANDLE winspool_v1_0_s_ifspec = (RPC_IF_HANDLE)& winspool___RpcServerInterface;
#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC winspool_StubDesc;
#ifdef __cplusplus
}
#endif

extern const NDR_RUNDOWN RundownRoutines[];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const ms2Drprn_MIDL_PROC_FORMAT_STRING ms2Drprn__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcEnumPrinters */

			0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 10 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 12 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 14 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 16 */	NdrFcShort( 0x18 ),	/* 24 */
/* 18 */	NdrFcShort( 0x40 ),	/* 64 */
/* 20 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 22 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	NdrFcShort( 0x1 ),	/* 1 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Flags */

/* 32 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 34 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Name */

/* 38 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 40 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 42 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 44 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 46 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinterEnum */

/* 50 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 52 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 54 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 56 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 58 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 60 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 62 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 64 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 66 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 68 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 70 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 72 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 74 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 76 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 78 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinter */

/* 80 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 82 */	NdrFcLong( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x1 ),	/* 1 */
/* 88 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 90 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 92 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 94 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	NdrFcShort( 0x40 ),	/* 64 */
/* 100 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 102 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0x1 ),	/* 1 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 112 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 114 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 116 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 118 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 120 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 122 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter pDatatype */

/* 124 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 126 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 128 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 130 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 132 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 134 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter AccessRequired */

/* 136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 138 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 144 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJob */

/* 148 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x2 ),	/* 2 */
/* 156 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 158 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 160 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 162 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 164 */	NdrFcShort( 0x34 ),	/* 52 */
/* 166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 168 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 170 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 180 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 182 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 184 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 186 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJobContainer */

/* 192 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 196 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter Command */

/* 198 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 200 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetJob */

/* 210 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x3 ),	/* 3 */
/* 218 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 220 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 224 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 226 */	NdrFcShort( 0x3c ),	/* 60 */
/* 228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 230 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 232 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 236 */	NdrFcShort( 0x1 ),	/* 1 */
/* 238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 242 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 244 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 246 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 260 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 264 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 266 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 268 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 274 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 280 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobs */

/* 284 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x4 ),	/* 4 */
/* 292 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 294 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 298 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 300 */	NdrFcShort( 0x44 ),	/* 68 */
/* 302 */	NdrFcShort( 0x40 ),	/* 64 */
/* 304 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 306 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 316 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 320 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter FirstJob */

/* 322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 324 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NoJobs */

/* 328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 330 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 336 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 340 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 342 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 344 */	NdrFcShort( 0x196 ),	/* Type Offset=406 */

	/* Parameter cbBuf */

/* 346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 348 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 352 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 354 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 358 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 360 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 366 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinter */

/* 370 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x5 ),	/* 5 */
/* 378 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 380 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 382 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 384 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x40 ),	/* 64 */
/* 390 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 392 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x1 ),	/* 1 */
/* 398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 402 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 404 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 406 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterContainer */

/* 408 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 410 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 412 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter pDevModeContainer */

/* 414 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 416 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 418 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pSecurityContainer */

/* 420 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 422 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 424 */	NdrFcShort( 0x322 ),	/* Type Offset=802 */

	/* Parameter pHandle */

/* 426 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 428 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 430 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinter */

/* 438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x6 ),	/* 6 */
/* 446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 448 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 452 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 454 */	NdrFcShort( 0x24 ),	/* 36 */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 460 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 470 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 472 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 474 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinter */

/* 482 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x7 ),	/* 7 */
/* 490 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 492 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 494 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 496 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 498 */	NdrFcShort( 0x2c ),	/* 44 */
/* 500 */	NdrFcShort( 0x8 ),	/* 8 */
/* 502 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 504 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 514 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 516 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 518 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pPrinterContainer */

/* 520 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 522 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 524 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter pDevModeContainer */

/* 526 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 528 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 530 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pSecurityContainer */

/* 532 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 534 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 536 */	NdrFcShort( 0x322 ),	/* Type Offset=802 */

	/* Parameter Command */

/* 538 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 540 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 546 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinter */

/* 550 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 558 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 560 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 562 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 564 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 566 */	NdrFcShort( 0x34 ),	/* 52 */
/* 568 */	NdrFcShort( 0x24 ),	/* 36 */
/* 570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 572 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 582 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 584 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 586 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter Level */

/* 588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinter */

/* 594 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 596 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 598 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Parameter cbBuf */

/* 600 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 602 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 606 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 608 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 614 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriver */

/* 618 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 620 */	NdrFcLong( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x9 ),	/* 9 */
/* 626 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 628 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 630 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 632 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 640 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* 1 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 650 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 652 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 654 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 656 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 658 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 660 */	NdrFcShort( 0x58a ),	/* Type Offset=1418 */

	/* Return value */

/* 662 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 664 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDrivers */

/* 668 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 670 */	NdrFcLong( 0x0 ),	/* 0 */
/* 674 */	NdrFcShort( 0xa ),	/* 10 */
/* 676 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 678 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 680 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 682 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 684 */	NdrFcShort( 0x10 ),	/* 16 */
/* 686 */	NdrFcShort( 0x40 ),	/* 64 */
/* 688 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 690 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 694 */	NdrFcShort( 0x1 ),	/* 1 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 700 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 704 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 706 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 710 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 712 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDrivers */

/* 718 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 720 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 722 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 726 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 730 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 732 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 736 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 738 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 744 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver */

/* 748 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 754 */	NdrFcShort( 0xb ),	/* 11 */
/* 756 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 758 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 760 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 762 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 764 */	NdrFcShort( 0x34 ),	/* 52 */
/* 766 */	NdrFcShort( 0x24 ),	/* 36 */
/* 768 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 770 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 772 */	NdrFcShort( 0x1 ),	/* 1 */
/* 774 */	NdrFcShort( 0x1 ),	/* 1 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 780 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 782 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 784 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pEnvironment */

/* 786 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 788 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 790 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 794 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 798 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 800 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 802 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 804 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 806 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 810 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 812 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 818 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriverDirectory */

/* 822 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0xc ),	/* 12 */
/* 830 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 832 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 834 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 836 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 838 */	NdrFcShort( 0x10 ),	/* 16 */
/* 840 */	NdrFcShort( 0x24 ),	/* 36 */
/* 842 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 844 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 846 */	NdrFcShort( 0x1 ),	/* 1 */
/* 848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 854 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 856 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 858 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 864 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 866 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriverDirectory */

/* 872 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 874 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 876 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 878 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 880 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 886 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 892 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDriver */

/* 896 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0xd ),	/* 13 */
/* 904 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 906 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 908 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 910 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 916 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 918 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 928 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 930 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 932 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 934 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 936 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 938 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pDriverName */

/* 940 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 942 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 944 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 948 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProcessor */

/* 952 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0xe ),	/* 14 */
/* 960 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 962 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 964 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 966 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 972 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 974 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 984 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 986 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 988 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 990 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 992 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 994 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pPathName */

/* 996 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 998 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1000 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pPrintProcessorName */

/* 1002 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1004 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1006 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1010 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessors */

/* 1014 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0xf ),	/* 15 */
/* 1022 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1024 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1026 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1028 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1030 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1032 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1034 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1036 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 1046 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1048 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1050 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 1052 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1056 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1060 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorInfo */

/* 1064 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1066 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1068 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 1070 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1072 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1078 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1082 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1084 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1090 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrintProcessorDirectory */

/* 1094 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1102 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1104 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 1106 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1108 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1112 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1114 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1116 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 1126 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1128 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1130 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 1132 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1134 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1136 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 1138 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1140 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorDirectory */

/* 1144 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1146 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1148 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 1150 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1152 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1156 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1158 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1164 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartDocPrinter */

/* 1168 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1174 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1176 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1178 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1180 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1182 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1184 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1186 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1188 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1190 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1198 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1200 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1202 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1204 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pDocInfoContainer */

/* 1206 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1208 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1210 */	NdrFcShort( 0x5de ),	/* Type Offset=1502 */

	/* Parameter pJobId */

/* 1212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1214 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1220 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartPagePrinter */

/* 1224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1232 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1234 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1236 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1238 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1244 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1246 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1256 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1258 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1260 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 1262 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWritePrinter */

/* 1268 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1270 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1274 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1276 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1278 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1280 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1282 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1284 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1286 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1290 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1300 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1302 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1304 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pBuf */

/* 1306 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1310 */	NdrFcShort( 0x5f2 ),	/* Type Offset=1522 */

	/* Parameter cbBuf */

/* 1312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 1318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1320 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1326 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndPagePrinter */

/* 1330 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1336 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1338 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1340 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1342 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1344 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1352 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1362 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1364 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1366 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 1368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1370 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAbortPrinter */

/* 1374 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1382 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1384 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1386 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1390 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1394 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1396 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1406 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1408 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1410 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 1412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1414 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReadPrinter */

/* 1418 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1426 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1428 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1432 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1434 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1436 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1438 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1440 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1450 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1452 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1454 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pBuf */

/* 1456 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1458 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1460 */	NdrFcShort( 0x5f2 ),	/* Type Offset=1522 */

	/* Parameter cbBuf */

/* 1462 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1464 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNoBytesRead */

/* 1468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1470 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1476 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndDocPrinter */

/* 1480 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1488 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1490 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1492 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1494 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1496 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1500 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1502 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1512 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1514 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1516 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1520 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddJob */

/* 1524 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1532 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1534 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1536 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1538 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1540 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1542 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1544 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1546 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1550 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1556 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1558 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1560 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter Level */

/* 1562 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1564 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddJob */

/* 1568 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 1570 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1572 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Parameter cbBuf */

/* 1574 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1576 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1582 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1588 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcScheduleJob */

/* 1592 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1598 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1602 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1604 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1608 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1614 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1624 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1626 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1628 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 1630 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterData */

/* 1642 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1650 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1652 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1654 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1656 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1658 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1660 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1662 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1664 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1666 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1674 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1676 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1678 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pValueName */

/* 1680 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1682 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1684 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pType */

/* 1686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1688 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1692 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 1694 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1696 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter nSize */

/* 1698 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1700 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1706 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1712 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinterData */

/* 1716 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1722 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1724 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1726 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1728 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1730 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1732 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1738 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1748 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1750 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1752 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pValueName */

/* 1754 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1756 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1758 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter Type */

/* 1760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1762 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1766 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1768 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1770 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cbData */

/* 1772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1774 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1778 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1780 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForPrinterChange */

/* 1784 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1786 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1790 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1792 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1794 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1798 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1800 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1802 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1804 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1806 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1816 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1818 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1820 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter Flags */

/* 1822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1824 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFlags */

/* 1828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1830 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1836 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClosePrinter */

/* 1840 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1846 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1848 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1850 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 1852 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1854 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1856 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1858 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1862 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinter */

/* 1872 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 1874 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1876 */	NdrFcShort( 0x610 ),	/* Type Offset=1552 */

	/* Return value */

/* 1878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1880 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddForm */

/* 1884 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1892 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1894 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1896 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1898 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1906 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 1916 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 1918 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1920 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pFormInfoContainer */

/* 1922 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1924 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1926 */	NdrFcShort( 0x696 ),	/* Type Offset=1686 */

	/* Return value */

/* 1928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1930 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteForm */

/* 1934 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1940 */	NdrFcShort( 0x1f ),	/* 31 */
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
/* 1970 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pFormName */

/* 1972 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1974 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1976 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 1978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1980 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetForm */

/* 1984 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 1986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1992 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1994 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 1996 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 1998 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2000 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2002 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2004 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2006 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2010 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2016 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2018 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2020 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pFormName */

/* 2022 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2026 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter Level */

/* 2028 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 2034 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2036 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2038 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 2040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2042 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2046 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2048 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2052 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2054 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetForm */

/* 2058 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2060 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2066 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2068 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2070 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2072 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2078 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2080 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2090 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2092 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2094 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pFormName */

/* 2096 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2100 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pFormInfoContainer */

/* 2102 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2106 */	NdrFcShort( 0x696 ),	/* Type Offset=1686 */

	/* Return value */

/* 2108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumForms */

/* 2114 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2122 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2124 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2126 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2128 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2130 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2132 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2134 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2136 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2138 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2146 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2148 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2150 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter Level */

/* 2152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 2158 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2162 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Parameter cbBuf */

/* 2164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2172 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2178 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2182 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2184 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPorts */

/* 2188 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2194 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2196 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2198 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2200 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2202 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2206 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2208 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2210 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2212 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2214 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2222 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2224 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2226 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2228 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPort */

/* 2232 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2234 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2236 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Parameter cbBuf */

/* 2238 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2240 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2244 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2246 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2252 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2254 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2258 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumMonitors */

/* 2262 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2268 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2270 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2272 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2274 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2276 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2280 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2282 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2284 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2294 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2296 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2298 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMonitor */

/* 2306 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2310 */	NdrFcShort( 0x332 ),	/* Type Offset=818 */

	/* Parameter cbBuf */

/* 2312 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2318 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2320 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2326 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2332 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum37NotUsedOnWire */

/* 2336 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2346 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2348 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2354 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2356 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum38NotUsedOnWire */

/* 2366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2376 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2386 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePort */

/* 2396 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2402 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2404 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2406 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2408 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2410 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2416 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2418 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2428 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2430 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2432 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter hWnd */

/* 2434 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2436 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2438 */	0xb9,		/* FC_UINT3264 */
			0x0,		/* 0 */

	/* Parameter pPortName */

/* 2440 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2442 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2444 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 2446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2448 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCreatePrinterIC */

/* 2452 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2458 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2460 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2462 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2464 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2466 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2468 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2470 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2472 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2474 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2482 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 2484 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2486 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2488 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pHandle */

/* 2490 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 2492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2494 */	NdrFcShort( 0x6aa ),	/* Type Offset=1706 */

	/* Parameter pDevModeContainer */

/* 2496 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2498 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2500 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 2502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPlayGdiScriptOnPrinterIC */

/* 2508 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2514 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2516 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2518 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 2520 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2522 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2524 */	NdrFcShort( 0x3c ),	/* 60 */
/* 2526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2528 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 2530 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinterIC */

/* 2540 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 2542 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2544 */	NdrFcShort( 0x6ae ),	/* Type Offset=1710 */

	/* Parameter pIn */

/* 2546 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2550 */	NdrFcShort( 0x5f2 ),	/* Type Offset=1522 */

	/* Parameter cIn */

/* 2552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOut */

/* 2558 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 2560 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2562 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cOut */

/* 2564 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2566 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ul */

/* 2570 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2572 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2578 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 2580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterIC */

/* 2582 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2588 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2590 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2592 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 2594 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2596 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2598 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2600 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2602 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2604 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2612 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phPrinterIC */

/* 2614 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 2616 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2618 */	NdrFcShort( 0x6b6 ),	/* Type Offset=1718 */

	/* Return value */

/* 2620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2622 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum43NotUsedOnWire */

/* 2626 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2634 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2636 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2644 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2646 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum44NotUsedOnWire */

/* 2656 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2658 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2662 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2664 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2666 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2668 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2676 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum45NotUsedOnWire */

/* 2686 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2694 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2696 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2698 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2704 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2706 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcAddMonitor */

/* 2716 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2722 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2724 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2726 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2728 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2730 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2738 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2742 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2748 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2750 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2752 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorContainer */

/* 2754 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2756 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2758 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */

	/* Return value */

/* 2760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2762 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteMonitor */

/* 2766 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2774 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2776 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2778 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2780 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2786 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2788 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2798 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2800 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2802 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2806 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2808 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pMonitorName */

/* 2810 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2812 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2814 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 2816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2818 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProcessor */

/* 2822 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2830 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2832 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2834 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2836 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2842 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2844 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Name */

/* 2854 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2856 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2858 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 2860 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2862 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2864 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 2866 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2868 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2870 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 2872 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2874 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum49NotUsedOnWire */

/* 2878 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2888 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2896 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2898 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum50NotUsedOnWire */

/* 2908 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2914 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2916 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2918 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 2928 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcEnumPrintProcessorDatatypes */

/* 2938 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 2940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2944 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2946 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 2948 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 2950 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2952 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2956 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 2960 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2962 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 2970 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2972 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 2974 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrintProcessorName */

/* 2976 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2980 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 2982 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2984 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDatatypes */

/* 2988 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 2990 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2992 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 2994 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2996 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3002 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 3006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3008 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinter */

/* 3018 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3026 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3028 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3030 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3032 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3034 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3038 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3040 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3044 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3050 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3052 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3054 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pDatatype */

/* 3056 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3058 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3060 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 3062 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3064 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3066 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 3068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3070 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver2 */

/* 3074 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3080 */	NdrFcShort( 0x35 ),	/* 53 */
/* 3082 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 3084 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3086 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3088 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3090 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3092 */	NdrFcShort( 0x5c ),	/* 92 */
/* 3094 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0xb,		/* 11 */
/* 3096 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3098 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3104 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3106 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3108 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3110 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pEnvironment */

/* 3112 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3114 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3116 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter Level */

/* 3118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3120 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 3124 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3128 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter cbBuf */

/* 3130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3132 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 3136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3138 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMajorVersion */

/* 3142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3144 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMinorVersion */

/* 3148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3150 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3152 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMaxVersion */

/* 3154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3156 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMinVersion */

/* 3160 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3162 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 3164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3166 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3168 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 3170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum54NotUsedOnWire */

/* 3172 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x36 ),	/* 54 */
/* 3180 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3182 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3184 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3192 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3200 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum55NotUsedOnWire */

/* 3202 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x37 ),	/* 55 */
/* 3210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3212 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3214 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3220 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3222 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFindClosePrinterChangeNotification */

/* 3232 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3240 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3242 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3244 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3246 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3248 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3252 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3254 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3264 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3266 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3268 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum57NotUsedOnWire */

/* 3276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x39 ),	/* 57 */
/* 3284 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3288 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3294 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3296 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcReplyOpenPrinter */

/* 3306 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3312 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3314 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3316 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3320 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3322 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3324 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3328 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3332 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pMachine */

/* 3338 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3340 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3342 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter phPrinterNotify */

/* 3344 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3348 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter dwPrinterRemote */

/* 3350 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwType */

/* 3356 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3362 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3364 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3366 */	NdrFcShort( 0x722 ),	/* 1826 */

	/* Parameter pBuffer */

/* 3368 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3370 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3372 */	NdrFcShort( 0x72c ),	/* Type Offset=1836 */

	/* Return value */

/* 3374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3376 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinter */

/* 3380 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3388 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3390 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3392 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3396 */	NdrFcShort( 0x34 ),	/* 52 */
/* 3398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3400 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3402 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3406 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3410 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 3412 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3414 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3416 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter fdwFlags */

/* 3418 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3420 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3422 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3424 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3426 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3428 */	NdrFcShort( 0x746 ),	/* 1862 */

	/* Parameter pBuffer */

/* 3430 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3432 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3434 */	NdrFcShort( 0x750 ),	/* Type Offset=1872 */

	/* Return value */

/* 3436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3438 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyClosePrinter */

/* 3442 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3448 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3450 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3452 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* Ctxt flags:  via ptr, in, out, */
/* 3454 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3456 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3458 */	NdrFcShort( 0x38 ),	/* 56 */
/* 3460 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3464 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter phNotify */

/* 3474 */	NdrFcShort( 0x118 ),	/* Flags:  in, out, simple ref, */
/* 3476 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3478 */	NdrFcShort( 0x610 ),	/* Type Offset=1552 */

	/* Return value */

/* 3480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3482 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPortEx */

/* 3486 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3494 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3496 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3498 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3500 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3506 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3508 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 3518 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3520 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3522 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 3524 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3526 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3528 */	NdrFcShort( 0x800 ),	/* Type Offset=2048 */

	/* Parameter pPortVarContainer */

/* 3530 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3532 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3534 */	NdrFcShort( 0x814 ),	/* Type Offset=2068 */

	/* Parameter pMonitorName */

/* 3536 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3538 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3540 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 3542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3544 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotification */

/* 3548 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3554 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3556 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 3558 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3560 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3562 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3564 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3568 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 3570 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3580 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3582 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3584 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter fdwFlags */

/* 3586 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 3592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 3598 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3602 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter dwPrinterLocal */

/* 3604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3610 */	NdrFcShort( 0x88 ),	/* Flags:  in, by val, */
/* 3612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3614 */	NdrFcShort( 0x824 ),	/* 2084 */

	/* Parameter pBuffer */

/* 3616 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 3618 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3620 */	NdrFcShort( 0x82e ),	/* Type Offset=2094 */

	/* Return value */

/* 3622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3624 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum63NotUsedOnWire */

/* 3628 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3634 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3636 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3638 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3640 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3646 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3648 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum64NotUsedOnWire */

/* 3658 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3664 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3666 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3668 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3676 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3678 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3686 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 3688 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3694 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3696 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3698 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3700 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3702 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3704 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3710 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3714 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3720 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3722 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3724 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter fdwFlags */

/* 3726 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3728 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 3732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3734 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 3738 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3740 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3742 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter dwPrinterLocal */

/* 3744 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3746 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 3750 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3752 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3754 */	NdrFcShort( 0x848 ),	/* Type Offset=2120 */

	/* Return value */

/* 3756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3758 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinterEx */

/* 3762 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3768 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3770 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3772 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3774 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3776 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3778 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3780 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3782 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 3784 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hNotify */

/* 3794 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3796 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3798 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter dwColor */

/* 3800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3802 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwFlags */

/* 3806 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3808 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwResult */

/* 3812 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3814 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReplyType */

/* 3818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3820 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Reply */

/* 3824 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3826 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3832 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterRefreshPrinterChangeNotification */

/* 3836 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3842 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3844 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3846 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 3848 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3850 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3852 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3854 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3856 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3858 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 3868 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 3870 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3872 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter dwColor */

/* 3874 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3876 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 3880 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3884 */	NdrFcShort( 0x848 ),	/* Type Offset=2120 */

	/* Parameter ppInfo */

/* 3886 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3888 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3892 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3894 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum68NotUsedOnWire */

/* 3898 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3906 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3908 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 3910 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3916 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 3918 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcOpenPrinterEx */

/* 3928 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 3930 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3936 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3938 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 3940 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3942 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3946 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3948 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 3950 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pPrinterName */

/* 3960 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3962 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 3964 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pHandle */

/* 3966 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 3968 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3970 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Parameter pDatatype */

/* 3972 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3974 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3976 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDevModeContainer */

/* 3978 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3980 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3982 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter AccessRequired */

/* 3984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3986 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pClientInfo */

/* 3990 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3992 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3994 */	NdrFcShort( 0x930 ),	/* Type Offset=2352 */

	/* Return value */

/* 3996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3998 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterEx */

/* 4002 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x46 ),	/* 70 */
/* 4010 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4012 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 4014 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4016 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4020 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4022 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4024 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4032 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 4034 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4036 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4038 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterContainer */

/* 4040 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4042 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4044 */	NdrFcShort( 0x30e ),	/* Type Offset=782 */

	/* Parameter pDevModeContainer */

/* 4046 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4048 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4050 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter pSecurityContainer */

/* 4052 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4054 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4056 */	NdrFcShort( 0x322 ),	/* Type Offset=802 */

	/* Parameter pClientInfo */

/* 4058 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4060 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4062 */	NdrFcShort( 0x930 ),	/* Type Offset=2352 */

	/* Parameter pHandle */

/* 4064 */	NdrFcShort( 0x110 ),	/* Flags:  out, simple ref, */
/* 4066 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4068 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 4070 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4072 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPort */

/* 4076 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4078 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x47 ),	/* 71 */
/* 4084 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4086 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 4088 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4090 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4096 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4098 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 4108 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4110 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4112 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortName */

/* 4114 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4118 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPortContainer */

/* 4120 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4122 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4124 */	NdrFcShort( 0x800 ),	/* Type Offset=2048 */

	/* Return value */

/* 4126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterData */

/* 4132 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0x48 ),	/* 72 */
/* 4140 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 4142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4144 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4148 */	NdrFcShort( 0x3c ),	/* 60 */
/* 4150 */	NdrFcShort( 0x5c ),	/* 92 */
/* 4152 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0xa,		/* 10 */
/* 4154 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4164 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4166 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4168 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter dwIndex */

/* 4170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4172 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueName */

/* 4176 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4178 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4180 */	NdrFcShort( 0x944 ),	/* Type Offset=2372 */

	/* Parameter cbValueName */

/* 4182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4184 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbValueName */

/* 4188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4190 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 4194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4196 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 4200 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4202 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4204 */	NdrFcShort( 0x95e ),	/* Type Offset=2398 */

	/* Parameter cbData */

/* 4206 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4208 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 4212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4214 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4220 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 4222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterData */

/* 4224 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x49 ),	/* 73 */
/* 4232 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4234 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4236 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4238 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4240 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4244 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4246 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4256 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4258 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4260 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pValueName */

/* 4262 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4266 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 4268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum74NotUsedOnWire */

/* 4274 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4280 */	NdrFcShort( 0x4a ),	/* 74 */
/* 4282 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4284 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4286 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4292 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4294 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum75NotUsedOnWire */

/* 4304 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4306 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x4b ),	/* 75 */
/* 4312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4314 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4316 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4322 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4324 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum76NotUsedOnWire */

/* 4334 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4340 */	NdrFcShort( 0x4c ),	/* 76 */
/* 4342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4344 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4346 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4352 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4354 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcSetPrinterDataEx */

/* 4364 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0x4d ),	/* 77 */
/* 4372 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4374 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4376 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4378 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4380 */	NdrFcShort( 0x34 ),	/* 52 */
/* 4382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4386 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4394 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4396 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4398 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4400 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pKeyName */

/* 4402 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4404 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4406 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pValueName */

/* 4408 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4410 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4412 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter Type */

/* 4414 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4416 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 4420 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4422 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4424 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter cbData */

/* 4426 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4428 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4434 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDataEx */

/* 4438 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4444 */	NdrFcShort( 0x4e ),	/* 78 */
/* 4446 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 4448 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4450 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4452 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4454 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4456 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4458 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 4460 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4470 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4472 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4474 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pKeyName */

/* 4476 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4478 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4480 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pValueName */

/* 4482 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4484 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4486 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pType */

/* 4488 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 4494 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4496 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4498 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter nSize */

/* 4500 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4502 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 4506 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4508 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4514 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDataEx */

/* 4518 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4524 */	NdrFcShort( 0x4f ),	/* 79 */
/* 4526 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4528 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4530 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4532 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4534 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4536 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4538 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 4540 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4542 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4548 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4550 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4552 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4554 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pKeyName */

/* 4556 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4558 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4560 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pEnumValues */

/* 4562 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4564 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4566 */	NdrFcShort( 0x336 ),	/* Type Offset=822 */

	/* Parameter cbEnumValues */

/* 4568 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4570 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbEnumValues */

/* 4574 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4576 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pnEnumValues */

/* 4580 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4582 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4586 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4588 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterKey */

/* 4592 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4594 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4598 */	NdrFcShort( 0x50 ),	/* 80 */
/* 4600 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4602 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4604 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4608 */	NdrFcShort( 0x2c ),	/* 44 */
/* 4610 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4612 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4614 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4624 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4626 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4628 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pKeyName */

/* 4630 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4632 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4634 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pSubkey */

/* 4636 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 4638 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4640 */	NdrFcShort( 0x944 ),	/* Type Offset=2372 */

	/* Parameter cbSubkey */

/* 4642 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4644 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbSubkey */

/* 4648 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4650 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4656 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDataEx */

/* 4660 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x51 ),	/* 81 */
/* 4668 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4670 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4672 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4674 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4676 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4682 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4692 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4694 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4696 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pKeyName */

/* 4698 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4700 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4702 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pValueName */

/* 4704 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4706 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4708 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 4710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4712 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterKey */

/* 4716 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x52 ),	/* 82 */
/* 4724 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4726 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 4728 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4730 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 4732 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4736 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4738 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4746 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 4748 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 4750 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4752 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pKeyName */

/* 4754 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4756 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4758 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 4760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4762 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum83NotUsedOnWire */

/* 4766 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4772 */	NdrFcShort( 0x53 ),	/* 83 */
/* 4774 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4776 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 4778 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4784 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 4786 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcDeletePrinterDriverEx */

/* 4796 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0x54 ),	/* 84 */
/* 4804 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4806 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 4808 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4810 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4812 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4814 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4816 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4818 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 4828 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4830 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4832 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pEnvironment */

/* 4834 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4836 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4838 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pDriverName */

/* 4840 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4842 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4844 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter dwDeleteFlag */

/* 4846 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4848 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwVersionNum */

/* 4852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4854 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4858 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4860 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPerMachineConnection */

/* 4864 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4866 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4870 */	NdrFcShort( 0x55 ),	/* 85 */
/* 4872 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4874 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 4876 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4878 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4882 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4884 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4886 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 4896 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4898 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4900 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 4902 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4904 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4906 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pPrintServer */

/* 4908 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4910 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4912 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pProvider */

/* 4914 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4916 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4918 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 4920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4922 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePerMachineConnection */

/* 4926 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x56 ),	/* 86 */
/* 4934 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4936 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 4938 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4940 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4946 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4948 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 4958 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4960 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4962 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterName */

/* 4964 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 4966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4968 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 4970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPerMachineConnections */

/* 4976 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 4978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4982 */	NdrFcShort( 0x57 ),	/* 87 */
/* 4984 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4986 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 4988 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 4990 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 4992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4994 */	NdrFcShort( 0x40 ),	/* 64 */
/* 4996 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4998 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5000 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5002 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pServer */

/* 5008 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5010 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5012 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pPrinterEnum */

/* 5014 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 5016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5018 */	NdrFcShort( 0x97c ),	/* Type Offset=2428 */

	/* Parameter cbBuf */

/* 5020 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5022 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 5026 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5028 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 5032 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5034 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5040 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcXcvData */

/* 5044 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5050 */	NdrFcShort( 0x58 ),	/* 88 */
/* 5052 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 5054 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5056 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5058 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5060 */	NdrFcShort( 0x50 ),	/* 80 */
/* 5062 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5064 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 5066 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5068 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5070 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hXcv */

/* 5076 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5078 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5080 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pszDataName */

/* 5082 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5084 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5086 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pInputData */

/* 5088 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5090 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5092 */	NdrFcShort( 0x336 ),	/* Type Offset=822 */

	/* Parameter cbInputData */

/* 5094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5096 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOutputData */

/* 5100 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 5102 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5104 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter cbOutputData */

/* 5106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5108 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbOutputNeeded */

/* 5112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5114 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwStatus */

/* 5118 */	NdrFcShort( 0x158 ),	/* Flags:  in, out, base type, simple ref, */
/* 5120 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5126 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriverEx */

/* 5130 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x59 ),	/* 89 */
/* 5138 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5140 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 5142 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5144 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5150 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5152 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pName */

/* 5162 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5164 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5166 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pDriverContainer */

/* 5168 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5170 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5172 */	NdrFcShort( 0x58a ),	/* Type Offset=1418 */

	/* Parameter dwFileCopyFlags */

/* 5174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5176 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5182 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum90NotUsedOnWire */

/* 5186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5192 */	NdrFcShort( 0x5a ),	/* 90 */
/* 5194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5196 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5198 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5204 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5206 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum91NotUsedOnWire */

/* 5216 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5222 */	NdrFcShort( 0x5b ),	/* 91 */
/* 5224 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5226 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5228 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5234 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5236 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum92NotUsedOnWire */

/* 5246 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5252 */	NdrFcShort( 0x5c ),	/* 92 */
/* 5254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5256 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5258 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5264 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5266 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5274 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum93NotUsedOnWire */

/* 5276 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5282 */	NdrFcShort( 0x5d ),	/* 93 */
/* 5284 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5288 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5294 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5296 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum94NotUsedOnWire */

/* 5306 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5308 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5312 */	NdrFcShort( 0x5e ),	/* 94 */
/* 5314 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5316 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5318 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5324 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5326 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum95NotUsedOnWire */

/* 5336 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5342 */	NdrFcShort( 0x5f ),	/* 95 */
/* 5344 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5346 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5348 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5356 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcFlushPrinter */

/* 5366 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5372 */	NdrFcShort( 0x60 ),	/* 96 */
/* 5374 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5376 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5378 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5380 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5382 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5384 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5386 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5388 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5396 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5398 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5400 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5402 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pBuf */

/* 5404 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5406 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5408 */	NdrFcShort( 0x5f2 ),	/* Type Offset=1522 */

	/* Parameter cbBuf */

/* 5410 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5412 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 5416 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5418 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cSleep */

/* 5422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5424 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5430 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSendRecvBidiData */

/* 5434 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5440 */	NdrFcShort( 0x61 ),	/* 97 */
/* 5442 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5444 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5446 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5448 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5450 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5454 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5456 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5464 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5466 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5468 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5470 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pAction */

/* 5472 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5474 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5476 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pReqData */

/* 5478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5480 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppRespData */

/* 5484 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5492 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum98NotUsedOnWire */

/* 5496 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5502 */	NdrFcShort( 0x62 ),	/* 98 */
/* 5504 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5506 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5508 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5514 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5516 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5524 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum99NotUsedOnWire */

/* 5526 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5532 */	NdrFcShort( 0x63 ),	/* 99 */
/* 5534 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5536 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5538 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5544 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5546 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum100NotUsedOnWire */

/* 5556 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5562 */	NdrFcShort( 0x64 ),	/* 100 */
/* 5564 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5566 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5568 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5574 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5576 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum101NotUsedOnWire */

/* 5586 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5592 */	NdrFcShort( 0x65 ),	/* 101 */
/* 5594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5596 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5598 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5604 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5606 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetCorePrinterDrivers */

/* 5616 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5622 */	NdrFcShort( 0x66 ),	/* 102 */
/* 5624 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5626 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 5628 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5630 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5632 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5634 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5636 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 5638 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 5648 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5650 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5652 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 5654 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5656 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5658 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter cchCoreDrivers */

/* 5660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5662 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszzCoreDriverDependencies */

/* 5666 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5668 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5670 */	NdrFcShort( 0x988 ),	/* Type Offset=2440 */

	/* Parameter cCorePrinterDrivers */

/* 5672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5674 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCorePrinterDrivers */

/* 5678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5680 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5686 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum103NotUsedOnWire */

/* 5690 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5696 */	NdrFcShort( 0x67 ),	/* 103 */
/* 5698 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5700 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5702 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5708 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5710 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetPrinterDriverPackagePath */

/* 5720 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5726 */	NdrFcShort( 0x68 ),	/* 104 */
/* 5728 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 5730 */	0x31,		/* FC_BIND_GENERIC */
			0x8,		/* 8 */
/* 5732 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5734 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 5736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5738 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5740 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 5742 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5746 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszServer */

/* 5752 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5754 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5756 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszEnvironment */

/* 5758 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5762 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pszLanguage */

/* 5764 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5766 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5768 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pszPackageID */

/* 5770 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5774 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pszDriverPackageCab */

/* 5776 */	NdrFcShort( 0x1b ),	/* Flags:  must size, must free, in, out, */
/* 5778 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5780 */	NdrFcShort( 0x99e ),	/* Type Offset=2462 */

	/* Parameter cchDriverPackageCab */

/* 5782 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5784 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchRequiredSize */

/* 5788 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5790 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5796 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Opnum105NotUsedOnWire */

/* 5800 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5806 */	NdrFcShort( 0x69 ),	/* 105 */
/* 5808 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5810 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5812 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5818 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5820 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum106NotUsedOnWire */

/* 5830 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5836 */	NdrFcShort( 0x6a ),	/* 106 */
/* 5838 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5840 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5842 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5848 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5850 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5858 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum107NotUsedOnWire */

/* 5860 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5866 */	NdrFcShort( 0x6b ),	/* 107 */
/* 5868 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5870 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5872 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5878 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5880 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum108NotUsedOnWire */

/* 5890 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x6c ),	/* 108 */
/* 5898 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5900 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5902 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5908 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5910 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5918 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure Opnum109NotUsedOnWire */

/* 5920 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5926 */	NdrFcShort( 0x6d ),	/* 109 */
/* 5928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5930 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 5932 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5938 */	0x40,		/* Oi2 Flags:  has ext, */
			0x0,		/* 0 */
/* 5940 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5948 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Procedure RpcGetJobNamedPropertyValue */

/* 5950 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 5952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5956 */	NdrFcShort( 0x6e ),	/* 110 */
/* 5958 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5960 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 5962 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5964 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 5966 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5968 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5972 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5980 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 5982 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 5984 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 5986 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 5988 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5990 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 5994 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 5996 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5998 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Parameter pValue */

/* 6000 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6002 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6006 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6008 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6010 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJobNamedProperty */

/* 6012 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6018 */	NdrFcShort( 0x6f ),	/* 111 */
/* 6020 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6022 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6024 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6026 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6028 */	NdrFcShort( 0x34 ),	/* 52 */
/* 6030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6034 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 6044 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6046 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6048 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 6050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProperty */

/* 6056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6064 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteJobNamedProperty */

/* 6068 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6074 */	NdrFcShort( 0x70 ),	/* 112 */
/* 6076 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6078 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6080 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6082 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6084 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6088 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6090 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6098 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 6100 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6102 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6104 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 6106 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6108 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 6112 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6114 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6116 */	NdrFcShort( 0x59c ),	/* Type Offset=1436 */

	/* Return value */

/* 6118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6120 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobNamedProperties */

/* 6124 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6130 */	NdrFcShort( 0x71 ),	/* 113 */
/* 6132 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6134 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6136 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6138 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 6140 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6142 */	NdrFcShort( 0x40 ),	/* 64 */
/* 6144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 6146 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6154 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hPrinter */

/* 6156 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6158 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6160 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter JobId */

/* 6162 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6164 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcProperties */

/* 6168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6170 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppProperties */

/* 6174 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6176 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6182 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc114 */

/* 6186 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6192 */	NdrFcShort( 0x72 ),	/* 114 */
/* 6194 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6196 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
/* 6198 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 6206 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6214 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6216 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6218 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6220 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 6222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6224 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc115 */

/* 6228 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6234 */	NdrFcShort( 0x73 ),	/* 115 */
/* 6236 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6238 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6240 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6242 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 6244 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6246 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6250 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6258 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6260 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6262 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6264 */	NdrFcShort( 0x9b8 ),	/* Type Offset=2488 */

	/* Parameter arg_1 */

/* 6266 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6268 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6270 */	0xb9,		/* FC_UINT3264 */
			0x0,		/* 0 */

	/* Return value */

/* 6272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6274 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Proc116 */

/* 6278 */	0x0,		/* 0 */
			0x48,		/* Old Flags:  */
/* 6280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6284 */	NdrFcShort( 0x74 ),	/* 116 */
/* 6286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6288 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* Ctxt flags:  in, */
/* 6290 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6292 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 6294 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6300 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter arg_0 */

/* 6310 */	NdrFcShort( 0x8 ),	/* Flags:  in, */
/* 6312 */	NdrFcShort( 0x0 ),	/* X64 Stack size/offset = 0 */
/* 6314 */	NdrFcShort( 0x9b8 ),	/* Type Offset=2488 */

	/* Parameter arg_1 */

/* 6316 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ms2Drprn_MIDL_TYPE_FORMAT_STRING ms2Drprn__MIDL_TypeFormatString =
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
			0x12, 0x0,	/* FC_UP */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x1 ),	/* 1 */
/* 14 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 18 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 32 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 34 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 42 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 44 */	
			0x11, 0x0,	/* FC_RP */
/* 46 */	NdrFcShort( 0x18 ),	/* Offset= 24 (70) */
/* 48 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 50 */	NdrFcShort( 0x1 ),	/* 1 */
/* 52 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 58 */	0x0 , 
			0x0,		/* 0 */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 70 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 72 */	NdrFcShort( 0x10 ),	/* 16 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0x6 ),	/* Offset= 6 (82) */
/* 78 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 80 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 82 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 84 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (48) */
/* 86 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 88 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 90 */	
			0x12, 0x0,	/* FC_UP */
/* 92 */	NdrFcShort( 0x12a ),	/* Offset= 298 (390) */
/* 94 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 96 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 98 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 100 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 102 */	0x0 , 
			0x0,		/* 0 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x2 ),	/* Offset= 2 (114) */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	NdrFcLong( 0x1 ),	/* 1 */
/* 122 */	NdrFcShort( 0x16 ),	/* Offset= 22 (144) */
/* 124 */	NdrFcLong( 0x2 ),	/* 2 */
/* 128 */	NdrFcShort( 0x56 ),	/* Offset= 86 (214) */
/* 130 */	NdrFcLong( 0x3 ),	/* 3 */
/* 134 */	NdrFcShort( 0xa2 ),	/* Offset= 162 (296) */
/* 136 */	NdrFcLong( 0x4 ),	/* 4 */
/* 140 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (308) */
/* 142 */	NdrFcShort( 0xffff ),	/* Offset= -1 (141) */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0x10 ),	/* Offset= 16 (162) */
/* 148 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 150 */	NdrFcShort( 0x10 ),	/* 16 */
/* 152 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 154 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 156 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 158 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 160 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 162 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 164 */	NdrFcShort( 0x60 ),	/* 96 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x16 ),	/* Offset= 22 (190) */
/* 170 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 172 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 174 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 176 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 178 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 180 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 182 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 184 */	0x0,		/* 0 */
			NdrFcShort( 0xffdb ),	/* Offset= -37 (148) */
			0x40,		/* FC_STRUCTPAD4 */
/* 188 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 190 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 192 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 202 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 204 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 206 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 208 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 214 */	
			0x12, 0x0,	/* FC_UP */
/* 216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (218) */
/* 218 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 220 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x20 ),	/* Offset= 32 (256) */
/* 226 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 228 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 230 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 232 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 234 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 236 */	0x36,		/* FC_POINTER */
			0xb9,		/* FC_UINT3264 */
/* 238 */	0x36,		/* FC_POINTER */
			0xb9,		/* FC_UINT3264 */
/* 240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 242 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 244 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 246 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 248 */	0x0,		/* 0 */
			NdrFcShort( 0xff9b ),	/* Offset= -101 (148) */
			0x8,		/* FC_LONG */
/* 252 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 256 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 258 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 260 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 262 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 264 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 266 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 268 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 270 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 272 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 274 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 276 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 278 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 280 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 282 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 284 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 286 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 288 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 290 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 292 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 294 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x12, 0x0,	/* FC_UP */
/* 298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (300) */
/* 300 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 302 */	NdrFcShort( 0xc ),	/* 12 */
/* 304 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 306 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 308 */	
			0x12, 0x0,	/* FC_UP */
/* 310 */	NdrFcShort( 0x2 ),	/* Offset= 2 (312) */
/* 312 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 314 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x20 ),	/* Offset= 32 (350) */
/* 320 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 322 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 324 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 326 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 328 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 330 */	0x36,		/* FC_POINTER */
			0xb9,		/* FC_UINT3264 */
/* 332 */	0x36,		/* FC_POINTER */
			0xb9,		/* FC_UINT3264 */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 338 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 340 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 342 */	0x0,		/* 0 */
			NdrFcShort( 0xff3d ),	/* Offset= -195 (148) */
			0x8,		/* FC_LONG */
/* 346 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 350 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 352 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 354 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 356 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 358 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 360 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 362 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 364 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 366 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 368 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 370 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 372 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
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
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 388 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 390 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x0 ),	/* Offset= 0 (396) */
/* 398 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 400 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 402 */	NdrFcShort( 0xfecc ),	/* Offset= -308 (94) */
/* 404 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 406 */	
			0x12, 0x0,	/* FC_UP */
/* 408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (410) */
/* 410 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 414 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 416 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 418 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 420 */	0x0 , 
			0x0,		/* 0 */
/* 422 */	NdrFcLong( 0x0 ),	/* 0 */
/* 426 */	NdrFcLong( 0x0 ),	/* 0 */
/* 430 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 432 */	
			0x11, 0x0,	/* FC_RP */
/* 434 */	NdrFcShort( 0x15c ),	/* Offset= 348 (782) */
/* 436 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 438 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 440 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 442 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 444 */	0x0 , 
			0x0,		/* 0 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x2 ),	/* Offset= 2 (456) */
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	NdrFcShort( 0xa ),	/* 10 */
/* 460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x3a ),	/* Offset= 58 (522) */
/* 466 */	NdrFcLong( 0x1 ),	/* 1 */
/* 470 */	NdrFcShort( 0x6a ),	/* Offset= 106 (576) */
/* 472 */	NdrFcLong( 0x2 ),	/* 2 */
/* 476 */	NdrFcShort( 0x82 ),	/* Offset= 130 (606) */
/* 478 */	NdrFcLong( 0x3 ),	/* 3 */
/* 482 */	NdrFcShort( 0xca ),	/* Offset= 202 (684) */
/* 484 */	NdrFcLong( 0x4 ),	/* 4 */
/* 488 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (698) */
/* 490 */	NdrFcLong( 0x5 ),	/* 5 */
/* 494 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (724) */
/* 496 */	NdrFcLong( 0x6 ),	/* 6 */
/* 500 */	NdrFcShort( 0xfc ),	/* Offset= 252 (752) */
/* 502 */	NdrFcLong( 0x7 ),	/* 7 */
/* 506 */	NdrFcShort( 0x100 ),	/* Offset= 256 (762) */
/* 508 */	NdrFcLong( 0x8 ),	/* 8 */
/* 512 */	NdrFcShort( 0xac ),	/* Offset= 172 (684) */
/* 514 */	NdrFcLong( 0x9 ),	/* 9 */
/* 518 */	NdrFcShort( 0xa6 ),	/* Offset= 166 (684) */
/* 520 */	NdrFcShort( 0xffff ),	/* Offset= -1 (519) */
/* 522 */	
			0x12, 0x0,	/* FC_UP */
/* 524 */	NdrFcShort( 0x2 ),	/* Offset= 2 (526) */
/* 526 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 528 */	NdrFcShort( 0x88 ),	/* 136 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x24 ),	/* Offset= 36 (568) */
/* 534 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 536 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 538 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 540 */	0x0,		/* 0 */
			NdrFcShort( 0xfe77 ),	/* Offset= -393 (148) */
			0x8,		/* FC_LONG */
/* 544 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 546 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 548 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 550 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 552 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 554 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 556 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 558 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 560 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 562 */	0x6,		/* FC_SHORT */
			0x8,		/* FC_LONG */
/* 564 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 566 */	0x40,		/* FC_STRUCTPAD4 */
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
			0x12, 0x0,	/* FC_UP */
/* 578 */	NdrFcShort( 0x2 ),	/* Offset= 2 (580) */
/* 580 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 582 */	NdrFcShort( 0x20 ),	/* 32 */
/* 584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 586 */	NdrFcShort( 0x8 ),	/* Offset= 8 (594) */
/* 588 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 590 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 592 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 594 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 596 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
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
			0x12, 0x0,	/* FC_UP */
/* 608 */	NdrFcShort( 0x2 ),	/* Offset= 2 (610) */
/* 610 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 612 */	NdrFcShort( 0x88 ),	/* 136 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x18 ),	/* Offset= 24 (640) */
/* 618 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 620 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 622 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 624 */	0x36,		/* FC_POINTER */
			0xb9,		/* FC_UINT3264 */
/* 626 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 628 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 630 */	0xb9,		/* FC_UINT3264 */
			0x8,		/* FC_LONG */
/* 632 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 634 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 636 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 638 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 640 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 642 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 644 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 646 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 648 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 650 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 652 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 654 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
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
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 666 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 668 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 670 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 672 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 674 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 676 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 678 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 680 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 682 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 684 */	
			0x12, 0x0,	/* FC_UP */
/* 686 */	NdrFcShort( 0x2 ),	/* Offset= 2 (688) */
/* 688 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0x0 ),	/* Offset= 0 (694) */
/* 696 */	0xb9,		/* FC_UINT3264 */
			0x5b,		/* FC_END */
/* 698 */	
			0x12, 0x0,	/* FC_UP */
/* 700 */	NdrFcShort( 0x2 ),	/* Offset= 2 (702) */
/* 702 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 704 */	NdrFcShort( 0x18 ),	/* 24 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x8 ),	/* Offset= 8 (716) */
/* 710 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 712 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 714 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 716 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 718 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 720 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 722 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 724 */	
			0x12, 0x0,	/* FC_UP */
/* 726 */	NdrFcShort( 0x2 ),	/* Offset= 2 (728) */
/* 728 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 730 */	NdrFcShort( 0x20 ),	/* 32 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0xa ),	/* Offset= 10 (744) */
/* 736 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 738 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 740 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 744 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 746 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 750 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x12, 0x0,	/* FC_UP */
/* 754 */	NdrFcShort( 0x2 ),	/* Offset= 2 (756) */
/* 756 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 760 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 762 */	
			0x12, 0x0,	/* FC_UP */
/* 764 */	NdrFcShort( 0x2 ),	/* Offset= 2 (766) */
/* 766 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x6 ),	/* Offset= 6 (778) */
/* 774 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 776 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 778 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 780 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 782 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 784 */	NdrFcShort( 0x10 ),	/* 16 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* Offset= 0 (788) */
/* 790 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 792 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 794 */	NdrFcShort( 0xfe9a ),	/* Offset= -358 (436) */
/* 796 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 798 */	
			0x11, 0x0,	/* FC_RP */
/* 800 */	NdrFcShort( 0x2 ),	/* Offset= 2 (802) */
/* 802 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 804 */	NdrFcShort( 0x10 ),	/* 16 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x6 ),	/* Offset= 6 (814) */
/* 810 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 812 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 814 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 816 */	NdrFcShort( 0xfd00 ),	/* Offset= -768 (48) */
/* 818 */	
			0x12, 0x0,	/* FC_UP */
/* 820 */	NdrFcShort( 0x2 ),	/* Offset= 2 (822) */
/* 822 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 824 */	NdrFcShort( 0x1 ),	/* 1 */
/* 826 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 830 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 832 */	0x0 , 
			0x0,		/* 0 */
/* 834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 842 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 844 */	
			0x11, 0x0,	/* FC_RP */
/* 846 */	NdrFcShort( 0x23c ),	/* Offset= 572 (1418) */
/* 848 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 850 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 852 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 854 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 856 */	0x0 , 
			0x0,		/* 0 */
/* 858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x2 ),	/* Offset= 2 (868) */
/* 868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 870 */	NdrFcShort( 0x6 ),	/* 6 */
/* 872 */	NdrFcLong( 0x1 ),	/* 1 */
/* 876 */	NdrFcShort( 0x22 ),	/* Offset= 34 (910) */
/* 878 */	NdrFcLong( 0x2 ),	/* 2 */
/* 882 */	NdrFcShort( 0x2e ),	/* Offset= 46 (928) */
/* 884 */	NdrFcLong( 0x3 ),	/* 3 */
/* 888 */	NdrFcShort( 0x50 ),	/* Offset= 80 (968) */
/* 890 */	NdrFcLong( 0x4 ),	/* 4 */
/* 894 */	NdrFcShort( 0x9e ),	/* Offset= 158 (1052) */
/* 896 */	NdrFcLong( 0x6 ),	/* 6 */
/* 900 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (1144) */
/* 902 */	NdrFcLong( 0x8 ),	/* 8 */
/* 906 */	NdrFcShort( 0x154 ),	/* Offset= 340 (1246) */
/* 908 */	NdrFcShort( 0xffff ),	/* Offset= -1 (907) */
/* 910 */	
			0x12, 0x0,	/* FC_UP */
/* 912 */	NdrFcShort( 0x2 ),	/* Offset= 2 (914) */
/* 914 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x4 ),	/* Offset= 4 (924) */
/* 922 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 924 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 926 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 928 */	
			0x12, 0x0,	/* FC_UP */
/* 930 */	NdrFcShort( 0x2 ),	/* Offset= 2 (932) */
/* 932 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 934 */	NdrFcShort( 0x30 ),	/* 48 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0xa ),	/* Offset= 10 (948) */
/* 940 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 942 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 944 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 946 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 948 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 950 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 952 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 954 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 958 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 962 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 964 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 966 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x12, 0x0,	/* FC_UP */
/* 970 */	NdrFcShort( 0x18 ),	/* Offset= 24 (994) */
/* 972 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 974 */	NdrFcShort( 0x2 ),	/* 2 */
/* 976 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 978 */	NdrFcShort( 0x48 ),	/* 72 */
/* 980 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 982 */	0x0 , 
			0x0,		/* 0 */
/* 984 */	NdrFcLong( 0x0 ),	/* 0 */
/* 988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 992 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 994 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 996 */	NdrFcShort( 0x58 ),	/* 88 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1016) */
/* 1002 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1004 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1006 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1008 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1010 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1012 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1014 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1016 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1018 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1022 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1024 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1026 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1028 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1030 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1032 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1034 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1036 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1038 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1040 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1042 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1044 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1046 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1050 */	NdrFcShort( 0xffb2 ),	/* Offset= -78 (972) */
/* 1052 */	
			0x12, 0x0,	/* FC_UP */
/* 1054 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1078) */
/* 1056 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1058 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1060 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1062 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1064 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1066 */	0x0 , 
			0x0,		/* 0 */
/* 1068 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1076 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1078 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1080 */	NdrFcShort( 0x68 ),	/* 104 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1104) */
/* 1086 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1088 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1090 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1092 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1094 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1096 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1098 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1100 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
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
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1126 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1128 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1130 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1132 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1136 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1138 */	NdrFcShort( 0xff5a ),	/* Offset= -166 (972) */
/* 1140 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1142 */	NdrFcShort( 0xffaa ),	/* Offset= -86 (1056) */
/* 1144 */	
			0x12, 0x0,	/* FC_UP */
/* 1146 */	NdrFcShort( 0xa ),	/* Offset= 10 (1156) */
/* 1148 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1152 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1156 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1158 */	NdrFcShort( 0x98 ),	/* 152 */
/* 1160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1162 */	NdrFcShort( 0x1c ),	/* Offset= 28 (1190) */
/* 1164 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1166 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1168 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1170 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1172 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1174 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1176 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1178 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1180 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0xffde ),	/* Offset= -34 (1148) */
/* 1184 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1186 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1188 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1190 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1192 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1194 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1198 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1202 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1204 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1206 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1208 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1212 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1214 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1216 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1218 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1220 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1222 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1224 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (972) */
/* 1226 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1228 */	NdrFcShort( 0xff54 ),	/* Offset= -172 (1056) */
/* 1230 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1232 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1234 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1238 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1242 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1244 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1246 */	
			0x12, 0x0,	/* FC_UP */
/* 1248 */	NdrFcShort( 0x2e ),	/* Offset= 46 (1294) */
/* 1250 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1252 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1254 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1256 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 1258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1260 */	0x0 , 
			0x0,		/* 0 */
/* 1262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1270 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1272 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1274 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1276 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1278 */	NdrFcShort( 0xc4 ),	/* 196 */
/* 1280 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1282 */	0x0 , 
			0x0,		/* 0 */
/* 1284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1292 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1294 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1296 */	NdrFcShort( 0xe0 ),	/* 224 */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x2a ),	/* Offset= 42 (1342) */
/* 1302 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1304 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1306 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1308 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1310 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1312 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1314 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1316 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1320 */	NdrFcShort( 0xff54 ),	/* Offset= -172 (1148) */
/* 1322 */	0xb,		/* FC_HYPER */
			0x36,		/* FC_POINTER */
/* 1324 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1326 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1328 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1330 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1332 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1334 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1338 */	NdrFcShort( 0xff42 ),	/* Offset= -190 (1148) */
/* 1340 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
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
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1352 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1354 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1356 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1358 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1360 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1362 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1364 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1366 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1368 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1370 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1372 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1374 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1376 */	NdrFcShort( 0xfe6c ),	/* Offset= -404 (972) */
/* 1378 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1380 */	NdrFcShort( 0xfebc ),	/* Offset= -324 (1056) */
/* 1382 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1384 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1386 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1388 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1390 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1392 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1394 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1396 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1398 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1400 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1402 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1404 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1406 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1408 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (1250) */
/* 1410 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1412 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1414 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1416 */	NdrFcShort( 0xff70 ),	/* Offset= -144 (1272) */
/* 1418 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1420 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1424) */
/* 1426 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1428 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1430 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (848) */
/* 1432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1434 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1436 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1438 */	
			0x11, 0x0,	/* FC_RP */
/* 1440 */	NdrFcShort( 0x3e ),	/* Offset= 62 (1502) */
/* 1442 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1444 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1446 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1448 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1450 */	0x0 , 
			0x0,		/* 0 */
/* 1452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1462) */
/* 1462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1464 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1466 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1470 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1474) */
/* 1472 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1471) */
/* 1474 */	
			0x12, 0x0,	/* FC_UP */
/* 1476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1478) */
/* 1478 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1480 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1490) */
/* 1486 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1488 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1490 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1492 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1494 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1496 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1498 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1500 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1502 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1504 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1508) */
/* 1510 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1512 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1514 */	NdrFcShort( 0xffb8 ),	/* Offset= -72 (1442) */
/* 1516 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1518 */	
			0x11, 0x0,	/* FC_RP */
/* 1520 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1522) */
/* 1522 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1524 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1526 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1528 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1530 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1532 */	0x0 , 
			0x0,		/* 0 */
/* 1534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1544 */	
			0x11, 0x0,	/* FC_RP */
/* 1546 */	NdrFcShort( 0xfa00 ),	/* Offset= -1536 (10) */
/* 1548 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1550 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1552) */
/* 1552 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1554 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1556 */	
			0x11, 0x0,	/* FC_RP */
/* 1558 */	NdrFcShort( 0x80 ),	/* Offset= 128 (1686) */
/* 1560 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1562 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1564 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1566 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1568 */	0x0 , 
			0x0,		/* 0 */
/* 1570 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1578 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1580) */
/* 1580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1582 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1584 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1588 */	NdrFcShort( 0xa ),	/* Offset= 10 (1598) */
/* 1590 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1594 */	NdrFcShort( 0x2a ),	/* Offset= 42 (1636) */
/* 1596 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1595) */
/* 1598 */	
			0x12, 0x0,	/* FC_UP */
/* 1600 */	NdrFcShort( 0xc ),	/* Offset= 12 (1612) */
/* 1602 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1604 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1606 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1608 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1610 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1612 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1614 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0xe ),	/* Offset= 14 (1632) */
/* 1620 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1622 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1624 */	0x0,		/* 0 */
			NdrFcShort( 0xfe23 ),	/* Offset= -477 (1148) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1628 */	0x0,		/* 0 */
			NdrFcShort( 0xffe5 ),	/* Offset= -27 (1602) */
			0x5b,		/* FC_END */
/* 1632 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1634 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1636 */	
			0x12, 0x0,	/* FC_UP */
/* 1638 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1640) */
/* 1640 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1642 */	NdrFcShort( 0x58 ),	/* 88 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1670) */
/* 1648 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1650 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1652 */	0x0,		/* 0 */
			NdrFcShort( 0xfe07 ),	/* Offset= -505 (1148) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1656 */	0x0,		/* 0 */
			NdrFcShort( 0xffc9 ),	/* Offset= -55 (1602) */
			0x36,		/* FC_POINTER */
/* 1660 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1662 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1664 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 1666 */	0x6,		/* FC_SHORT */
			0x42,		/* FC_STRUCTPAD6 */
/* 1668 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1670 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1672 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1674 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1676 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1678 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1680 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1682 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1684 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1686 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1688 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1692 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1692) */
/* 1694 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1698 */	NdrFcShort( 0xff76 ),	/* Offset= -138 (1560) */
/* 1700 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1702 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1704 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1706) */
/* 1706 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* Ctxt flags:  via ptr, out, */
/* 1708 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1710 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 1712 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1714 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1716 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1718) */
/* 1718 */	0x30,		/* FC_BIND_CONTEXT */
			0xe1,		/* Ctxt flags:  via ptr, in, out, can't be null */
/* 1720 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1722 */	
			0x11, 0x0,	/* FC_RP */
/* 1724 */	NdrFcShort( 0x56 ),	/* Offset= 86 (1810) */
/* 1726 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 1728 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 1730 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 1732 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1734 */	0x0 , 
			0x0,		/* 0 */
/* 1736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1746) */
/* 1746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1748 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1750 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1754 */	NdrFcShort( 0xa ),	/* Offset= 10 (1764) */
/* 1756 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1760 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1782) */
/* 1762 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1761) */
/* 1764 */	
			0x12, 0x0,	/* FC_UP */
/* 1766 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1768) */
/* 1768 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1778) */
/* 1776 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1778 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1780 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1782 */	
			0x12, 0x0,	/* FC_UP */
/* 1784 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1786) */
/* 1786 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1788 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1798) */
/* 1794 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1796 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1798 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1800 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1802 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1804 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1806 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1808 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1810 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1812 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1816) */
/* 1818 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1820 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1822 */	NdrFcShort( 0xffa0 ),	/* Offset= -96 (1726) */
/* 1824 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1826 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1832 */	NdrFcLong( 0x200 ),	/* 512 */
/* 1836 */	
			0x12, 0x0,	/* FC_UP */
/* 1838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1840) */
/* 1840 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1844 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1846 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1848 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1850 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1852 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1856 */	NdrFcLong( 0x200 ),	/* 512 */
/* 1860 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1862 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 1864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1868 */	NdrFcLong( 0x200 ),	/* 512 */
/* 1872 */	
			0x12, 0x0,	/* FC_UP */
/* 1874 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1876) */
/* 1876 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1878 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1880 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1882 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1884 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 1886 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 1888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1892 */	NdrFcLong( 0x200 ),	/* 512 */
/* 1896 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1898 */	
			0x11, 0x0,	/* FC_RP */
/* 1900 */	NdrFcShort( 0x94 ),	/* Offset= 148 (2048) */
/* 1902 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1904 */	0x0,		/* Corr desc:  field,  */
			0x5d,		/* FC_EXPR */
/* 1906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1908 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1910 */	0x0 , 
			0x0,		/* 0 */
/* 1912 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1922) */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1926 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1930 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1952) */
/* 1932 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1936 */	NdrFcShort( 0x22 ),	/* Offset= 34 (1970) */
/* 1938 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1942 */	NdrFcShort( 0x3a ),	/* Offset= 58 (2000) */
/* 1944 */	NdrFcLong( 0xffffff ),	/* 16777215 */
/* 1948 */	NdrFcShort( 0x4a ),	/* Offset= 74 (2022) */
/* 1950 */	NdrFcShort( 0xffff ),	/* Offset= -1 (1949) */
/* 1952 */	
			0x12, 0x0,	/* FC_UP */
/* 1954 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1956) */
/* 1956 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1958 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1966) */
/* 1964 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1966 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1968 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1970 */	
			0x12, 0x0,	/* FC_UP */
/* 1972 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1974) */
/* 1974 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1976 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1988) */
/* 1982 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 1984 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1986 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1988 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1990 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1992 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1994 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1996 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1998 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2000 */	
			0x12, 0x0,	/* FC_UP */
/* 2002 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2004) */
/* 2004 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2006 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2018) */
/* 2012 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2014 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2016 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 2018 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2020 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2022 */	
			0x12, 0x0,	/* FC_UP */
/* 2024 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2026) */
/* 2026 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2028 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2032 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2040) */
/* 2034 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2036 */	0x40,		/* FC_STRUCTPAD4 */
			0x36,		/* FC_POINTER */
/* 2038 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2040 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2042 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2044 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2046 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2048 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2050 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2054 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2054) */
/* 2056 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2058 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2060 */	NdrFcShort( 0xff62 ),	/* Offset= -158 (1902) */
/* 2062 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2064 */	
			0x11, 0x0,	/* FC_RP */
/* 2066 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2068) */
/* 2068 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2070 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2074 */	NdrFcShort( 0x6 ),	/* Offset= 6 (2080) */
/* 2076 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2078 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2080 */	
			0x12, 0x0,	/* FC_UP */
/* 2082 */	NdrFcShort( 0xf80e ),	/* Offset= -2034 (48) */
/* 2084 */	0xb7,		/* FC_RANGE */
			0x8,		/* 8 */
/* 2086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2090 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2094 */	
			0x12, 0x0,	/* FC_UP */
/* 2096 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2098) */
/* 2098 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2102 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2104 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2106 */	NdrFcShort( 0x11 ),	/* Corr flags:  early, */
/* 2108 */	0x1 , /* correlation range */
			0x0,		/* 0 */
/* 2110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2114 */	NdrFcLong( 0x200 ),	/* 512 */
/* 2118 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2120 */	
			0x12, 0x0,	/* FC_UP */
/* 2122 */	NdrFcShort( 0x56 ),	/* Offset= 86 (2208) */
/* 2124 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2126 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2128 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2130 */	NdrFcShort( 0xc ),	/* 12 */
/* 2132 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2134 */	0x0 , 
			0x0,		/* 0 */
/* 2136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2144 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2146 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2148 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0xa ),	/* Offset= 10 (2162) */
/* 2154 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2158 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 2160 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2162 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2164 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (2124) */
/* 2166 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 2172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2174 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2176 */	0x0 , 
			0x0,		/* 0 */
/* 2178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2186 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2190 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2192 */	0x0 , 
			0x0,		/* 0 */
/* 2194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2202 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2204 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2146) */
/* 2206 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2208 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2210 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2214 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2222) */
/* 2216 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2218 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2220 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 2222 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2224 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (2166) */
/* 2226 */	
			0x11, 0x0,	/* FC_RP */
/* 2228 */	NdrFcShort( 0x7c ),	/* Offset= 124 (2352) */
/* 2230 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 2232 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 2234 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 2236 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2238 */	0x0 , 
			0x0,		/* 0 */
/* 2240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2250) */
/* 2250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2252 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2254 */	NdrFcLong( 0x1 ),	/* 1 */
/* 2258 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2274) */
/* 2260 */	NdrFcLong( 0x2 ),	/* 2 */
/* 2264 */	NdrFcShort( 0x28 ),	/* Offset= 40 (2304) */
/* 2266 */	NdrFcLong( 0x3 ),	/* 3 */
/* 2270 */	NdrFcShort( 0x30 ),	/* Offset= 48 (2318) */
/* 2272 */	NdrFcShort( 0xffff ),	/* Offset= -1 (2271) */
/* 2274 */	
			0x12, 0x0,	/* FC_UP */
/* 2276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2278) */
/* 2278 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2280 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2284 */	NdrFcShort( 0xc ),	/* Offset= 12 (2296) */
/* 2286 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2288 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2290 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2292 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2294 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 2296 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2298 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2300 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2302 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2304 */	
			0x12, 0x0,	/* FC_UP */
/* 2306 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2308) */
/* 2308 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2314) */
/* 2316 */	0xb8,		/* FC_INT3264 */
			0x5b,		/* FC_END */
/* 2318 */	
			0x12, 0x0,	/* FC_UP */
/* 2320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2322) */
/* 2322 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2324 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2344) */
/* 2330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2332 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2334 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 2336 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 2338 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 2340 */	0x3e,		/* FC_STRUCTPAD2 */
			0xb,		/* FC_HYPER */
/* 2342 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2344 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2346 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2348 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2350 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2352 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2358 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2358) */
/* 2360 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 2362 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2364 */	NdrFcShort( 0xff7a ),	/* Offset= -134 (2230) */
/* 2366 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2368 */	
			0x11, 0x0,	/* FC_RP */
/* 2370 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2372) */
/* 2372 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2374 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2376 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x55,		/* FC_DIV_2 */
/* 2378 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2380 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2382 */	0x0 , 
			0x0,		/* 0 */
/* 2384 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2392 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2394 */	
			0x11, 0x0,	/* FC_RP */
/* 2396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2398) */
/* 2398 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 2400 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2402 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2404 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 2406 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2408 */	0x0 , 
			0x0,		/* 0 */
/* 2410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2414 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2418 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 2420 */	
			0x11, 0x0,	/* FC_RP */
/* 2422 */	NdrFcShort( 0xf824 ),	/* Offset= -2012 (410) */
/* 2424 */	
			0x11, 0x0,	/* FC_RP */
/* 2426 */	NdrFcShort( 0xf9bc ),	/* Offset= -1604 (822) */
/* 2428 */	
			0x12, 0x0,	/* FC_UP */
/* 2430 */	NdrFcShort( 0xfc74 ),	/* Offset= -908 (1522) */
/* 2432 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 2434 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2436 */	
			0x11, 0x0,	/* FC_RP */
/* 2438 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2440) */
/* 2440 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2442 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2444 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2446 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2448 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 2450 */	0x0 , 
			0x0,		/* 0 */
/* 2452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2456 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2460 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2462 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 2464 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2466) */
/* 2466 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2468 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2470 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 2472 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 2474 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 2476 */	0x0 , 
			0x0,		/* 0 */
/* 2478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2486 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 2488 */	0x30,		/* FC_BIND_CONTEXT */
			0x41,		/* Ctxt flags:  in, can't be null */
/* 2490 */	0x2,		/* 2 */
			0x0,		/* 0 */
/* 2492 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 2494 */	0xb9,		/* FC_UINT3264 */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const ms2Drprn_MIDL_EXPR_FORMAT_STRING ms2Drprn__MIDL_ExprFormatString =
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

			0x0
        }
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PRINTER_HANDLE_rundown
    ,GDI_HANDLE_rundown
    ,0
    };


static const unsigned short ms2Drprn__MIDL_ExprFormatStringOffsetTable[] =
{
0,
};

static const NDR_EXPR_DESC  ms2Drprn_ExprDesc = 
 {
ms2Drprn__MIDL_ExprFormatStringOffsetTable,
ms2Drprn__MIDL_ExprFormatString.Format
};

static const unsigned short winspool_FormatStringOffsetTable[] =
    {
    0,
    80,
    148,
    210,
    284,
    370,
    438,
    482,
    550,
    618,
    668,
    748,
    822,
    896,
    952,
    1014,
    1094,
    1168,
    1224,
    1268,
    1330,
    1374,
    1418,
    1480,
    1524,
    1592,
    1642,
    1716,
    1784,
    1840,
    1884,
    1934,
    1984,
    2058,
    2114,
    2188,
    2262,
    2336,
    2366,
    2396,
    2452,
    2508,
    2582,
    2626,
    2656,
    2686,
    2716,
    2766,
    2822,
    2878,
    2908,
    2938,
    3018,
    3074,
    3172,
    3202,
    3232,
    3276,
    3306,
    3380,
    3442,
    3486,
    3548,
    3628,
    3658,
    3688,
    3762,
    3836,
    3898,
    3928,
    4002,
    4076,
    4132,
    4224,
    4274,
    4304,
    4334,
    4364,
    4438,
    4518,
    4592,
    4660,
    4716,
    4766,
    4796,
    4864,
    4926,
    4976,
    5044,
    5130,
    5186,
    5216,
    5246,
    5276,
    5306,
    5336,
    5366,
    5434,
    5496,
    5526,
    5556,
    5586,
    5616,
    5690,
    5720,
    5800,
    5830,
    5860,
    5890,
    5920,
    5950,
    6012,
    6068,
    6124,
    6186,
    6228,
    6278
    };


static const RPC_DISPATCH_FUNCTION winspool_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
static const RPC_DISPATCH_TABLE winspool_v1_0_DispatchTable = 
    {
    117,
    (RPC_DISPATCH_FUNCTION*)winspool_table
    };


#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the RPC server stubs */


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

#if defined(_M_AMD64)



extern const NDR_RUNDOWN RundownRoutines[];

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
__midl_frag1091_t;
extern const __midl_frag1091_t __midl_frag1091;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag1089_t;
extern const __midl_frag1089_t __midl_frag1089;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1088_t;
extern const __midl_frag1088_t __midl_frag1088;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1087_t;
extern const __midl_frag1087_t __midl_frag1087;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1086_t;
extern const __midl_frag1086_t __midl_frag1086;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1085_t;
extern const __midl_frag1085_t __midl_frag1085;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag1084_t;
extern const __midl_frag1084_t __midl_frag1084;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1083_t;
extern const __midl_frag1083_t __midl_frag1083;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1082_t;
extern const __midl_frag1082_t __midl_frag1082;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag1081_t;
extern const __midl_frag1081_t __midl_frag1081;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1080_t;
extern const __midl_frag1080_t __midl_frag1080;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1079_t;
extern const __midl_frag1079_t __midl_frag1079;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1076_t;
extern const __midl_frag1076_t __midl_frag1076;

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
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag1071_t;
extern const __midl_frag1071_t __midl_frag1071;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1068_t;
extern const __midl_frag1068_t __midl_frag1068;

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
__midl_frag1065_t;
extern const __midl_frag1065_t __midl_frag1065;

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
__midl_frag1060_t;
extern const __midl_frag1060_t __midl_frag1060;

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
__midl_frag1052_t;
extern const __midl_frag1052_t __midl_frag1052;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag1051_t;
extern const __midl_frag1051_t __midl_frag1051;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1042_t;
extern const __midl_frag1042_t __midl_frag1042;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1041_t;
extern const __midl_frag1041_t __midl_frag1041;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1040_t;
extern const __midl_frag1040_t __midl_frag1040;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1039_t;
extern const __midl_frag1039_t __midl_frag1039;

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
__midl_frag1030_t;
extern const __midl_frag1030_t __midl_frag1030;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag1023_t;
extern const __midl_frag1023_t __midl_frag1023;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag1022_t;
extern const __midl_frag1022_t __midl_frag1022;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1021_t;
extern const __midl_frag1021_t __midl_frag1021;

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
__midl_frag1015_t;
extern const __midl_frag1015_t __midl_frag1015;

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
__midl_frag1003_t;
extern const __midl_frag1003_t __midl_frag1003;

typedef 
NDR64_FORMAT_CHAR
__midl_frag997_t;
extern const __midl_frag997_t __midl_frag997;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag996_t;
extern const __midl_frag996_t __midl_frag996;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag995_t;
extern const __midl_frag995_t __midl_frag995;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag994_t;
extern const __midl_frag994_t __midl_frag994;

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
__midl_frag992_t;
extern const __midl_frag992_t __midl_frag992;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag983_t;
extern const __midl_frag983_t __midl_frag983;

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
__midl_frag980_t;
extern const __midl_frag980_t __midl_frag980;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag977_t;
extern const __midl_frag977_t __midl_frag977;

typedef 
NDR64_FORMAT_CHAR
__midl_frag973_t;
extern const __midl_frag973_t __midl_frag973;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag971_t;
extern const __midl_frag971_t __midl_frag971;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag970_t;
extern const __midl_frag970_t __midl_frag970;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag967_t;
extern const __midl_frag967_t __midl_frag967;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag966_t;
extern const __midl_frag966_t __midl_frag966;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag965_t;
extern const __midl_frag965_t __midl_frag965;

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
__midl_frag961_t;
extern const __midl_frag961_t __midl_frag961;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag951_t;
extern const __midl_frag951_t __midl_frag951;

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
__midl_frag948_t;
extern const __midl_frag948_t __midl_frag948;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
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
}
__midl_frag932_t;
extern const __midl_frag932_t __midl_frag932;

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
__midl_frag922_t;
extern const __midl_frag922_t __midl_frag922;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag916_t;
extern const __midl_frag916_t __midl_frag916;

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
__midl_frag909_t;
extern const __midl_frag909_t __midl_frag909;

typedef 
NDR64_FORMAT_CHAR
__midl_frag904_t;
extern const __midl_frag904_t __midl_frag904;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
}
__midl_frag903_t;
extern const __midl_frag903_t __midl_frag903;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag902_t;
extern const __midl_frag902_t __midl_frag902;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag901_t;
extern const __midl_frag901_t __midl_frag901;

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
__midl_frag897_t;
extern const __midl_frag897_t __midl_frag897;

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
__midl_frag883_t;
extern const __midl_frag883_t __midl_frag883;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag877_t;
extern const __midl_frag877_t __midl_frag877;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag876_t;
extern const __midl_frag876_t __midl_frag876;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag875_t;
extern const __midl_frag875_t __midl_frag875;

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
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag854_t;
extern const __midl_frag854_t __midl_frag854;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag853_t;
extern const __midl_frag853_t __midl_frag853;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag840_t;
extern const __midl_frag840_t __midl_frag840;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag839_t;
extern const __midl_frag839_t __midl_frag839;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag838_t;
extern const __midl_frag838_t __midl_frag838;

typedef 
NDR64_FORMAT_CHAR
__midl_frag832_t;
extern const __midl_frag832_t __midl_frag832;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_VAR frag3;
    struct _NDR64_EXPR_CONST64 frag4;
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
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag827_t;
extern const __midl_frag827_t __midl_frag827;

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
__midl_frag826_t;
extern const __midl_frag826_t __midl_frag826;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag824_t;
extern const __midl_frag824_t __midl_frag824;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag822_t;
extern const __midl_frag822_t __midl_frag822;

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
__midl_frag819_t;
extern const __midl_frag819_t __midl_frag819;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag817_t;
extern const __midl_frag817_t __midl_frag817;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag816_t;
extern const __midl_frag816_t __midl_frag816;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag815_t;
extern const __midl_frag815_t __midl_frag815;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag814_t;
extern const __midl_frag814_t __midl_frag814;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag812_t;
extern const __midl_frag812_t __midl_frag812;

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
__midl_frag809_t;
extern const __midl_frag809_t __midl_frag809;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag807_t;
extern const __midl_frag807_t __midl_frag807;

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
__midl_frag804_t;
extern const __midl_frag804_t __midl_frag804;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag803_t;
extern const __midl_frag803_t __midl_frag803;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
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
__midl_frag797_t;
extern const __midl_frag797_t __midl_frag797;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag796_t;
extern const __midl_frag796_t __midl_frag796;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag795_t;
extern const __midl_frag795_t __midl_frag795;

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
__midl_frag794_t;
extern const __midl_frag794_t __midl_frag794;

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
__midl_frag793_t;
extern const __midl_frag793_t __midl_frag793;

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
__midl_frag783_t;
extern const __midl_frag783_t __midl_frag783;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag778_t;
extern const __midl_frag778_t __midl_frag778;

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
__midl_frag775_t;
extern const __midl_frag775_t __midl_frag775;

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
__midl_frag766_t;
extern const __midl_frag766_t __midl_frag766;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag764_t;
extern const __midl_frag764_t __midl_frag764;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag763_t;
extern const __midl_frag763_t __midl_frag763;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag762_t;
extern const __midl_frag762_t __midl_frag762;

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
__midl_frag761_t;
extern const __midl_frag761_t __midl_frag761;

typedef 
NDR64_FORMAT_CHAR
__midl_frag760_t;
extern const __midl_frag760_t __midl_frag760;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag757_t;
extern const __midl_frag757_t __midl_frag757;

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
__midl_frag756_t;
extern const __midl_frag756_t __midl_frag756;

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
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag747_t;
extern const __midl_frag747_t __midl_frag747;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag742_t;
extern const __midl_frag742_t __midl_frag742;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag741_t;
extern const __midl_frag741_t __midl_frag741;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag740_t;
extern const __midl_frag740_t __midl_frag740;

typedef 
struct _NDR64_RANGE_FORMAT
__midl_frag739_t;
extern const __midl_frag739_t __midl_frag739;

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
__midl_frag732_t;
extern const __midl_frag732_t __midl_frag732;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag728_t;
extern const __midl_frag728_t __midl_frag728;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag725_t;
extern const __midl_frag725_t __midl_frag725;

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
__midl_frag724_t;
extern const __midl_frag724_t __midl_frag724;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag723_t;
extern const __midl_frag723_t __midl_frag723;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
}
__midl_frag722_t;
extern const __midl_frag722_t __midl_frag722;

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
__midl_frag719_t;
extern const __midl_frag719_t __midl_frag719;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag718_t;
extern const __midl_frag718_t __midl_frag718;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag717_t;
extern const __midl_frag717_t __midl_frag717;

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
__midl_frag715_t;
extern const __midl_frag715_t __midl_frag715;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag714_t;
extern const __midl_frag714_t __midl_frag714;

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
__midl_frag710_t;
extern const __midl_frag710_t __midl_frag710;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag709_t;
extern const __midl_frag709_t __midl_frag709;

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
__midl_frag707_t;
extern const __midl_frag707_t __midl_frag707;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag706_t;
extern const __midl_frag706_t __midl_frag706;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_OPERATOR frag2;
    struct _NDR64_EXPR_CONST64 frag3;
    struct _NDR64_EXPR_VAR frag4;
}
__midl_frag705_t;
extern const __midl_frag705_t __midl_frag705;

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
__midl_frag704_t;
extern const __midl_frag704_t __midl_frag704;

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
__midl_frag703_t;
extern const __midl_frag703_t __midl_frag703;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag702_t;
extern const __midl_frag702_t __midl_frag702;

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
__midl_frag699_t;
extern const __midl_frag699_t __midl_frag699;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag697_t;
extern const __midl_frag697_t __midl_frag697;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag696_t;
extern const __midl_frag696_t __midl_frag696;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag695_t;
extern const __midl_frag695_t __midl_frag695;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag692_t;
extern const __midl_frag692_t __midl_frag692;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag691_t;
extern const __midl_frag691_t __midl_frag691;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag690_t;
extern const __midl_frag690_t __midl_frag690;

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
__midl_frag686_t;
extern const __midl_frag686_t __midl_frag686;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_RANGE_FORMAT frag2;
    struct _NDR64_EXPR_VAR frag3;
}
__midl_frag683_t;
extern const __midl_frag683_t __midl_frag683;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag682_t;
extern const __midl_frag682_t __midl_frag682;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag681_t;
extern const __midl_frag681_t __midl_frag681;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag677_t;
extern const __midl_frag677_t __midl_frag677;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag676_t;
extern const __midl_frag676_t __midl_frag676;

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
__midl_frag673_t;
extern const __midl_frag673_t __midl_frag673;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag669_t;
extern const __midl_frag669_t __midl_frag669;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
}
__midl_frag668_t;
extern const __midl_frag668_t __midl_frag668;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag664_t;
extern const __midl_frag664_t __midl_frag664;

typedef 
NDR64_FORMAT_CHAR
__midl_frag656_t;
extern const __midl_frag656_t __midl_frag656;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag655_t;
extern const __midl_frag655_t __midl_frag655;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag654_t;
extern const __midl_frag654_t __midl_frag654;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag653_t;
extern const __midl_frag653_t __midl_frag653;

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
__midl_frag648_t;
extern const __midl_frag648_t __midl_frag648;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag646_t;
extern const __midl_frag646_t __midl_frag646;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag645_t;
extern const __midl_frag645_t __midl_frag645;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag644_t;
extern const __midl_frag644_t __midl_frag644;

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
__midl_frag642_t;
extern const __midl_frag642_t __midl_frag642;

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
__midl_frag626_t;
extern const __midl_frag626_t __midl_frag626;

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
__midl_frag616_t;
extern const __midl_frag616_t __midl_frag616;

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
__midl_frag603_t;
extern const __midl_frag603_t __midl_frag603;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag602_t;
extern const __midl_frag602_t __midl_frag602;

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
__midl_frag600_t;
extern const __midl_frag600_t __midl_frag600;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag599_t;
extern const __midl_frag599_t __midl_frag599;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag598_t;
extern const __midl_frag598_t __midl_frag598;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag597_t;
extern const __midl_frag597_t __midl_frag597;

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
__midl_frag596_t;
extern const __midl_frag596_t __midl_frag596;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag595_t;
extern const __midl_frag595_t __midl_frag595;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag592_t;
extern const __midl_frag592_t __midl_frag592;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag587_t;
extern const __midl_frag587_t __midl_frag587;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag586_t;
extern const __midl_frag586_t __midl_frag586;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag585_t;
extern const __midl_frag585_t __midl_frag585;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag578_t;
extern const __midl_frag578_t __midl_frag578;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag575_t;
extern const __midl_frag575_t __midl_frag575;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag574_t;
extern const __midl_frag574_t __midl_frag574;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag573_t;
extern const __midl_frag573_t __midl_frag573;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
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
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag571_t;
extern const __midl_frag571_t __midl_frag571;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag568_t;
extern const __midl_frag568_t __midl_frag568;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag567_t;
extern const __midl_frag567_t __midl_frag567;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag566_t;
extern const __midl_frag566_t __midl_frag566;

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
__midl_frag565_t;
extern const __midl_frag565_t __midl_frag565;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag562_t;
extern const __midl_frag562_t __midl_frag562;

typedef 
NDR64_FORMAT_CHAR
__midl_frag561_t;
extern const __midl_frag561_t __midl_frag561;

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
__midl_frag558_t;
extern const __midl_frag558_t __midl_frag558;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag548_t;
extern const __midl_frag548_t __midl_frag548;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag547_t;
extern const __midl_frag547_t __midl_frag547;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag546_t;
extern const __midl_frag546_t __midl_frag546;

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
__midl_frag542_t;
extern const __midl_frag542_t __midl_frag542;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag532_t;
extern const __midl_frag532_t __midl_frag532;

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
__midl_frag528_t;
extern const __midl_frag528_t __midl_frag528;

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
__midl_frag515_t;
extern const __midl_frag515_t __midl_frag515;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag513_t;
extern const __midl_frag513_t __midl_frag513;

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
__midl_frag509_t;
extern const __midl_frag509_t __midl_frag509;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag503_t;
extern const __midl_frag503_t __midl_frag503;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag502_t;
extern const __midl_frag502_t __midl_frag502;

typedef 
struct _NDR64_POINTER_FORMAT
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
__midl_frag496_t;
extern const __midl_frag496_t __midl_frag496;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
}
__midl_frag489_t;
extern const __midl_frag489_t __midl_frag489;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag486_t;
extern const __midl_frag486_t __midl_frag486;

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
__midl_frag480_t;
extern const __midl_frag480_t __midl_frag480;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag479_t;
extern const __midl_frag479_t __midl_frag479;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag478_t;
extern const __midl_frag478_t __midl_frag478;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    NDR64_UINT32 frag5;
}
__midl_frag477_t;
extern const __midl_frag477_t __midl_frag477;

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
__midl_frag476_t;
extern const __midl_frag476_t __midl_frag476;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag473_t;
extern const __midl_frag473_t __midl_frag473;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag471_t;
extern const __midl_frag471_t __midl_frag471;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag470_t;
extern const __midl_frag470_t __midl_frag470;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
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
}
__midl_frag463_t;
extern const __midl_frag463_t __midl_frag463;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag458_t;
extern const __midl_frag458_t __midl_frag458;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag457_t;
extern const __midl_frag457_t __midl_frag457;

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
__midl_frag452_t;
extern const __midl_frag452_t __midl_frag452;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag444_t;
extern const __midl_frag444_t __midl_frag444;

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
__midl_frag438_t;
extern const __midl_frag438_t __midl_frag438;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag434_t;
extern const __midl_frag434_t __midl_frag434;

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
__midl_frag423_t;
extern const __midl_frag423_t __midl_frag423;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag414_t;
extern const __midl_frag414_t __midl_frag414;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag413_t;
extern const __midl_frag413_t __midl_frag413;

typedef 
struct _NDR64_POINTER_FORMAT
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
}
__midl_frag410_t;
extern const __midl_frag410_t __midl_frag410;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag408_t;
extern const __midl_frag408_t __midl_frag408;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag407_t;
extern const __midl_frag407_t __midl_frag407;

typedef 
NDR64_FORMAT_CHAR
__midl_frag406_t;
extern const __midl_frag406_t __midl_frag406;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag405_t;
extern const __midl_frag405_t __midl_frag405;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag404_t;
extern const __midl_frag404_t __midl_frag404;

typedef 
NDR64_FORMAT_CHAR
__midl_frag403_t;
extern const __midl_frag403_t __midl_frag403;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag401_t;
extern const __midl_frag401_t __midl_frag401;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag397_t;
extern const __midl_frag397_t __midl_frag397;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag396_t;
extern const __midl_frag396_t __midl_frag396;

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
__midl_frag394_t;
extern const __midl_frag394_t __midl_frag394;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag391_t;
extern const __midl_frag391_t __midl_frag391;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag387_t;
extern const __midl_frag387_t __midl_frag387;

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
__midl_frag384_t;
extern const __midl_frag384_t __midl_frag384;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag383_t;
extern const __midl_frag383_t __midl_frag383;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag382_t;
extern const __midl_frag382_t __midl_frag382;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    NDR64_UINT32 frag4;
}
__midl_frag381_t;
extern const __midl_frag381_t __midl_frag381;

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
__midl_frag380_t;
extern const __midl_frag380_t __midl_frag380;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag379_t;
extern const __midl_frag379_t __midl_frag379;

typedef 
struct _NDR64_CONTEXT_HANDLE_FORMAT
__midl_frag378_t;
extern const __midl_frag378_t __midl_frag378;

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
__midl_frag377_t;
extern const __midl_frag377_t __midl_frag377;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag374_t;
extern const __midl_frag374_t __midl_frag374;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag366_t;
extern const __midl_frag366_t __midl_frag366;

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
__midl_frag363_t;
extern const __midl_frag363_t __midl_frag363;

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
__midl_frag347_t;
extern const __midl_frag347_t __midl_frag347;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag344_t;
extern const __midl_frag344_t __midl_frag344;

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
__midl_frag337_t;
extern const __midl_frag337_t __midl_frag337;

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
__midl_frag315_t;
extern const __midl_frag315_t __midl_frag315;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag312_t;
extern const __midl_frag312_t __midl_frag312;

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
__midl_frag302_t;
extern const __midl_frag302_t __midl_frag302;

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
__midl_frag284_t;
extern const __midl_frag284_t __midl_frag284;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag282_t;
extern const __midl_frag282_t __midl_frag282;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag281_t;
extern const __midl_frag281_t __midl_frag281;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag278_t;
extern const __midl_frag278_t __midl_frag278;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag277_t;
extern const __midl_frag277_t __midl_frag277;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
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
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag265_t;
extern const __midl_frag265_t __midl_frag265;

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
__midl_frag256_t;
extern const __midl_frag256_t __midl_frag256;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

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
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

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
__midl_frag235_t;
extern const __midl_frag235_t __midl_frag235;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag234_t;
extern const __midl_frag234_t __midl_frag234;

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
__midl_frag233_t;
extern const __midl_frag233_t __midl_frag233;

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
__midl_frag218_t;
extern const __midl_frag218_t __midl_frag218;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

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
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

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
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag203_t;
extern const __midl_frag203_t __midl_frag203;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
    struct _NDR64_POINTER_FORMAT frag4;
    struct _NDR64_POINTER_FORMAT frag5;
}
__midl_frag202_t;
extern const __midl_frag202_t __midl_frag202;

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
__midl_frag196_t;
extern const __midl_frag196_t __midl_frag196;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag195_t;
extern const __midl_frag195_t __midl_frag195;

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
__midl_frag190_t;
extern const __midl_frag190_t __midl_frag190;

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
struct _NDR64_POINTER_FORMAT
__midl_frag169_t;
extern const __midl_frag169_t __midl_frag169;

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
__midl_frag167_t;
extern const __midl_frag167_t __midl_frag167;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag160_t;
extern const __midl_frag160_t __midl_frag160;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag157_t;
extern const __midl_frag157_t __midl_frag157;

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
__midl_frag156_t;
extern const __midl_frag156_t __midl_frag156;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag153_t;
extern const __midl_frag153_t __midl_frag153;

typedef 
struct _NDR64_POINTER_FORMAT
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
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag148_t;
extern const __midl_frag148_t __midl_frag148;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag147_t;
extern const __midl_frag147_t __midl_frag147;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag146_t;
extern const __midl_frag146_t __midl_frag146;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag145_t;
extern const __midl_frag145_t __midl_frag145;

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
__midl_frag142_t;
extern const __midl_frag142_t __midl_frag142;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag141_t;
extern const __midl_frag141_t __midl_frag141;

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
__midl_frag138_t;
extern const __midl_frag138_t __midl_frag138;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag137_t;
extern const __midl_frag137_t __midl_frag137;

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
        NDR64_FORMAT_CHAR frag34;
    } frag2;
}
__midl_frag123_t;
extern const __midl_frag123_t __midl_frag123;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag122_t;
extern const __midl_frag122_t __midl_frag122;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
    struct _NDR64_POINTER_FORMAT frag2;
    struct _NDR64_POINTER_FORMAT frag3;
}
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

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
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct _NDR64_POINTER_FORMAT
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
struct _NDR64_POINTER_FORMAT
__midl_frag112_t;
extern const __midl_frag112_t __midl_frag112;

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
__midl_frag110_t;
extern const __midl_frag110_t __midl_frag110;

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
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

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
__midl_frag105_t;
extern const __midl_frag105_t __midl_frag105;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
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
    struct _NDR64_PARAM_FORMAT frag11;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

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
__midl_frag78_t;
extern const __midl_frag78_t __midl_frag78;

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
__midl_frag75_t;
extern const __midl_frag75_t __midl_frag75;

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
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

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
__midl_frag49_t;
extern const __midl_frag49_t __midl_frag49;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

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
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

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
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct _NDR64_POINTER_FORMAT
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
    NDR64_UINT32 frag7;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

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
__midl_frag36_t;
extern const __midl_frag36_t __midl_frag36;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag35_t;
extern const __midl_frag35_t __midl_frag35;

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
__midl_frag32_t;
extern const __midl_frag32_t __midl_frag32;

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
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

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
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1091_t __midl_frag1091 =
0x5    /* FC64_INT32 */;

static const __midl_frag1089_t __midl_frag1089 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 2 /* 0x2 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag1088_t __midl_frag1088 =
{ 
/* Proc116 */
    { 
    /* Proc116 */      /* procedure Proc116 */
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
            (NDR64_UINT8) 2 /* 0x2 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag1089,
        { 
        /* arg_0 */
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
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag1091,
        { 
        /* arg_1 */
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
    /* long */      /* parameter long */
        &__midl_frag1091,
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
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1087_t __midl_frag1087 =
0x5    /* FC64_INT32 */;

static const __midl_frag1086_t __midl_frag1086 =
0x7    /* FC64_INT64 */;

static const __midl_frag1085_t __midl_frag1085 =
{ 
/* *__int3264 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1086
};

static const __midl_frag1084_t __midl_frag1084 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 2 /* 0x2 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag1083_t __midl_frag1083 =
{ 
/* Proc115 */
    { 
    /* Proc115 */      /* procedure Proc115 */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 36 /* 0x24 */,
        (NDR64_UINT32) 48 /* 0x30 */,
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
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag1084,
        { 
        /* arg_0 */
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
    /* arg_1 */      /* parameter arg_1 */
        &__midl_frag1086,
        { 
        /* arg_1 */
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
    /* long */      /* parameter long */
        &__midl_frag1087,
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
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1082_t __midl_frag1082 =
0x5    /* FC64_INT32 */;

static const __midl_frag1081_t __midl_frag1081 =
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

static const __midl_frag1080_t __midl_frag1080 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1081
};

static const __midl_frag1079_t __midl_frag1079 =
{ 
/* Proc114 */
    { 
    /* Proc114 */      /* procedure Proc114 */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* arg_0 */      /* parameter arg_0 */
        &__midl_frag1080,
        { 
        /* arg_0 */
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
    /* long */      /* parameter long */
        &__midl_frag1082,
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
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1076_t __midl_frag1076 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1082
};

static const __midl_frag1072_t __midl_frag1072 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag1071_t __midl_frag1071 =
{ 
/* RpcEnumJobNamedProperties */
    { 
    /* RpcEnumJobNamedProperties */      /* procedure RpcEnumJobNamedProperties */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
        (NDR64_UINT32) 72 /* 0x48 */,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
        { 
        /* ppProperties */
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
        &__midl_frag1082,
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

static const __midl_frag1068_t __midl_frag1068 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1081
};

static const __midl_frag1065_t __midl_frag1065 =
{ 
/* RpcDeleteJobNamedProperty */
    { 
    /* RpcDeleteJobNamedProperty */      /* procedure RpcDeleteJobNamedProperty */
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
        &__midl_frag1082,
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
        &__midl_frag1081,
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
        &__midl_frag1082,
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

static const __midl_frag1060_t __midl_frag1060 =
{ 
/* RpcSetJobNamedProperty */
    { 
    /* RpcSetJobNamedProperty */      /* procedure RpcSetJobNamedProperty */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 52 /* 0x34 */,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
        { 
        /* pProperty */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag1052_t __midl_frag1052 =
{ 
/* RpcGetJobNamedPropertyValue */
    { 
    /* RpcGetJobNamedPropertyValue */      /* procedure RpcGetJobNamedPropertyValue */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
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
        &__midl_frag1082,
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
        &__midl_frag1081,
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
        &__midl_frag1082,
        { 
        /* pValue */
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
        &__midl_frag1082,
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

static const __midl_frag1051_t __midl_frag1051 =
{ 
/* Opnum109NotUsedOnWire */
    { 
    /* Opnum109NotUsedOnWire */      /* procedure Opnum109NotUsedOnWire */
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

static const __midl_frag1042_t __midl_frag1042 =
0x11    /* FC64_WCHAR */;

static const __midl_frag1041_t __midl_frag1041 =
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

static const __midl_frag1040_t __midl_frag1040 =
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
        &__midl_frag1041
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1042
    }
};

static const __midl_frag1039_t __midl_frag1039 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 32 /* 0x20 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1040
};

static const __midl_frag1030_t __midl_frag1030 =
{ 
/* RpcGetPrinterDriverPackagePath */
    { 
    /* RpcGetPrinterDriverPackagePath */      /* procedure RpcGetPrinterDriverPackagePath */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag1081,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pszLanguage */      /* parameter pszLanguage */
        &__midl_frag1080,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszPackageID */      /* parameter pszPackageID */
        &__midl_frag1081,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pszDriverPackageCab */      /* parameter pszDriverPackageCab */
        &__midl_frag1039,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cchDriverPackageCab */      /* parameter cchDriverPackageCab */
        &__midl_frag1082,
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pcchRequiredSize */      /* parameter pcchRequiredSize */
        &__midl_frag1082,
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1082,
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

static const __midl_frag1023_t __midl_frag1023 =
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

static const __midl_frag1022_t __midl_frag1022 =
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
        &__midl_frag1023
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1042
    }
};

static const __midl_frag1021_t __midl_frag1021 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1022
};

static const __midl_frag1015_t __midl_frag1015 =
{ 
/* RpcGetCorePrinterDrivers */
    { 
    /* RpcGetCorePrinterDrivers */      /* procedure RpcGetCorePrinterDrivers */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pszServer */      /* parameter pszServer */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pszEnvironment */      /* parameter pszEnvironment */
        &__midl_frag1081,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cchCoreDrivers */      /* parameter cchCoreDrivers */
        &__midl_frag1082,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pszzCoreDriverDependencies */      /* parameter pszzCoreDriverDependencies */
        &__midl_frag1022,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cCorePrinterDrivers */      /* parameter cCorePrinterDrivers */
        &__midl_frag1082,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pCorePrinterDrivers */      /* parameter pCorePrinterDrivers */
        &__midl_frag1082,
        { 
        /* pCorePrinterDrivers */
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
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1082,
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

static const __midl_frag1003_t __midl_frag1003 =
{ 
/* RpcSendRecvBidiData */
    { 
    /* RpcSendRecvBidiData */      /* procedure RpcSendRecvBidiData */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
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
    /* pAction */      /* parameter pAction */
        &__midl_frag1080,
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
        &__midl_frag1082,
        { 
        /* pReqData */
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
    /* ppRespData */      /* parameter ppRespData */
        &__midl_frag1082,
        { 
        /* ppRespData */
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
        &__midl_frag1082,
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

static const __midl_frag997_t __midl_frag997 =
0x10    /* FC64_CHAR */;

static const __midl_frag996_t __midl_frag996 =
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

static const __midl_frag995_t __midl_frag995 =
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
        &__midl_frag996
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag997
    }
};

static const __midl_frag994_t __midl_frag994 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag995
};

static const __midl_frag992_t __midl_frag992 =
{ 
/* RpcFlushPrinter */
    { 
    /* RpcFlushPrinter */      /* procedure RpcFlushPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
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
    /* pBuf */      /* parameter pBuf */
        &__midl_frag995,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
    /* cSleep */      /* parameter cSleep */
        &__midl_frag1082,
        { 
        /* cSleep */
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
        &__midl_frag1082,
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

static const __midl_frag983_t __midl_frag983 =
{ 
/* *DRIVER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag189
};

static const __midl_frag980_t __midl_frag980 =
{ 
/* RpcAddPrinterDriverEx */
    { 
    /* RpcAddPrinterDriverEx */      /* procedure RpcAddPrinterDriverEx */
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
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pDriverContainer */      /* parameter pDriverContainer */
        &__midl_frag189,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwFileCopyFlags */      /* parameter dwFileCopyFlags */
        &__midl_frag1082,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag977_t __midl_frag977 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1082
};

static const __midl_frag973_t __midl_frag973 =
0x10    /* FC64_CHAR */;

static const __midl_frag971_t __midl_frag971 =
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
        &__midl_frag1041
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag970_t __midl_frag970 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag971
};

static const __midl_frag967_t __midl_frag967 =
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

static const __midl_frag966_t __midl_frag966 =
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
        &__midl_frag967
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag997
    }
};

static const __midl_frag965_t __midl_frag965 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag966
};

static const __midl_frag961_t __midl_frag961 =
{ 
/* RpcXcvData */
    { 
    /* RpcXcvData */      /* procedure RpcXcvData */
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
        &__midl_frag1072,
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
        &__midl_frag1081,
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
        &__midl_frag966,
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
        &__midl_frag1082,
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
        &__midl_frag971,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag951_t __midl_frag951 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag995
};

static const __midl_frag948_t __midl_frag948 =
{ 
/* RpcEnumPerMachineConnections */
    { 
    /* RpcEnumPerMachineConnections */      /* procedure RpcEnumPerMachineConnections */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pServer */      /* parameter pServer */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPrinterEnum */      /* parameter pPrinterEnum */
        &__midl_frag951,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1082,
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
    /* pcbNeeded */      /* parameter pcbNeeded */
        &__midl_frag1082,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pcReturned */      /* parameter pcReturned */
        &__midl_frag1082,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag942_t __midl_frag942 =
{ 
/* RpcDeletePerMachineConnection */
    { 
    /* RpcDeletePerMachineConnection */      /* procedure RpcDeletePerMachineConnection */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
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
    /* pServer */      /* parameter pServer */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag1081,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag932_t __midl_frag932 =
{ 
/* RpcAddPerMachineConnection */
    { 
    /* RpcAddPerMachineConnection */      /* procedure RpcAddPerMachineConnection */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pServer */      /* parameter pServer */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag1081,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pPrintServer */      /* parameter pPrintServer */
        &__midl_frag1081,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pProvider */      /* parameter pProvider */
        &__midl_frag1081,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag922_t __midl_frag922 =
{ 
/* RpcDeletePrinterDriverEx */
    { 
    /* RpcDeletePrinterDriverEx */      /* procedure RpcDeletePrinterDriverEx */
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
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag1081,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDriverName */      /* parameter pDriverName */
        &__midl_frag1081,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwDeleteFlag */      /* parameter dwDeleteFlag */
        &__midl_frag1082,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwVersionNum */      /* parameter dwVersionNum */
        &__midl_frag1082,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag916_t __midl_frag916 =
{ 
/* RpcDeletePrinterKey */
    { 
    /* RpcDeletePrinterKey */      /* procedure RpcDeletePrinterKey */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag1081,
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
        &__midl_frag1082,
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

static const __midl_frag909_t __midl_frag909 =
{ 
/* RpcDeletePrinterDataEx */
    { 
    /* RpcDeletePrinterDataEx */      /* procedure RpcDeletePrinterDataEx */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag1081,
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
        &__midl_frag1081,
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
        &__midl_frag1082,
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

static const __midl_frag904_t __midl_frag904 =
0x11    /* FC64_WCHAR */;

static const __midl_frag903_t __midl_frag903 =
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

static const __midl_frag902_t __midl_frag902 =
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
        &__midl_frag903
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag904
    }
};

static const __midl_frag901_t __midl_frag901 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag902
};

static const __midl_frag897_t __midl_frag897 =
{ 
/* RpcEnumPrinterKey */
    { 
    /* RpcEnumPrinterKey */      /* procedure RpcEnumPrinterKey */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag1081,
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
        &__midl_frag902,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag883_t __midl_frag883 =
{ 
/* RpcEnumPrinterDataEx */
    { 
    /* RpcEnumPrinterDataEx */      /* procedure RpcEnumPrinterDataEx */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag1081,
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
        &__midl_frag966,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag877_t __midl_frag877 =
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

static const __midl_frag876_t __midl_frag876 =
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
        &__midl_frag877
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag997
    }
};

static const __midl_frag875_t __midl_frag875 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag876
};

static const __midl_frag867_t __midl_frag867 =
{ 
/* RpcGetPrinterDataEx */
    { 
    /* RpcGetPrinterDataEx */      /* procedure RpcGetPrinterDataEx */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag1081,
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
        &__midl_frag1081,
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
        &__midl_frag1082,
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
        &__midl_frag876,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag854_t __midl_frag854 =
{ 
/* RpcSetPrinterDataEx */
    { 
    /* RpcSetPrinterDataEx */      /* procedure RpcSetPrinterDataEx */
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
    /* pKeyName */      /* parameter pKeyName */
        &__midl_frag1081,
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
        &__midl_frag1081,
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
        &__midl_frag1082,
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
        &__midl_frag876,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag853_t __midl_frag853 =
{ 
/* Opnum76NotUsedOnWire */
    { 
    /* Opnum76NotUsedOnWire */      /* procedure Opnum76NotUsedOnWire */
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

static const __midl_frag840_t __midl_frag840 =
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

static const __midl_frag839_t __midl_frag839 =
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
        &__midl_frag840
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag838_t __midl_frag838 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag839
};

static const __midl_frag832_t __midl_frag832 =
0x11    /* FC64_WCHAR */;

static const __midl_frag831_t __midl_frag831 =
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

static const __midl_frag830_t __midl_frag830 =
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
        &__midl_frag831
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag832
    }
};

static const __midl_frag829_t __midl_frag829 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag830
};

static const __midl_frag827_t __midl_frag827 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag826_t __midl_frag826 =
{ 
/* RpcEnumPrinterData */
    { 
    /* RpcEnumPrinterData */      /* procedure RpcEnumPrinterData */
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
        &__midl_frag827,
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
        &__midl_frag1087,
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
        &__midl_frag830,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag839,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag824_t __midl_frag824 =
{ 
/* *PORT_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag703
};

static const __midl_frag822_t __midl_frag822 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1081
};

static const __midl_frag819_t __midl_frag819 =
{ 
/* RpcSetPort */
    { 
    /* RpcSetPort */      /* procedure RpcSetPort */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
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
    /* pName */      /* parameter pName */
        &__midl_frag822,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPortName */      /* parameter pPortName */
        &__midl_frag822,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pPortContainer */      /* parameter pPortContainer */
        &__midl_frag703,
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag817_t __midl_frag817 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag816_t __midl_frag816 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag817
};

static const __midl_frag815_t __midl_frag815 =
{ 
/* *SPLCLIENT_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag793
};

static const __midl_frag814_t __midl_frag814 =
{ 
/* *SECURITY_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag156
};

static const __midl_frag812_t __midl_frag812 =
{ 
/* *PRINTER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag109
};

static const __midl_frag809_t __midl_frag809 =
{ 
/* RpcAddPrinterEx */
    { 
    /* RpcAddPrinterEx */      /* procedure RpcAddPrinterEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPrinterContainer */      /* parameter pPrinterContainer */
        &__midl_frag109,
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
        &__midl_frag156,
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
        &__midl_frag156,
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
    /* pClientInfo */      /* parameter pClientInfo */
        &__midl_frag793,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pHandle */      /* parameter pHandle */
        &__midl_frag817,
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag807_t __midl_frag807 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    }
};

static const __midl_frag804_t __midl_frag804 =
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
        &__midl_frag807,
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

static const __midl_frag803_t __midl_frag803 =
{ 
/* *SPLCLIENT_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag804
};

static const __midl_frag802_t __midl_frag802 =
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

static const __midl_frag801_t __midl_frag801 =
{ 
/* *SPLCLIENT_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag802
};

static const __midl_frag797_t __midl_frag797 =
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
        &__midl_frag807,
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

static const __midl_frag796_t __midl_frag796 =
{ 
/* *SPLCLIENT_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag797
};

static const __midl_frag795_t __midl_frag795 =
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

static const __midl_frag794_t __midl_frag794 =
{ 
/* __MIDL_winspool_0010 */
    { 
    /* __MIDL_winspool_0010 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag795,
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
        &__midl_frag796,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag801,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag803,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag793_t __midl_frag793 =
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
            &__midl_frag794
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

static const __midl_frag783_t __midl_frag783 =
{ 
/* RpcOpenPrinterEx */
    { 
    /* RpcOpenPrinterEx */      /* procedure RpcOpenPrinterEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pHandle */      /* parameter pHandle */
        &__midl_frag817,
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
    /* pDatatype */      /* parameter pDatatype */
        &__midl_frag1080,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag156,
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
    /* AccessRequired */      /* parameter AccessRequired */
        &__midl_frag1082,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pClientInfo */      /* parameter pClientInfo */
        &__midl_frag793,
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag778_t __midl_frag778 =
{ 
/* *RPC_V2_NOTIFY_OPTIONS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag755
};

static const __midl_frag775_t __midl_frag775 =
{ 
/* RpcRouterRefreshPrinterChangeNotification */
    { 
    /* RpcRouterRefreshPrinterChangeNotification */      /* procedure RpcRouterRefreshPrinterChangeNotification */
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
    /* dwColor */      /* parameter dwColor */
        &__midl_frag1082,
        { 
        /* dwColor */
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
    /* pOptions */      /* parameter pOptions */
        &__midl_frag778,
        { 
        /* pOptions */
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
    /* ppInfo */      /* parameter ppInfo */
        &__midl_frag1082,
        { 
        /* ppInfo */
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
        &__midl_frag1082,
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

static const __midl_frag766_t __midl_frag766 =
{ 
/* RpcRouterReplyPrinterEx */
    { 
    /* RpcRouterReplyPrinterEx */      /* procedure RpcRouterReplyPrinterEx */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 68 /* 0x44 */,
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
    /* hNotify */      /* parameter hNotify */
        &__midl_frag827,
        { 
        /* hNotify */
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
    /* dwColor */      /* parameter dwColor */
        &__midl_frag1082,
        { 
        /* dwColor */
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
    /* fdwFlags */      /* parameter fdwFlags */
        &__midl_frag1082,
        { 
        /* fdwFlags */
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
    /* pdwResult */      /* parameter pdwResult */
        &__midl_frag1082,
        { 
        /* pdwResult */
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
    /* dwReplyType */      /* parameter dwReplyType */
        &__midl_frag1082,
        { 
        /* dwReplyType */
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
    /* Reply */      /* parameter Reply */
        &__midl_frag1082,
        { 
        /* Reply */
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
        &__midl_frag1082,
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

static const __midl_frag764_t __midl_frag764 =
{ 
/*  */
    { 
    /* *RPC_V2_NOTIFY_OPTIONS_TYPE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag756
    }
};

static const __midl_frag763_t __midl_frag763 =
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

static const __midl_frag762_t __midl_frag762 =
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
        &__midl_frag763
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag760
    }
};

static const __midl_frag761_t __midl_frag761 =
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
            &__midl_frag762
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag760_t __midl_frag760 =
0x4    /* FC64_INT16 */;

static const __midl_frag757_t __midl_frag757 =
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

static const __midl_frag756_t __midl_frag756 =
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
        &__midl_frag757
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
                &__midl_frag762
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 24 /* 0x18 */,
        &__midl_frag761
    }
};

static const __midl_frag755_t __midl_frag755 =
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
        &__midl_frag764,
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

static const __midl_frag747_t __midl_frag747 =
{ 
/* RpcRemoteFindFirstPrinterChangeNotificationEx */
    { 
    /* RpcRemoteFindFirstPrinterChangeNotificationEx */      /* procedure RpcRemoteFindFirstPrinterChangeNotificationEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
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
    /* fdwFlags */      /* parameter fdwFlags */
        &__midl_frag1082,
        { 
        /* fdwFlags */
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
    /* fdwOptions */      /* parameter fdwOptions */
        &__midl_frag1082,
        { 
        /* fdwOptions */
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
    /* pszLocalMachine */      /* parameter pszLocalMachine */
        &__midl_frag1080,
        { 
        /* pszLocalMachine */
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
    /* dwPrinterLocal */      /* parameter dwPrinterLocal */
        &__midl_frag1082,
        { 
        /* dwPrinterLocal */
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
    /* pOptions */      /* parameter pOptions */
        &__midl_frag778,
        { 
        /* pOptions */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1087,
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

static const __midl_frag742_t __midl_frag742 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 512 /* 0x200 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag741_t __midl_frag741 =
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
        &__midl_frag742
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag740_t __midl_frag740 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag741
};

static const __midl_frag739_t __midl_frag739 =
{ 
/* DWORD */
    0xa4,    /* FC64_RANGE */
    0x5,    /* FC64_INT32 */
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_INT64) 0 /* 0x0 */,
    (NDR64_INT64) 512 /* 0x200 */
};

static const __midl_frag732_t __midl_frag732 =
{ 
/* RpcRemoteFindFirstPrinterChangeNotification */
    { 
    /* RpcRemoteFindFirstPrinterChangeNotification */      /* procedure RpcRemoteFindFirstPrinterChangeNotification */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 68 /* 0x44 */,
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
    /* fdwFlags */      /* parameter fdwFlags */
        &__midl_frag1082,
        { 
        /* fdwFlags */
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
    /* fdwOptions */      /* parameter fdwOptions */
        &__midl_frag1082,
        { 
        /* fdwOptions */
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
    /* pszLocalMachine */      /* parameter pszLocalMachine */
        &__midl_frag1080,
        { 
        /* pszLocalMachine */
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
    /* dwPrinterLocal */      /* parameter dwPrinterLocal */
        &__midl_frag1082,
        { 
        /* dwPrinterLocal */
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
    /* cbBuffer */      /* parameter cbBuffer */
        &__midl_frag739,
        { 
        /* cbBuffer */
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
    /* pBuffer */      /* parameter pBuffer */
        &__midl_frag740,
        { 
        /* pBuffer */
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
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag725
    }
};

static const __midl_frag725_t __midl_frag725 =
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
        &__midl_frag795
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag997
    }
};

static const __midl_frag724_t __midl_frag724 =
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
        &__midl_frag728,
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

static const __midl_frag723_t __midl_frag723 =
{ 
/* *PORT_VAR_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag724
};

static const __midl_frag722_t __midl_frag722 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag997
    }
};

static const __midl_frag719_t __midl_frag719 =
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
        &__midl_frag722,
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

static const __midl_frag718_t __midl_frag718 =
{ 
/* *PORT_INFO_FF */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag719
};

static const __midl_frag717_t __midl_frag717 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    }
};

static const __midl_frag715_t __midl_frag715 =
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
        &__midl_frag717,
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

static const __midl_frag714_t __midl_frag714 =
{ 
/* *PORT_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag715
};

static const __midl_frag710_t __midl_frag710 =
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
            &__midl_frag1081
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
            &__midl_frag1081
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
            &__midl_frag1081
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag709_t __midl_frag709 =
{ 
/* *PORT_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag710
};

static const __midl_frag707_t __midl_frag707 =
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
            &__midl_frag1081
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag706_t __midl_frag706 =
{ 
/* *PORT_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag707
};

static const __midl_frag705_t __midl_frag705 =
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

static const __midl_frag704_t __midl_frag704 =
{ 
/* __MIDL_winspool_0008 */
    { 
    /* __MIDL_winspool_0008 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x5,    /* FC64_INT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag705,
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
        &__midl_frag706,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag709,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag714,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16777215 /* 0xffffff */,
        &__midl_frag718,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag703_t __midl_frag703 =
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
            &__midl_frag704
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

static const __midl_frag702_t __midl_frag702 =
{ 
/* *PORT_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag703
};

static const __midl_frag699_t __midl_frag699 =
{ 
/* RpcAddPortEx */
    { 
    /* RpcAddPortEx */      /* procedure RpcAddPortEx */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPortContainer */      /* parameter pPortContainer */
        &__midl_frag703,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pPortVarContainer */      /* parameter pPortVarContainer */
        &__midl_frag724,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pMonitorName */      /* parameter pMonitorName */
        &__midl_frag1081,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag697_t __midl_frag697 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag696_t __midl_frag696 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag697
};

static const __midl_frag695_t __midl_frag695 =
{ 
/* RpcReplyClosePrinter */
    { 
    /* RpcReplyClosePrinter */      /* procedure RpcReplyClosePrinter */
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
    /* phNotify */      /* parameter phNotify */
        &__midl_frag697,
        { 
        /* phNotify */
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
        &__midl_frag1082,
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

static const __midl_frag692_t __midl_frag692 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 512 /* 0x200 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */  /* Offset */
    }
};

static const __midl_frag691_t __midl_frag691 =
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
        &__midl_frag692
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag690_t __midl_frag690 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag691
};

static const __midl_frag686_t __midl_frag686 =
{ 
/* RpcRouterReplyPrinter */
    { 
    /* RpcRouterReplyPrinter */      /* procedure RpcRouterReplyPrinter */
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
    /* hNotify */      /* parameter hNotify */
        &__midl_frag1072,
        { 
        /* hNotify */
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
    /* fdwFlags */      /* parameter fdwFlags */
        &__midl_frag1082,
        { 
        /* fdwFlags */
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
    /* cbBuffer */      /* parameter cbBuffer */
        &__midl_frag739,
        { 
        /* cbBuffer */
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pBuffer */      /* parameter pBuffer */
        &__midl_frag690,
        { 
        /* pBuffer */
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
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag683_t __midl_frag683 =
{ 
/*  */
    (NDR64_UINT32) 5 /* 0x5 */,
    { 
    /* struct _NDR64_RANGE_FORMAT */
        0xa4,    /* FC64_RANGE */
        0x5,    /* FC64_INT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_INT64) 0 /* 0x0 */,
        (NDR64_INT64) 512 /* 0x200 */
    },
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */  /* Offset */
    }
};

static const __midl_frag682_t __midl_frag682 =
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
        &__midl_frag683
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag681_t __midl_frag681 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag682
};

static const __midl_frag677_t __midl_frag677 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag676_t __midl_frag676 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag677
};

static const __midl_frag673_t __midl_frag673 =
{ 
/* RpcReplyOpenPrinter */
    { 
    /* RpcReplyOpenPrinter */      /* procedure RpcReplyOpenPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
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
    /* pMachine */      /* parameter pMachine */
        &__midl_frag1081,
        { 
        /* pMachine */
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* phPrinterNotify */      /* parameter phPrinterNotify */
        &__midl_frag677,
        { 
        /* phPrinterNotify */
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
    /* dwPrinterRemote */      /* parameter dwPrinterRemote */
        &__midl_frag1082,
        { 
        /* dwPrinterRemote */
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
    /* dwType */      /* parameter dwType */
        &__midl_frag1082,
        { 
        /* dwType */
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
    /* cbBuffer */      /* parameter cbBuffer */
        &__midl_frag739,
        { 
        /* cbBuffer */
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
    /* pBuffer */      /* parameter pBuffer */
        &__midl_frag681,
        { 
        /* pBuffer */
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
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag669_t __midl_frag669 =
{ 
/* RpcFindClosePrinterChangeNotification */
    { 
    /* RpcFindClosePrinterChangeNotification */      /* procedure RpcFindClosePrinterChangeNotification */
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
        &__midl_frag827,
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
        &__midl_frag1082,
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

static const __midl_frag668_t __midl_frag668 =
{ 
/* Opnum55NotUsedOnWire */
    { 
    /* Opnum55NotUsedOnWire */      /* procedure Opnum55NotUsedOnWire */
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

static const __midl_frag664_t __midl_frag664 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1087
};

static const __midl_frag656_t __midl_frag656 =
0x10    /* FC64_CHAR */;

static const __midl_frag655_t __midl_frag655 =
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

static const __midl_frag654_t __midl_frag654 =
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
        &__midl_frag655
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag656
    }
};

static const __midl_frag653_t __midl_frag653 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag654
};

static const __midl_frag648_t __midl_frag648 =
{ 
/* RpcGetPrinterDriver2 */
    { 
    /* RpcGetPrinterDriver2 */      /* procedure RpcGetPrinterDriver2 */
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
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag1080,
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
        &__midl_frag1082,
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
        &__midl_frag653,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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

static const __midl_frag646_t __midl_frag646 =
{ 
/* *DEVMODE_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag156
};

static const __midl_frag645_t __midl_frag645 =
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

static const __midl_frag644_t __midl_frag644 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag645
};

static const __midl_frag642_t __midl_frag642 =
{ 
/* RpcResetPrinter */
    { 
    /* RpcResetPrinter */      /* procedure RpcResetPrinter */
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
        &__midl_frag827,
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
        &__midl_frag644,
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
        &__midl_frag156,
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
        &__midl_frag1082,
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

static const __midl_frag626_t __midl_frag626 =
{ 
/* RpcEnumPrintProcessorDatatypes */
    { 
    /* RpcEnumPrintProcessorDatatypes */      /* procedure RpcEnumPrintProcessorDatatypes */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPrintProcessorName */      /* parameter pPrintProcessorName */
        &__midl_frag1080,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag1082,
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
    /* pDatatypes */      /* parameter pDatatypes */
        &__midl_frag653,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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

static const __midl_frag616_t __midl_frag616 =
{ 
/* RpcDeletePrintProcessor */
    { 
    /* RpcDeletePrintProcessor */      /* procedure RpcDeletePrintProcessor */
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
    /* Name */      /* parameter Name */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag1080,
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
    /* pPrintProcessorName */      /* parameter pPrintProcessorName */
        &__midl_frag1081,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag603_t __midl_frag603 =
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
            &__midl_frag1081
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
            &__midl_frag1081
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
            &__midl_frag1081
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag602_t __midl_frag602 =
{ 
/* *MONITOR_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag603
};

static const __midl_frag600_t __midl_frag600 =
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
            &__midl_frag1081
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag599_t __midl_frag599 =
{ 
/* *MONITOR_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag600
};

static const __midl_frag598_t __midl_frag598 =
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

static const __midl_frag597_t __midl_frag597 =
{ 
/* __MIDL_winspool_0007 */
    { 
    /* __MIDL_winspool_0007 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag598,
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
        &__midl_frag599,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag602,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag596_t __midl_frag596 =
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
            &__midl_frag597
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

static const __midl_frag595_t __midl_frag595 =
{ 
/* *MONITOR_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag596
};

static const __midl_frag592_t __midl_frag592 =
{ 
/* RpcAddMonitor */
    { 
    /* RpcAddMonitor */      /* procedure RpcAddMonitor */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
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
    /* Name */      /* parameter Name */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pMonitorContainer */      /* parameter pMonitorContainer */
        &__midl_frag596,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag587_t __midl_frag587 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag586_t __midl_frag586 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag587
};

static const __midl_frag585_t __midl_frag585 =
{ 
/* RpcDeletePrinterIC */
    { 
    /* RpcDeletePrinterIC */      /* procedure RpcDeletePrinterIC */
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
        &__midl_frag587,
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
        &__midl_frag1082,
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

static const __midl_frag578_t __midl_frag578 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag654
};

static const __midl_frag575_t __midl_frag575 =
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

static const __midl_frag574_t __midl_frag574 =
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
        &__midl_frag575
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag573_t __midl_frag573 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag574
};

static const __midl_frag572_t __midl_frag572 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag571_t __midl_frag571 =
{ 
/* RpcPlayGdiScriptOnPrinterIC */
    { 
    /* RpcPlayGdiScriptOnPrinterIC */      /* procedure RpcPlayGdiScriptOnPrinterIC */
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
        &__midl_frag572,
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
        &__midl_frag574,
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
        &__midl_frag1082,
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
        &__midl_frag654,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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

static const __midl_frag568_t __midl_frag568 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 160 /* 0xa0 */,
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT8) 3 /* 0x3 */
};

static const __midl_frag567_t __midl_frag567 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag568
};

static const __midl_frag566_t __midl_frag566 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 2 /* 0x2 */
};

static const __midl_frag565_t __midl_frag565 =
{ 
/* RpcCreatePrinterIC */
    { 
    /* RpcCreatePrinterIC */      /* procedure RpcCreatePrinterIC */
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
        &__midl_frag566,
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
        &__midl_frag568,
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
        &__midl_frag156,
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
        &__midl_frag1082,
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

static const __midl_frag562_t __midl_frag562 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag645
};

static const __midl_frag561_t __midl_frag561 =
0x7    /* FC64_INT64 */;

static const __midl_frag558_t __midl_frag558 =
{ 
/* RpcDeletePort */
    { 
    /* RpcDeletePort */      /* procedure RpcDeletePort */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
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
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag561,
        { 
        /* hWnd */
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
    /* pPortName */      /* parameter pPortName */
        &__midl_frag645,
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
        &__midl_frag1087,
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

static const __midl_frag548_t __midl_frag548 =
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

static const __midl_frag547_t __midl_frag547 =
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
        &__midl_frag548
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag546_t __midl_frag546 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag547
};

static const __midl_frag542_t __midl_frag542 =
{ 
/* RpcEnumMonitors */
    { 
    /* RpcEnumMonitors */      /* procedure RpcEnumMonitors */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag1082,
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
    /* pMonitor */      /* parameter pMonitor */
        &__midl_frag546,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag532_t __midl_frag532 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag966
};

static const __midl_frag528_t __midl_frag528 =
{ 
/* RpcEnumPorts */
    { 
    /* RpcEnumPorts */      /* procedure RpcEnumPorts */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag822,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Level */      /* parameter Level */
        &__midl_frag1082,
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
    /* pPort */      /* parameter pPort */
        &__midl_frag532,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag515_t __midl_frag515 =
{ 
/* RpcEnumForms */
    { 
    /* RpcEnumForms */      /* procedure RpcEnumForms */
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
    /* Level */      /* parameter Level */
        &__midl_frag1082,
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
        &__midl_frag546,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag513_t __midl_frag513 =
{ 
/* *FORM_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag476
};

static const __midl_frag509_t __midl_frag509 =
{ 
/* RpcSetForm */
    { 
    /* RpcSetForm */      /* procedure RpcSetForm */
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
    /* pFormName */      /* parameter pFormName */
        &__midl_frag1081,
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
        &__midl_frag476,
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
        &__midl_frag1082,
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

static const __midl_frag503_t __midl_frag503 =
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

static const __midl_frag502_t __midl_frag502 =
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
        &__midl_frag503
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag997
    }
};

static const __midl_frag501_t __midl_frag501 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag502
};

static const __midl_frag496_t __midl_frag496 =
{ 
/* RpcGetForm */
    { 
    /* RpcGetForm */      /* procedure RpcGetForm */
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
    /* pFormName */      /* parameter pFormName */
        &__midl_frag1081,
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
        &__midl_frag1082,
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
        &__midl_frag501,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag489_t __midl_frag489 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *char */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag486
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    }
};

static const __midl_frag486_t __midl_frag486 =
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

static const __midl_frag484_t __midl_frag484 =
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
        &__midl_frag489,
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

static const __midl_frag483_t __midl_frag483 =
{ 
/* *RPC_FORM_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag484
};

static const __midl_frag482_t __midl_frag482 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    }
};

static const __midl_frag480_t __midl_frag480 =
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

static const __midl_frag479_t __midl_frag479 =
{ 
/* *FORM_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag480
};

static const __midl_frag478_t __midl_frag478 =
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

static const __midl_frag477_t __midl_frag477 =
{ 
/* __MIDL_winspool_0005 */
    { 
    /* __MIDL_winspool_0005 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag478,
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
        &__midl_frag479,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag483,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag476_t __midl_frag476 =
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
            &__midl_frag477
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

static const __midl_frag473_t __midl_frag473 =
{ 
/* RpcAddForm */
    { 
    /* RpcAddForm */      /* procedure RpcAddForm */
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
    /* pFormInfoContainer */      /* parameter pFormInfoContainer */
        &__midl_frag476,
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
        &__midl_frag1082,
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

static const __midl_frag471_t __midl_frag471 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 225 /* 0xe1 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag470_t __midl_frag470 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag471
};

static const __midl_frag469_t __midl_frag469 =
{ 
/* RpcClosePrinter */
    { 
    /* RpcClosePrinter */      /* procedure RpcClosePrinter */
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
        &__midl_frag471,
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
        &__midl_frag1082,
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

static const __midl_frag463_t __midl_frag463 =
{ 
/* RpcWaitForPrinterChange */
    { 
    /* RpcWaitForPrinterChange */      /* procedure RpcWaitForPrinterChange */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 44 /* 0x2c */,
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
    /* Flags */      /* parameter Flags */
        &__midl_frag1082,
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
    /* pFlags */      /* parameter pFlags */
        &__midl_frag1082,
        { 
        /* pFlags */
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
        &__midl_frag1082,
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

static const __midl_frag458_t __midl_frag458 =
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
        &__midl_frag503
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag973
    }
};

static const __midl_frag457_t __midl_frag457 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag458
};

static const __midl_frag452_t __midl_frag452 =
{ 
/* RpcSetPrinterData */
    { 
    /* RpcSetPrinterData */      /* procedure RpcSetPrinterData */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag1081,
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
        &__midl_frag1082,
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
        &__midl_frag458,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag444_t __midl_frag444 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag502
};

static const __midl_frag438_t __midl_frag438 =
{ 
/* RpcGetPrinterData */
    { 
    /* RpcGetPrinterData */      /* procedure RpcGetPrinterData */
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
    /* pValueName */      /* parameter pValueName */
        &__midl_frag1081,
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
        &__midl_frag1082,
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
        &__midl_frag502,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag434_t __midl_frag434 =
{ 
/* RpcScheduleJob */
    { 
    /* RpcScheduleJob */      /* procedure RpcScheduleJob */
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag423_t __midl_frag423 =
{ 
/* RpcAddJob */
    { 
    /* RpcAddJob */      /* procedure RpcAddJob */
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
    /* Level */      /* parameter Level */
        &__midl_frag1082,
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
        &__midl_frag546,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag414_t __midl_frag414 =
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

static const __midl_frag413_t __midl_frag413 =
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
        &__midl_frag414
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag656
    }
};

static const __midl_frag412_t __midl_frag412 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag413
};

static const __midl_frag410_t __midl_frag410 =
{ 
/* RpcReadPrinter */
    { 
    /* RpcReadPrinter */      /* procedure RpcReadPrinter */
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
        &__midl_frag827,
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
        &__midl_frag413,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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
        &__midl_frag1087,
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

static const __midl_frag408_t __midl_frag408 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag407_t __midl_frag407 =
{ 
/* RpcAbortPrinter */
    { 
    /* RpcAbortPrinter */      /* procedure RpcAbortPrinter */
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
        &__midl_frag408,
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
        &__midl_frag1087,
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

static const __midl_frag406_t __midl_frag406 =
0x5    /* FC64_INT32 */;

static const __midl_frag405_t __midl_frag405 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag404_t __midl_frag404 =
{ 
/* RpcEndPagePrinter */
    { 
    /* RpcEndPagePrinter */      /* procedure RpcEndPagePrinter */
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
        &__midl_frag405,
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
        &__midl_frag406,
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

static const __midl_frag403_t __midl_frag403 =
0x5    /* FC64_INT32 */;

static const __midl_frag401_t __midl_frag401 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag403
};

static const __midl_frag397_t __midl_frag397 =
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
        &__midl_frag575
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag656
    }
};

static const __midl_frag396_t __midl_frag396 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag397
};

static const __midl_frag394_t __midl_frag394 =
{ 
/* RpcWritePrinter */
    { 
    /* RpcWritePrinter */      /* procedure RpcWritePrinter */
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
        &__midl_frag405,
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
        &__midl_frag397,
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
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag391_t __midl_frag391 =
{ 
/* RpcStartPagePrinter */
    { 
    /* RpcStartPagePrinter */      /* procedure RpcStartPagePrinter */
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
        &__midl_frag405,
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
        &__midl_frag403,
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

static const __midl_frag387_t __midl_frag387 =
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

static const __midl_frag384_t __midl_frag384 =
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag383_t __midl_frag383 =
{ 
/* *DOC_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag384
};

static const __midl_frag382_t __midl_frag382 =
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

static const __midl_frag381_t __midl_frag381 =
{ 
/* __MIDL_winspool_0003 */
    { 
    /* __MIDL_winspool_0003 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag382,
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
        &__midl_frag383,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag380_t __midl_frag380 =
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
            &__midl_frag381
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

static const __midl_frag379_t __midl_frag379 =
{ 
/* *DOC_INFO_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag380
};

static const __midl_frag378_t __midl_frag378 =
{ 
/* struct _NDR64_CONTEXT_HANDLE_FORMAT */
    0x70,    /* FC64_BIND_CONTEXT */
    (NDR64_UINT8) 65 /* 0x41 */,
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT8) 1 /* 0x1 */
};

static const __midl_frag377_t __midl_frag377 =
{ 
/* RpcStartDocPrinter */
    { 
    /* RpcStartDocPrinter */      /* procedure RpcStartDocPrinter */
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
        &__midl_frag378,
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
        &__midl_frag380,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag374_t __midl_frag374 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1091
};

static const __midl_frag366_t __midl_frag366 =
{ 
/* *wchar_t */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag387
};

static const __midl_frag363_t __midl_frag363 =
{ 
/* RpcGetPrintProcessorDirectory */
    { 
    /* RpcGetPrintProcessorDirectory */      /* procedure RpcGetPrintProcessorDirectory */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag366,
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
        &__midl_frag403,
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
    /* pPrintProcessorDirectory */      /* parameter pPrintProcessorDirectory */
        &__midl_frag653,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag1091,
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
        &__midl_frag1091,
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
        &__midl_frag1091,
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

static const __midl_frag347_t __midl_frag347 =
{ 
/* RpcEnumPrintProcessors */
    { 
    /* RpcEnumPrintProcessors */      /* procedure RpcEnumPrintProcessors */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag366,
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
        &__midl_frag403,
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
    /* pPrintProcessorInfo */      /* parameter pPrintProcessorInfo */
        &__midl_frag653,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag344_t __midl_frag344 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag387
};

static const __midl_frag337_t __midl_frag337 =
{ 
/* RpcAddPrintProcessor */
    { 
    /* RpcAddPrintProcessor */      /* procedure RpcAddPrintProcessor */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag387,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pPathName */      /* parameter pPathName */
        &__midl_frag387,
        { 
        /* pPathName */
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
    /* pPrintProcessorName */      /* parameter pPrintProcessorName */
        &__midl_frag387,
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
        &__midl_frag403,
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

static const __midl_frag329_t __midl_frag329 =
{ 
/* RpcDeletePrinterDriver */
    { 
    /* RpcDeletePrinterDriver */      /* procedure RpcDeletePrinterDriver */
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
    /* pName */      /* parameter pName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag387,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pDriverName */      /* parameter pDriverName */
        &__midl_frag387,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag403,
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

static const __midl_frag315_t __midl_frag315 =
{ 
/* RpcGetPrinterDriverDirectory */
    { 
    /* RpcGetPrinterDriverDirectory */      /* procedure RpcGetPrinterDriverDirectory */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pName */      /* parameter pName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pEnvironment */      /* parameter pEnvironment */
        &__midl_frag366,
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
        &__midl_frag406,
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
    /* pDriverDirectory */      /* parameter pDriverDirectory */
        &__midl_frag653,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag312_t __midl_frag312 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag406
};

static const __midl_frag302_t __midl_frag302 =
{ 
/* RpcGetPrinterDriver */
    { 
    /* RpcGetPrinterDriver */      /* procedure RpcGetPrinterDriver */
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
        &__midl_frag827,
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
        &__midl_frag644,
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
        &__midl_frag1087,
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
        &__midl_frag653,
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
        &__midl_frag406,
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
        &__midl_frag406,
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
        &__midl_frag406,
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

static const __midl_frag284_t __midl_frag284 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag265
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag268
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag277
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag281
    }
};

static const __midl_frag282_t __midl_frag282 =
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

static const __midl_frag281_t __midl_frag281 =
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
        &__midl_frag282
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1042
    }
};

static const __midl_frag278_t __midl_frag278 =
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

static const __midl_frag277_t __midl_frag277 =
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
        &__midl_frag278
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1042
    }
};

static const __midl_frag269_t __midl_frag269 =
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

static const __midl_frag268_t __midl_frag268 =
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
        &__midl_frag269
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1042
    }
};

static const __midl_frag266_t __midl_frag266 =
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

static const __midl_frag265_t __midl_frag265 =
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
        &__midl_frag266
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1042
    }
};

static const __midl_frag256_t __midl_frag256 =
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
        &__midl_frag284,
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

static const __midl_frag255_t __midl_frag255 =
{ 
/* *RPC_DRIVER_INFO_8 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag256
};

static const __midl_frag254_t __midl_frag254 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag265
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag268
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    }
};

static const __midl_frag235_t __midl_frag235 =
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
        &__midl_frag254,
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

static const __midl_frag234_t __midl_frag234 =
{ 
/* *RPC_DRIVER_INFO_6 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag235
};

static const __midl_frag233_t __midl_frag233 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag265
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag268
    }
};

static const __midl_frag218_t __midl_frag218 =
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
        &__midl_frag233,
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

static const __midl_frag217_t __midl_frag217 =
{ 
/* *RPC_DRIVER_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag218
};

static const __midl_frag216_t __midl_frag216 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag265
    }
};

static const __midl_frag204_t __midl_frag204 =
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
        &__midl_frag216,
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

static const __midl_frag203_t __midl_frag203 =
{ 
/* *RPC_DRIVER_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag204
};

static const __midl_frag202_t __midl_frag202 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag1081
    }
};

static const __midl_frag196_t __midl_frag196 =
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
        &__midl_frag202,
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

static const __midl_frag195_t __midl_frag195 =
{ 
/* *DRIVER_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag196
};

static const __midl_frag190_t __midl_frag190 =
{ 
/* __MIDL_winspool_0004 */
    { 
    /* __MIDL_winspool_0004 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag598,
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
        &__midl_frag599,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag195,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag203,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag217,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag234,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag255,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag189_t __midl_frag189 =
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
            &__midl_frag190
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

static const __midl_frag185_t __midl_frag185 =
{ 
/* RpcAddPrinterDriver */
    { 
    /* RpcAddPrinterDriver */      /* procedure RpcAddPrinterDriver */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
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
    /* pName */      /* parameter pName */
        &__midl_frag1080,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pDriverContainer */      /* parameter pDriverContainer */
        &__midl_frag189,
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
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag1082,
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

static const __midl_frag169_t __midl_frag169 =
{ 
/* *PRINTER_CONTAINER */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag109
};

static const __midl_frag167_t __midl_frag167 =
{ 
/* RpcSetPrinter */
    { 
    /* RpcSetPrinter */      /* procedure RpcSetPrinter */
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
        &__midl_frag827,
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
        &__midl_frag109,
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
        &__midl_frag156,
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
        &__midl_frag156,
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
        &__midl_frag1082,
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
        &__midl_frag1082,
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

static const __midl_frag160_t __midl_frag160 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag157
    }
};

static const __midl_frag157_t __midl_frag157 =
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
        &__midl_frag598
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag656
    }
};

static const __midl_frag156_t __midl_frag156 =
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
        &__midl_frag160,
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

static const __midl_frag153_t __midl_frag153 =
{ 
/* PRINTER_INFO_9 */
    { 
    /* PRINTER_INFO_9 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PRINTER_INFO_9 */
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

static const __midl_frag152_t __midl_frag152 =
{ 
/* *PRINTER_INFO_9 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag153
};

static const __midl_frag148_t __midl_frag148 =
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
            &__midl_frag387
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag147_t __midl_frag147 =
{ 
/* *PRINTER_INFO_7 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag148
};

static const __midl_frag146_t __midl_frag146 =
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

static const __midl_frag145_t __midl_frag145 =
{ 
/* *PRINTER_INFO_6 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag146
};

static const __midl_frag142_t __midl_frag142 =
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
            &__midl_frag387
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
            &__midl_frag387
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag141_t __midl_frag141 =
{ 
/* *PRINTER_INFO_5 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag142
};

static const __midl_frag138_t __midl_frag138 =
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
            &__midl_frag387
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
            &__midl_frag387
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag137_t __midl_frag137 =
{ 
/* *PRINTER_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag138
};

static const __midl_frag123_t __midl_frag123 =
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
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
            &__midl_frag387
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag122_t __midl_frag122 =
{ 
/* *PRINTER_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag123
};

static const __midl_frag121_t __midl_frag121 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    }
};

static const __midl_frag117_t __midl_frag117 =
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
        &__midl_frag121,
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

static const __midl_frag116_t __midl_frag116 =
{ 
/* *PRINTER_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag117
};

static const __midl_frag113_t __midl_frag113 =
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
            &__midl_frag387
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
            &__midl_frag387
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag112_t __midl_frag112 =
{ 
/* *PRINTER_INFO_STRESS */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag113
};

static const __midl_frag110_t __midl_frag110 =
{ 
/* __MIDL_winspool_0009 */
    { 
    /* __MIDL_winspool_0009 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag598,
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
        &__midl_frag112,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        &__midl_frag116,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag122,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag137,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag141,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag145,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag147,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag152,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag109_t __midl_frag109 =
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
            &__midl_frag110
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

static const __midl_frag105_t __midl_frag105 =
{ 
/* RpcAddPrinter */
    { 
    /* RpcAddPrinter */      /* procedure RpcAddPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
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
    /* pName */      /* parameter pName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pPrinterContainer */      /* parameter pPrinterContainer */
        &__midl_frag109,
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
        &__midl_frag156,
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
        &__midl_frag156,
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
    /* pHandle */      /* parameter pHandle */
        &__midl_frag677,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag406,
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

static const __midl_frag97_t __midl_frag97 =
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

static const __midl_frag96_t __midl_frag96 =
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
        &__midl_frag97
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag656
    }
};

static const __midl_frag95_t __midl_frag95 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag96
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* RpcEnumJobs */
    { 
    /* RpcEnumJobs */      /* procedure RpcEnumJobs */
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
        &__midl_frag405,
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
        &__midl_frag406,
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
        &__midl_frag406,
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
        &__midl_frag406,
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
        &__midl_frag95,
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
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag78_t __midl_frag78 =
{ 
/* RpcGetJob */
    { 
    /* RpcGetJob */      /* procedure RpcGetJob */
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
        &__midl_frag405,
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
        &__midl_frag406,
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
        &__midl_frag406,
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
        &__midl_frag653,
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
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag75_t __midl_frag75 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    }
};

static const __midl_frag64_t __midl_frag64 =
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
        &__midl_frag75,
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

static const __midl_frag63_t __midl_frag63 =
{ 
/* *JOB_INFO_4 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag64
};

static const __midl_frag62_t __midl_frag62 =
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

static const __midl_frag61_t __midl_frag61 =
{ 
/* *JOB_INFO_3 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag62
};

static const __midl_frag49_t __midl_frag49 =
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
        &__midl_frag75,
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

static const __midl_frag48_t __midl_frag48 =
{ 
/* *JOB_INFO_2 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag49
};

static const __midl_frag47_t __midl_frag47 =
{ 
/*  */
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    },
    { 
    /* *wchar_t */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag387
    }
};

static const __midl_frag40_t __midl_frag40 =
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
        &__midl_frag47,
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

static const __midl_frag39_t __midl_frag39 =
{ 
/* *JOB_INFO_1 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag40
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* __MIDL_winspool_0006 */
    { 
    /* __MIDL_winspool_0006 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag598,
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
        &__midl_frag39,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag48,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag61,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag63,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag36_t __midl_frag36 =
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
            &__midl_frag37
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

static const __midl_frag35_t __midl_frag35 =
{ 
/* *JOB_CONTAINER */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag36
};

static const __midl_frag32_t __midl_frag32 =
{ 
/* RpcSetJob */
    { 
    /* RpcSetJob */      /* procedure RpcSetJob */
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
        &__midl_frag405,
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
        &__midl_frag406,
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
        &__midl_frag35,
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
        &__midl_frag403,
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
        &__midl_frag403,
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

static const __midl_frag17_t __midl_frag17 =
{ 
/* RpcOpenPrinter */
    { 
    /* RpcOpenPrinter */      /* procedure RpcOpenPrinter */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
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
    /* pPrinterName */      /* parameter pPrinterName */
        &__midl_frag366,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* pHandle */      /* parameter pHandle */
        &__midl_frag677,
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
    /* pDatatype */      /* parameter pDatatype */
        &__midl_frag366,
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
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pDevModeContainer */      /* parameter pDevModeContainer */
        &__midl_frag156,
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
    /* AccessRequired */      /* parameter AccessRequired */
        &__midl_frag403,
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
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DWORD */      /* parameter DWORD */
        &__midl_frag403,
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

static const __midl_frag2_t __midl_frag2 =
{ 
/* RpcEnumPrinters */
    { 
    /* RpcEnumPrinters */      /* procedure RpcEnumPrinters */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
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
            0x71,    /* FC64_BIND_GENERIC */
            (NDR64_UINT8) 0 /* 0x0 */,
            8 /* 0x8 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 8 /* 0x8 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* Flags */      /* parameter Flags */
        &__midl_frag1087,
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
        0 /* 0x0 */,   /* Stack offset */
    },
    { 
    /* Name */      /* parameter Name */
        &__midl_frag366,
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
    /* Level */      /* parameter Level */
        &__midl_frag406,
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
    /* pPrinterEnum */      /* parameter pPrinterEnum */
        &__midl_frag653,
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
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* cbBuf */      /* parameter cbBuf */
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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
        &__midl_frag403,
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


static const FormatInfoRef winspool_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag17,
    &__midl_frag32,
    &__midl_frag78,
    &__midl_frag90,
    &__midl_frag105,
    &__midl_frag407,
    &__midl_frag167,
    &__midl_frag423,
    &__midl_frag185,
    &__midl_frag626,
    &__midl_frag302,
    &__midl_frag315,
    &__midl_frag329,
    &__midl_frag337,
    &__midl_frag347,
    &__midl_frag363,
    &__midl_frag377,
    &__midl_frag391,
    &__midl_frag394,
    &__midl_frag404,
    &__midl_frag407,
    &__midl_frag410,
    &__midl_frag669,
    &__midl_frag423,
    &__midl_frag434,
    &__midl_frag438,
    &__midl_frag452,
    &__midl_frag463,
    &__midl_frag469,
    &__midl_frag473,
    &__midl_frag916,
    &__midl_frag496,
    &__midl_frag509,
    &__midl_frag515,
    &__midl_frag528,
    &__midl_frag542,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag558,
    &__midl_frag565,
    &__midl_frag571,
    &__midl_frag585,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag592,
    &__midl_frag616,
    &__midl_frag616,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag626,
    &__midl_frag642,
    &__midl_frag648,
    &__midl_frag668,
    &__midl_frag668,
    &__midl_frag669,
    &__midl_frag1051,
    &__midl_frag673,
    &__midl_frag686,
    &__midl_frag695,
    &__midl_frag699,
    &__midl_frag732,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag747,
    &__midl_frag766,
    &__midl_frag775,
    &__midl_frag1051,
    &__midl_frag783,
    &__midl_frag809,
    &__midl_frag819,
    &__midl_frag826,
    &__midl_frag916,
    &__midl_frag853,
    &__midl_frag853,
    &__midl_frag853,
    &__midl_frag854,
    &__midl_frag867,
    &__midl_frag883,
    &__midl_frag897,
    &__midl_frag909,
    &__midl_frag916,
    &__midl_frag1051,
    &__midl_frag922,
    &__midl_frag932,
    &__midl_frag942,
    &__midl_frag948,
    &__midl_frag961,
    &__midl_frag980,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag992,
    &__midl_frag1003,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1015,
    &__midl_frag1051,
    &__midl_frag1030,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1051,
    &__midl_frag1052,
    &__midl_frag1060,
    &__midl_frag1065,
    &__midl_frag1071,
    &__midl_frag1079,
    &__midl_frag1083,
    &__midl_frag1088
    };


#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void *)& winspool___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    0,
    0,
    ms2Drprn__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& winspool_ServerInfo,   /* proxy/server info */
    &ms2Drprn_ExprDesc
    };
#ifdef __cplusplus
}
#endif

static const RPC_DISPATCH_FUNCTION winspool_NDR64__table[] =
    {
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    NdrServerCallAll,
    0
    };
static const RPC_DISPATCH_TABLE winspool_NDR64__v1_0_DispatchTable = 
    {
    117,
    (RPC_DISPATCH_FUNCTION*)winspool_NDR64__table
    };

static const MIDL_SYNTAX_INFO winspool_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    (RPC_DISPATCH_TABLE*)&winspool_v1_0_DispatchTable,
    ms2Drprn__MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    ms2Drprn__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    (RPC_DISPATCH_TABLE*)&winspool_NDR64__v1_0_DispatchTable,
    0 ,
    (unsigned short *) winspool_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };


static const SERVER_ROUTINE winspool_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcEnumPrinters,
    (SERVER_ROUTINE)RpcOpenPrinter,
    (SERVER_ROUTINE)RpcSetJob,
    (SERVER_ROUTINE)RpcGetJob,
    (SERVER_ROUTINE)RpcEnumJobs,
    (SERVER_ROUTINE)RpcAddPrinter,
    (SERVER_ROUTINE)RpcDeletePrinter,
    (SERVER_ROUTINE)RpcSetPrinter,
    (SERVER_ROUTINE)RpcGetPrinter,
    (SERVER_ROUTINE)RpcAddPrinterDriver,
    (SERVER_ROUTINE)RpcEnumPrinterDrivers,
    (SERVER_ROUTINE)RpcGetPrinterDriver,
    (SERVER_ROUTINE)RpcGetPrinterDriverDirectory,
    (SERVER_ROUTINE)RpcDeletePrinterDriver,
    (SERVER_ROUTINE)RpcAddPrintProcessor,
    (SERVER_ROUTINE)RpcEnumPrintProcessors,
    (SERVER_ROUTINE)RpcGetPrintProcessorDirectory,
    (SERVER_ROUTINE)RpcStartDocPrinter,
    (SERVER_ROUTINE)RpcStartPagePrinter,
    (SERVER_ROUTINE)RpcWritePrinter,
    (SERVER_ROUTINE)RpcEndPagePrinter,
    (SERVER_ROUTINE)RpcAbortPrinter,
    (SERVER_ROUTINE)RpcReadPrinter,
    (SERVER_ROUTINE)RpcEndDocPrinter,
    (SERVER_ROUTINE)RpcAddJob,
    (SERVER_ROUTINE)RpcScheduleJob,
    (SERVER_ROUTINE)RpcGetPrinterData,
    (SERVER_ROUTINE)RpcSetPrinterData,
    (SERVER_ROUTINE)RpcWaitForPrinterChange,
    (SERVER_ROUTINE)RpcClosePrinter,
    (SERVER_ROUTINE)RpcAddForm,
    (SERVER_ROUTINE)RpcDeleteForm,
    (SERVER_ROUTINE)RpcGetForm,
    (SERVER_ROUTINE)RpcSetForm,
    (SERVER_ROUTINE)RpcEnumForms,
    (SERVER_ROUTINE)RpcEnumPorts,
    (SERVER_ROUTINE)RpcEnumMonitors,
    (SERVER_ROUTINE)Opnum37NotUsedOnWire,
    (SERVER_ROUTINE)Opnum38NotUsedOnWire,
    (SERVER_ROUTINE)RpcDeletePort,
    (SERVER_ROUTINE)RpcCreatePrinterIC,
    (SERVER_ROUTINE)RpcPlayGdiScriptOnPrinterIC,
    (SERVER_ROUTINE)RpcDeletePrinterIC,
    (SERVER_ROUTINE)Opnum43NotUsedOnWire,
    (SERVER_ROUTINE)Opnum44NotUsedOnWire,
    (SERVER_ROUTINE)Opnum45NotUsedOnWire,
    (SERVER_ROUTINE)RpcAddMonitor,
    (SERVER_ROUTINE)RpcDeleteMonitor,
    (SERVER_ROUTINE)RpcDeletePrintProcessor,
    (SERVER_ROUTINE)Opnum49NotUsedOnWire,
    (SERVER_ROUTINE)Opnum50NotUsedOnWire,
    (SERVER_ROUTINE)RpcEnumPrintProcessorDatatypes,
    (SERVER_ROUTINE)RpcResetPrinter,
    (SERVER_ROUTINE)RpcGetPrinterDriver2,
    (SERVER_ROUTINE)Opnum54NotUsedOnWire,
    (SERVER_ROUTINE)Opnum55NotUsedOnWire,
    (SERVER_ROUTINE)RpcFindClosePrinterChangeNotification,
    (SERVER_ROUTINE)Opnum57NotUsedOnWire,
    (SERVER_ROUTINE)RpcReplyOpenPrinter,
    (SERVER_ROUTINE)RpcRouterReplyPrinter,
    (SERVER_ROUTINE)RpcReplyClosePrinter,
    (SERVER_ROUTINE)RpcAddPortEx,
    (SERVER_ROUTINE)RpcRemoteFindFirstPrinterChangeNotification,
    (SERVER_ROUTINE)Opnum63NotUsedOnWire,
    (SERVER_ROUTINE)Opnum64NotUsedOnWire,
    (SERVER_ROUTINE)RpcRemoteFindFirstPrinterChangeNotificationEx,
    (SERVER_ROUTINE)RpcRouterReplyPrinterEx,
    (SERVER_ROUTINE)RpcRouterRefreshPrinterChangeNotification,
    (SERVER_ROUTINE)Opnum68NotUsedOnWire,
    (SERVER_ROUTINE)RpcOpenPrinterEx,
    (SERVER_ROUTINE)RpcAddPrinterEx,
    (SERVER_ROUTINE)RpcSetPort,
    (SERVER_ROUTINE)RpcEnumPrinterData,
    (SERVER_ROUTINE)RpcDeletePrinterData,
    (SERVER_ROUTINE)Opnum74NotUsedOnWire,
    (SERVER_ROUTINE)Opnum75NotUsedOnWire,
    (SERVER_ROUTINE)Opnum76NotUsedOnWire,
    (SERVER_ROUTINE)RpcSetPrinterDataEx,
    (SERVER_ROUTINE)RpcGetPrinterDataEx,
    (SERVER_ROUTINE)RpcEnumPrinterDataEx,
    (SERVER_ROUTINE)RpcEnumPrinterKey,
    (SERVER_ROUTINE)RpcDeletePrinterDataEx,
    (SERVER_ROUTINE)RpcDeletePrinterKey,
    (SERVER_ROUTINE)Opnum83NotUsedOnWire,
    (SERVER_ROUTINE)RpcDeletePrinterDriverEx,
    (SERVER_ROUTINE)RpcAddPerMachineConnection,
    (SERVER_ROUTINE)RpcDeletePerMachineConnection,
    (SERVER_ROUTINE)RpcEnumPerMachineConnections,
    (SERVER_ROUTINE)RpcXcvData,
    (SERVER_ROUTINE)RpcAddPrinterDriverEx,
    (SERVER_ROUTINE)Opnum90NotUsedOnWire,
    (SERVER_ROUTINE)Opnum91NotUsedOnWire,
    (SERVER_ROUTINE)Opnum92NotUsedOnWire,
    (SERVER_ROUTINE)Opnum93NotUsedOnWire,
    (SERVER_ROUTINE)Opnum94NotUsedOnWire,
    (SERVER_ROUTINE)Opnum95NotUsedOnWire,
    (SERVER_ROUTINE)RpcFlushPrinter,
    (SERVER_ROUTINE)RpcSendRecvBidiData,
    (SERVER_ROUTINE)Opnum98NotUsedOnWire,
    (SERVER_ROUTINE)Opnum99NotUsedOnWire,
    (SERVER_ROUTINE)Opnum100NotUsedOnWire,
    (SERVER_ROUTINE)Opnum101NotUsedOnWire,
    (SERVER_ROUTINE)RpcGetCorePrinterDrivers,
    (SERVER_ROUTINE)Opnum103NotUsedOnWire,
    (SERVER_ROUTINE)RpcGetPrinterDriverPackagePath,
    (SERVER_ROUTINE)Opnum105NotUsedOnWire,
    (SERVER_ROUTINE)Opnum106NotUsedOnWire,
    (SERVER_ROUTINE)Opnum107NotUsedOnWire,
    (SERVER_ROUTINE)Opnum108NotUsedOnWire,
    (SERVER_ROUTINE)Opnum109NotUsedOnWire,
    (SERVER_ROUTINE)RpcGetJobNamedPropertyValue,
    (SERVER_ROUTINE)RpcSetJobNamedProperty,
    (SERVER_ROUTINE)RpcDeleteJobNamedProperty,
    (SERVER_ROUTINE)RpcEnumJobNamedProperties,
    (SERVER_ROUTINE)Proc114,
    (SERVER_ROUTINE)Proc115,
    (SERVER_ROUTINE)Proc116
    };

static const MIDL_SERVER_INFO winspool_ServerInfo = 
    {
    &winspool_StubDesc,
    winspool_ServerRoutineTable,
    ms2Drprn__MIDL_ProcFormatString.Format,
    (unsigned short *) winspool_FormatStringOffsetTable,
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)winspool_SyntaxInfo
    };
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

