#include "lists.h"

/**
* free_listint2 - frees memory allocated to listint_t
* @head: pointer to head of the list
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
