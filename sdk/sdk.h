#pragma once

#include <windows.h>
#include "vmt.h"

extern VMTHook* vmt_clientmode;
extern VMTHook* vmt_client;
extern VMTHook* vmt_engine;
extern VMTHook* vmt_surface;
extern VMTHook* vmt_panel;

struct Indexes {
   int CreateMove = 24; 
}; Indexes Index;
