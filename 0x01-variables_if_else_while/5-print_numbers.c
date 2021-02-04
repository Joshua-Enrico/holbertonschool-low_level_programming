#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: prints digits from 0 to 9 in base 10
 *Return: 0 Always
 */
int main(void)
{
char ch;
for (ch = '0'; ch <= '9' ; ch++)
putchar(ch);
putchar('\n');
return (0);
}
