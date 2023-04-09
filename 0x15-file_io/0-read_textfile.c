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
	char buffer[letters];
	ssize_t numbers;

	if (!filename)
		return (0);

	numbers = read(filename, buffer, letters);
	buffer[letters] = '\0';

	write(STDOUT_FILENO, buffer, letters);

	return (numbers);
}
