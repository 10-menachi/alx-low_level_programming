#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 0 if 2 arguments provided,
 * 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
