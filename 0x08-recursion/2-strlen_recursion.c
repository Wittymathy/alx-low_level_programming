#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String
 * Return: Int value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion + 1);
}
