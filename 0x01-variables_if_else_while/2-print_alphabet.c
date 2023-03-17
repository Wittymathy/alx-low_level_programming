#include <stdio.h>

/**
 * main - prints alphabets in lower case
 * Return: 0
 */

int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	putchar('\n');
	return (0);
}
