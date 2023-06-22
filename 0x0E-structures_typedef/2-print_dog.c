#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog
 *
 * @d: struct dog.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", (d->age));
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
