#include "main.h"
/**
 * puts2 - prints every other character of a string
 * including the first character followed by a new line
 * @str: the string to be printed
 *
 * Return: void (no return value)
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
