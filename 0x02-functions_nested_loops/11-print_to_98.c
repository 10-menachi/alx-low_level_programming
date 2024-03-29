#include "main.h"

/**
 * print_to_98 - prints all natural
 * numbers from n to 98
 * @n: starting point
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i != 98)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
	}
}
