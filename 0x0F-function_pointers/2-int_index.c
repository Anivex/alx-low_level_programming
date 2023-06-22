#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: array of integer.
 * @size: size of array.
 * @cmp: pointer to the function
 *
 * Return: the index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
