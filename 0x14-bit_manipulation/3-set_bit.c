#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 on success -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = index;

	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << i);
	return (1);
}
