#include "lists.h"

/**
* add_nodeint - adds node at the beginning of the list.
* @head: pointer to the beginning of the list
* @n: number to add to a node
* Return: A pointer to the head of the list.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
