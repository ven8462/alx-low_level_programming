#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a linked list
 * @head: double pointertho the head of the dlistint_t list
 * @n: The interger value of the new node
 *
 * Return: The address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/*allocate memory for the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/*set the new node's data and pointers*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/*update the previous pointer of the old head, if it exists*/
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	/*make the new node the head of the list*/
	*head = new_node;

	return (new_node);
}
