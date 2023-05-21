#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 *
 * @c: character.
 *
 * Return: 1 if is a letter lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
