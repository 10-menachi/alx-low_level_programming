#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separates the numbers
 * @n: number of arguments
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
