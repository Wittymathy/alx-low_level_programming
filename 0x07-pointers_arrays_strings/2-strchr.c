#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: Character
 * Return: NULL if char not found
 */

char *_strchr(char *s, char c);
{
	while (*s)
	{
		if (*s != c)
			return (NULL);
		else if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}


