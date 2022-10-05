#include "stdio.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		i = 0;
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
