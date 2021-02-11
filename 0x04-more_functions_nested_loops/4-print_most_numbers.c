#include "holberton.h"
/**
*print_most_numbers - Prints numbers excep 2 and 4
*
*Return: numbers
*/
void print_most_numbers(void)
{
int a;
a = 0;
while (a < 10)
{
if (a != 2 && a != 4)
_putchar(a + '0');
a++;
}
_putchar('\n');
}
