#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Given Number
 * Return: Return -1 if n lower than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n + 1));
	}
}
