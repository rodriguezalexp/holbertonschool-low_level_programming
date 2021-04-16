#include "holberton.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: integer array to be reversed
 * @n: length of array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, f;

	n = n - 1;
	while (i < n)
	{
		f = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = f;
		i++;
		n--;
	}
}
