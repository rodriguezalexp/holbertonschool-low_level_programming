#include "holberton.h"

/**
* factorial - print string
* @n: pointer
*
* Return: ponter;
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
