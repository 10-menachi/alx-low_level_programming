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
		if (low != 'e' || low != 'q')
		{
			putchar(low);
			low++;
		}
		else
		{
			continue;
		}
	}
	putchar(10);

	return (0);
}
