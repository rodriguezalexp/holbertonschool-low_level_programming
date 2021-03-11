#ifndef _VARIADIC_FUNTIONS_H_
#define _VARIADIC_FUNTIONS_H_

#include <stdarg.h>

typedef struct print
/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
{
	char *t;
	void (*f)(va_list);
} print_t;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);

#endif