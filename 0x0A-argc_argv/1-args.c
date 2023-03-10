#include <stdio.h>

/**
* main - prints number of arguments passed to a program
*@argc: array size
*@argv: array containing elements
*Return: returns 0
*/

int main(int argc, char *argv[])
{
		(void)(argv);
			printf("%d\n", argc - 1);

		return (0);
}
