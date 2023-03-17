#include <stdio.h>

/**
 * main - lower and upper case
 * Return: 0
 */

int main(void)
{
	char low = 'a';
	char UP = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (UP <= 'Z')
	{
		putchar(UP);
		UP++;
	}
	putchar('\n');
	return (0);
}
