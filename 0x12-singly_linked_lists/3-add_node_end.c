#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: head linked list.
 * @str: string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node2, *node1;
	size_t n;

	node2 = malloc(sizeof(list_t));
	if (node2 == NULL)
		return (NULL);

	node2->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	node2->len = n;
	node2->next = NULL;
	node1 = *head;

	if (node1 == NULL)
	{
		*head = node2;
	}
	else
	{
		while (node1->next != NULL)
			node1 = node1->next;
		node1->next = node2;
	}

	return (*head);
}
