#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string with a new memory value.
 * Desc: _strdup function
 * @str: char type
 * Return: Return the new string
 **/
char *_strdup(char *str)
{
int i = 0, x;
char *s;
if (str == 0)
return (NULL);

while (str[i] != '\0')
i++;

s = malloc(i * sizeof(*s));
if (s == 0)
{
return (NULL);
}

for (x = 0; x < i; x++)
{
s[x] = str[x];
}
return (s);
}
