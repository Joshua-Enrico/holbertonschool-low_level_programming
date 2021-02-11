#include "holberton.h"
/**
*more_numbers - prints 0 to 14
*
*Return: value
*/
void more_numbers(void)
{
int x = 0;
int a;
while (x < 10)
{
for (a = 0; a <= 14; a++)
{

if (a > 9)
{
_putchar((a / 10) + '0');
}
_putchar((a % 10) + '0');
}
_putchar('\n');
x++;
}
}
