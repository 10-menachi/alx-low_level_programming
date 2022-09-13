#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char *str[] = {};
	int i = 0;
	size_t len = sizeof(str) / sizeof(str[0]);

	str[0] = '_';
	str[1] = 'p';
	str[2] = 'u';
	str[3] = 't';
	str[4] = 'c';
	str[5] = 'h';
	str[6] = 'a';
	str[7] = 'r';

	while (i < len)
		putchar(str[i]);
		i++;

	return (0);
}
