#include "main.h"

/**
 * print_to_98 - prints all natural
 * numbers from n to 98
 * @n: starting point
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		printf("%i", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
}
