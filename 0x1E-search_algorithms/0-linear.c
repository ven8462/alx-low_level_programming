#include <stdio.h>

/**
 * linear_search - searches for a value using Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}
	return (-1);
}
