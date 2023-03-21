#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 * Return 0
 */

void print_alphabet_x10(void)
{
	int c = 0;
	char low;

	while (c++ <= 9)
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		_putchar('\n');
	}
}
