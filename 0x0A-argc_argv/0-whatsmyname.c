#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *str = argv[0];

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
	return (0);
}
