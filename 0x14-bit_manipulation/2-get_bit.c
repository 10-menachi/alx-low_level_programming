#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: the given number
 * @index: the given index
 *
 * Return: value of bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = index;

	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << i)) == 0)
		return (0);
	return (1);
}
