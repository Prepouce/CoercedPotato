#pragma once
#include <iostream>
#include <Windows.h>
#include <functional>
#include <rpc.h> 
#include <strsafe.h>

#include "ms-efsr_h.h"
#include "ms-rprn_h.h"


long callEfsRpcOpenFileRaw(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcEncryptFileSrv(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcDecryptFileSrv(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcQueryUsersOnFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcQueryRecoveryAgents(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcRemoveUsersFromFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcAddUsersToFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcFileKeyInfo(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcDuplicateEncryptionInfoFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcAddUsersToFileEx(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcFileKeyInfoEx(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcGetEncryptedFileMetadata(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcEncryptFileExSrv(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);
long callEfsRpcQueryProtectors(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName);

long callRpcRemoteFindFirstPrinterChangeNotification(wchar_t* targetedPipeName);
long callRpcRemoteFindFirstPrinterChangeNotificationEx(wchar_t* targetedPipeName);

long callRpcAsyncOpenPrinter(RPC_BINDING_HANDLE Binding, wchar_t* targetedPipeName);