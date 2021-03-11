#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers with a separator
 * @separator: string to be printed between numbers
 * @n: numbers of list's elements
 * Return: List sum.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x = 1;
int value;

va_list print;
va_start(print, n);

while (x <= n)
{
value = va_arg(print, int);
printf("%d", value);

/*  don't print if separator is  null and if  x is in it's last element*/
if (separator != NULL && x != n)
{
printf("%s", separator);
}
x++;
}

va_end(print);
printf("\n");

}
