#include"holberton.h"
/**
 * print_alphabet_x10 - ten times prototype print
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)

			_putchar(a);

		_putchar ('\n');
	}
}