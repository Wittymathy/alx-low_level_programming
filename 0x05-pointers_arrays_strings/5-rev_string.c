#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 */

void rev_string(char *s)
{
	char rev;
	int a, b;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	while (b < a--)
	{
		rev = s[b];
		s[b++] = s[a];
		s[a] = rev;
	}
}
