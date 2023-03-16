#include "main.h"

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: size of the memory block to be allocated
 *
 * Return: pointer to the address of the memory block
 */
void *malloc_checked(unsigned int b)
{
	void *mem_block;

	mem_block = malloc(b);
	if (mem_block == NULL)
		exit(98);
	return (mem_block);
}
