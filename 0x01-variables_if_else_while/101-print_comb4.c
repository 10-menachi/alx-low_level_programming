#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j)
				{
					if (j < k)
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
	}
	putchar(10);
	return (0);
}
