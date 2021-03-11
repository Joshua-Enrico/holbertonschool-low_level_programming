#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Desc: main function
 * @argc: argument count
 * @argv: argumemnts
 * Return: Main function return 0
 */

int main(int argc, char *argv[])
{
int a, b, c;
int (*x)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(0);
}
x = get_op_func(argv[2]);

if (x == NULL)
{
printf("Error\n");
exit(0);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
c = x(a, b);
printf("%d\n", c);
return (0);
}
