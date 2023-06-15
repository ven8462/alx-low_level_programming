#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of dlistint_t linked list
 * @head: pointer to the head of a dlistint_t list.
 * @index: The inddex of the node, starting from 0.
 *
 * Return: the address of the nth node, or NULL if it does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int count = 0;

	while (current_node != NULL)/* iterate through the list*/
	{
		/* if count is equal to the index, return the current node*/
		if (count == index)
		{
			return (current_node);
		}
		count++;
		current_node = current_node->next;
	}

	return (NULL); /*if node does not exist*/
}
