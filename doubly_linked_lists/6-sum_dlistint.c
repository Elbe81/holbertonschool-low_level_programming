#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Calculate the sum of all the data (n) in a doubly linked list.
 * @head: Pointer to the head node of the list.
 *
 * Return: Sum of all the data (n) in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

