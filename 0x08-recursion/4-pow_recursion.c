#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Raised value
 * @y: Power value
 * Return: Return -1 if lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
