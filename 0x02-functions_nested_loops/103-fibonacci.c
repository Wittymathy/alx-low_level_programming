#include <stdio.h>

/**
 * main - Prints the add of the even-valued.
 * Return: Always 0.
 */

int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = d = 0;
	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((a % 2) == 0)
		{
			d = d + a;
		}
	}
	printf("%d\n", d);
	return (0);
}
