#include "main.h"

/**
 * get_endianness - gets endianness
 *
 * Return: 0 if big endian, i otherwise
 */

int get_endianness(void)
{
	int n = 1;
	char *e = (char *)&n;

	if (*e == 1)
		return (1);
	return (0);
}
