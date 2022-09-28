#include "main.h"
/**
 * fact - finds the factorial of a number
 * @num: the given number
 *
 * Return: factorial of the number
 */
int fact(int num)
{
	if (num == 0)
	{
		return (1);
	}
	else
	{
		return (num * fact(num - 1));
	}
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
	if (n == 1)
	{
		return (0)
	}
	else
	{
		n -= 1;
		the_fact = fact(n);
		if ((the_fact + 1) % n == 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
