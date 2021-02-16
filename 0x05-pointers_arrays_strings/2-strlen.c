#include "holberton.h"
/**
 *_trñem - pritns lenght
 *@s: pointer to s
 * returno: 0
 */
int _strlen(char *s)
{
int a;
a = 0;

while (s[a] != 0)
{
 
 a++;
}
    
 return (a);
}