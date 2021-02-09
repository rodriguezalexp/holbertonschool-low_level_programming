#include "holberton.h"

/**
 * main - print alphabet.
 * Description: print alphabet.
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar (a);

	putchar (10);
}
