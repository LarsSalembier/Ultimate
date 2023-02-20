#pragma once

#ifdef ULT_PLATFORM_WINDOWS
	#ifdef ULT_BUILD_DLL
		#define ULTIMATE_API __declspec(dllexport)
	#else
		#define ULTIMATE_API __declspec(dllimport)
	#endif
#else
	#error Ultimate currently only supports Windows!
#endif

#define BIT(x) (1 << x)
