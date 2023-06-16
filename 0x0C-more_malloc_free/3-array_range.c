#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min number.
 * @max: max number.
 *
 * Return: apointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, c, *arr;

	if (min > max)
		return (NULL);

	c = (max - min) + 1;
	arr = malloc(sizeof(int) * c);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
		arr[i] = min++;

	return (arr);
}
