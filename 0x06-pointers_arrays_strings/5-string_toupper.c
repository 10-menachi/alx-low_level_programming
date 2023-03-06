#include "main.h"

/**
 * string_toupper - converts all lower case
 * strings to uppercase
 * @st: given string
 *
 * Return: pointer to destination
 */

char *string_toupper(char *st)
{
	char *ts = "";
	int i = 0;

	while (*st)
	{
		if (*st >= 'a' && *st <= 'z')
			*(ts + i) = *st - 32;
		else
			*(ts + i) = *st;
		st++;
		i++;
	}

	return (ts);
}