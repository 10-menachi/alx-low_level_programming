#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - structure representation of a dog
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * @age: age of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
