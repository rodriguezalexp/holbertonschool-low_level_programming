#include "holberton.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string to capitalize
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int count = 0, j;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + count))
	{
		if (*(s + count) >= 'a' && *(s + count) <= 'z')
		{
			if (count == 0)
				*(s + count) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + count - 1))
						*(s + count) -= 'a' - 'A';
				}
			}
		}
		count++;
	}
	return (s);
}
