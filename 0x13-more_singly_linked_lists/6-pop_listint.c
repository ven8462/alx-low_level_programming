#include "lists.h"

/**
* pop_listint - deletes the head node of the linked list
* @head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
	int data;
	listint_t *delete = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	delete = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = delete;

	return (data);
}
