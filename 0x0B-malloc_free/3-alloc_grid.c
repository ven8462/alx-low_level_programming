#include "main.h"

/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr != NULL)
	{
		for (; i < height; i++)
		{
			ptr[i] = (int *) malloc(sizeof(int) * width);
			if (ptr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					ptr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(ptr[i]);
					i--;
				}
				free(ptr);
				return (NULL);
			}
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
