#include <stdio.h>

/**
 * main - Print all possible different combinations of 3 digits.
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < ':'; x++)
	{
		for (y = 1; y < ':'; y++)
		{
			for (z = 2; z < ':'; z++)
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
