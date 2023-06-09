#include <stdio.h>
#include "main.h"

int _val(int n, int a);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number
 * Return: Return -1 if square root is not natural
 */

int _sqrt_recursion(int n)
{
	return (_val(n, 1));
}

/**
 * _val - Natural square root
 * @n: Number
 * @a: Sqrt
 * Return: -1 if not natural
 */

int _val(int n, int a)
{
	int val = a * a;

	if (val > n)
		return (-1);
	if (val == n)
		return (a);
	return (_val(n, a + 1));
}
