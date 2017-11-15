#pragma once

#include <windows.h>
#include "sdk/sdk.h"

class Hooks {
public:
  void Init();
  void Restore();
}; extern Hooks g_Hooks;
