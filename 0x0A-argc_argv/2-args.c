#include <stdio.h>

/**
* main - prints all arguments it received
*@argc: array size
*@argv: array containing elements
*Return: returns 0
*/

int main(int argc, char *argv[])
{
		int i;

	while (i < argc)
{
		printf("%s\n", argv[i]);
		i++;
}

		return (0);
}
