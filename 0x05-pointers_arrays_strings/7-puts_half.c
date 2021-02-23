#include "holberton.h"

/**
 * puts_half - puts half of string.
 * @str: print other numbers of string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int b;

	while (str[i] != '\0')

		i++;
		b = i / 2;
		if (i % 2)
			b += 1;
		while (b < i)
		{
			_putchar (str[b]);
		b++;
		}


	_putchar('\n');
}
