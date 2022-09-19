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
	size_t len = sizeof(str);
	int i = 0;

	while (i < len)
	{
		if (i == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			continue;
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
