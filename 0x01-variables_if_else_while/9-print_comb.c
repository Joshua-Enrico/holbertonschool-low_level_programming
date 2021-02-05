#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: hard one!
 *Return: 0 Always
 */
int main(void)
{
int asd;
for (asd = '0'; asd <= '9' ; asd++)
{
putchar(asd);
if (asd == '9')
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}



