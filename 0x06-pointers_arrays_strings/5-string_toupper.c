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
	int i = 0;

	while (*(st + i))
	{
		if (*(st + i) >= 'a' && *(st + i) <= 'z')
		{
			*(st + i) -= 32;
		}
		i++;
	}
	return (st);
}
