#include "holberton.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int count, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + count); count++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + count))
			{
				*(s + count) = b[j];
				break;
			}
		}
	}
	return (s);
}
