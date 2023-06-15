#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added, starting from 0.
 * @n: The data of the new node.
 *
 * Return: The address of the new node, or NULL if it fails or not possible.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	unsigned int count = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (current_node != NULL && count < idx - 1)
	{
		count++;
		current_node = current_node->next;
	}

	if (current_node != NULL && current_node->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	if (current_node != NULL)
	{
		dlistint_t *new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = current_node->next;
		new_node->prev = current_node;
		if (current_node->next != NULL)
		{
			current_node->next->prev = new_node;
		}
		current_node->next = new_node;
		return (new_node);
	}

	return (NULL);
}
