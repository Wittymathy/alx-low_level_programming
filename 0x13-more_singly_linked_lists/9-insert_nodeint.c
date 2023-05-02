#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: Head of lists
 * @idx: Index of list
 * @n: Number
 * Return: Returns NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *fmr;
	listint_t *node;

	if (head == 0)
		return (0);
	if (idx != 0)
	{
		fmr = *head;
		for (a = 0; a < idx - 1 && fmr != 0; a++)
		{
			fmr = fmr->next;
		}
		if (fmr == 0)
			return (0);
	}
	node = malloc(sizeof(listint_t));
	if (node == 0)
		return (0);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = fmr->next;
	fmr->next = node;
	return (node);
}
