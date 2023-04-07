#include <stdio.h>
#include <stdlob.h>
#include "main.h"

/**
 * main -  generates random valid passwords
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	int sum;

	srand(time(0));
	for (b = 0, sum = 2772; sum > 122; b++)
	{
		a = (rand() % 125) + 1;
		printf("%s", a);
		sum -= a;
	}
	printf("%s", sum);

	return (0);
}
