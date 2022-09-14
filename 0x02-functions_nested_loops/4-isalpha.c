#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter and 0 otherwise
 * @c: number to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
