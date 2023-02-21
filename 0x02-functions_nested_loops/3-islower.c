#include "main.h"

/**
 * _islower - checks if a character
 * is lower case
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase,
 * 0 otherwise
 */

int _islower(int c)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch == c)
		{
			return (1);
		}
	}
	return (0);
}
