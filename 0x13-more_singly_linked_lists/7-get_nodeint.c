#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: Head of lists
 * @index: Index of the node
 * Return: Return NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	if (head == 0)
		return (0);
	for (a = 0; a < index; a++)
	{
		head = head->next;
		if (head == 0)
			return (0);
	}
	return (head);
}
