#include "holberton.h"

/**
 * print_numbers - 1 to 14
 *
 * Return: void
 */

void more_numbers(void)

{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)

		{
			if (a > 9)
				_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');


		}

		_putchar ('\n');
	}
	
}
