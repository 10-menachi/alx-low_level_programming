#include "main.h"
/**
 * _sqrt - finds the square root of a number
 * @sq: square
 * @tst: root test
 *
 * Return: -1 if no root founnd, returns
 * the square root if found
 */
int _sqrt(int sq, int tst)
{
	if ((tst * tst) == sq)
	{
		return (tst);
	}
	if (tst == sq / 2)
	{
		return (-1);
	}

	return (_sqrt(sq, tst + 1));
}

/**
 * _sqrt_recursion - returns the root of a number
 * @n: the square
 *
 * Return: -1 if no root found, returns the square
 * root if found
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (_sqrt(n, i));
}
