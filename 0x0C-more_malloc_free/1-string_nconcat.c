#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: first string.
 * @s2: string concatenate with first string.
 * @n: number of bytes.
 *
 * Return: a pointer to a newly allocated space.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0 , len1, len2, j = 0;

	len1 = _strlen(s1);
	len2 = _strlen(s2) > n ? n : _strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	/* check if s1 is no empty and fill s with s1*/
	if (len1 > 0)
	{
		for (i = 0; i < len1; i++)
			s[i] = s1[i];
	}

	if (len2 > 0)
	{
		while (s2[j] != '\0' && j < len2)
		{
			s[len1 + j] = s2[j];
			j++;
		}
	}
	s[len1 + len2] = '\0';

	return (s);

}
