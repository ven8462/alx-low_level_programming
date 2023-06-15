#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the pointer to the head of the dlistint_t list.
 * @index: The index of the node that should be deleted, starting from 0.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current_node);
		return (1);
	}

	while (current_node != NULL && count < index)
	{
		count++;
		current_node = current_node->next;
	}

	if (current_node != NULL)
	{
		if (current_node->next != NULL)
		{
			current_node->next->prev = current_node->prev;
		}
		current_node->prev->next = current_node->next;
		free(current_node);
		return (1);
	}

	return (-1);
}

