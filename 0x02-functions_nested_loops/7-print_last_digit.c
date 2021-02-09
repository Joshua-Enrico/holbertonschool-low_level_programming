#include "holberton.h"

/**
  *_abs - prints absolute value of an integer.
  *@a: caracter to be computed
  *Return: void
  */
int print_last_digit(int a)
{
int last;
last = a % 10;

if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
