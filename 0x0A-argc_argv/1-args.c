#include "stdio.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to arguments array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
