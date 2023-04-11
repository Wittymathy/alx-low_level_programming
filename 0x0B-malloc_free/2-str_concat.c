#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: Second string
 * Return: return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	concat = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);

	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}

	for (c = 0; c < a; c++)
		concat[c] = s1[c];

	d = b;
	for (b = 0; b <= d; c++, b++)
		concat[c] = s2[b];

	return (concat);
}
