#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%i\n", argc - 1);
	return (0);
}
