#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)\n");
		printf("Age: (nil)\n");
		printf("Owner: (nil)\n");
	}
}

