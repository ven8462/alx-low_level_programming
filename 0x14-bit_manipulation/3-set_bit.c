#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: the number to be used.
* @index: index in the number n.
* mask: a number that has 1 on the digit required and 0s anywhere else
* Return: 1 on success, -1 on failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	/*create a mask with a 1 in the bit position we want to set*/
	unsigned long int mask = 1UL << index;

	/*check if index is out of range*/
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);/* return -1 to indicate error*/
	}


/* perform a bitwise OR btwn the mask and value pointed to*/
/* this sets the bit at a given index to 1*/

	*n |= mask;

	return (1);/* success */
}
