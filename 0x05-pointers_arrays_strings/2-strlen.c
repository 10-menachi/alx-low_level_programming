#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string whose length is to be determined
 *
 * Return: length (the length of the string)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s += 1;
		length += 1;
	}
	return (length);
}
