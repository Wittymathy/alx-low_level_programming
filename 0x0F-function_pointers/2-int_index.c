#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size of array
 * @cmp: Compared values
 * Return: If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)

		{
			if (cmp(array[a]) != 0)
				return (a);
		}

	}

	return (-1);
}
