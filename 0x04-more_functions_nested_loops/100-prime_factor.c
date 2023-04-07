#include <stdio.h>

/**
 * main -  prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a, num = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((num % a == 0) && (num != a))
			num = num / a;
	}
	printf("%lu\n", num);
	return (0);
}
