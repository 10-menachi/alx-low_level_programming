#include "main.h"

/**
 * flip_bits - flips bits
 * @n: number
 * @m: number to flip to
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, f = 0;

	while (x > 0)
	{
		f += (x & 1);
		x >>= 1;
	}
	return (f);
}
