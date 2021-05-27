#pragma once

#ifdef ME_PLATFORM_WINDOWS
	#ifdef ME_BUILD_DLL
		#define MYENG_API __declspec(dllexport)
	#else
		#define MYENG_API __declspec(dllimport)
	#endif
#else
	#error my engine only supports windows
#endif
