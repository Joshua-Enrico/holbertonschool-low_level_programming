#include "holberton.h"
/**
 *  print_rev - Prints invert
 * description: print_rev
 *@s: pointer to s
 * Return: 0
 */
void rev_string(char *s)
{
int a = 0, b = 0, save;

while (s[a] != '\0')
 {
     a++;
 }
a--;
while (b < a)
{
save = s[a];
s[b] = s[a];
s[a] = save;
b++;
a--;
}

}