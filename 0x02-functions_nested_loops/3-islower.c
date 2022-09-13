#include <stdio.h>
#include "main.h"
/**
 * _islower - Checks for a lowercase character
 * @c: the character to be checked
 *
 * Return: 0 if c is not lower. 1 if c is lower.
 */
int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
		return (1);
	}

	return (0);
}
