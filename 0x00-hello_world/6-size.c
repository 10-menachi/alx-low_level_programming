#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %li byte(s)\n", sizeof(ch));
	printf("Size of an int: %li byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(li));
	printf("Size of a long long int: %li byte(s)\n", sizeof(lli));
	printf("Size of a float: %li byte(s)\n", sizeof(f));

	return (0);
}
