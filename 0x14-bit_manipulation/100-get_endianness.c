#include "main.h"

/**
* get_endianness - a function that checks if a machine is big or little endian
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;/*pointer to 1st byte of test*/

	if (*endian)/*derefrencing endian*/
	{
		return (1);/*if 1st byte of test is 1 machne is little endian*/
	}
	else
	{
		return (0);/*if 1st byte of test is 0 machine is big endian*/
	}
}
