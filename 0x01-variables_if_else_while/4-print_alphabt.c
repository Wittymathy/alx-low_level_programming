#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
		low++;
	}

	putchar('\n');
	return (0);
}
