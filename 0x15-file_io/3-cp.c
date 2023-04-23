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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
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

/**
 * create_buffer - creates a buffer and allocates space
 * @filename: file to be copied to
 *
 * Return: pointer to allocated memory
 */

char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO,
				"Error: Cannot write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_des - close file descriptors
 * @fd: file descriptor
 */

void close_des(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}
