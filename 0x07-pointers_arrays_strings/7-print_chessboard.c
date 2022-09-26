#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: pointer to array
 *
 * Return: void (no return)
 */
void print_chessboard(char (*a)[8])
{
	int r, c;

	r = 0;

	while (a[r][7])
	{
		c = 0;

		while (c < 8)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\n');
		r++;
	}
}
