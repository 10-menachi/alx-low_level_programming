#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int low = 'a';

	while (low <= 'z')
	{
		if (low == 'e' || low == 'q')
		{
			continue;
		}
		putchar(low);
		low++;
	}
	putchar(10);

	return (0);
}
