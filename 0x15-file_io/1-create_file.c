#include "main.h"

/**
 * create_file - creates a text file and adds text to it
 * @filename: name of the file
 * @text_content: string to be added to the text file
 *
 * Return: 1 on success, 1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0; *(text_content + len);)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
