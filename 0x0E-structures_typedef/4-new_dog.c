#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
		return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
{
	len++;
}

	for (i = 0; i < len; i++)
{
	dest[i] = src[i];
}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
	dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *papi;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	papi = malloc(sizeof(dog_t));
	if (papi == NULL)
		return (NULL);

	papi->name = malloc(sizeof(char) * (len1 + 1));
	if (papi->name == NULL)
{
	free(papi);
	return (NULL);
}
	papi->owner = malloc(sizeof(char) * (len2 + 1));
	if (papi->owner == NULL)
{
	free(papi);
	free(papi->name);
	return (NULL);
}
	_strcpy(papi->name, name);
	_strcpy(papi->owner, owner);
	papi->age = age;
	return (papi);
	}
