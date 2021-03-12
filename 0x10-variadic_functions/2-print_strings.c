#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings
 * @separator: string to be printed between numbers
 * @n: string's list
 * Return: Return strings sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x = 1;


va_list string;
va_start(string, n);

if (n > 0)
{

while (x <= n)
{
char *value = va_arg(string, char*);



if (value == NULL)
{
printf("(nil)");
}
else
printf("%s", value);

if (separator != NULL && x != n)
{
printf("%s", separator);
}
x++;
}
}
va_end(string);
printf("\n");

}
