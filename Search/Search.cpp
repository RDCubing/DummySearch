// Search.cpp : Defines the entry point for the application.
//

#include <windows.h>

int APIENTRY wWinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR lpCmdLine,
    _In_ int nCmdShow)
{
    UNREFERENCED_PARAMETER(hInstance);
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    UNREFERENCED_PARAMETER(nCmdShow);

    INPUT input[4] = {};

    // Win down
    input[0].type = INPUT_KEYBOARD;
    input[0].ki.wVk = VK_LWIN;

    // S down
    input[1].type = INPUT_KEYBOARD;
    input[1].ki.wVk = 'S';

    // S up
    input[2].type = INPUT_KEYBOARD;
    input[2].ki.wVk = 'S';
    input[2].ki.dwFlags = KEYEVENTF_KEYUP;

    // Win up
    input[3].type = INPUT_KEYBOARD;
    input[3].ki.wVk = VK_LWIN;
    input[3].ki.dwFlags = KEYEVENTF_KEYUP;

    SendInput(ARRAYSIZE(input), input, sizeof(INPUT));

    return 0;
}
