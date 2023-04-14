#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Memory allocated
 * @size: Size of bytes
 * Return: If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)(s) + a) = 0;
	}

	return (s);
}
