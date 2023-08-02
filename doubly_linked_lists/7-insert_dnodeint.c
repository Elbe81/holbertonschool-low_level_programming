#include "lists.h"
#include <stdlib.h>

/**
 * create_dnodeint - Creates a new node
 *and initializes it with the given value
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
static dlistint_t *create_dnodeint(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in a doubly linked list
 * @h: Pointer to the pointer to the head of the list
 * @idx: Index where the new node should be added (starts at 0)
 * @n: Value to be stored in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node = *h;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
	{
		new_node = create_dnodeint(n);
		if (!new_node)
			return (NULL);
		new_node->next = current_node;
		if (current_node)
			current_node->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	/* Traverse the list to the position before the insertion point */
	for (i = 0; i < idx - 1; i++)
	{
		if (!current_node)
			return (NULL);
		current_node = current_node->next;
	}

	if (!current_node)
		return (NULL);

	new_node = create_dnodeint(n);
	if (!new_node)
		return (NULL);
	new_node->prev = current_node;
	new_node->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
