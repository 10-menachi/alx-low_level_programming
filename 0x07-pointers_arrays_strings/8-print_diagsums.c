#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of
 * the two diagonals of a square matrix
 * of integers
 * @a: array
 * @size: size of array
 *
 * Return: void (no return)
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	while (i < size)
	{
		s1 += a[i];
		a += size;
		i++;
	}

	a -= size;

	while (i < size)
	{
		s2 += a[i];
		a -= size;
		i++;
	}

	printf("%d, %d\n", s1, s2);
}
