#include "holberton.h"
/**
 *_strcat - Concatenates two strings
 *@dest: pointer
 *@src: pointer
 * Return: return the result.
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
