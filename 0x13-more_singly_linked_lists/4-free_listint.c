#include "lists.h"

/**
* free_listint - frees a list of nodes
* @head: Pointer to the first node.
*/

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
