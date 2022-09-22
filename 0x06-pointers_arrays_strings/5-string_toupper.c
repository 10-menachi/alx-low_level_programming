#include "main.h"
/**
 * string_toupper - changes lowercase characters
 * to uppercase characters
 * @ptr - pointer tio string
 *
 * Return: the uppercase string
 */
char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 97 && ptr[i] <= 122)
		{
			ptr[i] = ptr[i] - 32;
		}
		else
		{
			i++;
		}
	}

	return (ptr);
}
