#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of list
 * Return: Always 0
 */

void free_listint(listint_t *head)
{
	listint_t *fmr;

	while ((fmr = head) != 0)
	{
		head = head->next;
		free(fmr);
	}
}
