#include <stdio.h>

/**
 * main - Print all possible different combinations of 3 digits.
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (z = 0; z < 10; z++)
			{
				if (y > x && z > y)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 7 || y != 8 || z != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
