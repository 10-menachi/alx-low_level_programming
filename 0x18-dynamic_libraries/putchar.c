#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @ch: character to be printed
 *
 * Return: value of character printed, -1 on failure
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
