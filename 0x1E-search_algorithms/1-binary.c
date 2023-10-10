#include <stdio.h>

/**
* print_array - prints the array
* @array: array to print
* @left: the left array
* @right: the right array
*/
void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
	printf("%d", array[left]);
	if (left < right)
		printf(", ");
	left++;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value using Linear search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * Return: value. -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;

	if (array == NULL)
	return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
	print_array(array, left, right);
	middle = (left + right) / 2;
	if (array[middle] < value)
		left = middle + 1;
	else if (array[middle] > value)
		right = middle - 1;
	else
		return ((int) middle);
	}
	return (-1);
}
