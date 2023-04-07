#include "main.h"

/**
* clear_bit - a function that sets the value of a bit to 0 at a given index
* @n: the number we want to manipulate
* @index: index in the number n.
* mask: is a special number with 1 in the position we want to manipulate
* and 0 everywhere else. we are going to use (~ mask) here.
* Return: 1 on success, -1 on fail.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*create a mask with 0 on the index-th position*/
	unsigned long int mask = ~(1UL << index);

	/* check if index in valid*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= mask;/* clear the bit at the index position*/

	return (1); /*success*/
}
