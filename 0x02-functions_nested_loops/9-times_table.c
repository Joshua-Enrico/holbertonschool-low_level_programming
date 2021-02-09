#include "holberton.h"

/**
  *times_table - Prints the 9 times table.
  *
  *Return: 0
  */
void times_table(void)
{
int a; /* first number to multiply */
int b; /* second number to multiply */
int x; /* computed number */

while (a < 10)
{
b = 0;
while (b < 10)
{
x = a * b;
if (x > 9)
{
_putchar(x / 10 + '0');
_putchar(x % 10 + '0');
}
else if (b != 0)
{
_putchar(' ');
_putchar(x + '0');
}
else
{
_putchar(x + '0');
}

if (b != 9)
{
_putchar(',');
_putchar(' ');
}
b++;
}
_putchar('\n');
a++;
}
}
