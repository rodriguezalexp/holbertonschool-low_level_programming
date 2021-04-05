#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: outputs the difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;

	while (*(s1 + i) && *(s2 + j))
	{
		i++;
		j++;
	}

	if (*(s1 + i) == (*s2 + j))
	{
		return (0);
	}

	else
	{
		return (*(s1 + i) - *(s2 + j));
	}
}
