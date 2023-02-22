#include "main.h"

/**
 * print_last_digit - prints the last
 * digit of a given number
 * @n: the given number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int abs = _abs(n);

	return (abs % 10);
}
