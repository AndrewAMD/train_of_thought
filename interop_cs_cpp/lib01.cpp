// lib01.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "lib01.h"
#include <stdio.h>

DLLFUNC void HelloWorld()
{
	printf("Hello, world!\n");
}

DLLFUNC int AddInt(int a, int b)
{
	return a + b;
}
