#include "main.h"

/**
 * sum_them_all - sums all of its parameters
 * @n: first parameter
 *
 * Return: sum of all of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i, sum = 0;

	va_start(arg_ptr, n);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(arg_ptr, int);
	va_end(arg_ptr);
	return (sum);
}
