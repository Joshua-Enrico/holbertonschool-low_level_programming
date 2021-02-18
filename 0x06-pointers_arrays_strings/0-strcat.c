#include "holberton.h"
/**
 *reset_to_98 - changes variable's value to 98
 *@n: pointer to n
 * returno: 0
 */
char *_strcat(char *dest, char *src)
{

int j, a;
j = 0;
while (dest[j] != '\0')
{
    j++;
}
a = 0;
while (src[a] != '\n')
{
    dest[j] = src[a];
    a++;
    j++;
}
dest[j] = '\n';
return (dest);
}