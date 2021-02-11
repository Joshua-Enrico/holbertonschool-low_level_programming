#include "holberton.h"

/**
 * print_square - does something.
 *@size: size.
 * Return: Always 0.
 */
void print_square(int size)
{
int a, b;
a = 0;

if (size < 1)
_putchar('\n');

while (a < size)
{
b = 0;
while (b < size)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;
}
}
