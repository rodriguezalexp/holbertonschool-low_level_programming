#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - sums of all its parameters
 * @n: number of parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(parameters, int);
	}
	va_end(parameters);
	return (sum);
}
