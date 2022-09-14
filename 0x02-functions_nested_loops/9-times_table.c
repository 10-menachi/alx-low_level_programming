#include <stdio.h>
#include "main.h"
/**
 * times_table - prints all the multiples of 9
 *
 * Return: void (No return value)
 */
void times_table(void)
{
	int i = 0, mtp;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			mtp = i * j;
			if (j == 0)
			{
				putchar(mtp + '0');
				j++;
			}
			else if (mtp >= 10)
			{
				putchar(' ');
				putchar(mtp / 10 + '0');
				putchar(mtp % 10 + '0');
				j++;
			}
			else
			{
				putchar(' ');
				putchar(' ');
				putchar(mtp + '0');
				j++;
			}
			if (j != 9)
			{
				putchar(',');
				j++;
			}
		}
		putchar('\n');
		i++;
	}
}
