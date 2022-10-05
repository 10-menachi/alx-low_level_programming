#include "stdio.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer to arguments array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
