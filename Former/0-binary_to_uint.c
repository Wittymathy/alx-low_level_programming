#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int bin;

	bin = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		bin <<= 1;
		if (b[a] == '1')
			bin += 1;
	}
	return (bin);
}
