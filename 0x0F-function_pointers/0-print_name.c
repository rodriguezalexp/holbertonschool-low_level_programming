#include "function_pointers.h"

/**
* print_name - funtion to a pointer
* @name: name to print
* @f: funtion to print
*
* return void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
