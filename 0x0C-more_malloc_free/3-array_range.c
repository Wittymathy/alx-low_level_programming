#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum Val
 * @max: Maximum Val
 * Return: If min > max, return NULL
 */

int *array_range(int min, int max)
{
	int *range;
	int a;

	if (min > max)
		return (NULL);

	range = malloc(sizeof(*range) * ((max - min) + 1));

	if (range == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		range[a] = min;

	return (range);
}
