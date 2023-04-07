#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index.
* @index:is the index, starting from 0 of the bit you want to get
* @n: the number
* Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
