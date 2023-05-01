#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: head of list
 * Return: Return 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != 0)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
