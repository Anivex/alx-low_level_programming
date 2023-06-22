#include "dog.h"
#include <string.h>

/**
 * new_dog - Write a function that creates a new dog.
 *
 * @name: char pointer.
 * @age: number float.
 * @owner: char pointer.
 *
 * Return: struct dog or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	if (name)
	{

		dog->name = malloc(sizeof(char) * (strlen(name) + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		strcpy(dog->name, name);
	}

	dog->age = age;

	if (owner)
	{
		dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		strcpy(dog->owner, owner);
	}

	return (dog);
}
