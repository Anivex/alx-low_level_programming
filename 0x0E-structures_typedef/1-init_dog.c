#include "main.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: struct dog.
 * @name: dog's name.
 * @age: float.
 * @owner: char pointer.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
