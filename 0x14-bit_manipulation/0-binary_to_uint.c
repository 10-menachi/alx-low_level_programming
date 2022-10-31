#include "main.h"

/**
 * str_len - finds the length of a string
 * @s: given string
 *
 * Return: length of the string
 */

int str_len(const char *s)
{
	int length = 0, index;

	index = 0;
	while (*(s + index))
	{
		if (*(s + index) == '\0')
			break;
		length++;
		index++;
	}
	return (length);
}

/**
 * power - finds power of two given numbers
 * @i: base
 * @j: exponent
 *
 * Return: power of the two numbers
 */

int power(int i, int j)
{
	int p = 0;

	if (j == 0)
		return (1);
	p = i * power(i, j - 1);
	return (p);
}

/**
 * binary_to_uint - converts a binary number to an
 * unsigned integer
 * @b: pointer to string
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int length = str_len(b);
	unsigned int dec = 0, index = 0;

	if (b == NULL)
		return (0);
	while (length > 0)
	{
		--length;
		if (*(b + length) != '0' && *(b + length) != '1')
			return (0);
		dec += (*(b + length) - '0') * power(2, index);
		index++;
	}
	return (dec);
}
