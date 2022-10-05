#include "stdlib.h"
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array
 * @width: number of rows
 * @height: number of columns
 *
 * Return: pointer to 2 dimensional
 * array, NULL if process fails
 */
int **alloc_grid(int width, int height)
{
	int **arr, h1, w1;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	h1 = 0;
	while (h1 < height)
	{
		arr[h1] = malloc(sizeof(int) * width);
		if (arr[h1] == NULL)
		{
			while (h1 >= 0)
			{
				free(arr[h1]);
				h1--;
			}
			free(arr);
			return (NULL);
		}
		h1++;
	}
	while (h1 < height)
	{
		w1 = 0;
		while (w1 < width)
		{
			arr[h1][w1] = 0;
		}
	}
	return (arr);
}
