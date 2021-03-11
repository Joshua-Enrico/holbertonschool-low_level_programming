#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * op_c - Entry Point
 * Desc: op_c function
 * @op_d: op_s from op_s
 * Return: Char c
 */

void op_c(va_list op_d)
{
printf("%c", va_arg(op_d, int));
}

/**
 * op_i - Entry Point
 * Desc: op_i function
 * @op_d: op_s from op_s
 * Return: int i
 */

void op_i(va_list op_d)
{
printf("%d", va_arg(op_d, int));
}
/**
 * op_f - Entry Point
 * Desc: op_f function
 * @op_d: op_s from op_s
 * Return: double f
 */
void op_f(va_list op_d)
{
printf("%f", va_arg(op_d, double));
}

/**
 * op_z - Entry Point
 * Desc: op_z function
 * @op_d: op_s from op_s
 * Return: string
 */
void op_z(va_list op_d)
{
char *s = va_arg(op_d, char*);

if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);

}
/**
 * print_all - Prints all
 *
 * @format: string's list
 * Return: Return strings sum
 */

void print_all(const char * const format, ...)
{
op_t op_s[] = {
{"c", op_c},
{"i", op_i},
{"f", op_f},
{"s", op_z},
{NULL, NULL},

};

unsigned int i = 0, j = 0;
char *x = "";
va_list opp;
va_start(opp, format);


while (format != NULL && format[i] != '\0')
{
j = 0;
while (op_s[j].op != NULL)
{
if (format[i] == op_s[j].op[0])
{
printf("%s", x);
op_s[j].stargate(opp);
x = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(opp);
}
