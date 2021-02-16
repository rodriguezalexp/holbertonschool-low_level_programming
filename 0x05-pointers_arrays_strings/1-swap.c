#include "holberton.h"

/**
 * swap_int - swap values
 * @a: firts value
 * @b: second value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
