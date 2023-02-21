#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
if
(n < 0 || n > 15);
return;

int i, j, product;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++
{
for product = i * j;
if (j == 0)
_putchar("%d", product);
else
_putchar("%4d", product);
}
_putchar("\n");
}
}
