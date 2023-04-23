#include "main.h"

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
