#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
int a, b, c, d;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
for (c = 48; c <= 57; c++)
{
for (d = 48; d <= 57; d++)
{
if (a != c || b != d)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if ((a + c + d == 23 ) && (b == 8))
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');

return (0);
}
