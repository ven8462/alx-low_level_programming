#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		/*print the current node's value*/
		printf("%d\n", h->n);
		/*move to the next node and increment count*/
		h = h->next;
		count++;
	}

	return (count);
}
