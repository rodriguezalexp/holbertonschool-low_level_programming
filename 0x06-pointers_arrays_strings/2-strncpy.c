#include <stdio.h>
#include "holberton.h"
/**
 * _strncpy - appends src to the dest string
 * @dest: string
 * @src: string to append to dest
 * @n: number of bytes from src
 * Return: address of dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;

	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
