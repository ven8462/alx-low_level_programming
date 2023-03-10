#include <stdio.h>

/**
* main - prints the name of a program
* @argc: array size
* @argv: array containing elements
*
* Return: 0 on success
*/
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
