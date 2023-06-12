#include "main_h"

/**
 * alloc_grid - function that make a 2 dimensional array of integer.
 *
 * @width: size of column in array.
 * @height: size of row in array.
 *
 * Return: a pointer to a 2 dimensional array. or null on failure.
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width < 1 || height < 1)
		return (NULL);

	*arr = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
		arr[i] = malloc(sizeof(int) * width);

	return (arr);
}
