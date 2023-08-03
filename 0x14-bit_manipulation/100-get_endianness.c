#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Function that checks endianness
 * Return: Always 0 (Success)
 */

int get_endianness(void)
{
	int a;
	char *x;

	a = 1;
	x = (char *) &a;

	return (*x);
}
