#include "holberton.h"
/**
*print_line - prints something
*@n: value
*Return: return value
*/
void print_line(int n)
{
int a = 0;
while (a < n)
{
_putchar('_');
a++;
}
_putchar('\n');
}
