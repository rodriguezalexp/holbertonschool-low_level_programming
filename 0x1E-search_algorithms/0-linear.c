#include "search_algos.h"

/**
 * linear_search - searches for a value in array using the Linear search algo
 * @array: pointer to the first element 
 * @size: n elements in array 
 * @value: value to searh for
 *
 * Return: first index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    int aux;

    if (array != NULL)
    {
        for (i = 0; i < size; i++)
        {
            aux = array[i];
            printf("Value checked array[%lu] = [%d]\n", i, aux);
            if (aux == value)
                return (i);
        }
    }
    return (-1);
}
