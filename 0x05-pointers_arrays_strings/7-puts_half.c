#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string in check
 *
 * Return: void (no return type)
 */
void puts_half(char *str)
{
	long int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		count /= 2;
	}
	else
	{
		count = (count - 1) / 2;
	}
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');

}
