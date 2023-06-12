#include "main.h"

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
	int i, k,**arr = NULL;

	if (width < 1 || height < 1)
		return (NULL);

	*arr = (int **)malloc(sizeof(int) * height);
	if (*arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width));
		for (k = 0; k < width; k++)
			arr[i][k] = 0;
	}
	return (arr);
}
