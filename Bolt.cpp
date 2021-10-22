#include "Client/Client.h"

void init(HMODULE hMod){
    Client* bolt = new Client("Bolt", "0.1");
};

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD fdwReason, LPVOID lpRes){
    switch(fdwReason){
        case DLL_PROCESS_ATTACH:
            CreateThread(0, 0, (LPTHREAD_START_ROUTINE)init, hInst, 0, 0);
        break;
    };
    return TRUE;
};