#pragma once
#ifdef QW_PLATFORM_WINDOWS
	#ifdef QW_BUILD_DLL
		#define QWERTY_API __declspec(dllexport)
	#else
		#define QWERTY_API __declspec(dllimport)
	#endif // QW_BUILD_DLL
#else
	#error Qwerty only supports Windows!
#endif // QW_PLATFORM_WINDOWS
