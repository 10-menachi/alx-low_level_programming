#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: 1 if variables are not numbers,
 * 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("0\n");
	if (!isdigit(argv[1]) || !isdigit(argv[2]))
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1] + atoi(argv[2]);
	return (0);
}
