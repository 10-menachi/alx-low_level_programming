#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped
 * @n: given number
 * @m: number to flip to
 *
 * Return: number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, flip = 0;

	while (xor > 0)
	{
		flip += (xor & 1);
		xor >>= 1;
	}
	return (flip);
}
