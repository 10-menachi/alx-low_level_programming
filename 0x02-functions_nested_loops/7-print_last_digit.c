#include "main.h"
/**
 * print_last_digit - returns the last digit of a number
 * @n: the number whose last digit is needed
 *
 * Return: the last digit of the parameter
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
