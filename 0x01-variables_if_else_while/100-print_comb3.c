#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: from 00 to 99 with some spesifications
 *Return: 0 Always
 */
int main(void)
{
int a, b;
for (a = '0'; a <= '9' ; a++)
{
for (b = '0'; b <= '9' ; b++)
{
if (a < b)
{
putchar(a);
putchar(b);
if (a != '9' || b != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
