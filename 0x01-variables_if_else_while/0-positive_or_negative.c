#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (numero > 0)
	{
		printf("is positive");
	}
	else if (numero == 0)
	{
		printf("is zero");
	}
	else
	{
		printf("Negativo");
	}
	return (0);
}
