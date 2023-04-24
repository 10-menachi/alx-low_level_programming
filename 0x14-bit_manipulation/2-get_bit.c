#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: given number
 * @index: given index
 *
 * Return: value of bit at given index, -1 if process fails
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
