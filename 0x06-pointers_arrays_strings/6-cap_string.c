#include "main.h"
/**
 * cap_string - capitalizes all words
 * in a string
 * @str: the input string
 *
 * Return: the pointer to the capitalized
 * string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int sep[] = {32, 9, 10, 44,
		59, 46, 33, 63, 34,
		40, 41, 123, 125};

	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	else
	{
		i++;
	}

	while (str[i] != '\0')
	{
		j = 0;

		while (j < 13)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
					j++;
				}
				else
				{
					break;
				}
			}
			j++;
		}
		i++;
	}

	return (str);
}
