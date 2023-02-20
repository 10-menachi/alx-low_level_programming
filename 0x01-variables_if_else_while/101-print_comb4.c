#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				if (i != '7')
				{
					putchar(44);
					putchar(32);
				}
			}
			}
		}
	}
	putchar(10);
	return (0);
}
