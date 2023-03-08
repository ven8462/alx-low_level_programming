#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line.
* @s: string to be printed.
*
* Return: returns void.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')/* base condition*/
		_putchar('\n');
	else
	{
		_putchar(s[0]);
/* calling our function and moving to the next index. */
		_puts_recursion(s + 1);
	}
}
