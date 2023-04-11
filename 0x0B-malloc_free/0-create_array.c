#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it.
 * @c: specific char
 * @size:s size of array.
 * Return: Returns NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *range;
	unsigned int a;

	if (size == 0)
		return (NULL);

	range = malloc(sizeof(c) * size);

	if (range == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		range[a] = c;

	return (range);
}
