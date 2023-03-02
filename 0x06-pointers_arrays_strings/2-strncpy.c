#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: destination of the copied string
 * @src: string to be copied
 * @n: size of character to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i; /*size of index*/

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
