#include "holberton.h"
/**
 *swap_int - change values of two integers
 *@a: pointer to a
 *@b: pointer to b
 * return: 0
 */
void swap_int(int *a, int *b)
{
int value;
value = *a;
*a = *b;
*b = value;
}
