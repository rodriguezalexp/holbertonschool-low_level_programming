#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int count, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + count); count++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + count))
				*(s + count) = b[j];
		}
	}
	return (s);
}
