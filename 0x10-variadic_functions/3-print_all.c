#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of types of arguments
  *Return: no return
  */

void print_all(const char * const format, ...)
{
	unsigned int a;
	va_list nums;
	char *s, *str;

	va_start(nums, format);

	str = "";

	a = 0;
	while (format && format[a])
	{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", str,  va_arg(nums, int));
				break;
			case 'i':
				printf("%s%d", str,  va_arg(nums, int));
				break;
			case 'f':
				printf("%s%f", str,  va_arg(nums, double));
				break;
			case 's':
				s = va_arg(nums, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", str, s);
				break;
			default:
				a++;
				continue;
		}
		str = ", ";
		a++;
	}

	printf("\n");
	va_end(nums);
}
