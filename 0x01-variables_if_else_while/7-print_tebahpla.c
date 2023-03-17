#include <stdio.h>

/**
 * main - Print the alphabet in reverse order in lowercase.
 * Return: 0
 */

int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
