#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the dlistint_t list.
 * @n: The integer value of the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* Set the new node's data and pointers */
	new_node->n = n;
	new_node->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);

	}

	/* Find the last node in the list */
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	/* Update the last node's next pointer to the new node */
	last_node->next = new_node;
	/* Set the new node's prev pointer to the last node */
	new_node->prev = last_node;

	return (new_node);
}
