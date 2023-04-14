#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Memory allocated
 * Return: Returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *j;

	j = malloc(b);
	if (j == NULL)
		exit(98);
	return (j);
}
