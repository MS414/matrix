#pragma once
#ifdef library_exp
#define library__api __declspec(dllexport)
#else
#define library__api __declspec(dllexport)
#endif

#include<stdint.h>

extern "C" library__api uint8_t func();