#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given
 * position in a doubly linked list.
 * @h: Pointer to the pointer of the head node.
 * @idx: Index of the position where the new node
 *should be inserted (starting from 0).
 * @n: Integer value to be added in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	/* Create a new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		/* Insert at the beginning */
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		/* Index is out of bounds, can't insert */
		free(new_node);
		return (NULL);
	}

	/* Insert in the middle or at the end */
	new_node->prev = current->prev;
	new_node->next = current;
	if (current->prev != NULL)
		current->prev->next = new_node;
	current->prev = new_node;

	return (new_node);
}
