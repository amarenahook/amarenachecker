#include "hooks.h"

Utils* g_Utils = new Utils();

void Hooks::Init() {
	// TODO: Replace nullptr's with proper interfaces
	VMTHook* vmt_clientmode = new VMTHook(nullptr);
	VMTHook* vmt_client = new VMTHook(nullptr);
	VMTHook* vmt_engine = new VMTHook(nullptr);
	VMTHook* vmt_surface = new VMTHook(nullptr);
	VMTHook* vmt_panel = new VMTHook(nullptr);
	
	// TODO: Hook functions at right indexes
}

void Hooks::Restore() {
	vmt_clientmode->UnhookAll();
	vmt_client->UnhookAll();
	vmt_engine->UnhookAll();
	vmt_surface->UnhookAll();
	vmt_panel->UnhookAll();
}

void Hooked_CreateMove() {
	// l8r
}

void Hooked_PaintTraverse() {
	// l8r
}

void Hooked_FrameStageNotify() {
	// l8r
}
