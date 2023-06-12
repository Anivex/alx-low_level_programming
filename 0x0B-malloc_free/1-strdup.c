#include "main.h"

/**
 * _strdup - function that duplicate a string that you given
 *
 * @str: the string.
 *
 * Return: a pointer to the duplicated string, Or NULL.
 */

char *_strdup(char *str)
{
	int len;
	char *s;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		s[len] = str[len];

	return (s);
}
