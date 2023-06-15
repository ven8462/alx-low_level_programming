#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the dlistint_t list.
 *
 * Return: The sum of the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node = head;

	/* Iterate through the list */
	while (current_node != NULL)
	{

		/* Add the current node's data to the sum */
		sum += current_node->n;
		/* Move to the next node */
		current_node = current_node->next;
	}

	return (sum);
}

