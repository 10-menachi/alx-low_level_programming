#include "main.h"

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
		dprintf(STDERR_FILENO, "Error: Can't close file
				descriptor %d\n", fd);
		exit(100);
	}
}
