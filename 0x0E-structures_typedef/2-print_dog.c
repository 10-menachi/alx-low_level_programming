#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", name);
		printf("Age: %d\n", age);
		printf("Owner: %s\n", owner);
	}
	else
	{
		printf("Name: (nil)\n");
		printf("Name: (nil)\n");
		printf("Name: (nil)\n");
	}
}
