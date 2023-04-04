#include <stdlib.h>
#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new node
* @head: A pointer to the first node of the list
* @idx: index of the list.
* @n: value of the number
* Return: the address of the new node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *previous_node = *head;
	listint_t *h = *head;
	size_t i = 1;

	if (head == NULL)
		return (NULL);
	while (i < idx)
	{
		previous_node = (*head)->next;
		*head = previous_node;
		++i;
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = (*head)->next;
		(*head)->next = new_node;
		*head = h;
	}
	return (new_node);
}
