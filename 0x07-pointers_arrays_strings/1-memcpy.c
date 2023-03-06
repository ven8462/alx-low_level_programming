#include "main.h"
/**
 *_memcpy - The _memcpy() function copies n bytes
 *from memory area  src to memory area dest
 *@dest: area where bytes are copied to
 *@src: area where bytes are copied from
 *@n:number of bytes to copy
 *Return: returns a pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
