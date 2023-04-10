#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b, count = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf(Error\n);
				return (1);
			}
		}

		count += atoi(argv[a]);

	}

	printf("%d\n", count);

	return (0);

}
