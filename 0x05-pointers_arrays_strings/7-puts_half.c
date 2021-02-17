#include "holberton.h"
/**
 * puts_half- Prints spcific numbers
 * description: puts_half
 *@str: pointer to str
 * Return: 0
 */
void puts_half(char *str)
{
int j = 0;
int slenght;

while (str[j] != '\0')
{
j++;
}

if (j % 2 == 1)
{
slenght = (j - 1) / 2;
slenght += 1;
}
else
{
slenght = j / 2;
}

for (; slenght < j; slenght++)
{
_putchar(str[slenght]);
}
_putchar('\n');
}
