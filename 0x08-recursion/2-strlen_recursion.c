#include "holberton.h"

/**
* _strlen_recursion - print string
* @s: string to print
*
* Return: s;
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
