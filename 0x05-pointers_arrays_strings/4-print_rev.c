#include "holberton.h"
/**
 *  print_rev - Prints invert
 * description: print_rev
 *@s: pointer to s
 * Return: 0
 */
void print_rev(char *s)
{

int a;
a = 0;

while (*s != 0)
{

s++;
a++;
}
s--;
while (a - 1 >= 0)
{
_putchar(*s);
s--;
a--;
}
_putchar('\n');
}
