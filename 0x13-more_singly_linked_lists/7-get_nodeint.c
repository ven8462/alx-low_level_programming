#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of alinked list.
* @head: pointer to the head of the list
* @index: index of the node required.
*
* Return: the address of the node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *node_index = head;

	if (head == NULL)
	{
		return (0);
	}

	while (i < index)
	{
		if (head == NULL)
		return (NULL);

		node_index = head->next;
		head = node_index;
		i++;
	}
	return (node_index);
}
