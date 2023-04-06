#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: pointer to a string of 0s and 1s
*
* Return: converted number on success.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (*b != '0' && *b != '1')
		return (0);

	value = value * 2 + (b[i] - '0');
	}

	return (value);
}
