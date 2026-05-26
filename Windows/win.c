#include <windows.h>

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

void AddMenus(HWND);

HMENU hMenu;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
    //MessageBox(NULL, "test", "ola", MB_OK);
    WNDCLASSW wc = {0};
    wc.hbrBackground = (HBRUSH) COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = L"WinClass";
    wc.lpfnWndProc = WindowProc;

    if(!RegisterClassW(&wc)){
        return -1;
    }
    CreateWindowW(L"WinClass", L"test", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500, 500, NULL, NULL, NULL, NULL);

    MSG msg = {0};
    while(GetMessage(&msg, NULL, NULL, NULL)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProc(HWND hWnd ,UINT msg, WPARAM wp, LPARAM lp){
    switch(msg){
        case WM_COMMAND:

        switch(wp){
            case 1:
            MessageBeep(MB_OK);
            break;
            case 2:
            MessageBeep(MB_HELP);
            break;
        }

        break;
        case WM_CREATE:
        AddMenus(hWnd);
        break;
        case WM_DESTROY:
        PostQuitMessage(0);
        break;
        default:
        return DefWindowProcW(hWnd, msg, wp, lp);
    }
}

void AddMenus(HWND hWnd){
    hMenu = CreateMenu();

    AppendMenu(hMenu, MF_STRING, 1, "File");
    AppendMenu(hMenu, MF_STRING, 2, "Fila");

    SetMenu(hWnd, hMenu);
}