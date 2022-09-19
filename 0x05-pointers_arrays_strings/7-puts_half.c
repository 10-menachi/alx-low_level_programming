#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string in check
 *
 * Return: void (no return type)
 */
void puts_half(char *str)
{
	int count, half_count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		half_count = count / 2;
	}
	else
	{
		half_count = (count - 1) / 2;
	}
	while (str[half_count] != '\0')
	{
		_putchar(str[half_count]);
		count++;
	}
	_putchar('\n');

}
