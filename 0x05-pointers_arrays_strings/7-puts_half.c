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

	while (str[i] != '\0')
	{
		i++;
		if (i >= 5)
			_putchar (str[i]);
	}

	_putchar('\n');
}
