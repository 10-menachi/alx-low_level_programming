#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int nums = 48;
	int letters = 97;

	while (nums <= 57)
	{
		putchar(nums);
		nums++;
	}
	while (letters <= 102)
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
