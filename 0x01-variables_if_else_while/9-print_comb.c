#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num <= 56)
	{
		putchar(num);
		putchar(44);
		putchar(32);
		num++;
	}
	putchar(57);

	return (0);
}
