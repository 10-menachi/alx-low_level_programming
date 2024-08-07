#include "search_algos.h"

/**
 * binary_search - Implementation of Binary Search
 * @array: Provided Array
 * @size: Size of @array
 * @value: Provided value
 *
 * Return: first index at which @value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (!array)
		return (-1);
	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}

	return (-1);
}
