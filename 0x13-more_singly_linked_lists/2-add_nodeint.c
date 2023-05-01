#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: head of list
 * @n: number of nodes
 * Return: NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == 0)
		return (0);

	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}

