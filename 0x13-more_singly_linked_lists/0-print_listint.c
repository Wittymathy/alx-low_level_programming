#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Head of list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
