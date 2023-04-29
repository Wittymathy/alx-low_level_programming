#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of two integers
 * @a: first
 * @b: second
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two integers
 * @a: first
 * @b: second
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers
 * @a: first
 * @b: second
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division
 * @a: first
 * @b: second
 * Return: division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder
 * @a: first
 * @b: second
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
