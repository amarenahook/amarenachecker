#pragma once

#include <windows.h>
#include <psapi.h>

class Utils {
	uintptr_t FindSignature(const char* szModule, const char* szSignature) {
		const char* pat = szSignature;
		DWORD firstMatch = 0;
		DWORD rangeStart = (DWORD)GetModuleHandleA(szModule);
		MODULEINFO miModInfo;
		GetModuleInformation(GetCurrentProcess(), (HMODULE)rangeStart, &miModInfo, sizeof(MODULEINFO));
		DWORD rangeEnd = rangeStart + miModInfo.SizeOfImage;
		
		for (DWORD pCur = rangeStart; pCur < rangeEnd; pCur++) {
			if (!*pat)
				return firstMatch;
				
			if (*(PBYTE)pat == '\?' || *(BYTE*)pCur == getByte(pat)) {
				if (!firstMatch)
					firstMatch = pCur;
				
				if (!pat[2])
					return firstMatch;
				
				if (*(PWORD)pat == '\?\?' || *(PBYTE)pat != '\?')
					pat += 3;
				else
					pat += 2;
			}
			else {
				pat = szSignature;
				firstMatch = 0;
			}
		}
	return NULL;
	}
}; extern Utils* g_Utils;
