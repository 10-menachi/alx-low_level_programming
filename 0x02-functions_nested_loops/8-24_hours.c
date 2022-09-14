#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - prints every  minute of the day of jack bauer
 *
 * Return: void (No return type)
 *
 */
void jack_bauer(void)
{
	int hour = 0;

	while (hour <= 24)
	{
		int minute = 0;

		while (minute <= 60)
		{
			putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
			minute++;
		}
		hour++;
	}
}
