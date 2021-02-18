#include "holberton.h"

/**
  * root13 - emtry point
  * @x: The string to encode
  *
  * Return: x
  */
char *rot13(char *x)
{
	int a, j;
	char step[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char up[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (x[a] != 0)
	{
		j = 0;
		while (step[j] != 0)
		{
			if (x[a] == step[j])
			{
				x[a] = up[j];
				break;
			}
			j++;
		}
		a++;
	}
	return (x);
}