#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10

	if (n > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, b);
	}
	if (n == 0)
	{
		printf("Last digit of %d and is %d 0\n", n, b);
	}
	else
	{
		printf("Last digit of %d and is %d less than 6 and not 0\n";
		n, b);
	}
}
