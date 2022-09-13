#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lower case
 *
 * Return: void (No return value)
 *
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
