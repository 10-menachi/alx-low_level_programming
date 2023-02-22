#include "main.h"

/**
 * jack_bauer - prints every minute of
 * the day of Jack Bauer
 */

void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min %  10) + '0');
			_putchar(10);
		}
	}
}
