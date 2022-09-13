#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting point of the program
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i\n", n);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i, ", n);
			n--;
			if (n == 98)
			{
				printf("%i", n);
			}
		}
		printf("\n");
	}
	else
	{
		while (n <= 98)
		{
			printf("%i", n);
			n++;
			if (n == 98)
			{
				printf("%i", 98);
			}
		}
		printf("\n");
	}
}
