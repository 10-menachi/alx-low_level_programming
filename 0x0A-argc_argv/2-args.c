#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
