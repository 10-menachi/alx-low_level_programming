#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 * @c: character to check
 * Return: 1 if c is upper, 0 otherwise.
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
