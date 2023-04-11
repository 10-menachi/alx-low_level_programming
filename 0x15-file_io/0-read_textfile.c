#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: given file
 * @letters: number of letters it should print
 *
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t numbers;
	int fd;

	buffer = malloc(letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	if (!filename)
		return (0);
	numbers = read(fd, buffer, letters);
	if (numbers == -1)
	{
		free(buffer);
		close(fd);
		perror("Error Reading File");
		exit(EXIT_FAILURE);
	}
	buffer[numbers] = '\0';
	write(STDOUT_FILENO, buffer, numbers);
	free(buffer);
	close(fd);
	return (numbers);
}
