#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array to be reversed
 * @n: the number of elements
 *
 * Return: void (no return type)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;
	int temp;

	while (i < n - 1)
	{
		j = i + 1;

		while (j > 0)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
		i++;
	}
}
