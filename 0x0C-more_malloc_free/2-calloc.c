#include "main.h"
#include "stdlib.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	char *ch;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		cal = malloc(size * nmemb);
		if (cal == NULL)
		{
			return (NULL);
		}
		else
		{
			ch = cal;
			i = 0;
			while (i < (size * nmemb))
			{
				ch[i] = '\0';
				i++;
			}
		}
	}
	return (cal);
}
