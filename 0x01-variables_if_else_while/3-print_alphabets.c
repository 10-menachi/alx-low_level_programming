#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int low = 'a';
	int upp = 'A';

	while (low <= 'z')
	{
		putchar(low);
	}
	while (upp <= 'Z')
	{
		putchar(upp);
	}
	putchar(10);

	return (0);
}
