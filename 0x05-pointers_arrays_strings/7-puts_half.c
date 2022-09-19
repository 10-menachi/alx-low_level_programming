#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string in check
 *
 * Return: void (no return type)
 */
void puts_half(char *str)
{
	int i, l = 0, n;

	while (str[i++])
	{
		l++;
	}
	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}
	i = n;
	while (i < l)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
