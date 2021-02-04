#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: prints alfhabets in revers
 *Return: 0 Always
 */
int main(void)
{
char asd;
for (asd = 'z' ; asd >= 'a'; asd--)
putchar(asd);
putchar('\n');
return (0);
}
