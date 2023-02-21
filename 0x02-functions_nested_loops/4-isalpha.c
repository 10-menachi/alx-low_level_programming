#include "main.h"

/**
 * _isalpha - checks if a character
 * is an alphabetical character
 * @c: the character to be checked
 *
 * Return: 1 if c is in the
 * alphabet, 0 otherwise
 *
 */

int _isalpha(int c)
{
	int ch;

	for (ch = 65; ch < 91; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}

	for (ch = 97; ch < 123; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
	return (0);
}
