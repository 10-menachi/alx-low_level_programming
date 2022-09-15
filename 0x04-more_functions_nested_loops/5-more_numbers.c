#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 followed by a new line
 *
 * Return: void (No return value)
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int ch = 0;

		while (ch <= 14)
		{
			if (ch >= 10)
			{
				_putchar(ch / 10 + '0');
			}
			_putchar(ch % 10 + '0');
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
