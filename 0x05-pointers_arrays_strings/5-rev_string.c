#include "holberton.h"
/**
 * rev_string - Prints invert
 * description: rev_string
 *@s: pointer to s
 * Return: 0
 */
void rev_string(char *s)
{

int ci, cc, ck;
char *x, abs;
x = s;

while (s[cc] != '\0')
{
cc++;
}
for (ck = 1; ck < cc; ck++)
{
x++;
}
for (ci = 0; ci < (cc / 2); ci++)
{
abs = s[ci];
s[ci] = *x;
*x = abs;
x--;
}
}
