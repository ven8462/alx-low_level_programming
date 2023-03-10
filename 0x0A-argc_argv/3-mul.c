#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies 2 numbers
*@argc: array size
*@argv: array containing elements
*Return: returns 0
*/

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);
	return (0);
}
