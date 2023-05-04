#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0
 * @n: Number
 * @index: Index
 * Return: Returns -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;
	if (*n & a)
		*n ^= a;
	return (1);
}
