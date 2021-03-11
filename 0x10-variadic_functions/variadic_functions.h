#ifndef HOL_H
#define HOL_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct op_o
{
	char *op;
	void (*stargate)(va_list valist);
} op_t;


#endif /* HOL_H*/