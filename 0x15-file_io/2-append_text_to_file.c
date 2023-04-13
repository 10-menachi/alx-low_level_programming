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
	int result;
	FILE *fptr;

	if (!filename || !text_content)
		return (-1);

	fptr = fopen(filename, "a");
	if (!fptr)
		return (-1);
	result = fputs(text_content, fptr);
	fclose(fptr);
	if (result == EOF)
		return (-1);
	return (1);
}
