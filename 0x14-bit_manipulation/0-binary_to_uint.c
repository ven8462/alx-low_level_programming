#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int
* @b: pointer to a string of 0s and 1s
*
* Return: converted number on success.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;/* the value of conversion*/
	int i;/* index*/

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
	if (b[i] < '0' || b[i] > '1')/*checking if the b has 0 and 1 only*/
		return (0);

	value = value * 2 + (b[i] - '0');/*shifting it left by 1 bit*/
	}

	return (value);/* return the converted no*/
}
