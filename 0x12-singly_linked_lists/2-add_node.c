#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t
 * @head: linked list head
 * @str: string
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t n;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	node->len = n;
	node->next = *head;
	*head = node;

	return (*head);
}
