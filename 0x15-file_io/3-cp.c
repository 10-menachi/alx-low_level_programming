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
	int fr, to, re, wri;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fr = open(argv[1], O_RDONLY);
	re = read(fr, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wri = write(to, buffer, re);
		if (to == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		re = read(fr, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	free(buffer);
	close_des(fr);
	close_des(to);

	return (0);
}
