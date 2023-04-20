#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints Strings
 * @separator: String to be printed
 * @n: Number of strings
 * Return: Always 0 (Success)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
	va_list nums;

	va_start(nums, n);
	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		str = va_arg(nums, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
