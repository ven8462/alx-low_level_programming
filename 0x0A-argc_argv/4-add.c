#include <stdio.h>
#include <stdlib.h>

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

/*
* main - function takes in the number of arguments and an array of strings.
* The first for loop iterates through the arguments.
* The second for loop iterates through each character of the argument.
* If the chars is not a digit, the program prints “Error” and returns 1.
* If the char is a digit, the program adds the number to the sum.
* The program prints the sum and returns 0.
*/
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[a]);
	}

	printf("%d\n", sum);

	return (0);
}
