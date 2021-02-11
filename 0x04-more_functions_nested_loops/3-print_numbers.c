#include "holberton.h"
/**
*print_numbers - Prints numebrs from 0 to 9
*
*Return: always
*/
void print_numbers(void)
{
int a;
a = 0;
while (a < 10)
{

_putchar(a + '0');
a++;
}
_putchar('\n');

}
