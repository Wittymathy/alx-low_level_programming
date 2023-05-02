#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Head of list
 * Return: Returns a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a, *b;

	a = 0;
	b = 0;

	while (*head != 0)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;
	return (*head);
}
