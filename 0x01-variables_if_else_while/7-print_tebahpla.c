#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int low = 'z';

	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');

	return (0);
}
