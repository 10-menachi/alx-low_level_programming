#include "search_algos.h"

/**
 * linear_search - Implementation of Linear Search
 * @array: Provided array
 * @value: Provided Value
 * @size: Size of @array
 *
 * Return: First index where @value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
