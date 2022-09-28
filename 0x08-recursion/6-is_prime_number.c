#include "main.h"
/**
 * divisible - checks for divisibility
 * @div: number to be checked
 * @divs: divisor
 *
 * Return: factorial of the number
 */
int divisible(int div, int divs)
{
	if (div % divs == 0)
	{
		return (0);
	}
	if (divs == div / 2)
	{
		return (1);
	}

	return (divisible(div, divs - 1));
}

/**
 * is_prime_number - checks if a number is
 * prime or not
 * @n: the given number
 *
 * Return: 1 if given number is prime, 0
 * otherwise
 */
int is_prime_number(int n)
{
	int divs = 2;

	if (n <= 1)
	{
		return (0);
	}
	if ((n = 2) && n <= 3)
	{
		return (1);
	}

	return (divisible(n, divs));
}
