#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits
 * @n: First number
 * @m: Second number
 * Return: Always 0 (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num;

	for (num = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			num++;
	}

	return (num);
}
