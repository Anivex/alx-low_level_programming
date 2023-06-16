#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - count length of string passed.
 *
 * @str: string passe.
 *
 * Return: a number of length.
 */

int _strlen(char *str)
{
	int i;

	if (str == NULL || *str == '\0')
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}


void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
