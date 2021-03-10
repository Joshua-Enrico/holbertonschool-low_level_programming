#include "function_pointers.h"
/**
 * int_index - function to a function using a pointer.
 * @array: array
 * @size: size of the array
 * @cmp: Pointer to a function
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;


if (size > 0)
{
if (array != NULL && cmp != NULL)
{
while (x < size)
{
if (cmp(array[x]))/* we use cmp to redicet arrays to the function to compare"*/
return (x);/*here we return x to int_index to print x value*/
x++;
}
}
}
return (-1);/*return -1 if size <= 0, and if no element matches*/
}
