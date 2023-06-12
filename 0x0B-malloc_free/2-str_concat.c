#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: a pointer to a newly allocated space. otherwise NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, len;
	char *s;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	
	for (len1 = 0; s1[len1] != '\0' || s1 == NULL; len1++)
		;
	for (len2 = 0; s2[len2] != '\0' || s2 == NULL; len2++)
		;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	for (len = 0; len < len1; len++)
		s[len] = s1[len];

	for (len = 0; len < len2; len++)
		s[len1 + len] = s2[len];

	return (s);
}
