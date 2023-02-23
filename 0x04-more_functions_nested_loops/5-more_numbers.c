#include "main.h"

/**
 * more_numbers - prints numbers from 0
 * to 14 10 times
 */

void more_numbers(void)
{
	int i, ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = '0'; ch <= '14'; ch++)
		{
			if (ch > '9')
				_putchar(ch + '0');
			_putchar(ch);
		}
		_putchar('\n');
	}
}
