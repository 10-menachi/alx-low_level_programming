#include <stdio.h>
void print_alphabet(void);
/**
 * main - Entry Point
 *
 * Return: 0 (Always Success)
 *
 */
int main(void)
{
	print_alphabet();
}
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
}
