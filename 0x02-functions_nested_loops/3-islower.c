#include "main.h"

/**
 * _islower - check for lowercase character.
 *
 * @c: character.
 *
 * Return: 1 if c is lowercase , 0 otherwise.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
