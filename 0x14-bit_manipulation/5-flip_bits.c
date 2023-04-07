#include "main.h"

/**
* flip_bits - returns the number of bits you flip to move from n to m
* @n: 1st number
* @m: 2nd number
* Return: the number of flipped bit.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
/*flipped stores bits that are diff btwn n and m to 1 and 0 if they are same*/
/* count counts the no of bits that are different btwn n and m*/
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped != 0)
	{
		if (flipped & 1)/*returns 1 if if the bit in flipped is 1*/
			count++;/*if 1 add 1 to count if 0 do nothing*/
		flipped >>= 1;/*shift  to check next least sig bit in  loop*/
	}
	return (count);
}
