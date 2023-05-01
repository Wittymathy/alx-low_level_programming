#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: head of list
 * Return: Always 0 (Success)
 */

int pop_listint(listint_t **head)
{
	listint_t *fmr;
	int a;

	fmr = *head;

	if (fmr == 0)
		return (0);

	*head = fmr->next;
	a = fmr->n;
	free(fmr);
	return (a);
}
