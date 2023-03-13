#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *
 * Return: NULL in case of error, pointer to allocated space.
 */
char *_strdup(char *str)
{
	int len, i;

	char *ptr;

	if (str == NULL)
		return (NULL);

	/*Checking length size*/
	for (len = 0; str[len] != '\0'; len++)

	ptr = (char *) malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	/*Copying content of @str int new array(ptr)*/
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
