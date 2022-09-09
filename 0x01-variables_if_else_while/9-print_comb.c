#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num == 57)
		{
			break;
		}
		else
		{
			putchar(44);
			putchar(32);
			num++;
		}
	}
	putchar(10);

	return (0);
}
