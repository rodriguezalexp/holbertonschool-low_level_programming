#include"holberton.h"

/**
 * print_last_digit -  functio that print the last digit
 *@n: the argument
 *Return: the value of the last digit
 **/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar (l + '0');
	return (l);
}
