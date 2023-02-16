#include "string.h"
#include "unistd.h"

/**
 * main - entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, s, strlen(s));
	return (0);
}
