#include "holberton.h"

/**
 * puts2 - prints a string in reverse
 * @str: print other number of string.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar (*(str + i));
		i = i + 2;
	}
	_putchar ('\n');
}
