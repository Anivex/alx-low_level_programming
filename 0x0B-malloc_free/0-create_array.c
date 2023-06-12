#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 *
 * @size: size's array
 * @c: character whitch repeat in each element in array.
 *
 * Return: a pointer to the array, Otherwise NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);
	if (arr != NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

}
