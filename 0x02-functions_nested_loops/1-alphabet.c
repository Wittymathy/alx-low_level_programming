#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
