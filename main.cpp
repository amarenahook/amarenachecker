#include <windows.h>
#include "hooks.h"

/* 

  amarenahook
  © 2017 amarena.space
  developed by cyanide
  directed by kAzan

*/

#define AMARENA_DEBUG

void Initialize() {
  g_Hooks.Init();
  return true;
}

BOOL WINAPI DllMain(_In_ HINSTANCE hinst, _In_ DWORD reason, _In_ LPVOID res) {
  switch(reason) {
    case DLL_PROCESS_ATTACH:
      DisableThreadLibraryCalls(hinst);
      CreateThread(nullptr, 0, Initialize, 0, 0, nullptr);
      return TRUE;
  }
}
