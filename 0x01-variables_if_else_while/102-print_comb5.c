#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
int a, b, c, d;
for ( a = 48; a <= 57; a++)
{
for ( b = 48; b <= 57; b++)
{
for ( c = 48; c <= 57; c++)
{
for ( d = 48; d <= 57; d++)
{
if ( a != d || b != c)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a + b + c + d  == 36)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
