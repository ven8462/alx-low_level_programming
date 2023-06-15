#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked dlistint_t list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)/*iterate through the list*/
	{
		h = h->next;/*as you move to the next nodeincrement count*/
		count++;
	}

	return (count);
}
