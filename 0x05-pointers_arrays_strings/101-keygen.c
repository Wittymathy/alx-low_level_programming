#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -  generates random valid passwords
 * Return: Always 0
 */

int main(void)
{
	int a = 0, b = 0;

	srand(time(NULL));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
