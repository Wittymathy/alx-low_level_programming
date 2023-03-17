#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int n;
	char low;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	for (low = 'a'; low < 'g'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
