#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)/* test 1 */
		return (-1);
	if (y == 1)
		return (x);
	if (y == 0)/*test 2*/
		return (1);
	return (x * _pow_recursion(x, y - 1));
/* y is the power so if its 1 we can terminate the function*/
/*in line 16 we are simply recursing the power of x*x */

}
