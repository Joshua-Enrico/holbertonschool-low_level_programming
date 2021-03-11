#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Sum list
 * @n: numbers of list's elements
 * Return: List sum.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int x = 0;
int sum = 0, value;


va_list listnumbers;
va_start(listnumbers, n);

if (n == 0)
return (0);

while (x < n)
{
value = va_arg(listnumbers,  int);
sum += value;
x++;
}

va_end(listnumbers);
return (sum);
}
