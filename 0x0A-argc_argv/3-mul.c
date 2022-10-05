#include "stdio.h"
#include "stdlib.h"
/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", i);

	return (0);
}
