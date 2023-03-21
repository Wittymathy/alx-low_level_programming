#include "main.h"

/**
 * main - Entry point
 * Prints putchar followed by a new line
 * Return: Always 0 Success
 */

int main(void)
{
	char ch[] = "_putchar";
	int a = 0;

	while (ch[a] != '\0')
	{
		_putchar(ch[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
