#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - creates an array of chars
 * @c: array characters
 * @size: size of memory allocated
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptrC;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptrC = malloc(sizeof(*ptrC) * size);

		if (ptrC)
		{
			i = 0;
			while (i <= size)
			{
				ptrC[i] = c;
				i++;
			}
		}
		else
		{
			return (NULL);
		}
	}
}
