#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char temp;
	int a, len1 = 0, len2 = 0;

	while (s[len1] != '\0')
		len1++;
	len2 = len1 - 1;
	for (a = 0; a < len / 2; a++)
	{
		temp = s[a];
		s[a] = s[len2];
		s[len2--] = temp;
	}
}
