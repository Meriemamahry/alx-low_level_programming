#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum all its parameters
 *@n: number of parameters
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s  = 0;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		s += va_arg(valist, int);
	va_end(valist);
	return (s);
}
