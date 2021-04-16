#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to change
 *
 * Return: address of s
 */
char *string_toupper(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
			*(s + count) -= 'a' - 'A';
		i++;
	}
	return (s);
}
