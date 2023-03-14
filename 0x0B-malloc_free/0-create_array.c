#include "main.h"

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: size of array
 * @c: given char
 *
 * Return: NULL if process fails, pointer to
 * created array otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	arr[0] = c;
	return (arr);
}
