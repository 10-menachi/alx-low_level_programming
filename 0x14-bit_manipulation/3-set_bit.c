#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to given number
 * @index: inde of the bit
 *
 * Return: 1, -1 if process fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = index;

	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << i);
	return (1);
}
