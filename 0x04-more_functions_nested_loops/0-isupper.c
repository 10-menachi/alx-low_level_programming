#include "main.h"

/**
 * _isupper - checks for an uppercase character
 * @c: given character
 *
 * Return:
 * 1 if c is uppercase
 * 0 otherwise
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
