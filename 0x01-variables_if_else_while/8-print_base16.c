#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: Prints numbers of base 16 in lower case.
 *Return: 0 Always
 */
int main(void)
{
char asd;
for (asd = '0'; asd <= '9'; asd++)
putchar(asd);
for (asd = 'a'; asd <= 'f'; asd++)
putchar(asd);
putchar('\n');
return (0);
}
