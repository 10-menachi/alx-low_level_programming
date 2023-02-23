#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: given character
 *
 * Return:
 * 1 if c is a digit
 * 0 otherwise
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
