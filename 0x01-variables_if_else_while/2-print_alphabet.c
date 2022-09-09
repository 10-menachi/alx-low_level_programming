#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);

	return (0);
}
