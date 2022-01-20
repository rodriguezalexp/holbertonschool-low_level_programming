#include "search_algos.h"

/**
 * linear_search - Function that searches for a value
 * @array: pointer to the first element
 * @size: n elements in array
 * @value: value to searh for
 *
 * Return: first index where value is located, or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
