#include "lists.h"

/**
* add_nodeint_end - adds a node at the end of the list.
* @head: pointer to the head node.
* @n: number to add to the node
* Return: A pointer to the beginning of the list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
