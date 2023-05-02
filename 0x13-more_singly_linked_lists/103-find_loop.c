#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Head of list
 * Return: Returns NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first;
	listint_t *second;

	first = second = head;

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;

		if (first == second)
		{
			first = head;
			break;
		}
	}

	if (!first || !second || !second->next)
		return (0);

	while (first != second)
	{
		first = first->next;
		second = second->next;
	}
	return (second);
}
