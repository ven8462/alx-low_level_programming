#include "lists.h"

/**
* sum_listint - sums up all the data in the linked list
* @head: head of the list
* Return: value of a node index.
*/

int sum_listint(listint_t *head)
{
	size_t count = 0;
	listint_t *node_index = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		count += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (count);
}
