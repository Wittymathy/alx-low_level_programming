#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *dup;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
		;

	dup = malloc(a * sizeof(*dup) + 1);

	if (dup == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
		dup[b] = str[b];
	dup[b] = '\0';

	return (dup);
}
