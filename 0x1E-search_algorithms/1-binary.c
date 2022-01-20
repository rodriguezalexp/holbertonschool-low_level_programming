#include "search_algos.h"
/**
 * binary_search - function to search for a value in a sorted
 * array of integers using Binary Search algorithm
 * @array: pointer to the first element
 * @size: n elements in array
 * @value: Value to search for in array
 * Return: first index where value is located, or -1 on failure
 */


int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i = 0, mid = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
