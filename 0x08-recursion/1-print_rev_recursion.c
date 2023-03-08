#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse.
*@s: parameter string
*
*/
void _print_rev_recursion(char *s)
{
	if (*s)/*base condition*/
	{
		_print_rev_recursion(++s);/*moving the cursor to the last character*/
		--s;/*reversing the string*/
		_putchar(*s);/*printing the reversed string*/
	}
}
