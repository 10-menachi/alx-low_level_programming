#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	char *start = "Last digit of ";
	char *end;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
		end = "and is greater than 5\n";
	}
	else if (lastdigit == 0)
	{
		end = "and is 0\n";
	}
	else if (lastdigit < 6 && n != 0)
	{
		end = "and is less than 6 and not 0\n";
	}
	printf("%s %d is %d %s", start, n, lastdigit, end);
	return (0);
}
