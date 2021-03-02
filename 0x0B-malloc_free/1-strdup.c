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
	int i = 0;
	char *j;
	int x;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i++;
	j = malloc(sizeof(char) * i);
	if (j == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		j[x] = str[x];
	}
	return (j);
}