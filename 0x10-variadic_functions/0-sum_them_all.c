#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list parameters;

	va_start(parameters, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
		sum += va_arg(parameters, int);
	va_end(parameters);
	return (sum);
}
