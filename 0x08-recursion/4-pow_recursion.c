#include "holberton.h"

/**
* factorial - print string
* @x: base;
* @y: exponent;
*
* Return: x ^ y or -1 if y < 0
*/
int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
