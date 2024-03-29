#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content of the text
 *
 * Return: 1 on success and 0 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
		for (len = 0; *(text_content + len);)
			len++;
	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, len);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
