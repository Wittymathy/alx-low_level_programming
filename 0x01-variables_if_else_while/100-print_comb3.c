#include <stdio.h>

/**
 * main - Print all possible combinations of two digits.
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a > 8 || b > 9)
				{
					putchar(16);
					putchar(15);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
