#include "main.h"
/**
 * leet - encodes a string into 1337 encoding
 * @str: pointer to the string
 *
 * Return: pointer to the string
 */
char *leet(char *str)
{
	int strcnt;
	int leetcnt;
	char *letters = "aAeEoOtTlL";
	char *nums = "4433007711";

	strcnt = 0;
	while (str[strcnt] != '\0')
	{
		leetcnt = 0;
		while (leetcnt < 10)
		{
			if (letters[leetcnt] == str[strcnt])
			{
				str[strcnt] = nums[leetcnt];
			}
			leetcnt++;
		}
		strcnt++;
	}

	return (str);
}
