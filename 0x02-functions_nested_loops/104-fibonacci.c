#include <stdio.h>
#include "main.h"

/**
 * main -  finds and prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a, b, c, fib1, fib2, fib3, fib4;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	fib1 = b / 1000000000;
	fib2 = b % 1000000000;
	fib3 = c / 1000000000;
	fib4 = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", fib3 + (fib4 / 1000000000));
		printf("%lu", fib4 % 1000000000);
		fib3 = fib3 + fib1;
		fib1 = fib3 - fib1;
		fib4 = fib4 + fib4;
		fib2 = fib4 - fib2;
	}

	printf("\n");

	return (0);
}
