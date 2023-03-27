#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: int a
 * @n: int b
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
		if (y != n - 1)
		printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
printf("\n");
}
