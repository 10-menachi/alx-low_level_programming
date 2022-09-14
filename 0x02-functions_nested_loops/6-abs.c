#include "main.h"
/**
 * _abs - Returns the absolute of an integer
 * @n: the integer to be checked
 *
 * Return: absolute of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
