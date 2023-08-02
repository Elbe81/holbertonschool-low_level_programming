#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free a doubly linked list.
 * @head: Pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}

