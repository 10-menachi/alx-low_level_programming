#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value;
 * @max: maximum value;
 *
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	void *ptr;
	int size = (max - min) + 1;
	int *arr, index = min;

	if (min > max)
		return (NULL);

	ptr = calloc(size, sizeof(int) * size);

	if (!ptr)
		return (NULL);

	while (index <= max)
	{
		arr[index] = min;
		index++;
		min++;
	}

	return (arr);
}
