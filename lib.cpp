#include"head.h"
#include<stdint.h>


uint8_t func() {
	static uint8_t f1 = 1, f2 = 1, f3 = 1, f4 = 1;
	f1 = f2;
	f2 = f3;
	f3 = f4;
	f4 = (f1 + f2 + f3);
	return f4;
}

/*
uint8_t func() {
	static uint8_t f1 = 1, f2 = 1, f3 = 1;
	f1 = f2;
	f2 = f3;
	f3 += f1 + f2;
	return f1 + f2 + f3;
}*/