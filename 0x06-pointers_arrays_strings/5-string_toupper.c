#include "holberton.h"
/**
 *string_toupper - replace minus for mayus
 *@s: pointer
 * Return: return s.
 */
char *string_toupper(char *s)
{
int i;
while (s[i] != '\0')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
