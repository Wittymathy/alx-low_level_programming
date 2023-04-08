#include <stdio.h>
#include "main.h"

/**
 * rot13 -  encodes a string using rot13
 * @s: String
 * Return: s
 */

char *rot13(char *s)
{
	int a, b;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (alp[b] == *(s + a))
			{
				*(s + a) = rot[b];
				break;
			}
		}
	}
	return (s);
}
