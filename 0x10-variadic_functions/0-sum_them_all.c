#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number
 * Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int a;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(nums, n);

	for (a = 0; a < n; a++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
