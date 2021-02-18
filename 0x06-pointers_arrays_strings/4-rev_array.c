#include "holberton.h"
/**
 *reverse_array - reverse a string
 *@a: pointer
 *@n: pointer
 * Return: return the result.
 */
void reverse_array(int *a, int n)
{

int b = 0, x;

while (b < n)
{
x = *(a + (n - 1));
*(a + (n - 1)) = a[b];
a[b] = x;
b++;
n--;

}

}
