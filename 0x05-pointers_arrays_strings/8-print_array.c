#include "main.h"
#include "stdio.h"
/**
 * print_array - prints n elements of
 * an array of integers
 * @a: the array
 * @n: the number of elements
 *
 * Return: void (no return type)
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i = 0;

		while (n > i)
		{
			printf("%d", a[i]);
			if (i == n + 1)
			{
				continue;
				i++;
			}
			else
			{
				printf(", ");
				i++;
			}
		}
	}
	printf("\n");
}
