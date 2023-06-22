#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structures of dog
 *
 * @name: name of dog.
 * @age: dog's age
 * @owner: owner's name of dog.
 *
 * Description: just structures contains name, age, owner name of dog.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
