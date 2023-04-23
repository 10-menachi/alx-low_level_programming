#include "main.h"

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to close
 * @filename: name of file
 **/
void close_file(int fd, const char *filename)
{
	if (close(fd) < 0)
	{
		print_error(filename, "Can't close fd");
		exit(100);
	}
}

