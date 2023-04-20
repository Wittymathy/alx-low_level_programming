#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers
 * @n: Number of integers
 * @separator: String to be printed
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list nums;

	va_start(nums, n);

	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
