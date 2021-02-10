#include "holberton.h"
/**
 * print_sign - print sing -
 * @n: Variable
 * Return: 1 if n > 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
