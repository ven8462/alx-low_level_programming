#include "main.h"

/**
* is_prime_number - checks if a number is prime.
* @n: number to be checked
*
* Return: returns 1 if the input integer is a prime number
* otherwise returns 0 if number is not prime.
*/
int is_prime_number(int n)
{
	int prime = 0;/* my function*/

	if (n < 2)
		prime = 0;
	else if (n == 2)
		prime = 1;
	else if (n % 2 == 1)
		prime = 1;
	return (prime);
}
