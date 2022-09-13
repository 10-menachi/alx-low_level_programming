#include <stdio.h>
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void (No return type)
 *
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
		n++;
	}
}
