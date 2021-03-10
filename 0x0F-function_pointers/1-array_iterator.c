#include "function_pointers.h"
/**
 * array_iterator - function to a function using a pointer.
 * @array: array
 * @size: size of the array
 * @action: Pointer to a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x = 0;
if (array != NULL && action != NULL && size > 0)
{
/* here we get the size and we locate it in x*/
while (x < size)
{
/*here we use the pointer to a function "action" to redirect all array data */
action(array[x]);
x++;
}
}
}
