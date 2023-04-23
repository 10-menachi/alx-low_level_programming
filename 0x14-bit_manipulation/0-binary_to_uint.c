#include "main.h"

/**
 * str_len - Finds length of string.
 * @str: String of which length is to be found.
 *
 * Return: The length of the string;
 */
int str_len(const char *str)
{
	int len = 0, index;

	for (index = 0; *(str + index); index++)
	{
		if (*(str + index) == '\0')
			break;
		len++;
	}
	return (len);
}

/**
 * pow - Finds Power @y of @x.
 * @x: Base number.
 * @y: Exponent.
 *
 * Return: x raised to power y.
 */
int my_pow(int x, int y)
{
	int p = 0;

	if (y == 0)
		return (1);
	p = x * my_pow(x, y - 1);
	return (p);
}

/**
 * binary_to_uint - Converts binary number to unsigned int.
 *
 * @b: Pointer to string of 0 and 1 chars.
 *
 * Return: The converted number, 0 if b is NULL.
 *	   0 if there's one or more chars in b != 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = str_len(b);
	unsigned int d = 0, index = 0;

	if (!b)
		return (0);

	while (len > 0)
	{
		--len;
		if (*(b + len) != '0' && *(b + len) != '1')
		{
			return (0);
		}
		d += (*(b + len) - '0') * my_pow(2, index);
		index++;
	}
	return (d);
}
