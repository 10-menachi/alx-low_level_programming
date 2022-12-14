#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void (no return value)
 */
void rev_string(char *s)
{
	char *i = s;
	char arr[500];
	int count = 0;

	while (*s != '\0')
	{
		arr[count] = *s;
		s++;
		count++;
	}
	count = 0;
	while (s > i)
	{
		s--;
		*s = arr[count];
		count++;
	}
}
