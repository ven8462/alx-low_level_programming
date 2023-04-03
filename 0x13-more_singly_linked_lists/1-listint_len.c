#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list
* @h: A pointer to the head of the list
*
* Return: the number of elements in the listint_t list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;/* no of elements in a linked list*/

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

