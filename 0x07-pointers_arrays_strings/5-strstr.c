#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: string to be located
 * @haystack: string to search in
 *
 * Return: pointer to the beginning
 * of the substring or null if not
 * found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	else
	{
		while (*haystack)
		{
			i = 0;

			if (*(haystack + i) == *(needle + i))
			{
				if (*(needle + (i + 1)) == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}

	return ('\0');
}
