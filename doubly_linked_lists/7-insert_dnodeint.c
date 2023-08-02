#include <stdlib.h>
#include "lists.h"

/**
 * create_dnodeint - Create a new doubly linked list node.
 * @n: Integer value to be added in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *create_dnodeint(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_at_beginning - Insert a new node
 *at the beginning of a doubly linked list.
 * @h: Pointer to the pointer of the head node.
 * @new_node: Pointer to the new node to be inserted.
 */
void insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
	new_node->next = *h;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
}

/**
 * insert_dnodeint_at_index - Insert a new node
 * at a given position in a doubly linked list.
 * @h: Pointer to the pointer of the head node.
 * @idx: Index of the position where the new node should
 *be inserted (starting from 0).
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

	new_node = create_dnodeint(n);
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		/* Insert at the beginning */
		insert_at_beginning(h, new_node);
		return (new_node);
	}

	current = *h;
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}

	if (current == NULL && count != idx)
	{
		/* Index is out of bounds, can't insert */
		free(new_node);
		return (NULL);
	}

	if (current == NULL)
	{
		/* Insert at the end */
		new_node->prev = NULL;
		new_node->next = NULL;
		current = *h;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	else
	{
		/* Insert in the middle */
		new_node->prev = current->prev;
		new_node->next = current;
		current->prev->next = new_node;
		current->prev = new_node;
	}

	return (new_node);
}

