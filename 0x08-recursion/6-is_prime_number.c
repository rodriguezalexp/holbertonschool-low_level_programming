#include "holberton.h"

/**
* is_prime_number - prime or integer
* @n: number;
*
* Return: 1 if the imput is integer
*/
int is_prime_number(int n)


{
	if (y <= 1)
	{
		return (0);
	}
	else
	{
	return (prime(n, n - 1));
	}
}
/**
* prime - prime
* @x: n
* @i: n-1
*
* Return: int
*/
int prime(int x, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (x % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime(x, i - 1));
		}
	}
}
