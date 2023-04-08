#include <stdio.h>
#include "main.h"

/**
 * is_prime_number -  function that returns 1 if int is a prime number
 * @n: Number
 * Return: Returns 1 if prime number
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}

/**
 * prime - if  number is prime
 * @i: Iterator
 * @j: Input number
 * Return: Returns ! if prime number
 */

int prime(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (prime(i + 1, j));
}
