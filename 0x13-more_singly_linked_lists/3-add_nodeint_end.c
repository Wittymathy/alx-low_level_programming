#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: head of lists
 * @n: Number
 * Return: NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
		listint_t *node;
		listint_t *fmr;

		if (head == 0)
			return (0);
		node = malloc(sizeof(listint_t));
		if (node == 0)
			return (0);
		node->n = n;
		node->next = 0;
		if (*head == 0)
		{
			*head = node;
			return (node);
		}
		fmr = *head;
		while (fmr->next != 0)
		{
			fmr = fmr->next;
		}
		fmr->next = node;
		return (node);
}
