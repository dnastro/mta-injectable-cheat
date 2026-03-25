#include <Windows.h>
#include "gui.h"

DWORD WINAPI MainThread(LPVOID lpParam) {
    InitGUI();
    while (!GetAsyncKeyState(VK_END)) { // Fecha com END
        RenderGUI();
        Sleep(10);
    }
    ShutdownGUI();
    FreeLibraryAndExitThread((HMODULE)lpParam, 0);
    return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hinstDLL);
        CreateThread(nullptr, 0, MainThread, hinstDLL, 0, nullptr);
    }
    return TRUE;
}