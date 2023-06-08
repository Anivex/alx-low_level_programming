#include "main.h"

/**
 * _strlen_recursion - function that compute the lenght of a string.
 *
 * @s: string.
 *
 * Return: the length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(++s));
}
