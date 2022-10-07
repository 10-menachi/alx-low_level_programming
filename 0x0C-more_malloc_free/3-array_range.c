#include "main.h"
#include "stdlib.h"

/**
 * array_range - creates an array of integers
 * @min: first index
 * @max: last index
 *
 * Return: pointer to created arrau
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		size = max - min + 1;
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			arr[i] = min++;
			i++;
		}
	}
	return (arr);
}
