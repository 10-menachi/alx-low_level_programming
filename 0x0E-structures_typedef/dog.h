#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif