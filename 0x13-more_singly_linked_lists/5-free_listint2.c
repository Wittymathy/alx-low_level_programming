#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of list
 * Return: Always 0 (success)
 */

void free_listint2(listint_t **head)
{
	listint_t *fmr;

	if (head == 0)
		return;
	while (*head != 0)
	{
		fmr = (*head)->next;
		free(*head);
		*head = fmr;
	}
}
