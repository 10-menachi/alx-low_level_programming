#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to given number
 * @index: index to set value at
 *
 * Return: 1, -1 if process fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = index;

	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << i);
	return (1);
}
