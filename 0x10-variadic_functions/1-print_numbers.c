#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: char separator
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int prt;
	va_list numeros;

	va_start(numeros, n);
	for (i = 0; i < n; i++)
	{
		prt = va_arg(numeros, int);
		printf("%d", prt);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numeros);
}
