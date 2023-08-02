#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at
 *a given index in a doubly linked list
 * @head: Pointer to the pointer to the head of the list
 * @index: Index of the node to be deleted (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *temp;
	unsigned int i;

	if (!head || !(*head)) /* Check if the head pointer or the list is NULL */
		return (-1);

	current_node = *head;

	if (index == 0) /* If the node to be deleted is the head node */
	{
		*head = current_node->next;
		if (current_node->next)
			current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}
	/* Traverse the list to the node before the one to be deleted */
	for (i = 0; i < index - 1; i++)
	{
		if (!current_node) /* If the index is beyond the end of the list */
			return (-1);
		current_node = current_node->next;
	}

	if (!current_node || !(current_node->next))
		/* If the index is beyond the end of the list */
		return (-1);

	temp = current_node->next;
	current_node->next = temp->next;
	if (temp->next)
		temp->next->prev = current_node;
	free(temp);

	return (1);
}
