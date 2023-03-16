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
	int size = (max - min) + 1;
	int *arr, index = min;

	if (min > max)
		return (NULL);

	arr = calloc(sizeof(int), size);

	if (!arr)
		return (NULL);

	while (index <= max)
	{
		arr[index] = min;
		index++;
		min++;
	}

	return (arr);
}
