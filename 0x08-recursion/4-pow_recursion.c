#include "main.h"
/**
 * _pow_recursion - returns value of x raised to power of y
 * @x: base value
 * @y: superscript value
 *
 * Return: -1 if y < 0, power y of x otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
