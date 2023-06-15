#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: pointer to the head of the dlistint_t list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	/* iterate through the list*/
	while (head != NULL)
	{
		temp = head->next;/*save the current node's pointer*/
		free(head);/* free the current node*/
		head = temp; /*move to next node*/
	}
}
