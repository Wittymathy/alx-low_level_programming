#include <stdio.h>
#include <stdlob.h>
#include "main.h"

/**
 * main -  generates random valid passwords
 * Return: Always 0
 */

int main(void)
{
	int a, b, sum;

	srand(time(NULL));
	for (b = 0, sum = 2772; sum > 122; b++)
	{
		a = (rand() % 125) + 1;
		printf("%c", a);
		sum -= a;
	}
	printf("%c", sum);

	return (0);
}
