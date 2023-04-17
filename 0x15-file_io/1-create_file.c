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
	int fd, len;
	ssize_t bytes;
	char *lastchar;

	if (!filename)
		return (-1);
	lastchar = text_content + strlen(text_content) - 1;
	while (lastchar >= text_content && isspace(*lastchar))
		lastchar--;
	*(lastchar + 1) = '\0';
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	bytes = write(fd, text_content, len);
	if (bytes == -1 || bytes != len)
		return (-1);

	return (1);
}
