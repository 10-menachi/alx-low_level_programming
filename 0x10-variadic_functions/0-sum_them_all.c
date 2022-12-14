#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - returns the sum of
 * all of its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	unsigned int j;
	va_list add;

	va_start(add, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		j = 0;
		while (j < n)
		{
			i = va_arg(add, int);
			sum += i;
			j++;
		}
		va_end(add);

		return (sum);
	}
}
