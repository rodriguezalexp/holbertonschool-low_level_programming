#include "holberton.h"

/**
 * puts_half - puts half of string.
 * @str: print other numbers of string.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int b;
        i = 0;

	while (str[i] != '\0')
	{
		i++;
		b = i / 2;
		if (i % 2)
			b++;
			_putchar (str[i]);
	}

	_putchar('\n');
}
