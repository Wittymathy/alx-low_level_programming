#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: Head of lists
 * @index: Index of the node
 * Return: Returns 1 if it succeeds.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *fmr;
	listint_t *next;

	if (head == 0 || *head == 0)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	fmr = *head;
	for (a = 0; a < index - 1; a++)
	{
		if (fmr->next == 0)
			return (-1);
		fmr = fmr->next;
	}
	next = fmr->next;
	fmr->next = next->next;
	free(next);
	return (1);
}
