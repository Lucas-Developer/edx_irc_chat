/* $Id: rehash.c 33 2005-10-02 20:50:00Z knight $ */

#include <windows.h>
#include "setup.h"

#define WM_REHASH  (WM_USER + 0x100)
#define WM_REMOTD  (WM_USER + 0x101)

int WINAPI
WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
        LPSTR lpCmdLine, int nCmdShow)
{
  HWND wndhandle = FindWindow(PACKAGE_NAME, NULL);

  if (!wndhandle)
  {
    MessageBox(NULL, "ircd-hybrid is not running", NULL, MB_OK | MB_ICONERROR);
    return 1;
  }

  PostMessage(wndhandle, WM_REHASH, 0, 0);
}
