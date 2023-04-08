#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Function that adds two numbers
 * @n1: first
 * @n2: second
 * @r: buffer
 * @size_r: buffer size
 * Return: Must return 0 if result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, i, j, k;

	for (i = 0; n1[i]; i++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (i > size_r || j > size_r)
		return (0);
	b = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		c = b;
		if (i >= 0)
			c += n1[i] - '0';
		if (j >= 0)
			c += n2[j] - '0';
		if (i < 0 && j < 0 && c == 0)
		{
			break;
		}
		b = c / 10;
		r[k] = c % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || b)
		return (0);
	for (k -= 1, a = 0; a < k; k--, a++)
	{
		b = r[k];
		r[k] = r[a];
		r[a] = b;
	}
	return (r);
}
