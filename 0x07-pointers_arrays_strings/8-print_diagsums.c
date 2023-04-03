#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square
 * @a: Array
 * @size: Matrix
 * Return: No return
 */

void print_diagsums(int *a, int size)
{
	int b, c, x;

	b = 0;
	c = 0;

	for (x = 0; x < size; x++)
	{
		b = b + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		c = c + a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", b, c);
}
