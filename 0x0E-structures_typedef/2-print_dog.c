#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (d->name)
	{
		printf("Name: %s", d->name);
	}
	else
	{
		printf("Name: (nil)");
	}
	if (d->age)
	{
		printf("Age: %f", d->age);
	}
	else
	{
		printf("Age: (nil)");
	}
	if (d->owner)
	{
		printf("Name: %s", d->owner);
	}
	else
	{
		printf("Name: (nil)");
	}
}
