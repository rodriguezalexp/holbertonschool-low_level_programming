#include "holberton.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to print
 *
 * Return: void
 */
void rev_string(char *s)
{
	char copy[893];
	int j = 0;
	int i = 0;

	while (s[i] != '\0')
	{

		copy[i] = s[i];
		i++;

	}
	copy[i] = 0;
	i--;
	while (i >= 0)
	{

		s[j] = copy[i];
		j++;
		i--;
	}

}
