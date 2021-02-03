#include <stdio.h>
/**
 *main - prints the size of several data types
 *
 *Description: the function will print the size of char, int, long int,
 *long long int, and float dataa  types.
 *Return: 0
*/
int main(void)
{
char chr;
int  tni;
long int li;
long long int lli;
float flt;

printf("Size of char: %lu bytes\n", sizeof(chr));
printf("Size of int: %lu bytes\n", sizeof(tni));
printf("Size of long int: %lu bytes\n", sizeof(li));
printf("Size of long long init: %lu bytes\n", sizeof(lli));
printf("Size of float: %lu bytes\n", sizeof(flt));

return (0);
}


