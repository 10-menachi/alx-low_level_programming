#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		printf("%s", arg);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
