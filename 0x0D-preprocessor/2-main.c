#include <stdio.h>

/**
*main - prints the name of
*the file it was compiled from
*
*Return: nothing on success
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
