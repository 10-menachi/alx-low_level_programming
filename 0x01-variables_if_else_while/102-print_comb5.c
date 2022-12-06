#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (((i + j < k + l) && i < k) || i < l)
					{
						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);

						if (i + j + k + l == 227 && i == 57)
						{}
						else
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
